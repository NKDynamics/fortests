#include "my_own_push_button.h"

My_own_push_button::My_own_push_button(QWidget* in_parent, std::string signature):
    parent{in_parent} {
    this -> setText(signature.c_str());//why
    this -> setStyleSheet("background: #333; color: #fff;");
    this -> setCursor(Qt::PointingHandCursor);
}
