#include "Header.h"
#include "Complex.h"

int main()
{
	setlocale(0, "");
	Complex a, b;
	cout << "Введіть перше комплексне число: ";
	cin >> a;
	cout << "Введіть друге комплексне число: ";
	cin >> b;
	cout << "Сума: " << a + b << endl;
	cout << "Різниця: " << a - b << endl;
	cout << "Добуток: " << a * b << endl;
	cout << "Частка: " << a / b << endl;
	system("pause");
	return 0;
}