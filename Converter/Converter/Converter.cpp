#include <iostream>
#include <fstream>
#include <limits>
#include <chrono>
#include <ctime>
#include <string>

const int NotUsed = system("color E0");

class Calculator
{
public:
    double Add(double a, double b)
    {
        return a + b;
    }

    double Subtract(double a, double b)
    {
        return a - b;
    }

    double Multiply(double a, double b)
    {
        return a * b;
    }

    double Divide(double a, double b)
    {
        if (b == 0)
        {
            std::cout << "Ошибка! Деление на ноль запрещено!" << std::endl;
            return std::numeric_limits<double>::quiet_NaN();
        }
        else
        {
            return a / b;
        }
    }
};

std::string GetCurrentTime() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    char buf[100] = { 0 };
    ctime_s(buf, sizeof(buf), &now_c);
    return buf;
}


void WriteToFile(std::string operation, double a, double b, double result)
{
    std::ofstream history("history.txt", std::ios::app);
    if (history.is_open())
    {
        history << "Время: " << GetCurrentTime() << ", Операция: " << operation << ", цифры/числа: " << a << ", " << b << ", результат: " << result << "\n";
        history.close();
    }
    else
    {
        std::cout << "Невозможно открыть файл";
    }
}

void ClearHistory()
{
    std::ofstream history("history.txt", std::ofstream::out | std::ofstream::trunc);
    history.close();
}

void PrintHistory()
{
    std::ifstream history("history.txt");
    if (history.is_open())
    {
        std::string line;
        while (std::getline(history, line))
        {
            std::cout << line << '\n';
        }
        history.close();
    }
    else
    {
        std::cout << "Невозможно открыть файл.";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Calculator calc;
    double num1, num2, result;
    int choice;

    do
    {
        std::cout << "=========МЕНЮ==========\n";
        std::cout << "Пожалуйста, выберите действие\n";
        std::cout << "========================\n";
        std::cout << "1. Сложение\n";
        std::cout << "========================\n";
        std::cout << "2. Вычитание\n";
        std::cout << "========================\n";
        std::cout << "3. Умножение\n";
        std::cout << "========================\n";
        std::cout << "4. Деление\n";
        std::cout << "========================\n";
        std::cout << "5. Показать историю\n";
        std::cout << "========================\n";
        std::cout << "6. Очистить историю\n";
        std::cout << "========================\n";
        std::cout << "7. Выход\n";
        std::cout << "========================\n";
        std::cout << "Выберите: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
        }

        switch (choice)
        {
        case 1:
            result = calc.Add(num1, num2);
            WriteToFile("Сложение", num1, num2, result);
            std::cout << "Результат: " << result << std::endl;
            break;
        case 2:
            result = calc.Subtract(num1, num2);
            WriteToFile("Вычитание", num1, num2, result);
            std::cout << "Результат: " << result << std::endl;
            break;
        case 3:
            result = calc.Multiply(num1, num2);
            WriteToFile("Умножение", num1, num2, result);
            std::cout << "Результат: " << result << std::endl;
            break;
        case 4:
            result = calc.Divide(num1, num2);
            if (!std::isnan(result)) {
                WriteToFile("Деление", num1, num2, result);
            }
            std::cout << "Результат: " << result << std::endl;
            break;
        case 5:
            PrintHistory();
            break;
        case 6:
            ClearHistory();
            std::cout << "История очищена!\n";
            break;
        case 7:
            std::cout << "Завершение работы калькулятора." << std::endl;
            break;
        default:
            std::cout << "Неизвестная команда!" << std::endl;
            break;
        }

    } while (choice != 7);

    return 0;
}0