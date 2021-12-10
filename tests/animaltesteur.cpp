#include "gtest/gtest.h"
#include "Animal.h"
#include <string>

class AnimalDerive : public Animal
{

public:


  AnimalDerive (const std::string ptag, Sexe psexe, Poids ppoids, Age page) :
  Animal (ptag, psexe, ppoids, page) { }


  std::string
  reqAnimalFormate () const override
  {

    return Animal::reqAnimalFormate () ;
  }


  Animal*
  clone () const override
  {

    return nullptr;
  }
} ;

class AnimalTesteur : public ::testing::Test
{

protected:

  AnimalDerive specimen ;

public:


  AnimalTesteur () : specimen ("H2222", Animal::Femelle, 3000, 1976) { }


  ~AnimalTesteur () override { }

} ;


TEST (Animal, Constructeur_no_throw)
{

  EXPECT_NO_THROW (AnimalDerive a ("E1234", Animal::Femelle, 5000, 1976)) ;
}


TEST (Animal, validerTag_retournetrue_tagvalide)
{
  EXPECT_TRUE (Animal::validerTag ("E1111")) ;
}


TEST (Animal, validerTag_retournefalse_tagnonvalide)
{
  EXPECT_FALSE (Animal::validerTag ("Roger")) ;
}


TEST_F (AnimalTesteur, reqId_retourneBonId)
{
  EXPECT_EQ ("H2222", specimen.reqId ()) ;
}


TEST_F (AnimalTesteur, reqPoids_retourneBonSexe)
{
  EXPECT_EQ (Animal::Femelle, specimen.reqSexe ()) ;
}


TEST_F (AnimalTesteur, reqAge_retourneBonAge)
{
  EXPECT_EQ (45, specimen.reqAge ()) ;
}


TEST_F (AnimalTesteur, reqPoids_retourneBonPoids)
{
  EXPECT_EQ (5000, specimen.reqPoids ()) ;
}


TEST_F (AnimalTesteur, asgPoids_nouveaupoids_assigne)
{
  specimen.asgPoids (6000) ;
  EXPECT_EQ (6000, specimen.reqPoids ()) ;
}


TEST_F (AnimalTesteur, reqAnimalFormate_retourneInfoAdequates)
{
  std::string resultat ("Tag: E2222 Sexe: F Poids: 5000kg Age: 45 ans") ;
  EXPECT_EQ (resultat, specimen.reqAnimalFormate ()) ;
}