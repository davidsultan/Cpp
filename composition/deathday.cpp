#include <iostream>
#include "deathday.h"
using namespace std;

deathday::deathday(int m, int d, int y)
{
    month=m;
    day=d;
    year=y;
}

void deathday::printdate(){
    cout << month << "/" << day << "/" << year <<endl;
}
