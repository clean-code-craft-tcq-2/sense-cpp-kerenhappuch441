#include "stats.h"
using namespace Statistics;
Stats Statistics::ComputeStatistics(const std::vector<float>& vectorarray ) {
    //Implement statistics here
   Stats stat; 
  if(vectorarray.empty())
  {   
    stat.min=NAN ;
    stat.max= *max_element(vectorarray.begin(), vectorarray.end());
    stat.average=avg(vectorarray); 
    std::cout<<"the value is "<<stat.average;
  }
  else
  {
     stat.min = *min_element(vectorarray.begin(), vectorarray.end());
     stat.max = *max_element(vectorarray.begin(), vectorarray.end());
     stat.average = avg(vectorarray);     
  } 
     return stat; 
}

float Statistics::avg(std::vector<float> const& v) {
    return 1.0 * std::accumulate(v.begin(), v.end(), 0LL) / v.size();
}
