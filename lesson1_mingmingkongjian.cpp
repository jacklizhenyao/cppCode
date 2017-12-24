#include <iostream>
#include <stdlib.h>
#include <string>//使用string类型的函数必须引string库函数

using namespace std;



namespace test_a{

	//不能直接在空间中使用输入或者输出函数
	void printTest_a(void){
		int i=0;
		cin >> i ;//输入函数不能使用换行endl
		cout << "come form test_a" << endl;
	}

	int test(int i){
		return i;
	}
}

namespace test_b{

	//cin>>'come form test_b'>>endl;

	string test(){
		return "call test() of test_b";
	}
}

namespace c{

	string test(void){
		return "call test() of test_c";
	}
}

using namespace c;//使用using 关键字引用namespace，必须放在命名空间后面，否则会找不到命名空间

int main(void){
	//1、不声明命名空间 直接使用::调用test_a test_b中的成员
	cout << "1、不声明命名空间 直接使用::调用test_a test_b中的成员" << endl;

	int i=0;
	cin >> i ;
	
	cout << test_a::test(i) << endl;
	cout << test_b::test() << endl;

	//2、引入命名空间 直接调用test_c 中的成员
	cout << "2、引入命名空间 直接调用test_c 中的成员" << endl;
	cout << test() << endl;
	system("pause");
	return 0;
}