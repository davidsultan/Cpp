#include <iostream>
#include <string>
using namespace std;

class sonersclass{
    public:
        void setname(string x){
        name = x;
        }
        string getname(){
        return name;
        }
    private:
        string name;
};

int main()
{
    sonersclass sonersobject;
    sonersobject.setname("heck are we");
    cout << sonersobject.getname();
    return 0;
}
