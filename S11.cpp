#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    for (int a = 0; a <=100; ++a ) // Задаем цикл, в котором задаем все числа от 0 до 100
    if (a % 3 == 0) // Создаем условие, в котором каждое число проверяется на делится на 3
    cout << a << endl; // Если число делится без остатка на 3, выводим его на экран
    return 0;
}
