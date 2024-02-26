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
    int mainYear = 2010;
    Stadium StadiumDop1;
    Stadium StadiumDop2;

    Stadium Stadium1;
    Stadium1.name = "name1";
    Stadium1.yearBuilt = 2000;
    Stadium1.numberOfCourts = 3;
    Stadium1.sportsTypes = "Коньки, лыжи, плавание";

    Stadium Stadium2;
    Stadium1.name = "name2";
    Stadium1.yearBuilt = 2012;
    Stadium1.numberOfCourts = 5;
    Stadium1.sportsTypes = "Коньки, лыжи, плавание, стрельба, пинг-понг";

    Stadium Stadium3;
    Stadium1.name = "name3";
    Stadium1.yearBuilt = 2008;
    Stadium1.numberOfCourts = 2;
    Stadium1.sportsTypes = "Лыжи, плавание";

    if (mainYear <= Stadium1.yearBuilt)
    {
        Stadium1.name = " ";
        Stadium1.yearBuilt = 0;
        Stadium1.numberOfCourts = 0;
        Stadium1.sportsTypes = " ";

        StadiumDop1.yearBuilt = 2004;
        StadiumDop2.yearBuilt = 2020;
    }
    if (mainYear >= Stadium2.yearBuilt)
    {
        Stadium2.name = " ";
        Stadium2.yearBuilt = 0;
        Stadium2.numberOfCourts = 0;
        Stadium2.sportsTypes = " ";

        StadiumDop1.yearBuilt = 2004;
        StadiumDop2.yearBuilt = 2020;
    }
    if (mainYear >= Stadium3.yearBuilt)
    {
        Stadium3.name = " ";
        Stadium3.yearBuilt = 0;
        Stadium3.numberOfCourts = 0;
        Stadium3.sportsTypes = " ";

        StadiumDop1.yearBuilt = 2004;
        StadiumDop2.yearBuilt = 2020;
    }

    return 0;
}