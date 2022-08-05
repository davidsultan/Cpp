#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c,delta,x1,x2;
    //ax2+bx+c=0
    cout << "Enter the a,b,c values !" << endl;

    cin>>a>>b>>c;

    delta=b*b-4*a*c;

    if(delta<0)
        cout<<"The roots are not in reel set\n";
    else if(delta==0){
        x1=x2=-b/2*a;
        cout<<"Two equal roots: x1 = x2 = "<<x1;
    }else if(delta>0){
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;
        cout<<"Two distint roots :\nx1 = "<<x1<<endl<<"x2 = "<<x2;

    }
    return 0;
}
