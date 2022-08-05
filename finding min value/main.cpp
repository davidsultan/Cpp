#include <iostream>
using namespace std;

int min(int m,int n){
    return (m<n?m:n);
}

int min4(int a, int b, int c, int d){// ASKED AT FINAL C++ EXAM (3.1.2019)
    int x = min(a,b);
    int y = min(x,c);
    int z = min(y,d);

    return z;
}
int main(){

    cout<<min4(5,6,7,8)<<endl;

    return 0;
}
