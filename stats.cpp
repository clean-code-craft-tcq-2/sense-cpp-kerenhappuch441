#include "stats.h"
using namespace Statistics;
Stats Statistics::ComputeStatistics(const std::vector<float>& vectorarray ) {
    //Implement statistics here
   Stats stat; 
  if(vectorarray.empty())
  {      
    stat.min=NAN ;
    stat.max=NAN;
    stat.avg=NAN; 
  }
  else
  {
     stat.min = *min_element(vectorarray.begin(), vectorarray.end());
     stat.max = *max_element(vectorarray.begin(), vectorarray.end());
     stat.avg = avg1(vectorarray);     
  } 
     return stat; 
}

float Statistics::avg1(std::vector<float> const& v) {
    return 1.0 * std::accumulate(v.begin(), v.end(), 0LL) / v.size();
}
