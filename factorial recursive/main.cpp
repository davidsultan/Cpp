#include <iostream>

using namespace std;

int factorialfinder(int x){
    if(x==0){
        return 1;
    }else{
        return x*factorialfinder(x-1);
    }
}

int main()
{
    int n;
    cin>>n;
    cout << n <<" ! = "<<factorialfinder(n);
    return 0;
}
