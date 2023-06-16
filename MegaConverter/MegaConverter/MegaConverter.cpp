#include <iostream>

const int NotUsed = system("color E0");

class Converter {
public:
    void convertWeight();
    void convertDegrees();
    void convertLength();
    void convertArea();
};

void Converter::convertWeight()
{
    std::cout << "\n";
    std::cout << "============================================\n";
    std::cout << "Выберите исходную единицу измерения:\n";
    std::cout << "1. Унции\n";
    std::cout << "2. Фунты\n";
    std::cout << "3. Американские тонны\n";
    std::cout << "4. Граммы\n";
    std::cout << "5. Килограммы\n";
    std::cout << "============================================\n";
    std::cout << "Ваш выбор: ";

    int sourceUnit;
    std::cin >> sourceUnit;
    std::cout << "\n";
    std::cout << "============================================\n";
    std::cout << "Выберите целевую единицу измерения:\n";
    std::cout << "1. Унции\n";
    std::cout << "2. Фунты\n";
    std::cout << "3. Американские тонны\n";
    std::cout << "4. Граммы\n";
    std::cout << "5. Килограммы\n";
    std::cout << "============================================\n";
    std::cout << "Ваш выбор: ";

    int targetUnit;
    std::cin >> targetUnit;

    double value;
    std::cout << "\n";
    std::cout << "Введите значение исходной единицы измерения: ";
    std::cin >> value;

    double result = 0.0;

    switch (sourceUnit)
    {
    case 1: // Унции
        switch (targetUnit)
        {
        case 1: // Унции
            result = value;
            break;
        case 2: // Фунты
            result = value / 16;
            break;
        case 3: // Американские тонны
            result = value / 35274;
            break;
        case 4: // Граммы
            result = value * 28.35;
            break;
        case 5: // Килограммы
            result = value / 35.274;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 2: // Фунты
        switch (targetUnit)
        {
        case 1: // Унции
            result = value * 16;
            break;
        case 2: // Фунты
            result = value;
            break;
        case 3: // Американские тонны
            result = value / 2000;
            break;
        case 4: // Граммы
            result = value * 453.592;
            break;
        case 5: // Килограммы
            result = value * 0.453592;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 3: // Американские тонны
        switch (targetUnit)
        {
        case 1: // Унции
            result = value * 35274;
            break;
        case 2: // Фунты
            result = value * 2000;
            break;
        case 3: // Американские тонны
            result = value;
            break;
        case 4: // Граммы
            result = value * 907184.74;
            break;
        case 5: // Килограммы
            result = value * 907.18474;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 4: // Граммы
        switch (targetUnit)
        {
        case 1: // Унции
            result = value / 28.35;
            break;
        case 2: // Фунты
            result = value / 453.592;
            break;
        case 3: // Американские тонны
            result = value / 907184.74;
            break;
        case 4: // Граммы
            result = value;
            break;
        case 5: // Килограммы
            result = value / 1000;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 5: // Килограммы
        switch (targetUnit)
        {
        case 1: // Унции
            result = value * 35.274;
            break;
        case 2: // Фунты
            result = value * 2.20462;
            break;
        case 3: // Американские тонны
            result = value / 907.18474;
            break;
        case 4: // Граммы
            result = value * 1000;
            break;
        case 5: // Килограммы
            result = value;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    default:
        std::cout << "Неверная исходная единица измерения.\n";
        return;
    }

    std::cout << "\nРезультат: " << result << "\n";
}

void Converter::convertDegrees()
{
    std::cout << "\n";
    std::cout << "============================================\n";
    std::cout << "Выберите исходную единицу измерения:\n";
    std::cout << "1. Цельсий\n";
    std::cout << "2. Фаренгейт\n";
    std::cout << "3. Кельвин\n";
    std::cout << "============================================\n";
    std::cout << "Ваш выбор: ";

    int sourceUnit;
    std::cin >> sourceUnit;
    std::cout << "\n";
    std::cout << "============================================\n";
    std::cout << "Выберите целевую единицу измерения:\n";
    std::cout << "1. Цельсий\n";
    std::cout << "2. Фаренгейт\n";
    std::cout << "3. Кельвин\n";
    std::cout << "============================================\n";
    std::cout << "Ваш выбор: ";

    int targetUnit;
    std::cin >> targetUnit;

    double value;
    std::cout << "\n";
    std::cout << "Введите значение исходной единицы измерения: ";
    std::cin >> value;

    double result = 0.0;

    switch (sourceUnit)
    {
    case 1: // Цельсий
        switch (targetUnit)
        {
        case 1: // Цельсий
            result = value;
            break;
        case 2: // Фаренгейт
            result = (value * 9 / 5) + 32;
            break;
        case 3: // Кельвин
            result = value + 273.15;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 2: // Фаренгейт
        switch (targetUnit)
        {
        case 1: // Цельсий
            result = (value - 32) * 5 / 9;
            break;
        case 2: // Фаренгейт
            result = value;
            break;
        case 3: // Кельвин
            result = (value + 459.67) * 5 / 9;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 3: // Кельвин
        switch (targetUnit)
        {
        case 1: // Цельсий
            result = value - 273.15;
            break;
        case 2: // Фаренгейт
            result = (value * 9 / 5) - 459.67;
            break;
        case 3: // Кельвин
            result = value;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    default:
        std::cout << "Неверная исходная единица измерения.\n";
        return;
    }

    std::cout << "\nРезультат: " << result << "\n";
}

void Converter::convertLength()
{
    int sourceUnit, targetUnit;
    double value, result;

    std::cout << "Выберите исходную единицу измерения:\n";
    std::cout << "1. Миллиметры\n";
    std::cout << "2. Сантиметры\n";
    std::cout << "3. Метры\n";
    std::cout << "4. Километры\n";
    std::cout << "5. Футы\n";
    std::cout << "6. Ярды\n";
    std::cout << "7. Мили\n";
    std::cout << "Ваш выбор: ";
    std::cin >> sourceUnit;

    std::cout << "Введите значение: ";
    std::cin >> value;

    std::cout << "Выберите целевую единицу измерения:\n";
    std::cout << "1. Миллиметры\n";
    std::cout << "2. Сантиметры\n";
    std::cout << "3. Метры\n";
    std::cout << "4. Километры\n";
    std::cout << "5. Футы\n";
    std::cout << "6. Ярды\n";
    std::cout << "7. Мили\n";
    std::cout << "Ваш выбор: ";
    std::cin >> targetUnit;

    switch (sourceUnit)
    {
    case 1: // Миллиметры
        switch (targetUnit)
        {
        case 1: // Миллиметры
            result = value;
            break;
        case 2: // Сантиметры
            result = value / 10;
            break;
        case 3: // Метры
            result = value / 1000;
            break;
        case 4: // Километры
            result = value / 1000000;
            break;
        case 5: // Футы
            result = value * 0.00328084;
            break;
        case 6: // Ярды
            result = value * 0.00109361;
            break;
        case 7: // Мили
            result = value / 1609344;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 2: // Сантиметры
        switch (targetUnit)
        {
        case 1: // Миллиметры
            result = value * 10;
            break;
        case 2: // Сантиметры
            result = value;
            break;
        case 3: // Метры
            result = value / 100;
            break;
        case 4: // Километры
            result = value / 100000;
            break;
        case 5: // Футы
            result = value * 0.0328084;
            break;
        case 6: // Ярды
            result = value * 0.0109361;
            break;
        case 7: // Мили
            result = value / 160934.4;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 3: // Метры
        switch (targetUnit)
        {
        case 1: // Миллиметры
            result = value * 1000;
            break;
        case 2: // Сантиметры
            result = value * 100;
            break;
        case 3: // Метры
            result = value;
            break;
        case 4: // Километры
            result = value / 1000;
            break;
        case 5: // Футы
            result = value * 3.28084;
            break;
        case 6: // Ярды
            result = value * 1.09361;
            break;
        case 7: // Мили
            result = value / 1609.344;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 4: // Километры
        switch (targetUnit)
        {
        case 1: // Миллиметры
            result = value * 1000000;
            break;
        case 2: // Сантиметры
            result = value * 100000;
            break;
        case 3: // Метры
            result = value * 1000;
            break;
        case 4: // Километры
            result = value;
            break;
        case 5: // Футы
            result = value * 3280.84;
            break;
        case 6: // Ярды
            result = value * 1093.61;
            break;
        case 7: // Мили
            result = value / 1.609344;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 5: // Футы
        switch (targetUnit)
        {
        case 1: // Миллиметры
            result = value * 304.8;
            break;
        case 2: // Сантиметры
            result = value * 30.48;
            break;
        case 3: // Метры
            result = value * 0.3048;
            break;
        case 4: // Километры
            result = value * 0.0003048;
            break;
        case 5: // Футы
            result = value;
            break;
        case 6: // Ярды
            result = value * 0.333333;
            break;
        case 7: // Мили
            result = value * 0.000189394;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 6: // Ярды
        switch (targetUnit)
        {
        case 1: // Миллиметры
            result = value * 914.4;
            break;
        case 2: // Сантиметры
            result = value * 91.44;
            break;
        case 3: // Метры
            result = value * 0.9144;
            break;
        case 4: // Километры
            result = value * 0.0009144;
            break;
        case 5: // Футы
            result = value * 3;
            break;
        case 6: // Ярды
            result = value;
            break;
        case 7: // Мили
            result = value * 0.000568182;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    case 7: // Мили
        switch (targetUnit)
        {
        case 1: // Миллиметры
            result = value * 1609344;
            break;
        case 2: // Сантиметры
            result = value * 160934.4;
            break;
        case 3: // Метры
            result = value * 1609.344;
            break;
        case 4: // Километры
            result = value * 1.609344;
            break;
        case 5: // Футы
            result = value * 5280;
            break;
        case 6: // Ярды
            result = value * 1760;
            break;
        case 7: // Мили
            result = value;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
    default:
        std::cout << "Неверная исходная единица измерения.\n";
        return;
    }

    std::cout << "Результат: " << result << std::endl;
}
void Converter::convertArea()
{
    std::cout << "\n";
    std::cout << "============================================\n";
    std::cout << "Выберите исходную единицу измерения:\n";
    std::cout << "1. Квадратные дюймы\n";
    std::cout << "2. Квадратные футы\n";
    std::cout << "3. Квадратные ярды\n";
    std::cout << "4. Акры\n";
    std::cout << "5. Квадратные мили\n";
    std::cout << "6. Квадратные метры\n";
    std::cout << "7. Квадратные километры\n";
    std::cout << "8. Гектары\n";
    std::cout << "============================================\n";
    std::cout << "Ваш выбор: ";
    int sourceUnit;
    std::cin >> sourceUnit;
    std::cout << "============================================\n";
    std::cout << "Выберите целевую единицу измерения:\n";
    std::cout << "1. Квадратные дюймы\n";
    std::cout << "2. Квадратные футы\n";
    std::cout << "3. Квадратные ярды\n";
    std::cout << "4. Акры\n";
    std::cout << "5. Квадратные мили\n";
    std::cout << "6. Квадратные метры\n";
    std::cout << "7. Квадратные километры\n";
    std::cout << "8. Гектары\n";
    std::cout << "============================================\n";
    std::cout << "Ваш выбор: ";

    int targetUnit;
    std::cin >> targetUnit;

    double value;
    std::cout << "Введите значение исходной единицы измерения: ";
    std::cin >> value;

    double result = 0.0;

    switch (sourceUnit)
    {
    case 1: // Квадратные дюймы
        switch (targetUnit)
        {
        case 1: // Квадратные дюймы
            result = value;
            break;
        case 2: // Квадратные футы
            result = value / 144;
            break;
        case 3: // Квадратные ярды
            result = value / 1296;
            break;
        case 4: // Акры
            result = value / 6272640;
            break;
        case 5: // Квадратные мили
            result = value / 4014489600;
            break;
        case 6: // Квадратные метры
            result = value / 1550.0031;
            break;
        case 7: // Квадратные километры
            result = value / 1550003100;
            break;
        case 8: // Гектары
            result = value / 15500031;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;

    case 2: // Квадратные футы
        switch (targetUnit)
        {
        case 1: // Квадратные дюймы
            result = value * 144;
            break;
        case 2: // Квадратные футы
            result = value;
            break;
        case 3: // Квадратные ярды
            result = value / 9;
            break;
        case 4: // Акры
            result = value / 43560;
            break;
        case 5: // Квадратные мили
            result = value / 27878400;
            break;
        case 6: // Квадратные метры
            result = value / 10.7639;
            break;
        case 7: // Квадратные километры
            result = value / 10763910.41671;
            break;
        case 8: // Гектары
            result = value / 107639.1041671;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;
        // ...

    case 3: // Квадратные ярды
        switch (targetUnit)
        {
        case 1: // Квадратные дюймы
            result = value * 1296;
            break;
        case 2: // Квадратные футы
            result = value * 9;
            break;
        case 3: // Квадратные ярды
            result = value;
            break;
        case 4: // Акры
            result = value / 4840;
            break;
        case 5: // Квадратные мили
            result = value / 3097600;
            break;
        case 6: // Квадратные метры
            result = value / 1.19599;
            break;
        case 7: // Квадратные километры
            result = value / 1195990.0463;
            break;
        case 8: // Гектары
            result = value / 11959.900463;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;

    case 4: // Акры
        switch (targetUnit)
        {
        case 1: // Квадратные дюймы
            result = value * 6272640;
            break;
        case 2: // Квадратные футы
            result = value * 43560;
            break;
        case 3: // Квадратные ярды
            result = value * 4840;
            break;
        case 4: // Акры
            result = value;
            break;
        case 5: // Квадратные мили
            result = value / 640;
            break;
        case 6: // Квадратные метры
            result = value * 4046.8564224;
            break;
        case 7: // Квадратные километры
            result = value / 247.105381467;
            break;
        case 8: // Гектары
            result = value * 0.40468564224;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;

    case 5: // Квадратные мили
        switch (targetUnit)
        {
        case 1: // Квадратные дюймы
            result = value * 4014489600;
            break;
        case 2: // Квадратные футы
            result = value * 27878400;
            break;
        case 3: // Квадратные ярды
            result = value * 3097600;
            break;
        case 4: // Акры
            result = value * 640;
            break;
        case 5: // Квадратные мили
            result = value;
            break;
        case 6: // Квадратные метры
            result = value * 2589988.110336;
            break;
        case 7: // Квадратные километры
            result = value * 2.589988110336;
            break;
        case 8: // Гектары
            result = value * 258.9988110336;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;

    case 6: // Квадратные метры
        switch (targetUnit)
        {
        case 1: // Квадратные дюймы
            result = value * 1550.0031;
            break;
        case 2: // Квадратные футы
            result = value * 10.7639;
            break;
        case 3: // Квадратные ярды
            result = value * 1.19599;
            break;
        case 4: // Акры
            result = value / 4046.8564224;
            break;
        case 5: // Квадратные мили
            result = value / 2589988.110336;
            break;
        case 6: // Квадратные метры
            result = value;
            break;
        case 7: // Квадратные километры
            result = value / 1000000;
            break;
        case 8: // Гектары
            result = value / 10000;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;

    case 7: // Квадратные километры
        switch (targetUnit)
        {
        case 1: // Квадратные дюймы
            result = value * 1550003100.0062;
            break;
        case 2: // Квадратные футы
            result = value * 10763910.41671;
            break;
        case 3: // Квадратные ярды
            result = value * 1195990.0463;
            break;
        case 4: // Акры
            result = value * 247.105381467;
            break;
        case 5: // Квадратные мили
            result = value / 2.589988110336;
            break;
        case 6: // Квадратные метры
            result = value * 1000000;
            break;
        case 7: // Квадратные километры
            result = value;
            break;
        case 8: // Гектары
            result = value * 100;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        break;

    case 8: // Гектары
        switch (targetUnit)
        {
        case 1: // Квадратные дюймы
            result = value * 10763910.41671;
            break;
        case 2: // Квадратные футы
            result = value * 107639.1041671;
            break;
        case 3: // Квадратные ярды
            result = value * 11959.900463;
            break;
        case 4: // Акры
            result = value * 0.40468564224;
            break;
        case 5: // Квадратные мили
            result = value / 258.9988110336;
            break;
        case 6: // Квадратные метры
            result = value * 10000;
            break;
        case 7: // Квадратные километры
            result = value / 100;
            break;
        case 8: // Гектары
            result = value;
            break;
        default:
            std::cout << "Неверная целевая единица измерения.\n";
            return;
        }
        std::cout << "Результат: " << result << std::endl;
    }
}
int main()
{
    Converter converter;
    int choice = 0;
    while (choice != 5) {
        std::cout << "============================================\n";
        std::cout << "|               ГЛАВНОЕ МЕНЮ               |\n";
        std::cout << "============================================\n";
        std::cout << "* Выберите пункт:                          *\n";
        std::cout << "* 1. Вес                                   *\n";
        std::cout << "* 2. Градусы                               *\n";
        std::cout << "* 3. Длина(Расстояние)                     *\n";
        std::cout << "* 4. Площадь                               *\n";
        std::cout << "* 5. Выход                                 *\n";
        std::cout << "============================================\n";
        std::cout << "Ваш выбор: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            converter.convertWeight();
            break;
        case 2:
            converter.convertDegrees();
            break;
        case 3:
            converter.convertLength();
            break;
        case 4:
            converter.convertArea();
            break;
        case 5:
            std::cout << "Выход из программы.\n";
            break;
        default:
            std::cout << "Неверный выбор. Попробуйте снова.\n";
            break;
        }
    }

    return 0;
}
