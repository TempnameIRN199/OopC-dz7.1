#include "Header.h"
#include "Complex.h"

int main()
{
	setlocale(0, "");
	Complex a, b;
	cout << "������ ����� ���������� �����: ";
	cin >> a;
	cout << "������ ����� ���������� �����: ";
	cin >> b;
	cout << "����: " << a + b << endl;
	cout << "г�����: " << a - b << endl;
	cout << "�������: " << a * b << endl;
	cout << "������: " << a / b << endl;
	system("pause");
	return 0;
}