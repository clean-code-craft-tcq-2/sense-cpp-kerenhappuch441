#include <vector>

namespace Statistics {
    
class Stats{
    public:
    float min;
    float max;
    float avg;
    
};
    Stats ComputeStatistics(const std::vector<float>& vectorarray);
    float avg(std::vector<float> const& v);
}
