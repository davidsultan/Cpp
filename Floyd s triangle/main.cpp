#include <iostream>

using namespace std;

int main()
{
    int line,n=1;
    cin>>line;

    for(int c = 1; c<=line; c++){

        for(int c2 =1; c2<=c; c2++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
}
