#include<iostream>
#include"Clasess.h"
#include"Methods.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	/*for (int i = 0; i < 10; i++) {
		Shipment* shipment = new Shipment();
		shipment->Descripchion();
	}*/
	for (int i = 0; i < 10; i++) {
		Ship* ship = new Ship();
		ship->Descripchion();
	}

}
