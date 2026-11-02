#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

static void print(string print) {
    cout << print << endl;
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(65001);

    double x = 0;
    int k = 0;

    cout << "Введіть число X: ";
    cin >> x;

    print("Оберіть пункт меню:\n");
    cout << "1. Квадратний корінь числа" << endl;
    cout << "2. Квадрат числа" << endl;
    cout << "3. Експонента числа" << endl;
    cout << "Ваш вибір: ";
    cin >> k;

    switch (k) {
    case 1:
        if (x >= 0)
            cout << "Квадратний корінь: " << sqrt(x) << endl;
        break;
    case 2:
        cout << "Квадрат числа: " << pow(x, 2) << endl;
        break;
    case 3:
        cout << "Експонента числа: " << exp(x) << endl;
        break;
    default:
        cout << "Помилка при виборі пункту меню!" << endl;
        break;
    }
    return 0;
}
