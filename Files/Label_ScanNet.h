#pragma once
#include <map>
#include "../ORUtils/Vector.h"
#include <string>

static std::map<unsigned short, float3> tmp {
        {0, {1,1,1}}
};

static std::map<unsigned short, unsigned short> ScanNetTo11 {
	{0, 0},
	{1, 3}, 
	{2, 5}, 
	{3, 2}, 
	{4, 8}, 
	{5, 11}, 
	{6, 7}, 
	{7, 10}, 
	{8, 10}, 
	{9, 8}, 
	{10, 5}, 
	{11, 6}, 
	{13, 11}, 
	{14, 11}, 
	{15, 11}, 
	{16, 4}, 
	{17, 10}, 
	{18, 10}, 
	{19, 11}, 
	{21, 4}, 
	{22, 11}, 
	{23, 5}, 
	{24, 8}, 
	{25, 10}, 
	{26, 11}, 
	{27, 11}, 
	{28, 11}, 
	{29, 10}, 
	{31, 11}, 
	{32, 11}, 
	{33, 9}, 
	{34, 10}, 
	{35, 10}, 
	{36, 10}, 
	{38, 11}, 
	{39, 11}, 
	{40, 11}, 
	{41, 1}, 
	{42, 10}, 
	{43, 10}, 
	{44, 8}, 
	{45, 8}, 
	{46, 11}, 
	{47, 11}, 
	{48, 11}, 
	{49, 11}, 
	{50, 11}, 
	{51, 10}, 
	{52, 11}, 
	{53, 11}, 
	{54, 11}, 
	{55, 11}, 
	{56, 10}, 
	{57, 10}, 
	{58, 11}, 
	{59, 11}, 
	{61, 11}, 
	{62, 11}, 
	{63, 11}, 
	{64, 11}, 
	{65, 11}, 
	{66, 11}, 
	{67, 10}, 
	{68, 10}, 
	{69, 11}, 
	{70, 10}, 
	{71, 11}, 
	{72, 11}, 
	{73, 11}, 
	{74, 5}, 
	{75, 10}, 
	{76, 11}, 
	{77, 11}, 
	{78, 11}, 
	{79, 11}, 
	{80, 11}, 
	{81, 10}, 
	{82, 11}, 
	{83, 11}, 
	{84, 11}, 
	{85, 10}, 
	{86, 4}, 
	{87, 10}, 
	{88, 11}, 
	{89, 11}, 
	{90, 10}, 
	{91, 10}, 
	{92, 11}, 
	{93, 11}, 
	{95, 11}, 
	{96, 10}, 
	{97, 10}, 
	{98, 11}, 
	{99, 10}, 
	{100, 11}, 
	{101, 11}, 
	{102, 11}, 
	{103, 11}, 
	{104, 10}, 
	{105, 11}, 
	{106, 11}, 
	{107, 11}, 
	{108, 8}, 
	{110, 10}, 
	{111, 11}, 
	{112, 11}, 
	{115, 11}, 
	{116, 10}, 
	{117, 11}, 
	{118, 11}, 
	{119, 11}, 
	{120, 11}, 
	{121, 11}, 
	{122, 10}, 
	{123, 11}, 
	{125, 11}, 
	{126, 10}, 
	{128, 3}, 
	{129, 10}, 
	{130, 11}, 
	{131, 11}, 
	{132, 11}, 
	{133, 11}, 
	{134, 11}, 
	{135, 11}, 
	{136, 11}, 
	{138, 11}, 
	{139, 11}, 
	{140, 2}, 
	{141, 11}, 
	{142, 11}, 
	{143, 10}, 
	{144, 11}, 
	{145, 11}, 
	{146, 11}, 
	{148, 11}, 
	{152, 11}, 
	{153, 10}, 
	{154, 11}, 
	{155, 10}, 
	{156, 11}, 
	{157, 11}, 
	{159, 10}, 
	{160, 11}, 
	{161, 11}, 
	{163, 11}, 
	{165, 11}, 
	{166, 11}, 
	{167, 11}, 
	{168, 11}, 
	{169, 11}, 
	{170, 11}, 
	{174, 11}, 
	{177, 10}, 
	{179, 11}, 
	{180, 11}, 
	{182, 11}, 
	{185, 11}, 
	{188, 11}, 
	{189, 11}, 
	{191, 11}, 
	{193, 11}, 
	{194, 11}, 
	{195, 11}, 
	{202, 11}, 
	{204, 11}, 
	{208, 11}, 
	{212, 11}, 
	{213, 10}, 
	{214, 11}, 
	{216, 11}, 
	{220, 11}, 
	{221, 11}, 
	{222, 8}, 
	{225, 11}, 
	{226, 11}, 
	{227, 11}, 
	{228, 11}, 
	{229, 11}, 
	{230, 11}, 
	{231, 11}, 
	{232, 11}, 
	{233, 10}, 
	{234, 10}, 
	{235, 11}, 
	{238, 11}, 
	{242, 11}, 
	{245, 11}, 
	{247, 11}, 
	{250, 11}, 
	{257, 11}, 
	{261, 11}, 
	{264, 11}, 
	{265, 11}, 
	{269, 11}, 
	{276, 11}, 
	{280, 11}, 
	{281, 11}, 
	{282, 10}, 
	{283, 11}, 
	{284, 11}, 
	{286, 11}, 
	{289, 10}, 
	{291, 11}, 
	{297, 11}, 
	{298, 11}, 
	{300, 11}, 
	{301, 11}, 
	{304, 11}, 
	{305, 11}, 
	{307, 10}, 
	{312, 11}, 
	{316, 11}, 
	{319, 11}, 
	{321, 11}, 
	{323, 11}, 
	{325, 11}, 
	{326, 10}, 
	{331, 11}, 
	{332, 11}, 
	{339, 11}, 
	{342, 11}, 
	{345, 11}, 
	{346, 11}, 
	{354, 10}, 
	{356, 11}, 
	{357, 11}, 
	{361, 11}, 
	{363, 10}, 
	{365, 11}, 
	{366, 11}, 
	{370, 11}, 
	{372, 11}, 
	{378, 11}, 
	{379, 11}, 
	{385, 10}, 
	{386, 11}, 
	{387, 11}, 
	{389, 10}, 
	{392, 11}, 
	{395, 11}, 
	{397, 11}, 
	{399, 11}, 
	{401, 11}, 
	{408, 11}, 
	{410, 10}, 
	{411, 10}, 
	{415, 11}, 
	{417, 2}, 
	{432, 11}, 
	{434, 11}, 
	{435, 11}, 
	{436, 11}, 
	{440, 11}, 
	{448, 11}, 
	{450, 11}, 
	{452, 11}, 
	{459, 11}, 
	{461, 11}, 
	{480, 11}, 
	{484, 10}, 
	{488, 11}, 
	{494, 6}, 
	{506, 11}, 
	{513, 11}, 
	{518, 11}, 
	{523, 11}, 
	{525, 10}, 
	{529, 11}, 
	{540, 11}, 
	{546, 11}, 
	{551, 11}, 
	{556, 11}, 
	{561, 11}, 
	{562, 11}, 
	{563, 11}, 
	{566, 10}, 
	{569, 11}, 
	{570, 11}, 
	{571, 11}, 
	{572, 11}, 
	{581, 10}, 
	{591, 11}, 
	{592, 11}, 
	{593, 11}, 
	{599, 11}, 
	{607, 11}, 
	{609, 11}, 
	{612, 11}, 
	{621, 11}, 
	{623, 11}, 
	{643, 11}, 
	{649, 11}, 
	{657, 11}, 
	{673, 11}, 
	{682, 11}, 
	{689, 11}, 
	{693, 11}, 
	{712, 11}, 
	{719, 11}, 
	{726, 11}, 
	{730, 11}, 
	{733, 11}, 
	{746, 11}, 
	{748, 11}, 
	{749, 11}, 
	{750, 11}, 
	{765, 10}, 
	{776, 11}, 
	{786, 6}, 
	{794, 11}, 
	{796, 11}, 
	{801, 11}, 
	{803, 11}, 
	{813, 11}, 
	{814, 11}, 
	{815, 10}, 
	{816, 11}, 
	{817, 11}, 
	{819, 11}, 
	{822, 10}, 
	{828, 11}, 
	{829, 11}, 
	{851, 10}, 
	{857, 11}, 
	{885, 5}, 
	{893, 11}, 
	{907, 11}, 
	{919, 11}, 
	{922, 11}, 
	{939, 11}, 
	{947, 3}, 
	{948, 11}, 
	{955, 11}, 
	{972, 11}, 
	{976, 11}, 
	{997, 11}, 
	{1005, 11}, 
	{1008, 11}, 
	{1009, 11}, 
	{1028, 11}, 
	{1051, 11}, 
	{1062, 11}, 
	{1063, 11}, 
	{1072, 11}, 
	{1083, 11}, 
	{1098, 11}, 
	{1116, 11}, 
	{1117, 10}, 
	{1122, 11}, 
	{1125, 11}, 
	{1126, 11}, 
	{1135, 11}, 
	{1145, 11}, 
	{1156, 10}, 
	{1163, 11}, 
	{1164, 10}, 
	{1165, 3}, 
	{1166, 11}, 
	{1167, 11}, 
	{1168, 11}, 
	{1169, 10}, 
	{1170, 11}, 
	{1171, 11}, 
	{1172, 11}, 
	{1173, 10}, 
	{1174, 11}, 
	{1175, 11}, 
	{1176, 11}, 
	{1177, 10}, 
	{1178, 11}, 
	{1179, 11}, 
	{1180, 10}, 
	{1181, 11}, 
	{1182, 11}, 
	{1183, 11}, 
	{1184, 5}, 
	{1185, 11}, 
	{1186, 11}, 
	{1187, 11}, 
	{1188, 11}, 
	{1189, 11}, 
	{1190, 11}, 
	{1191, 6}, 
	{1192, 11}, 
	{1193, 8}, 
	{1194, 11}, 
	{1195, 11}, 
	{1196, 11}, 
	{1197, 11}, 
	{1198, 11}, 
	{1199, 11}, 
	{1200, 11}, 
	{1201, 11}, 
	{1202, 10}, 
	{1203, 11}, 
	{1204, 3}, 
	{1205, 11}, 
	{1206, 11}, 
	{1207, 11}, 
	{1208, 11}, 
	{1209, 10}, 
	{1210, 11}, 
	{1211, 11}, 
	{1212, 11}, 
	{1213, 11}, 
	{1214, 11}, 
	{1215, 11}, 
	{1216, 11}, 
	{1217, 11}, 
	{1218, 11}, 
	{1219, 11}, 
	{1220, 11}, 
	{1221, 11}, 
	{1222, 11}, 
	{1223, 11}, 
	{1224, 11}, 
	{1225, 1}, 
	{1226, 11}, 
	{1227, 10}, 
	{1228, 11}, 
	{1229, 11}, 
	{1230, 11}, 
	{1231, 11}, 
	{1232, 11}, 
	{1233, 11}, 
	{1234, 11}, 
	{1235, 11}, 
	{1236, 11}, 
	{1237, 11}, 
	{1238, 11}, 
	{1239, 11}, 
	{1240, 11}, 
	{1241, 11}, 
	{1242, 10}, 
	{1243, 3}, 
	{1244, 10}, 
	{1245, 11}, 
	{1246, 11}, 
	{1247, 11}, 
	{1248, 11}, 
	{1249, 11}, 
	{1250, 11}, 
	{1251, 11}, 
	{1252, 11}, 
	{1253, 11}, 
	{1254, 11}, 
	{1255, 11}, 
	{1256, 10}, 
	{1257, 10}, 
	{1258, 11}, 
	{1259, 11}, 
	{1260, 11}, 
	{1261, 11}, 
	{1262, 11}, 
	{1263, 11}, 
	{1264, 11}, 
	{1265, 11}, 
	{1266, 11}, 
	{1267, 2}, 
	{1268, 11}, 
	{1269, 11}, 
	{1270, 10}, 
	{1271, 11}, 
	{1272, 11}, 
	{1273, 11}, 
	{1274, 11}, 
	{1275, 11}, 
	{1276, 11}, 
	{1277, 11}, 
	{1278, 11}, 
	{1279, 11}, 
	{1280, 11}, 
	{1281, 11}, 
	{1282, 11}, 
	{1283, 10}, 
	{1284, 11}, 
	{1285, 11}, 
	{1286, 11}, 
	{1287, 11}, 
	{1288, 11}, 
	{1289, 11}, 
	{1290, 10}, 
	{1291, 5}, 
	{1292, 11}, 
	{1293, 11}, 
	{1294, 11}, 
	{1295, 11}, 
	{1296, 11}, 
	{1297, 11}, 
	{1298, 11}, 
	{1299, 11}, 
	{1300, 11}, 
	{1301, 11}, 
	{1302, 11}, 
	{1303, 11}, 
	{1304, 11}, 
	{1305, 11}, 
	{1306, 11}, 
	{1307, 11}, 
	{1308, 11}, 
	{1309, 11}, 
	{1310, 11}, 
	{1311, 11}, 
	{1312, 11}, 
	{1313, 7}, 
	{1314, 11}, 
	{1315, 11}, 
	{1316, 10}, 
	{1317, 11}, 
	{1318, 11}, 
	{1319, 11}, 
	{1320, 11}, 
	{1321, 11}, 
	{1322, 10}, 
	{1323, 11}, 
	{1324, 11}, 
	{1325, 11}, 
	{1326, 11}, 
	{1327, 11}, 
	{1328, 11}, 
	{1329, 11}, 
	{1330, 11}, 
	{1331, 11}, 
	{1332, 11}, 
	{1333, 11}, 
	{1334, 11}, 
	{1335, 10}, 
	{1336, 11}, 
	{1337, 11}, 
	{1338, 5}, 
	{1339, 11}, 
	{1340, 11}, 
	{1341, 10}, 
	{1342, 11}, 
	{1343, 11}, 
	{1344, 11}, 
	{1345, 11}, 
	{1346, 11}, 
	{1347, 2}, 
	{1348, 11}, 
	{1349, 6}, 
	{1350, 11}, 
	{1351, 10}, 
	{1352, 11}, 
	{1353, 11}, 
	{1354, 11}, 
	{1355, 8}, 
	{1356, 11}, 
	{1357, 11}, 
};