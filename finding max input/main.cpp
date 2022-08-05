#include <iostream>
#include <vector>
using namespace std;

float greatest(vector <float> x){
    float m=x[0];

    for(int c=0; c < x.size(); c++)
        m>x[c]?:m=x[c];
    cout <<"The greatest number is "<< m << endl;
}
int main()
{
    vector <float> inputs;

    while(true){
        float n;
        cin>>n;
        if (n==-9)break;
        inputs.push_back(n);
    }
    greatest(inputs);
    return 0;
}
