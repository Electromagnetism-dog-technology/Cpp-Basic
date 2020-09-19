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
		cout << "打印机使用次数为"<<m_count << endl;
	}
private:
	static Printer* singlePrinter;
	int m_count;
};

Printer*Printer::singlePrinter = new Printer;

void test01()
{
	Printer *printer = Printer::getInstance();
	printer->printText("离职报告");
	printer->printText("升职报告");
	printer->printText("入职报告");
}

int main()
{
	test01();//编译阶段就已经调用了静态变量，主席创建先于main调用
	system("pause");
	return EXIT_SUCCESS;
}