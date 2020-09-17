#include<iostream>
using namespace std;

class Person
{
public:

	Person() {
		//m_Age=10;
	}
	static int m_Age;//加入static就是静态成员变量，会共享数据
	//静态成员变量，在类内声明，在类外进行初始化
	int m_A;

	//静态成员函数：
	//不可以访问普通成员变量
	//可以访问静态成员变量
	static void func()
	{
		//m_A = 10;//不能访问,因为m_A不是共享的，当有两个对象调用时，无法区分
		m_Age = 30;
		cout << "func的调用" << endl;
	}

	//普通成员函数，可以访问普通成员变量和静态成员变量
	void myfunc()
	{
		m_A = 100;
		m_Age = 100;
		cout << "普通func的调用" << endl;
	}

	//静态成员变量，也是有权限的
private:
	static int m_other;//私有权限，在类外不能访问


	static void func2()
	{
		cout << "func2的调用" << endl;
	}
};

int Person::m_Age = 0;//类外初始化的实现
int Person::m_other = 10;

void test01()
{
	//1、通过对象访问属性
	Person p1;
	p1.m_Age = 10;
	Person p2;
	p2.m_Age = 20;

	cout << "p1=" << p1.m_Age << endl;
	cout << "p2=" << p2.m_Age << endl;
	//p1.p2共享数据

	//2、通过类名访问属性
	cout << "通过类名访问Age:" << Person::m_Age << endl;
	//cout << "通过类名访问other:" << Person::m_other << endl;//私有权限在类外无法访问

	//静态成员函数调用
	p1.func();
	p2.func();
	Person::func();

	//静态成员函数，也是有权限的
	//Person::func2();


}
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}