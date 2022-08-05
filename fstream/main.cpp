#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream afile;
    afile.open("readme.txt");
    afile << "iam cantaloupe!" << endl;
    afile.close();
    return 0;
}
