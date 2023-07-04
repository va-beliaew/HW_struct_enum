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
		cout << "Введите номер месяца: ";
		cin >> mon;
		if (mon > 12 || mon < 0) {
			cout << "Неправильный номер\n";
		}
		else if (mon == 0) {
			cout << "До свидания!";
		}
		else {
			month = static_cast<months>(mon);
			switch (month) {
			case Jan: cout << "Январь\n"; break;
			case Feb: cout << "Февраль\n"; break;
			case March: cout << "Март\n"; break;
			case April: cout << "Апрель\n"; break;
			case May: cout << "Май\n"; break;
			case June: cout << "Июнь\n"; break;
			case July: cout << "Июль\n"; break;
			case August: cout << "Август\n"; break;
			case Sep: cout << "Сентябрь\n"; break;
			case Oct: cout << "Октябрь\n"; break;
			case Nov: cout << "Ноябрь\n"; break;
			case Dec: cout << "Декабрь\n"; break;
			}
		}
	}
	while (mon != 0);

	return 0;
}