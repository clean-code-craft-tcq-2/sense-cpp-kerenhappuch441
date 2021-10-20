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
