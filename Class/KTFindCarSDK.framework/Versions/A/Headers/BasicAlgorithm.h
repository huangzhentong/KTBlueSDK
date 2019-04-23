#include "Datetype.h"

/**************************************************************************
* �������ƣ�  void InitAstar()
* ����������  ���·���滮-A*�㷨��ʼ��
* ���������  KT_KeyPoint *map���ؼ������꼯  int num���ؼ������
			  APoint *keyNode;�㷨�㼯��ʼ��  int endId���յ�ؼ�������id
* ���������  ��
* �� �� ֵ��  ��
**************************************************************************/
void InitAstar(KT_KeyPoint *map, int num, APoint *keyNode, int endId);

/**************************************************************************
* �������ƣ�  int AStarAlgorithm()
* ����������  ���·���滮-A*�㷨
* ���������  KT_KeyPoint *map���ؼ������꼯  int num���ؼ������
			  int startId����ʼ�ؼ�������id  int endId���յ�ؼ�������id
* ���������  KT_KeyPoint *path�����·�����꼯  int *pathNum��·�������
* �� �� ֵ��  1���滮�ɹ����������滮ʧ�ܡ�
**************************************************************************/
int AStarAlgorithm(KT_KeyPoint *map, int num, KT_KeyPoint *path,int *pathNum, int startId, int endId);


/**************************************************************************
* �������ƣ�  int PathAdsorption()
* ����������  ·������
* ���������  KT_KeyPoint *NearPath��������������·��  int id���������
			  KT_Point ibeanconPiont����������  
* ���������  KT_Point *outPpoint������������
* �� �� ֵ��  1����λ����·�ϡ�2����λ�㲻����·�� ����������ʧ�ܡ�
**************************************************************************/
int PathAdsorption(KT_KeyPoint*NearPath ,int id, KT_Point ibeanconPiont, KT_Point *outPoint);




/**************************************************************************
* �������ƣ�  int TrajectoryAnalysis()
* ����������  �켣����
* ���������  KT_floorInfo *iFloor��¥��������ʷ�˶���Ϣ
* ���������  KT_Point *startPoint����ʼ������
* �� �� ֵ��  1���ѱ仯��0��δ�仯
**************************************************************************/
int TrajectoryAnalysis(KT_floorInfo *iFloor,KT_Point *startPoint);