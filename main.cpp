#include <iostream>
#include "statistics.h"

using namespace std;

int main() 
{
    vector<double> numbers = { 11.0, 2.3, 7.9, 4.4, 8.9 };

    cout << "Sum: " << Statistics::sum(numbers) << endl;
    cout << "Min: " << Statistics::min(numbers) << endl;
    cout << "Max: " << Statistics::max(numbers) << endl;
    cout << "Average: " << Statistics::average(numbers) << endl;

    return 0;
}