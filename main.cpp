#include "mainwindow.h"

#include <QApplication>
#include "central.h"

//#include <>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    std::shared_ptr <Central*> central {
        std::make_shared<Central*>(new Central{&w})};
    w.setCentralWidget(*central);

    w.setWindowTitle("TryQWebView");

    w.resize(600, 600); // for test

    w.show();
    return a.exec();
}
