#include <iostream>

#include "deathday.h"
#include "people.h"

using namespace std;

int main()
{
    deathday deathobj(20,04,2053);

    people soner("He is the king ",deathobj);
    soner.printinfo();
    return 0;
}
