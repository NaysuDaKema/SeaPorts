#pragma once
#include"Additional.h"
#include <random>
#include <stdlib.h> // ����� ��� ������ ������� rand(), srand()
#include <time.h> // ����� ��� ������ ������� time()

using namespace std;
std::random_device rd;
std::mt19937 gen(rd());

int random(int low, int high)//������ �������
{
    uniform_int_distribution<> dist(low, high);
    return dist(gen);
}

int randomDay() {//����������� ���
    srand(time(NULL));
    int day = random(1, 31);

    return day;
}

int randomMonth() {//������������ ������
    srand(time(NULL));
    int month = random(1, 12);
    return month;
}

string randomDate() {//������ ����
    int day = randomDay(), month = randomMonth();
    string date = gluing(day, month);

    return date;

}

string randomTime() {//������ ������� 
    srand(time(NULL));
    int minutes = random(0, 23), seconds = random(0, 59);
    vector <string> ivector;
    ivector.push_back(to_string(minutes));
    ivector.push_back(":");
    ivector.push_back(to_string(seconds));

    string time;
    for (int i = 0; i < ivector.size(); i++) {
        time += ivector[i];
    }

    return time;
}

int RandomWeigt() {//������������ ����
    int loadWeight, a = 5000, b = 50000, propse;
    return loadWeight = random(a, b);
}

string RandomCargo() {//������������ ���� �����
    int propse, a = 0, b = 2;
    string cargoType;
    propse = random(a, b);
    if (propse == 0) {
        cargoType = "������� ����";
    }
    else if (propse == 1) {
        cargoType = "������ ����";
    }
    else {
        cargoType = "���������";
    }
    return cargoType;
}