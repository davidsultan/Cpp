#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
     cout << "myvector contains: ";
     for(int i=0;i< v.size();i++)
         cout << v[i] << "  ";
     cout <<endl;
}
int main()
{
    vector<int> myvector (3,100);
    printVector(myvector);

    myvector.insert ( myvector.begin() , 200 );//inserts 200 as the 0th element
    printVector(myvector);

    myvector.insert (myvector.begin(),3,300);//inserts three 300 as 0th, 1st and 3th element
    printVector(myvector);

    vector<int> anothervector (2,400);//declares anothervector with two elements with values 400

    myvector.insert(myvector.begin()+2,anothervector.begin(),anothervector.end());//inserts anothervector drom beginning to the end to position 2
    printVector(myvector);

    int myarray [] = { 501,502,503 };

    myvector.insert (myvector.begin(), myarray, myarray+3); //inserts first three elements of myarray to the beginning of myvector
    printVector(myvector);

    myvector.erase(myvector.begin()+2); //erases the element with index 4
    printVector(myvector);

    myvector.erase(myvector.begin()+3,myvector.end()-2);  //erases the range starting from 3th(index) element, ending 2 elements before the end
    printVector(myvector);

   return 0;
}

