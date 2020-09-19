#include<iostream>
#include<string>
using namespace std;

class Printer
{
private:
	Printer() { m_count = 0; }
	Printer(const Printer& p){}

public:
	static Printer* getInstance()
	{
		return singlePrinter;
	}

	void printText(string text)
	{
		cout << text << endl;
		m_count++;
		cout << "��ӡ��ʹ�ô���Ϊ"<<m_count << endl;
	}
private:
	static Printer* singlePrinter;
	int m_count;
};

Printer*Printer::singlePrinter = new Printer;

void test01()
{
	Printer *printer = Printer::getInstance();
	printer->printText("��ְ����");
	printer->printText("��ְ����");
	printer->printText("��ְ����");
}

int main()
{
	test01();//����׶ξ��Ѿ������˾�̬��������ϯ��������main����
	system("pause");
	return EXIT_SUCCESS;
}