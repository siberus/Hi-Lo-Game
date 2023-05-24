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

int getNumber()
{
    int f_number;
    while (true)
    {
       std::cout << "Enter a number from 0 to 100." << std::endl;
       std::cin >> f_number;
       //Проверка на int
       if (std::cin.fail())
       {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Input is invalid. Please try again.\n";
       }
       else
       {
            std::cin.ignore(32767,'\n');
            if ((0<=f_number) && (f_number = 100))
            {
                return f_number;
            }
            else
            {
                std::cout << "Number must be between 0 and 100. Please try again.\n";
            }
       }
    }
    //return f_digit;
}
char getRepeat()
{
    std::cout << "Would you like to play again (y/n)?" << std::endl;
    char f_choise;
    std::cin >> f_choise;
    std::cin.ignore(32767,'\n'); // удаляем лишний балласт
    if (f_choise == 'y' ||f_choise == 'n' )
    {
        return f_choise;
    }
    else
    {
        std::cout << "Oops, that input is invalid. Please try again.\n";
    }

}

void comparation (int p_number, int p_answer)
{
    if (p_number > p_answer)
    {
        std::cout << "Your guess is too high." << std::endl;
    }
    else
    {
        std::cout << "Your guess is too low." << std::endl;
    }
    
}

int main()
{
    std::cout << "Let's play in Hi-Lo game!" << std::endl;
    std::cout << "You have 7 attempts to guess a number from 0 to 100." << std::endl;
    while (true)
    {

        // устанавливаем значение системных часов в качестве стартового числа
        srand(static_cast<unsigned int>(time(0)));
        int answer =  getRandomNumber();
        for (int attempt = 0; attempt <= 7; attempt++)
        {
            std::cout << "Guess #" << attempt << "." << std::endl; 
            int number = getNumber();
            if (answer == number)
            {
                std::cout << "You are win! Number is "<< answer << "!" << std::endl;
                break;
            }
            else
            {
                comparation(number, answer);
            }
        }
        char repeat = getRepeat();
        if (repeat == 'n')
        {
            break;
        }
    }   
    return 0;
}