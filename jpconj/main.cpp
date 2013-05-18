#include <QApplication>
#include "jpconjmain.h"
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //    QTranslator qtTranslator;
    //    qtTranslator.load("qt_" + QLocale::system().name(), QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    //    a.installTranslator(&qtTranslator);

    QTranslator myappTranslator;
    myappTranslator.load("jpconj_ar", "./localization");
    a.installTranslator(&myappTranslator);

    jpconjmain w;
    w.show();

    return a.exec();
}