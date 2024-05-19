#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Открываем файл с данными
    ifstream ifs("output.txt");

    // Задаём значение порядкового номера числа и само число
    int n = 1, a;

    // Выполняем цикл, пока оператор >> не найдёт символ, отличающийся от числа
    while (ifs >> a) {
        // Выводим порядковый номер и число
        cout << n++ << ". " << a << endl;
    }

    return 0;
}
