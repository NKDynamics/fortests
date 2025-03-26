#include "central.h"

Central::Central(QWidget *parent)
    : QWidget{parent} {
    this -> setLayout(central_grid);
    make_widgets();

    /*// Получение конфигурации SSL по умолчанию
    QSslConfiguration sslConfig = QSslConfiguration::defaultConfiguration();

    // Пример изменения конфигурации (если необходимо)
    // sslConfig.addCaCertificate(QSslCertificate::fromPath("path/to/certificate.pem"));

    // Установка измененной конфигурации как конфигурации по умолчанию
    QSslConfiguration::setDefaultConfiguration(sslConfig);

    // Проверка конфигурации
    qDebug() << "Default SSL Configuration set.";*/
}

void Central::make_widgets () {

    if (central_grid) {
        central_grid -> addWidget(search_line);
        search_line -> setPlaceholderText("Type here...");
        button_first = new My_own_push_button (this, "Search");
        central_grid -> addWidget(button_first);
        /*button_two = new My_own_push_button (this, "the second_button");
        central_grid -> addWidget(button_two);
        button_three = new My_own_push_button (this, "the third_button");
        central_grid -> addWidget(button_three);
        button_four = new My_own_push_button (this, "the fourth_button");
        central_grid -> addWidget(button_four);*/
        central_grid -> addWidget(view);
        //view -> load(QUrl("http://government.ru"));
        view -> setHtml("<html>"
                      "<head>"
                      "<title>My Site</title>"
                      "</head>"
                      "<body>"
                        "<h1 align=\"center\">HEADER</h1>"
                      "<p align = \"left\">My first paragraph</p>"
                      "<p align = \"left\">My second paragraph</p>"
                      "<p align = \"left\">My third paragraph</p>"
                      "<p align = \"left\">My fourth paragraph</p>"
                      "</body>"
                      "</html>");
        connect(button_first, &My_own_push_button::clicked, this, [this](){
            view -> load(QUrl(search_line -> text()));
        });
    }
}


