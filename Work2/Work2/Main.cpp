#include <iostream>
#include <windows.h>
using namespace std;


struct Data {
	
	int num;
	string name;
	double cash;
};
void change_of_data(Data* data1, double balance) {
	
	data1->cash = balance;
};


int main() {
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	Data data;
	double new_balance;
	cout << "¬ведите номер счета: ";
	cin >> data.num;
	cout << "¬ведите им€ владельца: ";
	cin >> data.name;
	cout << "¬ведите баланс: ";
	cin >> data.cash;
	cout << "¬ведите новый баланс: ";
	cin >> new_balance;
	Data* data1 = &data;
	change_of_data(data1, new_balance);
	cout << "¬аш счет: " << data.num << ", " << data.name << ", " << data.cash;
	return 0;
}