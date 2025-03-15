#ifndef binaryFileStruct
#define binaryFileStruct
#include <iostream>
#include <string>
#include <sstream>
#include <stdint.h>

class FissList
{
public:
  FissLine* allFissions;
}

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
  int  scatters;
  int Code;
  double prior;
};

class HistoryClass
{
public:
 
};

class ParticleClass
{
public:
  NeutronClass neutron
  PhotonClass photon
};

class NeutronClass
{
public:
  double energyDeposited;
  double lightOutput;
  double energyToF;
  int numberOfInteractions;
};

class PhotonClass
{
public:
  double energyDeposited;
  double lightOutput;
  double energyToF;
  int numberOfInteractions
};


#endif
