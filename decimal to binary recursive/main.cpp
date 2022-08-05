#include <iostream>

using namespace std;

int bin(int k){
    if(k<7)
        bin(k+1);
    cout << k << endl;
}
int main(){
    int x;
    cin>>x;
bin(x);

    return 0;
}
