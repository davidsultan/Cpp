#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    for(int c=1; c<=25; c++){
    cout << (rand()% 5)-1 << endl;
    }
    return 0;
}
