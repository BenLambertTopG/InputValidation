#include <iostream>

int main()
{

    int Input{};

    std::cout << "Enter a number below 100: ";
    std::cin >> Input;

    while (Input > 99)
    {
        std::cout << "Enter a number below 100: ";
        std::cin >> Input;
    }

    std::cout << "Thank you" << std::endl;

    return 0;
}