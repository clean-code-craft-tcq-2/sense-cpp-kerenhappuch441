#include <vector>
#include <bits/stdc++.h>
namespace Statistics {
    
class Stats{
    public:
    float min;
    float max;
    float average; 
};
    Stats ComputeStatistics(const std::vector<float>& vectorarray);
    float avg(std::vector<float> const& v);
}
