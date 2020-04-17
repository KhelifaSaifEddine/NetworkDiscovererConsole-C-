#include <QCoreApplication>
#include <QTextStream>
#include <QStringList>
#include <QProcess>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QStringList param;
    param << "-n" << "2" << "192.168.0.254";
    QProcess::execute("ping",param);
    //return a.exec();
}
