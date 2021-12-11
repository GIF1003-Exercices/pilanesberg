/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hippopotame.h
 * Author: etudiant
 *
 * Created on 11 décembre 2021, 10:32
 */

#ifndef HIPPOPOTAME_H
#define HIPPOPOTAME_H

#include "Animal.h"

class Hippopotame : public Animal
{
public:

  /**
   * @brief Le paramètre est un poids plausible pour un hippo
   * @param poids Valeur de poids en kg à vérifier
   * @return true si le paramètre est un poids plausible pour un hippo
   */
  static bool validerPoidsHippopotame (Animal::Poids poids);

private:

  /**
   * Validité d'un tag Hippo.  Utilisé dans INVARIANT
   * @return true si on a un tag d'hippo
   */
  bool validerTag () const override;

  /**
   * Validité d'un poids pour un hippo
   * @return true si l'attribut poids est inférieur à la limite plausible pour hippo
   */
  bool validerPoids () const override;

  /**
   * Validité d'une année de naissance pour hippo
   * @return true si l'année est valide
   */
  bool validerAnnee () const override;

public:

  /**
   * Constructeur de base
   * @param Tag
   * @param Sexe de l'individu
   * @param Poids de l'individu
   * @param Année de naissance de l'individu
   * @param Rivière ou réside l'individu
   */
  Hippopotame (const std::string&, Animal::Sexe, Animal::Poids, Animal::Age, const std::string&);

  /**
   * Destructeur
   */
  virtual ~Hippopotame ();

  /**
   * Retourne la rivière o« réside l'hippo.  
   * @return Nom de la rivière
   */
  const std::string& reqRiviere () const;

  /**
   * Assigne une nouvelle rivière à un individu
   * @param riviere Nouvelle rivière
   */
  void asgRiviere (const std::string& riviere);

  /**
   * Affichage des infos d'un hippo sous forme de chaîne de caractères
   * @return Chaîne de caractère 
   */
  std::string reqAnimalFormate () const override;

  /**
   * Factory function Hippo
   * @return Adresse du nouvel Hippo créé
   */
  Animal* clone () const override;

private:
  std::string riviere;
  
  /**
   * @brief Valide l'invariant de la classe Hippo
   */
  void verifieInvariant() const ; 

};

#endif /* HIPPOPOTAME_H */

