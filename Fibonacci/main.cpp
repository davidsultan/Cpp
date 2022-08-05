#include <iostream>
using namespace std;

int main()
{
    int n,current;
    int c=3;
    int prev1=1;
    int prev2=1;

    cin>>n;

    cout <<n<<". Fibonacci number is at the end.";

    cout<<endl<<endl;

    if (n>2)
        cout<<"1...1...";

    while(c<=n){

            current = prev1+prev2;
            cout<<current<<"...";
            prev2=prev1;
            prev1=current;
            c++;
    }
    switch (n){

        case 1:
            cout <<"1"<<endl;
            break;

        case 2:
            cout << "1...1"<<endl;
            break;
              }
         cout<<endl<<endl;
    return 0;
}
