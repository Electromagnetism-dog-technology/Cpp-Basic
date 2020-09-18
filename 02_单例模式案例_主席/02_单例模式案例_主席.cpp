#include<iostream>
using namespace std;

//需求 单例模式 为了创建类中的对象，并且保证只有一个对象实例
class ChairMan {
	//构造函数进行私有化
private:
	ChairMan()
	{
		cout << "创建国家主席" << endl;
	}

	//私有的拷贝构造
	ChairMan(const ChairMan&c)
	{

	}

//public:
	static ChairMan* singleMan;

public:
	//提供get方法访问主席
	static ChairMan* getInstance()
	{
		return singleMan;
	}
};

ChairMan*ChairMan::singleMan=new ChairMan;
void test01()
{
	/*ChairMan c1;
	ChairMan *c2 = new ChairMan;
	ChairMan *c3 = new ChairMan;*/

	/*ChairMan* cm1=ChairMan::singleMan;
	ChairMan* cm2 = ChairMan::singleMan;

	ChairMan::singleMan = NULL;*/
	//容易被置空

	ChairMan *cm1=ChairMan::getInstance();
	//ChairMan::getInstance() = NULL;//不能置为空
	ChairMan *cm2 = ChairMan::getInstance();
	if (cm1 == cm2)
	{
		cout << "cm1与cm2相同" << endl;
	}
	else
	{
		cout << "cm1与cm2不相同" << endl;
	}

	//ChairMan *cm3 = new ChairMan(*cm2);//拷贝构造
	//名字相同，地址不同
	//if (cm3 == cm2)
	//{
	//	cout << "cm3与cm2相同" << endl;
	//}
	//else
	//{
	//	cout << "cm3与cm2不相同" << endl;
	//}
}

int main()
{
	cout << "main调用" << endl;
	test01();//编译阶段就已经调用了静态变量，主席创建先于main调用
	system("pause");
	return EXIT_SUCCESS;
}