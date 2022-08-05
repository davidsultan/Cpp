#include <iostream>

using namespace std;

void printarray(int thearray[], int sizeofarray);

int main()
{
    int soner[4]={52,5,86,45};
    int guclu[5]={54,698,21,45,65};

    printarray(soner, 4);


}

void printarray(int thearray[], int sizeofarray){
    for(int c=0; c<sizeofarray;c++){

        cout << thearray[c] <<endl;
    }

}
