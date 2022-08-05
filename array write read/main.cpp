#include <iostream>
using namespace std;
void read_array(int ar[10])
{  int i;
   for (i=0; i<10; i++)
      cin >> ar[i];
}
int main()
{  int a[10], i;
   read_array(a);
   for (i=0; i<10; i++)
      cout<< a[i]<< " ";
   return 0;
}
