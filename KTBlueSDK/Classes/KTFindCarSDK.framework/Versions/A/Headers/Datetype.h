/************************************************************************
* 版权所有 (C)2018, 科拓通讯技术股份有限公司
* 文件名称： Datetype.h
* 内容摘要： 结构体数据
* 当前版本： v1.0.0
* 作    者： KT
* 完成日期： 2019-3-28
************************************************************************/

#define KEY_MAX_NUM 500   //关键点个数
#define HISYNUMS 4		  //保留多少个历史状态
#define NEAR_MAX_NUM 20    //临近点最大个数
#define PI 3.1415926

#define SAFEDELETE(p){if(p!=NULL){free(p);p=NULL;}} //安全释放

typedef struct _KT_Point				 //带id坐标坐标
{
	int id;
	int x;
	int y;
}KT_Point;

typedef struct _KT_iBPoint				 //蓝牙点（不带id）坐标
{
	int x;
	int y;
}KT_iBPoint;

typedef struct _KT_KeyPoint				//关键点坐标
{
	KT_Point pos;						//点坐标
	int nearPointId[NEAR_MAX_NUM];		// 0123 上下左右 无为-1
}KT_KeyPoint;

typedef struct _KT_iBeaconList			//同一个基站不同时间，接收到的信号
{
	int rssinum;
	KT_iBPoint positon;
	int *proximity;
	float *accuracy;
	int *rssi;
	int *timediff;

}KT_iBeaconList;

typedef struct _KT_iBeacon				//记录读取到的蓝牙信息
{
	KT_iBPoint iBpositon;
	int iBproxi;
	float iBacracy;
	int iBrssi;

}KT_iBeacon;

typedef struct _KT_floorInfo			//记录读取车场楼层信息
{
	int mapH;							//地图高度
	int mapW;							//地图宽度
	float scale;						//像素比例尺
	float mapCorrectAngle;				//地图校准角度

	KT_Point parkPoint;					//车位停放坐标

	_KT_KeyPoint *keyPoints;			//关键点信息
	int keyPointsNum;					//关键点个数

	KT_Point manPoint;                  //当前人物位置
	KT_Point HisyManPoint[HISYNUMS];    //人物历史状态点
	KT_Point HisyPath[HISYNUMS][2];		//历史路径点 0-->1
	int changeFlag;						//路线改变变量 为0不做变化			

	int SignalTruDis;                   //信号可信距离（待定）

	int StepNum[2];                     //前后步数;
	int AngleValue[2];                  //前后角度值

	int ibeaconMaxNum;					//蓝牙最大数

}KT_floorInfo;


typedef struct _APoint					//A*算法结构体
{
	KT_KeyPoint point;
	int F,G,H;							//F=G+H  G表示从起点移动到指定方格的移动耗费.H 表示从指定的方格移动到终点 B 的预计耗费
	int Fid;
}APoint;