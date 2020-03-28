import FWCore.ParameterSet.Config as cms
from Configuration.StandardSequences.Eras import eras

process = cms.Process("ULSplit", eras.ctpps_2016)

# minimum of logs
process.MessageLogger = cms.Service("MessageLogger",
  statistics = cms.untracked.vstring(),
  destinations = cms.untracked.vstring('cout'),
  cout = cms.untracked.PSet(
    threshold = cms.untracked.string('WARNING')
  )
)

# data source
process.source = cms.Source("PoolSource",
  fileNames = cms.untracked.vstring(),
  skipBadFiles = cms.untracked.bool(True),
  duplicateCheckMode = cms.untracked.string("checkAllFilesOpened"),
  dropDescendantsOfDroppedBranches = cms.untracked.bool(False),

  inputCommands = cms.untracked.vstring(
    'drop *',
    'keep TotemRPRecHitedmDetSetVector_*_*_*',
    'keep CTPPSPixelRecHitedmDetSetVector_*_*_*',
    'keep CTPPSDiamondDigiedmDetSetVector_*_*_*',

    'keep CTPPSLocalTrackLites_*_*_*',

    'keep recoForwardProtons_*_*_*',
  )
)
$input_file_commands

#process.maxEvents = cms.untracked.PSet(
#  input = cms.untracked.int32(1000)
#)

# apply JSON file
import FWCore.PythonUtilities.LumiList as LumiList
import FWCore.ParameterSet.Types as CfgTypes
process.source.lumisToProcess = CfgTypes.untracked(CfgTypes.VLuminosityBlockRange())
JSONfile = '$json_file'
myLumis = LumiList.LumiList(filename = JSONfile).getCMSSWString().split(',')
process.source.lumisToProcess.extend(myLumis)

# define global tag
process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, "106X_dataRun2_v26")

# filter
process.xangleBetaStarFilter = cms.EDFilter("XangleBetaStarFilter",
  lhcInfoLabel = cms.string(""),

  xangle_min = cms.double($xangle_min),
  xangle_max = cms.double($xangle_max),

  beta_star_min = cms.double($beta_min),
  beta_star_max = cms.double($beta_max)
)

process.path_filter = cms.Path(
  process.xangleBetaStarFilter
)

# output configuration
process.output = cms.OutputModule("PoolOutputModule",
  fileName = cms.untracked.string("$output_file"),

  SelectEvents = cms.untracked.PSet(
    SelectEvents = cms.vstring('path_filter')
  ),

  outputCommands = cms.untracked.vstring(
    "drop *",
    'keep TotemRPRecHitedmDetSetVector_*_*_*',
    'keep CTPPSPixelRecHitedmDetSetVector_*_*_*',
    'keep CTPPSDiamondDigiedmDetSetVector_*_*_*',
    'keep CTPPSDiamondRecHitedmDetSetVector_*_*_*',

    'keep CTPPSLocalTrackLites_*_*_*',

    'keep recoForwardProtons_*_*_*'
  )
)

process.outpath = cms.EndPath(process.output)
