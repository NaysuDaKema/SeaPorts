#pragma once
#include"Randomiser.h"
#include <map>


map <int, string> name = {   {0, "Балтийский лидер"},
                             {1, "Капитан Курбатский"},
                             {2, "Григорий Ловцов"},
                             {3, "Кузьма Минин"},
                             {4, "Матрос Позынич"},
                             {5, "Омский-205"},
                             {6, "Петрозаводск"},
                             {7, "Феникс"},
                             {8, "Рязань"},
                             {9, "СМП Новодвинск"},
                             {10, "Tibor Szamueli"},
                             {11, "Юлиус Фучик"},
                             {12, "Жибек Жолы"},
                             
};

string randomName() {
    int mapName = random(0, 12);

    return name.at(mapName);
    
}