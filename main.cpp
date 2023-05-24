#include <iostream>
#include <cstdlib>
#include <ctime>

//Функция генерирует рандомное число между значениями 0 и 100.
int getRandomNumber()
{
    int min = 0;
    int max = 100;
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}



int main()
{
    std::cout << "Let's play in Hi-Lo game!" << std::endl;
    std::cout << "You have 7 attempts to guess a number from 0 to 100." << std::endl;
    while (true)
    {
        // устанавливаем значение системных часов в качестве стартового числа
        srand(static_cast<unsigned int>(time(0)));
        int digit =  getRandomNumber();
        for (int attempt = 0; attempt <= 7; attempt++)
        {
            //Функция ввода числа

        }
        

    }
    
        
    return 0;
}