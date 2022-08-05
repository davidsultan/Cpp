#include <iostream>

using namespace std;

int main()
{
    int x;
    int f=1;

    cout<<"enter a number to reckon factorial"<<endl;
    cin>>x;

    for(int c=1; c<=x; c++ ){
        f=f*c;
        cout <<f<<endl<<endl;
            }

    cout << f<<" !" << endl;
    return 0;
}
