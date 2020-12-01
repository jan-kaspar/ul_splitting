import os
from pathlib2 import Path

dir_template = "/eos/cms/store/group/phys_pps/reconstruction/<year>/physics_runs/version-UL-2"

def GetEra(fill_str):
    fill = int(fill_str)

    if fill >= 4947 and fill <= 5030:
        return "2016B"
    if fill >= 5038 and fill <= 5071:
        return "2016C"
    if fill >= 5199 and fill <= 5288:
        return "2016G"
    if fill >= 5393 and fill <= 5451:
        return "2016H"

    if fill >= 5839 and fill <= 5960:
        return "2017B"
    if fill >= 5962 and fill <= 6147:
        return "2017C"
    if fill >= 6148 and fill <= 6193:
        return "2017D"
    if fill >= 6238 and fill <= 6291:
        return "2017E"
    if fill >= 6297 and fill <= 6371:
        return "2017F"

    if fill >= 6615 and fill <= 6733:
        return "2018A"
    if fill >= 6737 and fill <= 6892:
        return "2018B"
    if fill >= 6901 and fill <= 6961:
        return "2018C"
    if fill >= 6998 and fill <= 7334:
        return "2018D"

    return "UnknownEra"

class EraData:
    def __init__(self):
        self.n_total = 0
        self.n_present = 0

def MakeOneCheck(year, datasets):
    dir = dir_template.replace("<year>", year)

    print("* {}".format(dir))

    files = []
    stream = os.popen("ls " + dir + "|grep root|while read l; do echo ${l%_*}; done|sort|uniq")
    for line in stream.readlines():
        line = line.strip()
        files.append(line)

    summary = EraData()

    for dataset in datasets:
        results = {}

        for f in files:
            fill = f[4 : f.find("_")]
            era = GetEra(fill)

            if era not in results:
                results[era] = EraData()
            r = results[era]

            r.n_total += 1
            summary.n_total += 1

            tf = Path(dir + "/" + f + "_" + dataset + ".root")
            if tf.is_file():
                r.n_present += 1
                summary.n_present += 1

        print("  - {}".format(dataset))
        for k, r in sorted(results.iteritems()):
            print("    {} : {:.1f} %".format(k, float(r.n_present) / r.n_total * 100))

    print("  - SUMMARY: {:.1f} %".format(float(summary.n_present) / summary.n_total * 100))

#----------------------------------------------------------------------------------------------------

MakeOneCheck("2016", [
    "DoubleEG",
    "JetHT",
    "SingleElectron",
    "SingleMuon",
    "ZeroBias"
])

#----------------------------------------------------------------------------------------------------

MakeOneCheck("2017", [
    "DoubleEG",
    "MET",
    "SingleElectron",
    "SingleMuon",
    "ZeroBias"
])

#----------------------------------------------------------------------------------------------------

MakeOneCheck("2018", [
    "BTagMu",
    "Charmonium",
    "DoubleMuon",
    "EGamma",
    "JetHT",
    "MET",
    "MuOnia",
    "MuonEG",
    "SingleMuon",
    "Tau",
    "ZeroBias"
])
