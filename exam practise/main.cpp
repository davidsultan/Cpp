#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     int i, j, k =0;
     for(i=1; i<5; i++){

        j=5;
        do{
            ++k;j--;
        }while(j >= i);
     }

     cout<<i<<endl<<j<<endl<<k;
    return 0;
}
