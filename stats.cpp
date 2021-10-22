#include "stats.h"
using namespace Statistics;
Stats Statistics::ComputeStatistics(const std::vector<float>& vectorarray ) {
    //Implement statistics here
    
    printf("stat is called");
   Stats stat; 
  if(vectorarray.empty())
  {   
       printf("stat is called 1");
    stat.min=NAN ;
    stat.max=NAN;
    stat.average=avg(vectorarray); 
  }
  else
  {
       printf("stat is called 2");
     stat.min = *min_element(vectorarray.begin(), vectorarray.end());
     stat.max = *max_element(vectorarray.begin(), vectorarray.end());
     stat.average = avg(vectorarray);     
  } 
     return stat; 
}

float Statistics::avg(std::vector<float> const& v) {
    return 1.0 * std::accumulate(v.begin(), v.end(), 0LL) / v.size();
}
