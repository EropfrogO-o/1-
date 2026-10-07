##include <iostream>
#include <windows.h>
void Ymno()
{
    int answers[10][10];

    for (int i = 1; i <= 10; i++)
    {
        for (int k = 1; k <= 10; k++)
        {
            answers[i - 1][k - 1] = i * k;
            std::cout << i << "x" << k << "=" << answers[i - 1][k - 1] << std::endl;
        }
    }
}
void Vivod()
{
    std::cout << "Введите целое положительное число:"

}
int main() 
{
    int choice = 0;
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

        std::cout << "ПРОГРАММА" << std::endl;//<< std::endl и \n это одно и тоже
        std::cout << "1. Таблица умножения\n";
        std::cout << "2. Вывод делителей числа\n";
        std::cout << "3. Выход!!!\n";

        std::cin >> choice;
        std::cout << "Ты выбрал: " << choice;
        if (choice == 1)
        {
            std::cout << " Таблица умножения\n";
            Ymno();
        }
        if (choice == 2)
        {
            std::cout << " Вывод делителей числа\n";
            Vivod();
        }
        else
        {
            std::cout << "Неверный выбор\n";
        }
}
