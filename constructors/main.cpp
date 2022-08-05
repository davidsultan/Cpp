#include <iostream>
#include <string>
using namespace std;

class sonersclass{
    public:
        sonersclass(string z){
            setname(z);
        }
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
    sonersclass sonersobject("who killed you ");
    cout << sonersobject.getname();

    sonersclass son("tell me");
    cout<<son.getname();
    return 0;
}
