#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    int number, count = 0;

    cout << "Введіть число: ";
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    for (; number > 0; count++) {
        number /= 10;  
    }

    cout << "Кількість цифр: " << count << endl;

    return 0;
}
