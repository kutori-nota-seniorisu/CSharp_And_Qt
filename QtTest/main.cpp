#include <QCoreApplication>
#include <QDebug>

extern "C" __declspec(dllexport) int MyAdd(int a, int b);
extern "C" __declspec(dllexport) void MySub(int a, int b, int* c);
extern "C" __declspec(dllexport) void MyGetText(char **p);
extern "C" __declspec(dllexport) void MySetText(char *p);

int main(int argc, char *argv[])
{
	qDebug()<< "Link to add Function is OK!" << MyAdd(3,2) ;

	int c = 10;
	MySub(3,2,&c);
	qDebug()<< "Link to sub Function is OK!" << c;

	MySetText(QString("helloworld").toUtf8().data());

	char* change_t=nullptr;
	MyGetText(&change_t);
	qDebug() << QString(change_t);

	return 0;
}
