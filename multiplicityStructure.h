#ifndef binaryFileStruct
#define binaryFileStruct
#include <iostream>
#include <string>
#include <sstream>
#include <stdint.h>

class FissLine
{
public:
  int history;
  int generation;
  int multiplicityNeutrons;
  int multiplicityPhotons;
};

class CollLine
{
public:
  int history;
  int generation;
  int multiplicityNeutrons;
  int multiplicityPhotons;
};

class HistoryClass
{
public:
  int history;
  int number;
  int yype;
  int interaction;
  int zaid;
  int cell;
  double energy;
  double time;
  double position[3];
  double weight;
  int generation;
  int  scattersCode;
  double prior;
};


#endif
//Hello
