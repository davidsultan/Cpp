#include <iostream>

using namespace std;

int main()
{
    int x=1;//x can be 2
    int y;
    int f;

    cout <<"enter a number "<<endl;
    cin >> y;
    f=y;

    while(x!=y){

        y=y-1;
        f=f*y;
        cout << f <<endl;

    }
    cout<<f<<"  done ! ";

    return 0;
}


