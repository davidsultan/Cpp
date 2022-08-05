#include <iostream>

using namespace std;

int main()
{
    int a[4], b[4], s=0;

    for(int c=0; c<4; c++)
        cin>> a[c];

    for(int c=0; c<4; c++)
        cin>> b[c];

    for(int c=0; c<4; c++)
        s+= a[c] *b[c];

    cout << s << endl;
    return 0;
}
