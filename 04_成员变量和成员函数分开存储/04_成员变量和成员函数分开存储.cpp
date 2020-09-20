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
	int m_A;//非静态成员变量，属于对象身上
	void func()//非静态成员函数不属于对象身上
	{

	}
	static int m_B;//静态成员变量，属于共享变量，不属于对象身上
	static void func2() {};//静态成员函数也不属于对象身上

};

void test01()
{
	//空类大小为1 每个实例的对象 都有独一无二的地址，char维护这个地址，char的大小为1
	cout << "size of Person =" << sizeof(Person) << endl;
	cout << "size of Person1 =" << sizeof(Person1) << endl;
	cout << "size of Person2 =" << sizeof(Person2) << endl;
}

void test02()
{
	//this 指针指向被调用的成员函数所属的对象
	//编译器会偷偷在成员函数加入一个this指针：func(Person *this)
	Person2 p1;
	p1.func();
	Person2 p2;
	p2.func();

}

int main()
{
	test01();//编译阶段就已经调用了静态变量，主席创建先于main调用
	system("pause");
	return EXIT_SUCCESS;
}