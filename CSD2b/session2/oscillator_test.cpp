/*****************************************************************
*  oscillator_test.cpp : example using the Oscillator class
*****************************************************************/
 
#include <iostream>
#include "oscillator.h"

int main()
{
  Oscillator oscillator(220);
  oscillator.setFreq(440);

  float frequency = oscillator.getFreq();

  std::cout << "Oscillator's frequency: " << frequency <<"\n";

  // end of main
  return 0;
}

