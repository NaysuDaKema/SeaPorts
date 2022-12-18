#pragma once
#include<string>

using namespace std;


class Shipment { //Класс груз
protected:
	int loadWeight;//Вес груза
	string cargoType;//Вид груза
public:
	Shipment();
	~Shipment();
	Shipment(int loadWeight, string cargoType);
	void Descripchion();

};

class Ship :public Shipment { //Класс судно
private:
	string vesselName; //Название суднаэ
	string arrivalDate;//Дата прибытия
	string arrivalTime;//Время прибытия
public:
	Ship();
	Ship(string vesselName, string arrivalDate, string arrivalTime);
	~Ship();
	void Descripchion();
	//void Unloading();//Рагрузка 
	void Punctuality();//Пришел ли вовремя, опоздал или пришел раньше

};