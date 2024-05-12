#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N = 10, number; // Задаем переменные количества цифр N и значение цифры number
    ofstream input("S31.txt"); // открываем файл
    string Numbers[N] {"Ноль", "Один", "Два", "Три", "Четыре", "Пять", "Шесть", "Семь", "Восемь", "Девять"}; // создаем массив с названиями цифр
    for (int i = 0; i < N; i++)
{
    input << Numbers[i] << endl; // записываем массив в файл
}
cout << "Введите число от 0 до 9: "; // просим пользователя ввести цифру от 0 до 9
cin >> number;
while (number >= N) // ставим ограничение сверху
{
    cout << "Введите число от 0 до 9: ";
    cin >> number;
}
while (number < 0) // ставим ограничение снизу
{
    cout << "Введите число от 0 до 9: ";
    cin >> number;
}
    cout << "Вы ввели число: " << Numbers[number] << endl; // выводим название цифры
return 0;
}
