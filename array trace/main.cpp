#include <iostream>
#include <cmath>
using namespace std;

int trace(int x[][3],int size){
    int i, s=0,
    for(i=0; i<3; i++)
        s+=x[i][2-i];
    return s;
}
int main()
{
    int a[3][3];
    int c, c2;

    for(c=0; c<3; c++)
        for(c2=0; c2<3; c2++)
        cin>> a[c][c2];

    cout << "Hello world!" << trace(a,3);
    return 0;
}
