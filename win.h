#ifndef win_h
#define win_h
#include <QtGui>
class Win:public QWidget // класс окна
{
    Q_OBJECT    // макрос Qt, обеспечивающий корректное создание сигналов и слотов
protected:
    QTextCodec *codec;
    QFrame *frame;
    QLabel *inputLabel;
    QLineEdit *outputEdit; // строчный редактор вывода
    QPushButton *nextButton; // кнопка Следующее
    QPushButton *exitButton; // кнопка Выход
public:
    Win(QWidget *parent = 0); // конструктор
public slots:
    void begin(); // метод начальной настройки интерфейса
    void calc(); // метод реализации вычислений
};


class StrValidator:public QValidator // класс компонента проверки ввода
{
public:
    StrValidator(QObject *parent):QValidator(parent){}
    virtual State validate(QString &str,int &pos)const
    {
        return Acceptable; // метод всегда принимает вводимую строку
    }
};

#endif
