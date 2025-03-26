#ifndef MY_OWN_PUSH_BUTTON_H
#define MY_OWN_PUSH_BUTTON_H

#include <QPushButton>

class My_own_push_button : public QPushButton {
    Q_OBJECT
public:
    My_own_push_button(QWidget* in_parent = nullptr, std::string signature = "no signature");
private:
    QWidget* parent {nullptr};
};

#endif // MY_OWN_PUSH_BUTTON_H
