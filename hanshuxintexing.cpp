#include<iostream>
#include <stdlib.h>
using namespace std;

inline void testFun(int a=1,int b=2,int c=3);

void testFun(double i,double h);
//int main(void){
//	////1、函数的默认值 形参有默认值放在最右边；
//	////函数声明时可以形参带有默认值，实现时无需再设置默认值；
//	////如果带有默认值，没有实参，直接调用则使用形参的默认值
//	//testFun();
//	//testFun(10);
//	//testFun(10,20);
//	//testFun(10,20,30);
//
//	////2、函数的重载 前提是在同一作用域下，及在同一命名空间内 形参个数和类型不一样
//	//testFun(1.2,2.2);
//	//testFun(1,2);
//
//
//	//3、内联函数 使用关键字inline 编译器自动把函数中的代码加到main中，适合逻辑简单的函数
//	//编译速度快，不需要根据函数体的声明，查找函数，执行函数内的代码，把运算结果返回给main函数，再向下执行
//	//一般函数的使用，都是先声明函数体，然后在实现函数，在main函数中调用
//	//改变了编译方式,提高运算速度，调用频繁的函数
//	//对编译器来讲，linline只是一种建议
//	//逻辑复杂的不适应，会把逻辑复杂的函数当成一般函数使用，如for、while循环函数，递归函数
//	testFun();
//	system("pause");
//	return 0;
//}

void testFun(int a,int b,int c){

	cout << a << b << c << endl;
}


void testFun(double i,double h){

	cout << i << "," << h << endl;
}