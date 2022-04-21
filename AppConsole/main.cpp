#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>

#include <QDebug>

#include "firstclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "AppConsole_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    qDebug()<<"run AppConsole..."<<endl;

    FirstClass obj;

    qDebug()<<"obj fun->"<<obj.add(120,3)<<endl;


    return a.exec();
}
