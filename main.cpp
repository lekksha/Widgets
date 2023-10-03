#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Создаем главное окно
    QWidget window;
    window.setWindowTitle("Калькулятор квадрата числа");
    window.setGeometry(100, 100, 400, 150);

    // Создаем поле ввода числа
    QLineEdit *inputLineEdit = new QLineEdit(&window);
    inputLineEdit->setPlaceholderText("Введите число");
    inputLineEdit->setGeometry(20, 20, 150, 30);

    // Создаем кнопку для вычисления квадрата
    QPushButton *calculateButton = new QPushButton("Вычислить квадрат", &window);
    calculateButton->setGeometry(180, 20, 150, 30);

    // Создаем метку для вывода результата
    QLabel *resultLabel = new QLabel(&window);
    resultLabel->setGeometry(20, 70, 150, 30);

    // Подключаем обработчик события нажатия на кнопку
    QObject::connect(calculateButton, &QPushButton::clicked, [&](){
        QString inputText = inputLineEdit->text();
        bool ok;
        double number = inputText.toDouble(&ok);

        if (ok) {
            double square = number * number;
            resultLabel->setText("Квадрат числа: " + QString::number(square));
        } else {
            resultLabel->setText("Ошибка ввода");
        }
    });

    window.show();

    return app.exec();
}
