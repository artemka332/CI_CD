# Statistics Library

## Описание
Библиотека для выполнения статистических расчетов над набором данных.

## Функциональность
- Вычисление суммы элементов
- Поиск минимального значения
- Поиск максимального значения
- Вычисление среднего арифметического
- Вычисление медианы

## Использование

```cpp
#include "statistics.h"
#include <vector>

int main()
{
    std::vector<double> data = {1.0, 2.0, 3.0, 4.0, 5.0};
    
    double sum = Statistics::sum(data);
    double min = Statistics::min(data);
    double max = Statistics::max(data);
    double avg = Statistics::average(data);
    double med = Statistics::median(data);
    
    return 0;
}

```

## Сборка

cmake .
cmake --build .

## Запуск тестов

ctest --output-on-failure



### Описание методов

#### `static double sum(vector<double>& data)`
Вычисляет сумму всех элементов в наборе данных.

#### `static double min(vector<double>& data)`
Находит минимальное значение в наборе данных.

#### `static double max(vector<double>& data)`
Находит максимальное значение в наборе данных.

#### `static double average(vector<double>& data)`
Вычисляет среднее арифметическое значение всех элементов в наборе данных.

#### `static double median(vector<double>& data)`
Вычисляет медиану набора данных.