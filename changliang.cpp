#include<iostream>
#include <stdlib.h>
using namespace std;



#define X 3;//ͨ���궨�嶨�峣��  XΪ���� ����ʱ���ټ���﷨����



namespace changliang{

	void fun(int  &a ,int  &b){
		a=10;
		b=20;

	}
}

using namespace changliang;
//int main(void){
//	////1��ʹ��const�������Σ����峣��
//	//const int x = 3;//ͨ��const�ؼ����������� ���峣�� �������ͱ���ʱ����﷨����
//	
//	////2��a.const����*p,*p���ܱ��ٴθ�ֵ b.pָ��������Ա���ֵ����Ϊû�б�����Ϊconst
//	//int x=3;
//	//int y =10;
//	//const int *p=&x;//�ȼ��� int const *p=&x;  *pָ���ǳ���������ֱ�Ӹ�ֵ
//
//	//////*p=5;// error C3892: ��p��: ���ܸ�������ֵ
//
//	//////*pָ��������ǿ��Եģ���x������ŵ����ݿ��Ա���ֵ
//
//	////x=4;
//
//	//cout << *p << endl;
//
//	//p=&y;
//
//	//cout << *p << endl;
//
//	////3��const����ָ�����p,pһ��ָ��ĳ���������Ͳ���ָ�������ı�����
//
//	//int x=10;
//	//int y=20;
//
//	//int * const p=&x;
//
//	////p=&y;//error C3892: ��p��: ���ܸ�������ֵ
//
//	////����*pָ���x�������ǳ���������Ϊ*p��ֵ
//
//	//*p=100;
//
//	//cout << *p;
//
//	//4��const�������ã���const���ε�&z������Ϊ�����������ٴθ�ֵ
//
//	//int x=90;
//
//	////int const &z=x;//������const���Σ���Ϊ�����������ٱ���ֵ(49): error C3892: ��z��: ���ܸ�������ֵ
//	//
//	//int &z=x;
//
//	//z=10;
//
//	//cout << z << "," << x << endl;
//
//	//5��const���κ����Ĳ���
//	//int x = 0;
//	//int y = 0;
//	//fun(x,y);//5): error C3892: ��a��: ���ܸ�������ֵ  ��b��: ���ܸ�������ֵ
//
//	//cout << x << endl << y << endl;
//
//	////6����Ҫע����� ָ��ָ��const���εı����ǣ�����ʹ��const int const *p =&����
//	//const int x =10;
//
//	//const int const *p=&x;//const int const *p =const int const *p
//
//	//cout << *p << endl;
//	system("pause");
//	return 0;
//}

//void fun(int const &a ,int const &b){
//	a=10;
//	b=20;
//
//}


