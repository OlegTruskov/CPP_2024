#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 5; // переменная целого типа
    float b = 2.5; // переменная с плавающей точкой
    char c = 'C'; // символьная переменная
    bool d = true; // логическая переменная

    cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << "d = " << d << endl;
    float e = a + b; // сложение
    float f = a - b; // вычитание
    float g = a * b; // умножение
    float h = a / b; // деление

    cout << "Результат сложения равен: " << e << endl << "Результат вычитания равен: " << f << endl << "Результат умножения равен: " << g << endl << "Результат деления равен: " << h;
    return 0;
}
