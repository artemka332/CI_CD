#pragma once
#include <vector>
#include <iostream>

using namespace std;

/**
  @file statistics.h
  @brief Объявления функций базовой статистики.

  Содержит класс Statistics с набором статических методов:
  sum, min, max, average, median.
*/

class Statistics
{
public:
    /**
      @brief Вычисляет сумму элементов.
      @param[in] data Вектор чисел.
      @return Сумма элементов.
    */
    static double sum(vector<double>& data);

    /**
      @brief Находит минимальный элемент.
      @param[in] data Непустой вектор чисел.
      @return Минимальное значение.
    */
    static double min(vector<double>& data);

    /**
      @brief Находит максимальный элемент.
      @param[in] data Непустой вектор чисел.
      @return Максимальное значение.
    */
    static double max(vector<double>& data);

    /**
      @brief Среднее арифметическое.
      @param[in] data Непустой вектор чисел.
      @return Среднее арифметическое.
    */
    static double average(vector<double>& data);

    /**
      @brief Медиана.
      @param[in] data Вектор чисел.
      @return Медиана.
    */
    static double median(vector<double>& data);
};