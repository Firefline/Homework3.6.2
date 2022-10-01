﻿// Homework3.6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    std::string answer, sign;
    double new_num = 1;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> answer;

    if (answer == "yes") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> new_num;
    }

    Counter calc(new_num);

    while (true)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> sign;

        if (sign == "+") {
            calc.plus();
        }
        if (sign == "-") {
            calc.minus();
        }
        if (sign == "=") {
            calc.equal();
        }
        if (sign == "x") {
            std::cout << "До свидания!" << std::endl;
            break;
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.