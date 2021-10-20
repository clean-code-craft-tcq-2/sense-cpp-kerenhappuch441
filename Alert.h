
class EmailAlert
{ public:
int emailSent;
};

class LEDAlert
{ public:
int ledGlows;
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
  void checkAndAlert(const std::vector<float>& vectorarray)
  {
  }
};
