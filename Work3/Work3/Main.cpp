#include <iostream>
using namespace std;

struct adres {
	string city;
	string street;
	int num_house;
	int num_apart;
	int index;
};

void print(adres p_adres) {
	cout << "�����: " << p_adres.city << endl
		<< "�����: " << p_adres.street << endl
		<< "����� ����: " << p_adres.num_house << endl
		<< "����� ��������: " << p_adres.num_apart << endl
		<< "������: " << p_adres.index << endl << endl;

}

int main() {
	setlocale(LC_ALL, "rus");
	adres adres_1 = {
	"�������",
	"�������",
	12,
	34, 
	160251
	};
	adres adres_2 = {
	"���������",
	"���� - ����",
	4,
	112,
	162628
	};
	print(adres_1);
	print(adres_2);
	return 0;
}