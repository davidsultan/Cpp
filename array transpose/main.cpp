#include <iostream>
using namespace std;

void transpose(int x[][3], int y[][3], int size){
    int i, j;

    for (i=0; i<size; i++)
        for (j=0; j<size; j++)
            y[i][j]=x[j][i];
}
int main()
{
    int a[3][3], b[3][3];
    int i, j, k;

    cout << "Enter the elements " << endl;

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            cin>> a[i][j];

    cout<<endl;

    transpose(a, b, 3);

    for(i=0; i<3; i++){
    for(j=0; j<3; j++)
        cout << b[i][j] << " " ;
    cout<<endl;
    }

    return 0;
}
