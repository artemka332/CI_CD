#include <vector>
#include <iostream>

using namespace std;


class Statistics
{
public:
    static double sum(vector<double>& data);
    static double min( vector<double>& data);
    static double max( vector<double>& data);
};