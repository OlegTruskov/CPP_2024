#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string word;
    cout << "Введите слово: ";
    cin >> word;

    for (int i = word.size() - 1; i >= 0; i--) {
        cout << word[i];
    }

    return 0;
}
