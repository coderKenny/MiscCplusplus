#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    bool ok = false;
    int dblMarkOne;
    std::cout << "Enter a number" << std::endl;
    while (!ok)
    { 
        std::cin >> dblMarkOne;

        if(!std::cin.fail() && (std::cin.peek()==EOF || std::cin.peek()=='\n'))
        {
            ok = true;
			cout << "OK";
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(256,'\n');
            std::cout << "Error, Enter a number" << std::endl;
        }
    }
}