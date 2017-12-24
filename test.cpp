#include<iostream>
#include <stdlib.h>
using namespace std;//需要引入的命名空间，这里使用了std空间中的cout和cin函数

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
	//int x=0;//int x（0）
	//cout<<"请输入一个数："<<endl;
	//cin>>x;
	//cout<<oct<<x<<endl;//oct 八进制 
	//cout<<dec<<x<<endl;//dec十进制
	//cout<<hex<<x<<endl;//hex十六制进

	//cout<<"请输入一个布尔值（0，1）："<<endl;
	//bool y=false;
	//cin>>y;
	//cout<<boolalpha<<y<<endl;//boolalpha可以输出一个布尔类型的数值
	int arrTest[4]={3,5,1,7};
	bool isMax=false;
	cin >> isMax;
	cout << getMaxOrMin(arrTest,4,isMax) << endl;
	system("pause");
	return 0;


}



