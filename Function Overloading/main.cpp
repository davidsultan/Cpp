#include <iostream>

using namespace std;

void printnumber(int x){
    cout<<"integer "<<x <<endl;
}

void printnumber(float x){
    cout<<"float "<<x <<endl;
}

int main()
{
    int a=33;
    float b=3.3;

    printnumber(a);
    printnumber(b);

    return 0;
}
