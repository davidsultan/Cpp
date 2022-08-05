#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch='A';

    ofstream folder("letters.txt");

    for (int c=1; c<=29; c++){

        folder << c << "   "<< ch << endl;
        ch++;}

    folder.close();
    return 0;
}
