#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // Задаем переменные
    int a = 13, b = 3;

    // Выводим исходные значения
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Делим нацело
    int c = a / b;

    // Находим остаток от деления
    int d = a % b;

    // Выводим результаты
    cout << "Результат деления нацело: " << c << endl;
    cout << "Остаток от деления: " << d << endl;

    return 0;
}
