#include <iostream>
using namespace std;

int main() {
	float a = 0.0f;
	short b = 0;
	cout << "----------Лабораторна робота 3№----------\n" << endl;
	cout << "----------Завдання #1----------\n" << endl;

	cout << "вкажіть дробове число: ";
	cin >> a;
	cout << "вкажіть коротке число: ";
	cin >> b;
	cout << " " << endl;

	cout << "----------Завдання #2----------\n" << endl;
	short ShortRes = a / b + b;
	float FloatRes = a / b + b;

	if (ShortRes == FloatRes)
		cout << ("Результати співпадають!\n") << endl;
	else
		cout << ("Результати не співпадають!\n") << endl;

	cout << "----------Завдання #3----------\n" << endl;
	short NewA = a;

	cout << "Неявне перетворення типів (Short в Float)" << endl;
	cout << "\tЗначення до перетворення: " << a << endl;
	cout << "\tЗначення після перетворення: " << NewA << endl << endl;

	cout << "----------Завдання #4----------\n" << endl;

	float NewB = (float)b;
	cout << "Явне перетворення типів (Float в Short)" << endl;
	cout << "\tЗначення до перетворення: " << b << endl;
	cout << "\tЗначення після перетворення: " << NewB << endl << endl;

	cout << "----------Завдання #5----------\n" << endl;
	bool compare;
	cout << "Результати порівняння\n" << endl;

	compare = a == b;
		cout << "a == b Результат: " << compare << endl;
	compare = a >= b;
		cout << "a >= b Результат: " << compare << endl << endl;

	cout << "----------Завдання #6----------\n" << endl;
	cout << "При перетворенні типів данних float в short " << endl;
	if (NewA == a)
		cout << "обрізання не відбулося!" << endl;
	else cout << "обрізання відбулося!\n" << endl;

	cout << "----------Завдання #7----------\n" << endl;
	cout << "Змінна a займає " << sizeof(a) << " байти" << endl;
	cout << "Змінна b займає " << sizeof(b) << " байти" << endl << endl;

	cout << "----------Завдання #8----------\n" << endl;
	cout << "Адресса змінної a: " << &a << endl;
	cout << "Адресса змінної b: " << &b << endl;
	return 0;
}
