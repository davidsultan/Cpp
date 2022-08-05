#include <iostream>
using namespace std;
main(){
     int n = 3;

     while (n >= 0){
    cout << n * n << " ";
        --n;
      }
      cout << "["<< n <<"]"<<endl ;
       while (n < 4)    cout << ++n << " ";
        cout << "["<< n <<"]"<<endl ;
         do    cout << (n /= 2) << " ";
         while (n > 0);

         return 0;

         }
