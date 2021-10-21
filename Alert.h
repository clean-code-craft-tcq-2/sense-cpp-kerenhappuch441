

class IAlerter
{

};
class EmailAlert:public IAlerter
{ 
public:
bool emailSent=true;
};

class LEDAlert:public IAlerter
{ 
public:
bool ledGlows=true;
};


class StatsAlerter 
{
  
  public:
  
  StatsAlerter (const float&, std::vector<IAlerter*>&)
  {
    
  }
  
  ~StatsAlerter()
  {
    
  }
  void checkAndAlert(const std::vector<float>& )
  {
   
    
  }
};
