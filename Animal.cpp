#include "Animal.h"


bool
Animal::validerTag (const std::string& tag)
{
  return true ;
}


Animal::Animal (const std::string& tag, Sexe sexe, Poids poids, Age age) :
tag (tag), sexe (sexe), poids (poids), age (age) { }


Animal::~Animal () { }


const std::string&
Animal::reqId () const
{
  return tag ;
}


Animal::Sexe
Animal::reqSexe () const
{
  return Femelle ;
}


Animal::Poids
Animal::reqPoids () const
{
  return 0 ;
}


Animal::Age
Animal::reqAge () const
{
  return 0 ;
}


void
Animal::asgPoids (Poids nouveau) { }


std::string
Animal::reqAnimalFormate () const
{
  return "" ;
}