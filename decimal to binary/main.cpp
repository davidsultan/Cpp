#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int victim;int x; vector <int> vec;
    cin>>victim;

    while(true){
    x= victim%2;
    vec.push_back(x);
    if(victim/2==0)break;
    victim=victim/2;}

    for(int c=vec.size()-1; c>=0; c--)
        cout<<vec[c];
    return 0;
}
