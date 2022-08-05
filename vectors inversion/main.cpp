#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of vector !"<<endl;
    cin>>n;

    vector <double> a(n);

    cout << "Input " << n <<" real numbers" << endl;

    for(int c=0; c<n; c++)
        cin>>a[c];

    cout<<"Inverse order :" <<endl;

    for(int c=n-1; c>=0; c--)
        cout<< a[c] <<" ";
    return 0;
}
