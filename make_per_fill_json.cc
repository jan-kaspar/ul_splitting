#include <vector>
#include <map>
#include <set>

using namespace std;

//----------------------------------------------------------------------------------------------------

std::map<unsigned int, std::vector<unsigned int>> fills_runs;

void InitFillsRuns()
{
	// 2016
	// TODO

	// 2017 pre-TS2
	fills_runs[5839] = {297046, 297047, 297048, 297049, 297050};
	fills_runs[5840] = {297056, 297057};
	fills_runs[5842] = {297099, 297100, 297101};
	fills_runs[5845] = {297113, 297114};
	fills_runs[5848] = {297168, 297169, 297170, 297171, 297172, 297173, 297174, 297175, 297176, 297177, 297178, 297179, 297180, 297181, 297182};
	fills_runs[5849] = {297211, 297215, 297218, 297219, 297224, 297225, 297227, 297228, 297229};
	fills_runs[5856] = {297281, 297282, 297283, 297284, 297285, 297286, 297287, 297288, 297289, 297290, 297291, 297292, 297293, 297296, 297308, 297316};
	fills_runs[5862] = {297359};
	fills_runs[5864] = {297411};
	fills_runs[5865] = {297424, 297425, 297426, 297427, 297428, 297429, 297430, 297431, 297432, 297433, 297434, 297435};
	fills_runs[5868] = {297467, 297468, 297469};
	fills_runs[5870] = {297474};
	fills_runs[5872] = {297483, 297484, 297485, 297486, 297487, 297488};
	fills_runs[5873] = {297494, 297495, 297496, 297497, 297498, 297499, 297500, 297501, 297502, 297503, 297504, 297505};
	fills_runs[5876] = {297557, 297558, 297559, 297560, 297562, 297563};
	fills_runs[5878] = {297598, 297599, 297603, 297604, 297605, 297606};
	fills_runs[5880] = {297620};
	fills_runs[5882] = {297656, 297657, 297658, 297659, 297660, 297661, 297662, 297663, 297664, 297665, 297666};
	fills_runs[5883] = {297670, 297671, 297672, 297673, 297674, 297675, 297678};
	fills_runs[5885] = {297713, 297714, 297715};
	fills_runs[5887] = {297722, 297723};
	fills_runs[5919] = {298653};
	fills_runs[5920] = {298673, 298674, 298678, 298679, 298681};
	fills_runs[5930] = {298809};
	fills_runs[5934] = {298853, 298854, 298855};
	fills_runs[5942] = {298996, 298997, 298998, 299000};
	fills_runs[5946] = {299042};
	fills_runs[5950] = {299061, 299062, 299064, 299065, 299067};
	fills_runs[5952] = {299096};
	fills_runs[5954] = {299149};
	fills_runs[5958] = {299178, 299180, 299183, 299184, 299185};
	fills_runs[5960] = {299316, 299317, 299318, 299322, 299324, 299325, 299326, 299327, 299329};
	fills_runs[5962] = {299368, 299369, 299370};
	fills_runs[5963] = {299380, 299381};
	fills_runs[5965] = {299393, 299394, 299395, 299396};
	fills_runs[5966] = {299420};
	fills_runs[5971] = {299443};
	fills_runs[5974] = {299450};
	fills_runs[5976] = {299477, 299478, 299479, 299480, 299481};
	fills_runs[5979] = {299592, 299593, 299594, 299595, 299597, 299598};
	fills_runs[5980] = {299614, 299616, 299617};
	fills_runs[5984] = {299649, 299650};
	fills_runs[6012] = {299996};
	fills_runs[6015] = {300007};
	fills_runs[6016] = {300015, 300016, 300017, 300018, 300019, 300027, 300029, 300043, 300049, 300050};
	fills_runs[6018] = {300079};
	fills_runs[6019] = {300087, 300088};
	fills_runs[6020] = {300104, 300105, 300106, 300107};
	fills_runs[6021] = {300117};
	fills_runs[6024] = {300122, 300123, 300124};
	fills_runs[6026] = {300155, 300156, 300157};
	fills_runs[6030] = {300226};
	fills_runs[6031] = {300233, 300234, 300235, 300236, 300237, 300238, 300239, 300240, 300241};
	fills_runs[6035] = {300280, 300281, 300282, 300283, 300284};
	fills_runs[6041] = {300364, 300365, 300366, 300367, 300368, 300369, 300370, 300371, 300372, 300373, 300374, 300375};
	fills_runs[6044] = {300389, 300390, 300391, 300392, 300393, 300394, 300395, 300396, 300397, 300398, 300399, 300400, 300401};
	fills_runs[6046] = {300459, 300461, 300462, 300463, 300464, 300466, 300467};
	fills_runs[6048] = {300497, 300498, 300499, 300500};
	fills_runs[6050] = {300514, 300515, 300516, 300517};
	fills_runs[6052] = {300538, 300539, 300545, 300548, 300551, 300552, 300558, 300560, 300561};
	fills_runs[6053] = {300574, 300575, 300576};
	fills_runs[6054] = {300631, 300632, 300633, 300635, 300636};
	fills_runs[6055] = {300673, 300674, 300675, 300676};
	fills_runs[6057] = {300742};
	fills_runs[6060] = {300777, 300780, 300781, 300785};
	fills_runs[6061] = {300806, 300811, 300812, 300816, 300817};
	fills_runs[6072] = {301046};
	fills_runs[6079] = {301086, 301087, 301088};
	fills_runs[6082] = {301141, 301142};
	fills_runs[6084] = {301161, 301165};
	fills_runs[6086] = {301179, 301180, 301183};
	fills_runs[6089] = {301281, 301283};
	fills_runs[6090] = {301298};
	fills_runs[6091] = {301323};
	fills_runs[6093] = {301330};
	fills_runs[6094] = {301359};
	fills_runs[6096] = {301383, 301384};
	fills_runs[6097] = {301391, 301392, 301393, 301394, 301395, 301396, 301397, 301398, 301399};
	fills_runs[6098] = {301417};
	fills_runs[6104] = {301447, 301448, 301449, 301450};
	fills_runs[6105] = {301461};
	fills_runs[6106] = {301472, 301473, 301474, 301475, 301476, 301480};
	fills_runs[6110] = {301519, 301521, 301524, 301525, 301526, 301528, 301529, 301530, 301531, 301532};
	fills_runs[6114] = {301567};
	fills_runs[6116] = {301627};
	fills_runs[6119] = {301664, 301665};
	fills_runs[6123] = {301694};
	fills_runs[6136] = {301912, 301913, 301914};
	fills_runs[6138] = {301941};
	fills_runs[6140] = {301959, 301960};
	fills_runs[6141] = {301969, 301970};
	fills_runs[6142] = {301984, 301985, 301986, 301987};
	fills_runs[6143] = {301997, 301998};
	fills_runs[6146] = {302019};
	fills_runs[6147] = {302026, 302027, 302029, 302030, 302031, 302032, 302033, 302034, 302036, 302037, 302038, 302040, 302041, 302042, 302043, 302044};
	fills_runs[6152] = {302131, 302132};
	fills_runs[6155] = {302159};
	fills_runs[6156] = {302163, 302165, 302166};
	fills_runs[6158] = {302225};
	fills_runs[6159] = {302228, 302229};
	fills_runs[6160] = {302239, 302240};
	fills_runs[6161] = {302262, 302263};
	fills_runs[6165] = {302277, 302278, 302279, 302280};
	fills_runs[6167] = {302322};
	fills_runs[6168] = {302328};
	fills_runs[6169] = {302337, 302342, 302343, 302344, 302349, 302350};
	fills_runs[6170] = {302388};
	fills_runs[6171] = {302392, 302393};
	fills_runs[6174] = {302448};
	fills_runs[6175] = {302472, 302473, 302474, 302475, 302476};
	fills_runs[6176] = {302479};
	fills_runs[6177] = {302484, 302485, 302486, 302487, 302488, 302489, 302490, 302491, 302492, 302493, 302494};
	fills_runs[6179] = {302509};
	fills_runs[6180] = {302513};
	fills_runs[6182] = {302522, 302523, 302524, 302525, 302526};
	fills_runs[6185] = {302548, 302549, 302550, 302551, 302552, 302553, 302554, 302555};
	fills_runs[6186] = {302563, 302564, 302565, 302566, 302567, 302569, 302570, 302571, 302572, 302573};
	fills_runs[6189] = {302596, 302597};
	fills_runs[6191] = {302634, 302635};
	fills_runs[6192] = {302646, 302649, 302650, 302651, 302654};
	fills_runs[6193] = {302660, 302661, 302662, 302663};

	// 2017 post-TS2
	fills_runs[6230] = {303719, 303728, 303729};
	fills_runs[6236] = {303790, 303793, 303794, 303795};
	fills_runs[6238] = {303817, 303818, 303819};
	fills_runs[6239] = {303824, 303825};
	fills_runs[6240] = {303832};
	fills_runs[6241] = {303838};
	fills_runs[6243] = {303885};
	fills_runs[6245] = {303948, 303989};
	fills_runs[6247] = {303998, 303999, 304000};
	fills_runs[6252] = {304062};
	fills_runs[6253] = {304119, 304120, 304125};
	fills_runs[6255] = {304144};
	fills_runs[6258] = {304158};
	fills_runs[6259] = {304169, 304170};
	fills_runs[6261] = {304196, 304197, 304198, 304199, 304200};
	fills_runs[6262] = {304204};
	fills_runs[6263] = {304209};
	fills_runs[6266] = {304291, 304292};
	fills_runs[6268] = {304333};
	fills_runs[6269] = {304354};
	fills_runs[6271] = {304366};
	fills_runs[6272] = {304446, 304447, 304448, 304449, 304451, 304452};
	fills_runs[6275] = {304505, 304506, 304507, 304508};
	fills_runs[6276] = {304562};
	fills_runs[6278] = {304616};
	fills_runs[6279] = {304625, 304626};
	fills_runs[6283] = {304654, 304655};
	fills_runs[6284] = {304661, 304662, 304663};
	fills_runs[6285] = {304671, 304672};
	fills_runs[6287] = {304737, 304738, 304739, 304740};
	fills_runs[6288] = {304776, 304777, 304778};
	fills_runs[6291] = {304797};
	fills_runs[6294] = {304880};
	fills_runs[6295] = {304899, 304906, 304907};
	fills_runs[6297] = {305040, 305043, 305044, 305045, 305046};
	fills_runs[6298] = {305059, 305060, 305061, 305062, 305063, 305064};
	fills_runs[6300] = {305081};
	fills_runs[6303] = {305112, 305113, 305114};
	fills_runs[6304] = {305178, 305179, 305180, 305181, 305182, 305183, 305184, 305185, 305186, 305187, 305188};
	fills_runs[6305] = {305202, 305203, 305204};
	fills_runs[6306] = {305207, 305208};
	fills_runs[6307] = {305234, 305235, 305236, 305237};
	fills_runs[6308] = {305247, 305248, 305249, 305250, 305252};
	fills_runs[6309] = {305282};
	fills_runs[6311] = {305310, 305311, 305312, 305313, 305314};
	fills_runs[6312] = {305336, 305338, 305341, 305349, 305350, 305351};
	fills_runs[6313] = {305358};
	fills_runs[6314] = {305364, 305365, 305366, 305367};
	fills_runs[6315] = {305376, 305377};
	fills_runs[6317] = {305405, 305406};
	fills_runs[6318] = {305440, 305441};
	fills_runs[6323] = {305516, 305517, 305518};
	fills_runs[6324] = {305586, 305588, 305589, 305590};
	fills_runs[6325] = {305636};
	fills_runs[6336] = {305745, 305746, 305747, 305748, 305749, 305750, 305751, 305752, 305753, 305754, 305755, 305756, 305757, 305758};
	fills_runs[6337] = {305766};
	fills_runs[6341] = {305809};
	fills_runs[6343] = {305814};
	fills_runs[6344] = {305821};
	fills_runs[6346] = {305832, 305833, 305839, 305840, 305841, 305842};
	fills_runs[6347] = {305862};
	fills_runs[6348] = {305898};
	fills_runs[6349] = {305902};
	fills_runs[6351] = {305965, 305966, 305967};
	fills_runs[6355] = {306029, 306030};
	fills_runs[6356] = {306036, 306037, 306038, 306040, 306041, 306042, 306048, 306049, 306051};
	fills_runs[6358] = {306091, 306092, 306093, 306094, 306095, 306096};
	fills_runs[6360] = {306121, 306122, 306125, 306126};
	fills_runs[6362] = {306134, 306135, 306137, 306138, 306139};
	fills_runs[6364] = {306153, 306154, 306155, 306168, 306169, 306170, 306171};
	fills_runs[6370] = {306416, 306417, 306418, 306419, 306420, 306421, 306422, 306423, 306425, 306432};
	fills_runs[6371] = {306454, 306455, 306456, 306457, 306458, 306459, 306460, 306461, 306462};

	fills_runs[6402] = {306896, 306897};
	fills_runs[6404] = {306926, 306929};
	fills_runs[6405] = {306936};
	fills_runs[6411] = {307014, 307015, 307016, 307017};
	fills_runs[6413] = {307042, 307044, 307045, 307046, 307047, 307048, 307049, 307050, 307051, 307052, 307053, 307054, 307055, 307062, 307063};
	fills_runs[6415] = {307073, 307075, 307076};
	fills_runs[6417] = {307082};

	// 2018
	fills_runs[6579] = {314747, 314748, 314750, 314751, 314752, 314753, 314754, 314755, 314756, 314757, 314758, 314759, 314764};
	fills_runs[6583] = {314810, 314811};
	fills_runs[6584] = {314816};
	fills_runs[6592] = {314848};
	fills_runs[6594] = {314859, 314860, 314861, 314863, 314864, 314865, 314867, 314870, 314872, 314873, 314874, 314875, 314876, 314877, 314878};
	fills_runs[6595] = {314890};
	fills_runs[6611] = {315104, 315105, 315106, 315107, 315108, 315111, 315112};
	fills_runs[6612] = {315150, 315151, 315154, 315157, 315159, 315163, 315165, 315166, 315167, 315168, 315171, 315172};
	fills_runs[6613] = {315179, 315180};
	fills_runs[6614] = {315187, 315188, 315189, 315190};
	fills_runs[6615] = {315242, 315243, 315244, 315246, 315247, 315248, 315249, 315250, 315252, 315255, 315257, 315258, 315259};
	fills_runs[6616] = {315264, 315265, 315267, 315268, 315270, 315273};
	fills_runs[6617] = {315322};
	fills_runs[6618] = {315339};
	fills_runs[6620] = {315357};
	fills_runs[6621] = {315361, 315363, 315365, 315366};
	fills_runs[6624] = {315420};
	fills_runs[6628] = {315488, 315489, 315490};
	fills_runs[6629] = {315506, 315509, 315510, 315512};
	fills_runs[6633] = {315543};
	fills_runs[6636] = {315555, 315556, 315557};
	fills_runs[6638] = {315640, 315641, 315642, 315644, 315645, 315646, 315647, 315648};
	fills_runs[6639] = {315689, 315690};
	fills_runs[6640] = {315702, 315703, 315704, 315705};
	fills_runs[6641] = {315713};
	fills_runs[6642] = {315721};
	fills_runs[6643] = {315741};
	fills_runs[6645] = {315764};
	fills_runs[6646] = {315770};
	fills_runs[6648] = {315784, 315785, 315786, 315787, 315788, 315789, 315790};
	fills_runs[6650] = {315800, 315801};
	fills_runs[6654] = {315840};
	fills_runs[6659] = {315973, 315974};
	fills_runs[6662] = {316058, 316059, 316060, 316061, 316062};
	fills_runs[6663] = {316082};
	fills_runs[6666] = {316109, 316110, 316111, 316112, 316113, 316114};
	fills_runs[6672] = {316151, 316153};
	fills_runs[6674] = {316186, 316187};
	fills_runs[6675] = {316199, 316200, 316201, 316202};
	fills_runs[6677] = {316216, 316217, 316218, 316219};
	fills_runs[6681] = {316239, 316240, 316241};
	fills_runs[6683] = {316271};
	fills_runs[6688] = {316361, 316362, 316363};
	fills_runs[6690] = {316377, 316378, 316379, 316380};
	fills_runs[6692] = {316441};
	fills_runs[6693] = {316455, 316456, 316457};
	fills_runs[6694] = {316469, 316470, 316472};
	fills_runs[6696] = {316505};
	fills_runs[6699] = {316559};
	fills_runs[6700] = {316569};
	fills_runs[6702] = {316590};
	fills_runs[6706] = {316613, 316614, 316615};
	fills_runs[6709] = {316664, 316665, 316666, 316667};
	fills_runs[6710] = {316700, 316701, 316702};
	fills_runs[6711] = {316715, 316716, 316717, 316718, 316719, 316720, 316721, 316722, 316723};
	fills_runs[6712] = {316758};
	fills_runs[6714] = {316766};
	fills_runs[6719] = {316876, 316877, 316878, 316879};
	fills_runs[6724] = {316928};
	fills_runs[6729] = {316944};
	fills_runs[6731] = {316985};
	fills_runs[6733] = {316993, 316994, 316995};
	fills_runs[6737] = {317080};
	fills_runs[6738] = {317087, 317088, 317089};
	fills_runs[6740] = {317170};
	fills_runs[6741] = {317182};
	fills_runs[6744] = {317212, 317213};
	fills_runs[6747] = {317279};
	fills_runs[6749] = {317291, 317292, 317295, 317296, 317297};
	fills_runs[6751] = {317319, 317320};
	fills_runs[6752] = {317338, 317339, 317340};
	fills_runs[6755] = {317382, 317383};
	fills_runs[6757] = {317391, 317392};
	fills_runs[6759] = {317434, 317435, 317438};
	fills_runs[6761] = {317475, 317478, 317479, 317480, 317481, 317482, 317484, 317488};
	fills_runs[6762] = {317509, 317510, 317511, 317512};
	fills_runs[6763] = {317527};
	fills_runs[6768] = {317591};
	fills_runs[6770] = {317626};
	fills_runs[6772] = {317640, 317641};
	fills_runs[6773] = {317648, 317649, 317650};
	fills_runs[6774] = {317661, 317663};
	fills_runs[6776] = {317683};
	fills_runs[6778] = {317696};
	fills_runs[6843] = {318622};
	fills_runs[6847] = {318653, 318658, 318659, 318661, 318662, 318663, 318667, 318669, 318670, 318675};
	fills_runs[6850] = {318712, 318714, 318733, 318734};
	fills_runs[6854] = {318816, 318817, 318819, 318820};
	fills_runs[6858] = {318828};
	fills_runs[6860] = {318872, 318874, 318876, 318877};
	fills_runs[6864] = {318939, 318944, 318945, 318953};
	fills_runs[6868] = {318980, 318981, 318982, 318983, 318984, 318992, 319006, 319010, 319011, 319015, 319016, 319018, 319019};
	fills_runs[6874] = {319077};
	fills_runs[6877] = {319097, 319098, 319099, 319100, 319101, 319103, 319104};
	fills_runs[6879] = {319124, 319125};
	fills_runs[6881] = {319159, 319160};
	fills_runs[6882] = {319173, 319174, 319175, 319176, 319177};
	fills_runs[6884] = {319189, 319190};
	fills_runs[6885] = {319222, 319223};
	fills_runs[6890] = {319254, 319255, 319256, 319260, 319262, 319263, 319264, 319265, 319266, 319267, 319268, 319270, 319271, 319272, 319273, 319274};
	fills_runs[6891] = {319300};
	fills_runs[6892] = {319310, 319311};
	fills_runs[6901] = {319337};
	fills_runs[6904] = {319347, 319348, 319349};
	fills_runs[6909] = {319449, 319450, 319452, 319453, 319456, 319459, 319460, 319462, 319463, 319464, 319466, 319467, 319468, 319469, 319470, 319471, 319472};
	fills_runs[6911] = {319486, 319488, 319503};
	fills_runs[6912] = {319524, 319525, 319526, 319527, 319528};
	fills_runs[6913] = {319554, 319557, 319559};
	fills_runs[6919] = {319579};
	fills_runs[6921] = {319625};
	fills_runs[6923] = {319639};
	fills_runs[6924] = {319656, 319657, 319658, 319659};
	fills_runs[6925] = {319678};
	fills_runs[6927] = {319687};
	fills_runs[6929] = {319697, 319698};
	fills_runs[6931] = {319756};
	fills_runs[6939] = {319840, 319841};
	fills_runs[6940] = {319847, 319848, 319849, 319851, 319852, 319853, 319854};
	fills_runs[6942] = {319908, 319909, 319910, 319912, 319913, 319914, 319915};
	fills_runs[6944] = {319941, 319942};
	fills_runs[6946] = {319950};
	fills_runs[6953] = {319991, 319992, 319993};
	fills_runs[6956] = {320002, 320003, 320006, 320007, 320008, 320009, 320010, 320011, 320012};
	fills_runs[6957] = {320023, 320024, 320025, 320026};
	fills_runs[6960] = {320038, 320039, 320040};
	fills_runs[6961] = {320058, 320059, 320060, 320061, 320062, 320063, 320064, 320065};
	fills_runs[6966] = {320137};
	fills_runs[6998] = {320500};
	fills_runs[7003] = {320569, 320570, 320571};
	fills_runs[7005] = {320673, 320674};
	fills_runs[7006] = {320688};
	fills_runs[7008] = {320712};
	fills_runs[7013] = {320757};
	fills_runs[7017] = {320804, 320807, 320809};
	fills_runs[7018] = {320821, 320822, 320823, 320824};
	fills_runs[7020] = {320838, 320839, 320840, 320841};
	fills_runs[7024] = {320853, 320854, 320855, 320856, 320857, 320858, 320859};
	fills_runs[7026] = {320887, 320888};
	fills_runs[7031] = {320916, 320917, 320920};
	fills_runs[7033] = {320933, 320934, 320936, 320941};
	fills_runs[7035] = {320980};
	fills_runs[7036] = {320995, 320996};
	fills_runs[7037] = {321004, 321005, 321006, 321007, 321009, 321010, 321011, 321012};
	fills_runs[7039] = {321051, 321055};
	fills_runs[7040] = {321067, 321068, 321069};
	fills_runs[7042] = {321119, 321121, 321122, 321123, 321124, 321126};
	fills_runs[7043] = {321134, 321138, 321140};
	fills_runs[7045] = {321149};
	fills_runs[7047] = {321162, 321164, 321165, 321166, 321167};
	fills_runs[7048] = {321177, 321178};
	fills_runs[7052] = {321218, 321219, 321221};
	fills_runs[7053] = {321230, 321231, 321232, 321233};
	fills_runs[7054] = {321261, 321262};
	fills_runs[7055] = {321283, 321294, 321295, 321296};
	fills_runs[7056] = {321305, 321310, 321311, 321312, 321313};
	fills_runs[7058] = {321393, 321396, 321397};
	fills_runs[7061] = {321414, 321415};
	fills_runs[7063] = {321431, 321432, 321433, 321434, 321436};
	fills_runs[7065] = {321457, 321461};
	fills_runs[7069] = {321475};
	fills_runs[7078] = {321709, 321710, 321712};
	fills_runs[7080] = {321730, 321731, 321732, 321735};
	fills_runs[7083] = {321755, 321758, 321759, 321760};
	fills_runs[7087] = {321773, 321774, 321775, 321776, 321777, 321778, 321780, 321781};
	fills_runs[7088] = {321794, 321795, 321796};
	fills_runs[7090] = {321813, 321815, 321816, 321817, 321818, 321819, 321820};
	fills_runs[7091] = {321831, 321832, 321833, 321834};
	fills_runs[7092] = {321879, 321880};
	fills_runs[7095] = {321887};
	fills_runs[7097] = {321908, 321909};
	fills_runs[7098] = {321917, 321919};
	fills_runs[7099] = {321933};
	fills_runs[7101] = {321960, 321961};
	fills_runs[7105] = {321973, 321975};
	fills_runs[7108] = {321988, 321990};
	fills_runs[7109] = {322013, 322014};
	fills_runs[7110] = {322022};
	fills_runs[7112] = {322040};
	fills_runs[7114] = {322057};
	fills_runs[7117] = {322068};
	fills_runs[7118] = {322079, 322088};
	fills_runs[7120] = {322106};
	fills_runs[7122] = {322113, 322118};
	fills_runs[7123] = {322179};
	fills_runs[7124] = {322201, 322204, 322222};
	fills_runs[7125] = {322252};
	fills_runs[7127] = {322317, 322319, 322322, 322324};
	fills_runs[7128] = {322332};
	fills_runs[7131] = {322348};
	fills_runs[7132] = {322355, 322356};
	fills_runs[7133] = {322381};
	fills_runs[7135] = {322407};
	fills_runs[7137] = {322430, 322431};
	fills_runs[7139] = {322480, 322483, 322484, 322485, 322487, 322492};
	fills_runs[7142] = {322510};
	fills_runs[7144] = {322599, 322602, 322603, 322605, 322616, 322617};
	fills_runs[7145] = {322625, 322633};
	//fills_runs[7188] = {};
	fills_runs[7211] = {323363, 323364, 323365, 323367, 323368, 323369, 323370, 323371, 323373, 323374, 323375, 323376, 323377, 323378, 323379};
	fills_runs[7212] = {323388, 323391, 323393, 323394, 323395, 323396, 323397, 323398, 323399};
	fills_runs[7213] = {323413, 323414, 323415, 323416, 323417, 323418, 323419, 323420, 323421, 323422, 323423};
	fills_runs[7217] = {323470, 323471, 323472, 323473, 323474, 323475};
	fills_runs[7218] = {323487, 323488, 323492, 323493, 323495};
	fills_runs[7220] = {323513};
	fills_runs[7221] = {323523, 323524, 323525, 323526};
	fills_runs[7234] = {323693, 323696, 323698, 323699, 323700, 323701, 323702};
	fills_runs[7236] = {323725, 323726, 323727};
	fills_runs[7239] = {323755};
	fills_runs[7240] = {323775, 323778};
	fills_runs[7242] = {323790, 323794};
	fills_runs[7245] = {323841, 323857};
	fills_runs[7252] = {323940, 323954};
	fills_runs[7253] = {323976, 323978, 323980, 323983, 323997};
	fills_runs[7256] = {324021, 324022};
	fills_runs[7259] = {324077, 324078};
	fills_runs[7264] = {324201, 324202, 324205, 324206, 324207, 324209};
	fills_runs[7265] = {324237};
	fills_runs[7266] = {324245};
	fills_runs[7270] = {324293};
	fills_runs[7271] = {324313, 324314, 324315, 324318};
	fills_runs[7274] = {324418, 324420};
	fills_runs[7299] = {324564};
	fills_runs[7300] = {324570, 324571};
	fills_runs[7304] = {324612};
	fills_runs[7308] = {324725, 324729};
	fills_runs[7309] = {324747, 324764, 324765, 324769, 324772};
	fills_runs[7310] = {324785, 324791};
	fills_runs[7314] = {324835, 324840, 324841, 324846};
	fills_runs[7315] = {324878};
	fills_runs[7317] = {324897};
	fills_runs[7320] = {324968, 324970};
	fills_runs[7321] = {324980};
	fills_runs[7324] = {324997, 324998, 324999, 325000, 325001};
	fills_runs[7328] = {325022};
	fills_runs[7331] = {325057};
	fills_runs[7333] = {325097, 325098, 325099, 325100, 325101, 325102, 325103, 325110, 325111, 325112, 325113, 325114, 325117};
	fills_runs[7334] = {325159, 325168, 325169, 325170, 325172, 325173, 325174, 325175};
}

//----------------------------------------------------------------------------------------------------

void SaveJSON(const set<unsigned int> &runs, FILE *f)
{
	fprintf(f, "{\n");

	bool first = true;
	for (const auto &run : runs)
	{
		if (first)
			first = false;
		else
			fprintf(f, ",\n");

		fprintf(f, "  \"%u\": ", run);

		fprintf(f, "[[0, 999999999]]");
	}

	fprintf(f, "\n}\n");
}

//----------------------------------------------------------------------------------------------------

int main(int argc, const char **argv)
{
	InitFillsRuns();

	// process input
	FILE *f_in = fopen(argv[1], "r");

	std::map<unsigned int, std::set<unsigned int>> fills_runs_sel;

	while (!feof(f_in))
	{
		unsigned int run = 0;
		int r = fscanf(f_in, "%i", &run);

		if (r == 1)
		{
			unsigned int fill = 0;

			// look for fill corresponding to the run
			for (const auto &fp : fills_runs)
			{
				for (const auto &r : fp.second)
				{
					if (r == run)
					{
						fill = fp.first;
						break;
					}
				}

				if (fill != 0)
					break;
			}

			// if run not found
			if (fill == 0)
				printf("ERROR: run %u not found\n", run);

			// if run found
			if (fill != 0)
			{
				fills_runs_sel[fill].insert(run);
			}

			//printf("run = %u\n", run);
		}
	}

	fclose(f_in);

	// make output
	for (const auto &fp : fills_runs_sel)
	{
		char buf[100];
		sprintf(buf, "fill_%u.json", fp.first);
		FILE *f = fopen(buf, "w");

		SaveJSON(fp.second, f);

		fclose(f);
	}

	return 0;
}
