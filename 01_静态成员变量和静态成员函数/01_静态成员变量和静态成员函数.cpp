#include<iostream>
using namespace std;

class Person
{
public:

	Person() {
		//m_Age=10;
	}
	static int m_Age;//����static���Ǿ�̬��Ա�������Ṳ������
	//��̬��Ա��������������������������г�ʼ��
	int m_A;

	//��̬��Ա������
	//�����Է�����ͨ��Ա����
	//���Է��ʾ�̬��Ա����
	static void func()
	{
		//m_A = 10;//���ܷ���,��Ϊm_A���ǹ���ģ����������������ʱ���޷�����
		m_Age = 30;
		cout << "func�ĵ���" << endl;
	}

	//��ͨ��Ա���������Է�����ͨ��Ա�����;�̬��Ա����
	void myfunc()
	{
		m_A = 100;
		m_Age = 100;
		cout << "��ͨfunc�ĵ���" << endl;
	}

	//��̬��Ա������Ҳ����Ȩ�޵�
private:
	static int m_other;//˽��Ȩ�ޣ������ⲻ�ܷ���


	static void func2()
	{
		cout << "func2�ĵ���" << endl;
	}
};

int Person::m_Age = 0;//�����ʼ����ʵ��
int Person::m_other = 10;

void test01()
{
	//1��ͨ�������������
	Person p1;
	p1.m_Age = 10;
	Person p2;
	p2.m_Age = 20;

	cout << "p1=" << p1.m_Age << endl;
	cout << "p2=" << p2.m_Age << endl;
	//p1.p2��������

	//2��ͨ��������������
	cout << "ͨ����������Age:" << Person::m_Age << endl;
	//cout << "ͨ����������other:" << Person::m_other << endl;//˽��Ȩ���������޷�����

	//��̬��Ա��������
	p1.func();
	p2.func();
	Person::func();

	//��̬��Ա������Ҳ����Ȩ�޵�
	//Person::func2();


}
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}