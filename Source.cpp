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
		cout << "��� ����� " << name << " ������� �� ��������� ������� ����� ����� " << mass
			<< "�. � ������� �� ����� - " << price << " �.�. ���������� " << price * mass << " �.�." << endl;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float massa, price;
	string name;

	cout << "��� ����� �������� - ";
	cin >> name;
	cout << endl;

	cout << "����� �� ��������� (������ �� �����) - ";
	cin >> price;
	while (price <= 0) {
		cout << "����� �� ����� ���� �������! -> ";
		cin >> price;
	}
	cout << endl;

	cout << "��� ����� (� ������) - ";
	cin >> massa;
	while (massa <= 0) {
		cout << "�� �� ��������� ������! -> ";
		cin >> massa;
	}
	cout << endl;

	Firm firma(name, massa, price);

	firma.countBenefit();

	return 0;
}