#include <iostream>

/*
 * NOTE
 * This example uses functionality from c++11
 * To compile this file without the use of a make file, run:
 * g++ -std=c++11  oscillator_extended.cpp -o oscillator_extended
 *
 * other options:
 * c++11 / c++14 / c++17
 */


static int count = 0;

class Oscillator {
public:
  Oscillator();
  Oscillator(float freq);
  ~Oscillator();

  void setFreq(float freq);
  float getFreq();
private:
  float freq;
};

// Constructor Delegation --> to enable to use a default frequency
Oscillator::Oscillator() : Oscillator(220) {}

// constructor uses an initialization list to set the freq value
Oscillator::Oscillator(float freq) : freq(freq) {
  std::cout << "\nOscillator - constructor\n";
}

Oscillator::~Oscillator() {
  std::cout << "\nOscillator - destructor\n";
}

void Oscillator::setFreq(float freq) {
  assert(freq > 0 && freq < 20000);
  this->freq = freq;
}

float Oscillator::getFreq() {
  return freq;
}

int main () {

  {
    Oscillator osc;
  }

  {
    Oscillator osc;
  }
  // the line below causes an assertion failure that terminates the program
  //osc.setFreq(-1);
  //osc.displayCount();
  // end of main
  return 0;
}
