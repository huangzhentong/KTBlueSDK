#include "Datetype.h"

/**************************************************************************
* 函数名称：  void InitAstar()
* 功能描述：  最短路径规划-A*算法初始化
* 输入参数：  KT_KeyPoint *map：关键点坐标集  int num：关键点个数
			  APoint *keyNode;算法点集初始化  int endId：终点关键点坐标id
* 输出参数：  无
* 返 回 值：  无
**************************************************************************/
void InitAstar(KT_KeyPoint *map, int num, APoint *keyNode, int endId);

/**************************************************************************
* 函数名称：  int AStarAlgorithm()
* 功能描述：  最短路径规划-A*算法
* 输入参数：  KT_KeyPoint *map：关键点坐标集  int num：关键点个数
			  int startId：起始关键点坐标id  int endId：终点关键点坐标id
* 输出参数：  KT_KeyPoint *path：最佳路径坐标集  int *pathNum：路径点个数
* 返 回 值：  1：规划成功。其他：规划失败。
**************************************************************************/
int AStarAlgorithm(KT_KeyPoint *map, int num, KT_KeyPoint *path,int *pathNum, int startId, int endId);


/**************************************************************************
* 函数名称：  int PathAdsorption()
* 功能描述：  路径吸附
* 输入参数：  KT_KeyPoint *NearPath：包含最近三点的路径  int id：点个坐标
			  KT_Point ibeanconPiont：蓝牙坐标  
* 输出参数：  KT_Point *outPpoint：吸附点坐标
* 返 回 值：  1：定位点线路上。2：定位点不在线路上 其他：吸附失败。
**************************************************************************/
int PathAdsorption(KT_KeyPoint*NearPath ,int id, KT_Point ibeanconPiont, KT_Point *outPoint);




/**************************************************************************
* 函数名称：  int TrajectoryAnalysis()
* 功能描述：  轨迹分析
* 输入参数：  KT_floorInfo *iFloor：楼层人物历史运动信息
* 输出参数：  KT_Point *startPoint：起始点坐标
* 返 回 值：  1：已变化。0：未变化
**************************************************************************/
int TrajectoryAnalysis(KT_floorInfo *iFloor,KT_Point *startPoint);