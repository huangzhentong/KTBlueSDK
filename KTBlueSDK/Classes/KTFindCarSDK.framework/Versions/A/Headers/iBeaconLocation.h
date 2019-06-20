/************************************************************************
* ��Ȩ���� (C)2016, ����ͨѶ�����ɷ����޹�˾
* �ļ����ƣ� iBeaconLocation.h
* ����ժҪ�� iBeacon������վ��λ
* ��ǰ�汾�� v1.0.0
* ��    �ߣ� KT
* ������ڣ� 2016-8-26
************************************************************************/
#include "BasicAlgorithm.h"
#ifndef KT_IBEACON_LOCATION_H
#define KT_IBEACON_LOCATION_H



/**************************************************************************
* �������ƣ�  int iBeaconLocate()
* ����������  �������������վ������Ϣ���ַ��������ض�λ�����ֻ����ꡣ
* ���������  char Inbeacons[]����վ������Ϣ�����ջ�վ���յ����ź�ǿ�ȵĸ������ɴ�С�����������롣ʾ����
              {"beacons": 
			       [
                    {"id":"AB8190D5-D11E-4941-ACC4-42F30510B408:10009:43648", "X":503, "Y":484, "proximity":3, "accuracy":"57.667179", "rssi":-40, "timestamp":"1471928801537"},
                    {"id":"AB8190D5-D11E-4941-ACC4-42F30510B408:10009:43648", "X":503, "Y":484, "proximity":3, "accuracy":"57.667179", "rssi":-40, "timestamp":"1471928802537"},
                    {"id":"AB8190D5-D11E-4941-ACC4-42F30510B408:10009:43649", "X":303, "Y":184, "proximity":3, "accuracy":"27.667179", "rssi":-20, "timestamp":"1471928802537"}
                   ]
              }

* ���������  char Outlocate[]����λ����������Ϣ��ʾ����
              {"reslocate": 
			     [
                   {"X":45, "Y":60}
                 ]
              }

* �� �� ֵ��  0�����������쳣��ԭ����ɵ�δ�ܶ�λ�����ꡣ 1:���������

**************************************************************************/
int iBeaconLocate(char *Inbeacons,KT_KeyPoint *Outlocate,KT_floorInfo *iFloor);

int iBeaconLocateByPiont(char *Inbeacons , KT_KeyPoint *Outlocate,KT_floorInfo *iFloor);


#endif