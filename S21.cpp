#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int A, B, C;

    cout << "Введите число A = ";
    cin >> A;

    cout << "Число B должно быть больше числа A" << endl
         << "Введите число B = ";
    cin >> B;

    // Ставим ограничение для ввода числа B
    while (B < A) {
        cout << "Число B должно быть больше числа A" << endl;
        cin >> B;
    }

    ofstream output("output.txt");

    // Цикл для вывода чисел от A до B, умноженных на 3
    for (int i = A; i <= B; i++) {
        output << i * 3 << endl;
    }

    return 0;
}
