#include<iostream>
#include <stdlib.h>
using namespace std;



#define X 3;//通过宏定义定义常量  X为常量 编译时不再检测语法错误



namespace changliang{

	void fun(int  &a ,int  &b){
		a=10;
		b=20;

	}
}

using namespace changliang;
//int main(void){
//	////1、使用const修饰整形，定义常量
//	//const int x = 3;//通过const关键字修饰整形 定义常量 ，有类型编译时检查语法错误
//	
//	////2、a.const修饰*p,*p不能被再次赋值 b.p指针变量可以被赋值，因为没有被定义为const
//	//int x=3;
//	//int y =10;
//	//const int *p=&x;//等价于 int const *p=&x;  *p指针是常量，不能直接赋值
//
//	//////*p=5;// error C3892: “p”: 不能给常量赋值
//
//	//////*p指向的内容是可以的，及x变量存放的数据可以被赋值
//
//	////x=4;
//
//	//cout << *p << endl;
//
//	//p=&y;
//
//	//cout << *p << endl;
//
//	////3、const修饰指针变量p,p一旦指向某个变量，就不能指向其他的变量了
//
//	//int x=10;
//	//int y=20;
//
//	//int * const p=&x;
//
//	////p=&y;//error C3892: “p”: 不能给常量赋值
//
//	////但是*p指向的x变量不是常量，可以为*p赋值
//
//	//*p=100;
//
//	//cout << *p;
//
//	//4、const修饰引用，被const修饰的&z别名成为变量，不能再次赋值
//
//	//int x=90;
//
//	////int const &z=x;//别名被const修饰，成为常量，不能再被赋值(49): error C3892: “z”: 不能给常量赋值
//	//
//	//int &z=x;
//
//	//z=10;
//
//	//cout << z << "," << x << endl;
//
//	//5、const修饰函数的参数
//	//int x = 0;
//	//int y = 0;
//	//fun(x,y);//5): error C3892: “a”: 不能给常量赋值  “b”: 不能给常量赋值
//
//	//cout << x << endl << y << endl;
//
//	////6、需要注意的是 指针指向被const修饰的变量是，必须使用const int const *p =&变量
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


