  #include <iostream>
  using namespace std;

int main(){

     int n=5;

     cout<< "n= " << n << endl;
     cout<< "&n= " << &n << endl;
     cout<<sizeof(int)<<endl;

     int &r=n; //r is a reference for n

     cout << n << " " << r <<endl;
     --n;
     cout << n << " " << r <<endl;
     r*=2;
     cout << n << " " << r <<endl;
     cout << &n << " " << &r <<endl;

     return 0;
 }
