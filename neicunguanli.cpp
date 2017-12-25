#include<iostream>
#include <stdlib.h>
using namespace std;

void testFun(double i,double h);
//int main(void){
//
//	//int *p =new int(20);//1、使用new关键字 申请内存并初始化内存赋值20
//
//	////int *p=new int;  //也可以先申请，使用指针初始化
//	////*p =20;  
//
//	//if(*p==NULL){//2、申请失败处理
//	//	cout << "内存申请失败"<<endl;
//	//	system("pause");
//	//	return 0;
//	//}
//
//	////3、释放内存，使用delete
//
//	//delete p;
//
//	////4、指针置为NULL,防止调用delete重复回收导致的异常
//
//	//p=NULL;
//
//
//	//-------------------------------------------------------///
//
//	//申请块内存 使用new int[1000] ，初始化p[0]=10...，释放内存块 delete[]p  
//
//	int *p=new int[100];//申请100个内存
//
//	if (p==NULL)
//	{
//		//申请失败 异常处理
//	}
//
//	//初始化块内存，使用指针数组
//
//	p[0]=100;
//	p[1]=1;
//
//	cout << p[0]<<","<<p[1]<<endl;
//
//	delete []p;//删除块内存，指针前加[]
//
//	p=NULL;
//
//	system("pause");
//	return 0;
//}
