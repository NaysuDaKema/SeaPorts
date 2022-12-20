#pragma once
#include"VesselName.h"
#include"Randomiser.h"
#include"Clasess.h"
#include<iostream>
#include<string>

using namespace std;

Shipment:: ~Shipment()
{

}

Shipment::Shipment() {
	this->loadWeight = RandomWeigt();
	this->cargoType = RandomCargo();
}

Shipment::Shipment(int loadWeight, string cargoType) {
	this->loadWeight = loadWeight;
	this->cargoType = cargoType;
}

void Shipment::Descripchion(){
	cout << "Вес: " << loadWeight << " Тип груза: " << cargoType<<endl;
}

Ship:: ~Ship()
{

}

Ship::Ship(){
	this->vesselName = randomName();
	this->arrivalDate = randomDate();
	this->arrivalTime = randomTime();
}

Ship::Ship(string vesselName, string arrivalDate, string arrivalTime) {
	this->vesselName = vesselName;
	this->arrivalDate = arrivalDate;
}

void Ship::Descripchion() {
	cout<<"Название судна: "<< vesselName << " Дата: " << arrivalDate << " Время: " << arrivalTime <<endl;
}

//void Ship::Punctuality() {
//	int rpun = RandomPunctuality();
//}