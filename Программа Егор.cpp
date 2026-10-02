#include <iostream>
#include <cmath>
#include <Windows.h>
#include <array>

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int choice;

    do {
        std::cout << "\nПРОГРАММА\n";
        std::cout << "1. Игра (угадай число)\n";
        std::cout << "2. Таблица умножения\n";
        std::cout << "3. Вывод делителей числа\n";
        std::cout << "4. Выход!!!\n";
        std::cout << "Выберите программу: ";
        std::cin >> choice;

        switch (choice) {

        case 1: {
