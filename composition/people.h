#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "deathday.h"
using namespace std;


class people
{
    public:
        people(string x, deathday dobj);
        void printinfo();
    private:
        string name;
        deathday dateofdeathday;

};

#endif // PEOPLE_H
