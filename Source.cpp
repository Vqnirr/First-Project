#include <iostream>
int main()
{
    int random_number = std::rand() % 100;
    int max_try = 5;

    for (int i = 0; i < max_try; ++i)
    {
        std::cout << "Mets un nombre entre 1 et 100 pour trouver le nombre mystere : ";

        int number = 0;
        std::cin >> number;
        std::cin.ignore();

    if (number == random_number)
    {
        std::cout << "Bravo, tu as trouve le nombre mystere " << std::endl;
        break;
    }

    else if (number > random_number)
    {
        std::cout << "Trop grand " << std::endl;
    }

    else 
    {
        std::cout << "Trop petit " << std::endl;
    }

        if (i == max_try - 1)
        {
        std::cout << "Perdu " << std::endl;
        }
    }

    std::cin.ignore();
    return 0;
}