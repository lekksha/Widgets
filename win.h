#ifndef WIN_H
#define WIN_H

#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QObject>
#include <QPushButton>
#include <QValidator>
#include <QWidget>

class Win : public QWidget
{
protected:
    // QTextCodec *Codec
    QFrame *frame;
    QLabel *inputLabel;
    QLineEdit *inputEdit;
    QLabel *outputLabel;
    QLineEdit *outputEdit;
    QPushButton *nextButton;
    QPushButton *exitButton;
public:
    Win(QWidget *parent = 0);
public slots:
    void begin();   // Для начальной настройки интерфейса
    void calc();    // Метод реализации вычислений
};

class StrValidator: public QValidator // класс компонента проверки ввода
{
public:
    StrValidator(QObject *parent):QValidator(parent){}
    virtual State validate(QString &str,int &pos)const  // const указывает на то, что этот метод не изменяет состояние объекта StrValidator.
    {
        return Acceptable; // метод всегда принимает вводимую строку
    }
};

#endif // WIN_H


