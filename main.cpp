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
    while (true)
    {
        // устанавливаем значение системных часов в качестве стартового числа
        srand(static_cast<unsigned int>(time(0)));
        int digit =  getRandomNumber();

    }
    
        
    return 0;
}