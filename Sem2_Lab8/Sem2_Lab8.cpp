#include <iostream>
#include <string>

using namespace std;

struct Stadium {
    string name;
    int yearBuilt;
    int numberOfCourts;
    string sportsTypes;
};

int main() {
    setlocale(LC_ALL, "ru");

    int mainYear = 2010;
    Stadium StadiumDop1;
    Stadium StadiumDop2;

    Stadium Stadium1;
    Stadium1.name = "name1";
    Stadium1.yearBuilt = 2000;
    Stadium1.numberOfCourts = 3;
    Stadium1.sportsTypes = "Коньки, лыжи, плавание";

    Stadium Stadium2;
    Stadium2.name = "name2";
    Stadium2.yearBuilt = 2012;
    Stadium2.numberOfCourts = 5;
    Stadium2.sportsTypes = "Коньки, лыжи, плавание, стрельба, пинг-понг";

    Stadium Stadium3;
    Stadium3.name = "name3";
    Stadium3.yearBuilt = 2002;
    Stadium3.numberOfCourts = 2;
    Stadium3.sportsTypes = "Лыжи, плавание";

    if (Stadium1.yearBuilt < mainYear)
    {
        cout << "Стадион " << Stadium1.name << " не соответствует требованиям" << endl;

        Stadium1.name = " ";
        Stadium1.yearBuilt = 0;
        Stadium1.numberOfCourts = 0;
        Stadium1.sportsTypes = " ";

        StadiumDop1.yearBuilt = 2004;
        StadiumDop2.yearBuilt = 2020;
    }
    if (Stadium2.yearBuilt < mainYear)
    {
        cout << "Стадион " << Stadium2.name << " не соответствует требованиям" << endl;

        Stadium2.name = " ";
        Stadium2.yearBuilt = 0;
        Stadium2.numberOfCourts = 0;
        Stadium2.sportsTypes = " ";

        StadiumDop1.yearBuilt = 2004;
        StadiumDop2.yearBuilt = 2020;
    }
    if (Stadium1.yearBuilt < mainYear)
    {
        cout << "Стадион " << Stadium3.name << " не соответствует требованиям" << endl;

        Stadium3.name = " ";
        Stadium3.yearBuilt = 0;
        Stadium3.numberOfCourts = 0;
        Stadium3.sportsTypes = " ";

        StadiumDop1.yearBuilt = 2004;
        StadiumDop2.yearBuilt = 2020;
    }

    return 0;
}