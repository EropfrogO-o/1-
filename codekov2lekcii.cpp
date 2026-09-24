#include <iostream>
#include <cmath>
#include <Windows.h>

#pragma execution_character_set("utf-8")

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int choice;

    // Главный цикл будет работать, пока не введут 9
    do {
        std::cout << "\n0o0 Калькулятор 0o0\n";
        std::cout << "1. Сложить 2 числа\n";
        std::cout << "2. Вычесть первое из второго\n";
        std::cout << "3. Перемножить два числа\n";
        std::cout << "4. Разделить первое на второе\n";
        std::cout << "5. Возвести в степень N первое число\n";
        std::cout << "6. Найти квадратный корень из числа\n";
        std::cout << "7. Найти 1 процент от числа\n";
        std::cout << "8. Найти факториал из числа\n";
        std::cout << "9. Выйти из программы\n";
        std::cout << "Выберите операцию: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            double a, b;
            std::cout << "Введите первое число: "; std::cin >> a;
            std::cout << "Введите второе число: "; std::cin >> b;
            std::cout << "Результат: " << a + b << "\n";
            break;
        }
        case 2: {
            double a, b;
            std::cout << "Введите первое число: "; std::cin >> a;
            std::cout << "Введите второе число: "; std::cin >> b;
            std::cout << "Результат: " << b - a << "\n";
            break;
        }
        case 3: {
            double a, b;
            std::cout << "Введите первое число: "; std::cin >> a;
            std::cout << "Введите второе число: "; std::cin >> b;
            std::cout << "Результат: " << a * b << "\n";
            break;
        }
        case 4: {
            double a, b;
            std::cout << "Введите первое число (делимое): "; std::cin >> a;
            std::cout << "Введите второе число (делитель): "; std::cin >> b;
            if (b != 0) {
                std::cout << "Результат: " << a / b << "\n";
            }
            else {
                std::cout << "Делить на 0 нельзя тупица (и это мягко сказано) -_-\n";
            }
            break;
        }
        case 5: {
            double a, n;
            std::cout << "Введите число: "; std::cin >> a;
            std::cout << "Введите степень N: "; std::cin >> n;
            std::cout << "Результат: " << std::pow(a, n) << "\n";
            break;
        }
        case 6: {
            double a;
            std::cout << "Введите число: "; std::cin >> a;
            if (a >= 0) {
                std::cout << "Результат: " << std::sqrt(a) << "\n";
            }
            else {
                std::cout << "Решил извлечь корень из отрецательного числа!? Ты кто, Эйнштейн?! O_o\n";
            }
            break;
        }
        case 7: {
            double a;
            std::cout << "Введите число: "; std::cin >> a;
            std::cout << "1 процент от числа: " << a / 100.0 << "\n";
            break;
        }
        case 8: {
            int n;
            std::cout << "Введите целое неотрицательное число: ";
            std::cin >> n;
            if (n < 0) {
                std::cout << "ФАКТОРИАЛ ОПРЕДЕЛЕН ТОЛЬКО ДЛЯ НЕОТРИЦАТЕЛЬНЫХ ЧИСЕЛ ДОЛ(мут на несколько секунд) -#-\n";
            }
            else {
                unsigned long long factorial = 1;
                // Цикл for нужен для подсчета факториала
                for (int i = 1; i <= n; ++i) {
                    factorial *= i;
                }
                std::cout << "Факториал: " << factorial << "\n";
            }
            break;
        }
        case 9:
            std::cout << "Выход из программы.\n";
            break;
        default:
            std::cout << "Неверный пункт меню. Попробуйте еще раз (бибубибибуп теперь я киборг 0_+).\n";
            break;
        }

    } while (choice != 9);

    return 0;
}