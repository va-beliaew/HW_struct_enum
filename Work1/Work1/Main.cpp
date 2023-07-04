#include <iostream>
using namespace std;


enum months {
	Jan = 1,
	Feb,
	March,
	April,
	May,
	June,
	July,
	August,
	Sep,
	Oct,
	Nov,
	Dec
};

int main() {
	setlocale(LC_ALL, "Russian");
	months month;
	int mon;
	do {
		cout << "������� ����� ������: ";
		cin >> mon;
		if (mon > 12 || mon < 0) {
			cout << "������������ �����\n";
		}
		else if (mon == 0) {
			cout << "�� ��������!";
		}
		else {
			month = static_cast<months>(mon);
			switch (month) {
			case Jan: cout << "������\n"; break;
			case Feb: cout << "�������\n"; break;
			case March: cout << "����\n"; break;
			case April: cout << "������\n"; break;
			case May: cout << "���\n"; break;
			case June: cout << "����\n"; break;
			case July: cout << "����\n"; break;
			case August: cout << "������\n"; break;
			case Sep: cout << "��������\n"; break;
			case Oct: cout << "�������\n"; break;
			case Nov: cout << "������\n"; break;
			case Dec: cout << "�������\n"; break;
			}
		}
	}
	while (mon != 0);

	return 0;
}