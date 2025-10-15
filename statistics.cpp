#include "statistics.h"
#include <algorithm>
#include <numeric>
#include <stdexcept>
#include <vector>

using namespace std;

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
