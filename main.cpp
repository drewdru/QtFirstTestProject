#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <fstream>
#include <QDir>
#include "programsettings.h"
#include <QMessageBox>

ProgramSettings   programsettings;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();       
    //w.showFullScreen();

    programsettings.SetFromSaveFile();

    return a.exec();
}
