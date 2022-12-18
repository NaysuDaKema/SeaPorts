#pragma once
#include<string>
#include<vector>
using namespace std;

string gluing(int day, int mount) {//функция склейки даты

    vector <string> ivector;
    ivector.push_back(to_string(day));
    ivector.push_back(".");
    ivector.push_back(to_string(mount));

    string date;
    for (int i = 0; i < ivector.size(); i++) {
        date += ivector[i];
    }

    return date;
}
