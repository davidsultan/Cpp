#include <iostream>
using namespace std;

class sonersclass{
    public:
    void coolsaying(int x){

        cout <<"preaching to the believers "<<x*5<<" times a day"<<endl;
    }

};
int main()
{
    sonersclass sonersobject;
    sonersobject.coolsaying(1);
    return 0;
}
