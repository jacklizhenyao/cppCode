#include<iostream>
#include <stdlib.h>
using namespace std;

typedef struct{
	int x;
	int y;
}Coord;

//������ʹ�� 1��������  2���ڴ������� 3��ʹ��
void fun(int &a,int &b);

int main(void)
{	
	//1�������������͵ı������� �������� &b=����  &���÷���
	int a =10;
	int &b=a;//ֻ�б�������ʹ��

	b=20;

	cout << a << endl;

	a=30;

	cout << b << endl;

	////2���ṹ������� �ṹ������ &c1 =�ṹ������� c1�ǽṹ������ı��� 

	//Coord c;
	//Coord &c1=c;

	//c1.x=10;
	//c1.y=20;

	//cout << c.x << "," << c.y << endl;

	////3��ָ������� ָ������ *&q=p  ָ�����͵����ñȽ����� ������Ҫ��*֮�����÷��źͱ���

	//int a=3;
	//int *p=&a;//Ϊָ�븳ֵʱ������ǰ����Ҫ���ȡֵ��&��ָ��ʹ��ʱֱ��ʹ��ָ���������
	//int *&q=p;
	//
	//*q=5;     //ָ�붨����ٴ�Ϊָ�븳ֵʱ����Ҫ*+ָ����� *q

	////cout << *q << endl; //ʹ��ָ��ʱ��ָ�������*�����������ָ���������ݣ������ӡָ���������ŵ��������ݵĵ�ַ0400cd
	//						
	//cout << a << endl;

	////4����������������,�����Ĳ�������ǰ��Ҫ��&�����÷���
	//int x=10,y=20;

	//cout << x << "," << y << endl;

	//fun(x,y);

	//cout << x << "," << y << endl;

	system("pause");
	return 0;
}

void fun(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}