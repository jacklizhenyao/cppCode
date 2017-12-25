#include<iostream>
#include <stdlib.h>
using namespace std;

typedef struct{
	int x;
	int y;
}Coord;

//函数的使用 1、先声明  2、在创建函数 3、使用
void fun(int &a,int &b);

int main(void)
{	
	//1、基本数据类型的别名引用 数据类型 &b=变量  &引用符号
	int a =10;
	int &b=a;//只有别名不能使用

	b=20;

	cout << a << endl;

	a=30;

	cout << b << endl;

	////2、结构体的引用 结构体类型 &c1 =结构体变量； c1是结构体变量的别名 

	//Coord c;
	//Coord &c1=c;

	//c1.x=10;
	//c1.y=20;

	//cout << c.x << "," << c.y << endl;

	////3、指针的引用 指针类型 *&q=p  指针类型的引用比较特殊 别名需要加*之后引用符号和别名

	//int a=3;
	//int *p=&a;//为指针赋值时，变量前面需要添加取值符&；指针使用时直接使用指针变量即可
	//int *&q=p;
	//
	//*q=5;     //指针定义后，再次为指针赋值时，需要*+指针变量 *q

	////cout << *q << endl; //使用指针时，指针变量加*，输出的是所指的数据内容，否则打印指针变量所存放的数据内容的地址0400cd
	//						
	//cout << a << endl;

	////4、函数参数的引用,函数的参数变量前需要加&，引用符号
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