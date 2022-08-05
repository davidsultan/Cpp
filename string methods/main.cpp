#include <iostream>
#include <string>
using namespace std;

int main()
{
// .assign
    string s1("pigeon   ");
    string s2;
    string s3;
    s2=s1;
    s3.assign(s1);
    cout << s1 <<s2 <<s3 <<endl;
// .at
    string st="zxcvbn";
    cout << st.at(0) << endl;
// .length
    cout<<st.length() <<" bytes" <<endl;
    for(int x = 0; x<st.length(); x++) // LIKE ARRAYS
        cout << st.at(x);
    cout<<endl;
// .size
    cout<<st.size() <<" bytes" <<endl;
// .clear
    st.clear();
    cout<< st <<endl;
// .copy
// .append
// .substr
    string s("what do you think pal !");
    cout << s.substr(8,3) << endl;
// .swap
    string one("tangerine ");
    string two("melon ");
    cout<<one<<two<<endl;
    one.swap(two);
    cout<<one<<two<<endl;
// .find   rfind
    string fe("to finish first, first you must finish");
    cout<<fe.find("finish") <<endl;
    cout<<fe.rfind("finish") <<endl;
// .erase
    fe.erase(15);
    cout<<fe <<endl;
// .replace
    s.replace(18,3,"associate");
    cout<< s <<endl;
// .insert
    s.insert(5,"the heaven ");
    cout<< s <<endl;

    return 0;
}
