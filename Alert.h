
class EmailAlert
{ public:
bool emailSent=true;
};

class LEDAlert
{ public:
bool ledGlows=true;
};

class IAlerter
{

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
