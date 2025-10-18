#include "statistics.h"
#include <algorithm>
#include <numeric>
#include <stdexcept>
#include <vector>

using namespace std;

/*!
  @file statistics.cpp
  @brief Реализация функций класса Statistics.
*/

// функция вычисления суммы вектора
double Statistics::sum(vector<double>& data) 
{
    double sum = 0;

    for(int i = 0; i < data.size();i++)
    {
        sum = sum + data[i];
    }

    return sum;
}

// функция вычисления минимального значения вектора
double Statistics::min(vector<double>& data)
{
    double min = data[0];

    for(int i = 1; i<data.size();i++)
    {
        if(data[i] < min)
        {
           min = data[i]; 
        }
    }

    return min;
}

double Statistics::max(vector<double>& data)
{
    double max = data[0];

    for(int i = 1; i<data.size();i++)
    {
        if(data[i] > max)
        {
           max = data[i]; 
        }
    }

    return max;
}


double Statistics:: average(vector<double>& data)
{
    double sum = 0;

    for(int i = 0; i < data.size(); i++)
    {
        sum = sum + data[i];
    }

    return sum/data.size();
}


// Медиана
double Statistics::median(vector<double> &data) 
{
    vector <double> work_data = data;

    sort(work_data.begin(), work_data.end());
    size_t n = work_data.size();

    if (n % 2 == 0)
    {
        return (work_data[n / 2 - 1] + work_data[n / 2]) / 2.0;
    } 
    
    else
    {
        return work_data[n / 2];
    }
}