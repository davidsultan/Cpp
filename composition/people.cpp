#include "people.h"
#include <iostream>
#include "deathday.h"
using namespace std;

people::people(string x, deathday dobj)
: name(x), dateofdeathday(dobj)
{
{

void people::printinfo()
{
    cout <<name <<" will die about on ";
    dateofdeathday.printdate();
}
