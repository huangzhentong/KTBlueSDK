/************************************************************************
* ��Ȩ���� (C)2018, ����ͨѶ�����ɷ����޹�˾
* �ļ����ƣ� Datetype.h
* ����ժҪ�� �ṹ������
* ��ǰ�汾�� v1.0.0
* ��    �ߣ� KT
* ������ڣ� 2019-3-28
************************************************************************/

#define KEY_MAX_NUM 500   //�ؼ������
#define HISYNUMS 4		  //�������ٸ���ʷ״̬
#define NEAR_MAX_NUM 20    //�ٽ���������
#define PI 3.1415926

#define SAFEDELETE(p){if(p!=NULL){free(p);p=NULL;}} //��ȫ�ͷ�

typedef struct _KT_Point				 //��id��������
{
	int id;
	int x;
	int y;
}KT_Point;

typedef struct _KT_iBPoint				 //�����㣨����id������
{
	int x;
	int y;
}KT_iBPoint;

typedef struct _KT_KeyPoint				//�ؼ�������
{
	KT_Point pos;						//������
	int nearPointId[NEAR_MAX_NUM];		// 0123 �������� ��Ϊ-1
}KT_KeyPoint;

typedef struct _KT_iBeaconList			//ͬһ����վ��ͬʱ�䣬���յ����ź�
{
	int rssinum;
	KT_iBPoint positon;
	int *proximity;
	float *accuracy;
	int *rssi;
	int *timediff;

}KT_iBeaconList;

typedef struct _KT_iBeacon				//��¼��ȡ����������Ϣ
{
	KT_iBPoint iBpositon;
	int iBproxi;
	float iBacracy;
	int iBrssi;

}KT_iBeacon;

typedef struct _KT_floorInfo			//��¼��ȡ����¥����Ϣ
{
	int mapH;							//��ͼ�߶�
	int mapW;							//��ͼ���
	float scale;						//���ر�����
	float mapCorrectAngle;				//��ͼУ׼�Ƕ�

	KT_Point parkPoint;					//��λͣ������

	_KT_KeyPoint *keyPoints;			//�ؼ�����Ϣ
	int keyPointsNum;					//�ؼ������

	KT_Point manPoint;                  //��ǰ����λ��
	KT_Point HisyManPoint[HISYNUMS];    //������ʷ״̬��
	KT_Point HisyPath[HISYNUMS][2];		//��ʷ·���� 0-->1
	int changeFlag;						//·�߸ı���� Ϊ0�����仯			

	int SignalTruDis;                   //�źſ��ž��루������

	int StepNum[2];                     //ǰ����;
	int AngleValue[2];                  //ǰ��Ƕ�ֵ

	int ibeaconMaxNum;					//���������

}KT_floorInfo;


typedef struct _APoint					//A*�㷨�ṹ��
{
	KT_KeyPoint point;
	int F,G,H;							//F=G+H  G��ʾ������ƶ���ָ��������ƶ��ķ�.H ��ʾ��ָ���ķ����ƶ����յ� B ��Ԥ�ƺķ�
	int Fid;
}APoint;