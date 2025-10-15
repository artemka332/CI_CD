#include <iostream>
#include "statistics.h"

using namespace std;

int main() 
{
    vector<double> numbers = { 10.5, 2.3, 7.8, 4.4, 8.9 };

    cout << "Sum: " << Statistics::sum(numbers) << endl;
    cout << "Min: " << Statistics::min(numbers) << endl;
    cout << "Max: " << Statistics::max(numbers) << endl;

    return 0;
}