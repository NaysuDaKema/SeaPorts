#pragma once
#include"Randomiser.h"
#include <map>


map <int, string> name = {   {0, "���������� �����"},
                             {1, "������� ����������"},
                             {2, "�������� ������"},
                             {3, "������ �����"},
                             {4, "������ �������"},
                             {5, "������-205"},
                             {6, "������������"},
                             {7, "������"},
                             {8, "������"},
                             {9, "��� ����������"},
                             {10, "Tibor Szamueli"},
                             {11, "����� �����"},
                             {12, "����� ����"},
                             
};

string randomName() {
    int mapName = random(0, 12);

    return name.at(mapName);
    
}