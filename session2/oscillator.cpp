#include <iostream>

class Oscillator
{
public:
  Oscillator(float freq){
    this->freq = freq;
    std::cout << "\nOscillator - Constructor\n";
  }

  ~Oscillator();

  void setFreq(float freq);
  float getFreq();

private:
  float freq;
};

Oscillator::~Oscillator()
{
    std::cout << "\nOscillator - Destructor\n";
}

void Oscillator::setFreq(float freq)
{
  std::cout << "\nOscillator - setFreq\n";
  if(freq < 0 || freq > 22050)
  {
    std::cout << "ERROR - unable to set the frequency value with value: " << freq << "\n";
    return;
  }
  this->freq = freq;
}

float Oscillator::getFreq()
{
  std::cout << "\nOscillator - getFreq\n";
  return freq;
}

int main()
{
  Oscillator oscillator(220);
  oscillator.setFreq(440);
  float frequency = oscillator.getFreq();
  std::cout << "\nOscillator's frequency: " << frequency <<"\n";
  // end of main
  return 0;
}
