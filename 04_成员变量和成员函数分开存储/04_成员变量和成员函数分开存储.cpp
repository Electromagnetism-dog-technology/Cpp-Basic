#include<iostream>
#include<string>
using namespace std;

class Person {

};

class Person1 {
public:
	int m_A;
};

class Person2 {
public:
	int m_A;//�Ǿ�̬��Ա���������ڶ�������
	void func()//�Ǿ�̬��Ա���������ڶ�������
	{

	}
	static int m_B;//��̬��Ա���������ڹ�������������ڶ�������
	static void func2() {};//��̬��Ա����Ҳ�����ڶ�������

};

void test01()
{
	//�����СΪ1 ÿ��ʵ���Ķ��� ���ж�һ�޶��ĵ�ַ��charά�������ַ��char�Ĵ�СΪ1
	cout << "size of Person =" << sizeof(Person) << endl;
	cout << "size of Person1 =" << sizeof(Person1) << endl;
	cout << "size of Person2 =" << sizeof(Person2) << endl;
}

void test02()
{
	//this ָ��ָ�򱻵��õĳ�Ա���������Ķ���
	//��������͵͵�ڳ�Ա��������һ��thisָ�룺func(Person *this)
	Person2 p1;
	p1.func();
	Person2 p2;
	p2.func();

}

int main()
{
	test01();//����׶ξ��Ѿ������˾�̬��������ϯ��������main����
	system("pause");
	return EXIT_SUCCESS;
}