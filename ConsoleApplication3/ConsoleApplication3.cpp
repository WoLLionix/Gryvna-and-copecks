#include <iostream>

int main()
{
    int gryvni, copecks;

    std::cout << "Enter the amount of gryvnas: ";
    std::cin >> gryvni;

    std::cout << "Enter the amount of copecks: ";
    std::cin >> copecks;

    gryvni = gryvni + copecks / 100;
    copecks %= 100;

    std::cout << gryvni << " gryvni\t" << copecks << " copecks";
}
