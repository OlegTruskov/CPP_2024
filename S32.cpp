#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите слово: ";
    char* word;
    cin >> word;

    int length;
    length = strlen(word);

    for (int i = 0; i < length; i++) {
        word[i]++;
    }

    cout << word << endl;

    return 0;
}
