#include "lib/SumOfSquaresLib.h"
#include <iostream>
#include <cstdlib>

int validate()
{

    bool errorState = false;
    int count;
    do
    {
        if (errorState == true)
        {
            std::cout << "Please try again" << std::endl;
        }
        std::cin >> count;
        try
        {
            if (std::cin.fail() || count <= 0)
            {
                std::cin.clear();
                std::cin.ignore(2147483647, '\n');
                throw - 1;
            }
            else
            {
                errorState = false;
            }
        }
        catch (int e)
        {
            errorState = true;
        }

    } while (errorState == true);

    return count;
}

int main()
{
    std::cout << "Input number:" << std::endl;
    int count = validate();
    std::cout << "Result: " << SumOfSquaresFunc(count) << std::endl;
    system("pause");
    return 0;
}