#include<iostream>
using namespace std;

//���� ����ģʽ Ϊ�˴������еĶ��󣬲��ұ�ֻ֤��һ������ʵ��
class ChairMan {
	//���캯������˽�л�
private:
	ChairMan()
	{
		cout << "����������ϯ" << endl;
	}

	//˽�еĿ�������
	ChairMan(const ChairMan&c)
	{

	}

//public:
	static ChairMan* singleMan;

public:
	//�ṩget����������ϯ
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
	//���ױ��ÿ�

	ChairMan *cm1=ChairMan::getInstance();
	//ChairMan::getInstance() = NULL;//������Ϊ��
	ChairMan *cm2 = ChairMan::getInstance();
	if (cm1 == cm2)
	{
		cout << "cm1��cm2��ͬ" << endl;
	}
	else
	{
		cout << "cm1��cm2����ͬ" << endl;
	}

	//ChairMan *cm3 = new ChairMan(*cm2);//��������
	//������ͬ����ַ��ͬ
	//if (cm3 == cm2)
	//{
	//	cout << "cm3��cm2��ͬ" << endl;
	//}
	//else
	//{
	//	cout << "cm3��cm2����ͬ" << endl;
	//}
}

int main()
{
	cout << "main����" << endl;
	test01();//����׶ξ��Ѿ������˾�̬��������ϯ��������main����
	system("pause");
	return EXIT_SUCCESS;
}