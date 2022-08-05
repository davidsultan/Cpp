#include <iostream>


int main()
{

    char ch[50];
    std::cout << "Enter a character: ";
    std::cin.getline(ch, sizeof(ch));
    std::cout << "ASCII Value of " << ch << " is " << int(ch) << std::endl;

    char cha[50];
    std::cout << "Enter a character: ";
    std::cin >> cha;
    std::cout << "ASCII Value of " << cha << " is " << int(cha) << std::endl;

    if (ch[50] == cha[50]) {
        std::cout << "ASCII Value of " << cha << " is " << "equal to " << ch;
        return 0;
    }

    else if (ch > cha) {
        std::cout << ch << " is greater than " << cha << std::endl;
        std::cout << int(ch) - int(cha) << "is the differents between the two " ;
        return 1;
    }
    else

    {
        std::cout << ch << " is less than " << cha;
    }

    return 0;
}
