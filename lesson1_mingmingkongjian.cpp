#include <iostream>
#include <stdlib.h>
#include <string>//ʹ��string���͵ĺ���������string�⺯��

using namespace std;



namespace test_a{

	//����ֱ���ڿռ���ʹ����������������
	void printTest_a(void){
		int i=0;
		cin >> i ;//���뺯������ʹ�û���endl
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

using namespace c;//ʹ��using �ؼ�������namespace��������������ռ���棬������Ҳ��������ռ�

int main(void){
	//1�������������ռ� ֱ��ʹ��::����test_a test_b�еĳ�Ա
	cout << "1�������������ռ� ֱ��ʹ��::����test_a test_b�еĳ�Ա" << endl;

	int i=0;
	cin >> i ;
	
	cout << test_a::test(i) << endl;
	cout << test_b::test() << endl;

	//2�����������ռ� ֱ�ӵ���test_c �еĳ�Ա
	cout << "2�����������ռ� ֱ�ӵ���test_c �еĳ�Ա" << endl;
	cout << test() << endl;
	system("pause");
	return 0;
}