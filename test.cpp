#include<iostream>
#include <stdlib.h>
using namespace std;//��Ҫ����������ռ䣬����ʹ����std�ռ��е�cout��cin����

int getMaxOrMin(int *arr,int count,bool isMax){
	int temp =arr[0];

	for (int i=1;i<count;i++)
	{
		if (isMax){
			if (temp<arr[i]){
				temp=arr[i];
			}
		}else{
			if (temp>arr[i]){
				temp=arr[i];
			}
		}

	}

	return temp;

}

int main(void){
	//int x=0;//int x��0��
	//cout<<"������һ������"<<endl;
	//cin>>x;
	//cout<<oct<<x<<endl;//oct �˽��� 
	//cout<<dec<<x<<endl;//decʮ����
	//cout<<hex<<x<<endl;//hexʮ���ƽ�

	//cout<<"������һ������ֵ��0��1����"<<endl;
	//bool y=false;
	//cin>>y;
	//cout<<boolalpha<<y<<endl;//boolalpha�������һ���������͵���ֵ
	int arrTest[4]={3,5,1,7};
	bool isMax=false;
	cin >> isMax;
	cout << getMaxOrMin(arrTest,4,isMax) << endl;
	system("pause");
	return 0;


}



