#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
      int a = 13, b = 3; // Задаем переменные
    cout << "a = " << a << endl << "b = " << b << endl;
            int c = a / b; // Делим нацело
            int d = a % b; // Находим остаток от деления
    cout << "Результат деления нацело: " << c << endl << "Остаток от деления: " << d;
return 0;
}
