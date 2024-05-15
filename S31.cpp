#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   
    setlocale(LC_ALL, "Russian");

    // Задаем количество цифр и значение цифры
    const int N = 10;
    int number;

    // Открываем файл для записи
    ofstream input("S31.txt");

    // Создаем массив с названиями цифр
    string Numbers[N] = {"Ноль", "Один", "Два", "Три", "Четыре", "Пять", "Шесть", "Семь", "Восемь",
                        "Девять"};

    // Записываем массив в файл
    for (int i = 0; i < N; i++)
    {
        input << Numbers[i] << endl;
    }

    // Просим пользователя ввести цифру от 0 до 9
    cout << "Введите число от 0 до 9: ";
    cin >> number;

    // Проверяем введенное значение
    while (number >= N || number < 0)
    {
        cout << "Введенное число некорректно. Пожалуйста, введите число от 0 до 9: ";
        cin >> number;
    }

    // Выводим название введенной цифры
    cout << "Вы ввели число: " << Numbers[number] << endl;

    return 0;
}
