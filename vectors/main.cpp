#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a;
    int n, c =0;

    while(true){
        cout<<"Enter the " << c <<". element ! ";
        cin>>n;
        if(n==0) break;
        a.push_back(n);
        c++;
    }


    cout/*<<"Inverse order :" */<<endl;

    for(int c=0; c<a.size(); c++)
        cout<< a[c] <<" ";

    return 0;
}
