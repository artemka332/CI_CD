#include "statistics.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
    vector<double> nums = {1.0, 2.0, 3.0, 4.0, 5.0};

    assert(Statistics::sum(nums) == 15.0);
    assert(Statistics::min(nums) == 1.0);
    assert(Statistics::max(nums) == 5.0);
    assert(Statistics::average(nums) == 3.0);
    assert(Statistics::median(nums) == 3.0);

    cout << "All tests passed!"<<endl;
    return 0;
}