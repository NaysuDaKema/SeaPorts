#pragma once
#include<string>

using namespace std;


class Shipment { //����� ����
protected:
	int loadWeight;//��� �����
	string cargoType;//��� �����
public:
	Shipment();
	~Shipment();
	Shipment(int loadWeight, string cargoType);
	void Descripchion();

};

class Ship :public Shipment { //����� �����
private:
	string vesselName; //�������� ������
	string arrivalDate;//���� ��������
	string arrivalTime;//����� ��������
public:
	Ship();
	Ship(string vesselName, string arrivalDate, string arrivalTime);
	~Ship();
	void Descripchion();
	//void Unloading();//�������� 
	void Punctuality();//������ �� �������, ������� ��� ������ ������

};