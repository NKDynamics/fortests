#ifndef CENTRAL_H
#define CENTRAL_H

#include <QObject>
#include <QWidget>
#include <QGridLayout>
#include <memory> // for smart ptrs
#include <QPushButton>
#include "my_own_push_button.h"
#include <QtWebKitWidgets/QWebView> // remember this
#include <QUrl>
#include <QLineEdit>
#include <QDebug>


//to support httpS
#include <QSslConfiguration>
#include <QSslCertificate>
#include <QSslError>


class Central : public QWidget {
    Q_OBJECT
public:
    explicit Central(QWidget *parent = nullptr);
    void make_widgets ();
private:
    QGridLayout* central_grid {new QGridLayout(this)};
    QLineEdit* search_line {new QLineEdit(this)};
    My_own_push_button* button_first {};
    /*My_own_push_button* button_two {};
    My_own_push_button* button_three {};
    My_own_push_button* button_four {};*/
    QWebView* view {new QWebView (this)};
};

#endif // CENTRAL_H
