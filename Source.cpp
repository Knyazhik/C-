#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Firm {
private:

	float mass;  
	float price;  
	string name;

public:
	
	Firm(string nm, float ms, float pc) {
		setName(nm);
		setMass(ms);
		setPrice(pc);
	}
	

	void setMass(float ms) {
		mass = ms;
	}
	

	void setPrice(float pc) {
		price = pc;
	}


	void setName(string nm) {
		name = nm;
	}

	
	void countBenefit() const {
		cout << "Для фирмы " << name << " выручка за перевозку товаров общей массы " << mass
			<< "т. с тарифом за тонну - " << price << " у.е. получилась " << price * mass << " у.е." << endl;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float massa, price;
	string name;

	cout << "Имя вашей компании - ";
	cin >> name;
	cout << endl;

	cout << "Тариф за перевозку (деньга за тонну) - ";
	cin >> price;
	while (price <= 0) {
		cout << "Тариф не может быть нулевым! -> ";
		cin >> price;
	}
	cout << endl;

	cout << "Вес груза (в тоннах) - ";
	cin >> massa;
	while (massa <= 0) {
		cout << "Мы не перевозим воздух! -> ";
		cin >> massa;
	}
	cout << endl;

	Firm firma(name, massa, price);

	firma.countBenefit();

	return 0;
}