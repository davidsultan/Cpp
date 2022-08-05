#include <iostream>

using namespace std;

int main()
{
    int the, n, m, ma, arr[3][4];

    for(int c =0; c<3; c++)
        for(int c2 =0; c2<4; c2++)
        cin>>arr[c][c2];

    ma=arr[0][0]; m=0; n=0;

    for(int c =0; c<3; c++)
        for(int c2 =0; c2<4; c2++)
        if(arr[c][c2] > ma){
            ma=arr[c][c2];
            m=c;
            n=c2;
            }

    cout << "The max element is "<<ma << endl;
    cout << "i have found it !!!"<<m <<" th row " <<n<<" th column" << endl;
    return 0;
}
