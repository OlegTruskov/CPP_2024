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
    
    char* ptr = word;
    
    for (int i = 0; i < length; i++) {
        *ptr++;
    }

    cout << word << endl;

    return 0;
}
