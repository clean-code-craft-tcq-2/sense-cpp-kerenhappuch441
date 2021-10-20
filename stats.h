#include <vector>

namespace Statistics {
    
class Stats{
    public:
    float min;
    float max;
    
};
    Stats ComputeStatistics(const std::vector<float>& vectorarray);
    float avg(std::vector<float> const& v);
}
