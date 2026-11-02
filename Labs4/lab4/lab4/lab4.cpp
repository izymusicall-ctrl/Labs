#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(65001);
    double x = 0;
    double f = 0;

    cout << "Введіть аргумент X: ";
    cin >> x;

    if (0 <= x && x <= 4) {
        f = pow(2, x) - (1.25 * sin(sqrt(x)));
        cout << "Умова перша прийнята!\n" << endl;
    }
    else if (-2 <= x && x < -1) {
        f = pow(2, x + 1) + 1;
        cout << "Умова друга прийнята!\n" << endl;
    }
    else if (-1 <= x && x < 0) {
        f = pow(x, 2) + 1;
        cout << "Умова третя прийнята!\n" << endl;
    }

    cout << "f = " << f << endl;
    return 0;
}