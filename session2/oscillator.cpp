/*****************************************************************
*  oscillator.cpp : implementation of the Oscillator class
*****************************************************************/
 
#include <iostream>
#include "oscillator.h"


Oscillator::Oscillator(float freq)
{
  this->freq = freq;
  std::cout << "\nOscillator - Constructor\n";
}


Oscillator::~Oscillator()
{
    std::cout << "Oscillator - Destructor\n";
}


void Oscillator::setFreq(float freq)
{
  std::cout << "Oscillator - setFreq\n";
  if(freq < 0 || freq > 22050)
  {
    std::cout << "ERROR - unable to set the frequency to: " << freq << "\n";
    return;
  }
  this->freq = freq;
}


float Oscillator::getFreq()
{
  std::cout << "Oscillator - getFreq\n";
  return freq;
}


