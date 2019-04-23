/************************************************************************
* 版权所有 (C)2016, 科拓通讯技术股份有限公司
* 文件名称： iBeaconLocation.h
* 内容摘要： iBeacon蓝牙基站定位
* 当前版本： v1.0.0
* 作    者： KT
* 完成日期： 2016-8-26
************************************************************************/
#include "BasicAlgorithm.h"
#ifndef KT_IBEACON_LOCATION_H
#define KT_IBEACON_LOCATION_H



/**************************************************************************
* 函数名称：  int iBeaconLocate()
* 功能描述：  根据输入包含基站基本信息的字符串，返回定位到的手机坐标。
* 输入参数：  char Inbeacons[]：基站基本信息。按照基站接收到的信号强度的个数，由大到小依次排序输入。示例：
              {"beacons": 
			       [
                    {"id":"AB8190D5-D11E-4941-ACC4-42F30510B408:10009:43648", "X":503, "Y":484, "proximity":3, "accuracy":"57.667179", "rssi":-40, "timestamp":"1471928801537"},
                    {"id":"AB8190D5-D11E-4941-ACC4-42F30510B408:10009:43648", "X":503, "Y":484, "proximity":3, "accuracy":"57.667179", "rssi":-40, "timestamp":"1471928802537"},
                    {"id":"AB8190D5-D11E-4941-ACC4-42F30510B408:10009:43649", "X":303, "Y":184, "proximity":3, "accuracy":"27.667179", "rssi":-20, "timestamp":"1471928802537"}
                   ]
              }

* 输出参数：  char Outlocate[]：定位到的坐标信息。示例：
              {"reslocate": 
			     [
                   {"X":45, "Y":60}
                 ]
              }

* 返 回 值：  0：输入数据异常等原因造成的未能定位到坐标。 1:正常结果。

**************************************************************************/
int iBeaconLocate(char *Inbeacons,KT_KeyPoint *Outlocate,KT_floorInfo *iFloor);

int iBeaconLocateByPiont(char *Inbeacons , KT_KeyPoint *Outlocate,KT_floorInfo *iFloor);


#endif