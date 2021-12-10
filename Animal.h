/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Animal.h
 * Author: Pascal Charpentier
 *
 * Created on 9 décembre 2021, 15:27
 */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

/**
 @class Animal cette classe est une classe abstraite servant à modéliser les
 animaux du Parc.  Elle devra absolument être dérivée pour représenter des
 individus de diverses espèces.
 */

class Animal
{
public:

  // Types publics

  // Le sexe est un enum pouvant prendre deux valeurs

  typedef enum
  {
    Male, Femelle
  } Sexe;

  // Poids et age seront des entiers positifs

  typedef unsigned int Poids;
  typedef unsigned int Age;

  // Validation

  /**
   * @brief L'argument doit être un tag valide au format X8888 c'est à dire une
   * lettre majuscule suivie de 4 chiffres
   * @param La chaîne à valider
   * @return true si le chaîne est au format demandé
   */
  static bool validerTag (const std::string&);

  // Constructeurs et destructeurs

  /**
   * Constructeur par assignation
   * @param Le tag unique
   * @param Le sexe de l'animal
   * @param Le poids de l'animal en kilogrammes
   * @param L'année de naissance de l'animal
   */
  explicit Animal (const std::string&, Sexe, Poids, Age);

  /**
   * Destructeur.  Pourquoi devrait-il être virtuel?
   */
  virtual ~Animal ();

  // Accesseurs...


  /**
   * @brief Tag d'identification de l'animal courant
   * @return Une string contenant le tag
   */
  const std::string& reqId () const;

  /**
   * @brief Le sexe de l'animal courant
   * @return Le sexe
   */
  Sexe reqSexe () const;

  /**
   * @brief Poids de l'animal courant
   * @return Le poids en kilogrammes
   */
  Poids reqPoids () const;

  /**
   * @brief Âge de l'animal courant, calculé à-partir de l'année de naissance
   * @return Âge de l'animal
   */
  Age reqAge () const;

  // Mutateurs

  /**
   * @brief Vu que le poids peut varier au fil du temps on doit pouvoir le
   * modifier
   * @param Le nouveau poids
   */
  void asgPoids (Poids);

  // Affichage et débogage

  /**
   * @brief Affichage des informations de l'animal sous forme de chaîne de
   * caractères.  ATTENTION: Cette méthode est virtuelle pure donc elle DEVRA
   * absolument être implantée dans toutes les classes dérivées.
   * @return La chaîne de caractères contenant les info
   */
  virtual std::string reqAnimalFormate () const = 0;

  // Factory function

  /**
   * @brief Fonction factory qui devra créer un nouvel individu sur la pile et
   * en retournera l'adresse
   * @return
   */
  virtual Animal* clone () const = 0;

private:

  std::string tag;
  Sexe sexe;
  Poids poids;
  Age age;




};



#endif /* ANIMAL_H */

