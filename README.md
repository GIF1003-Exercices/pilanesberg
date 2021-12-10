# Pilanesberg
### Exercice de révision pour l'examen final de GIF-1003

# Avertissement: cet exercice n'a pas été rédigé ni sanctionné par le professeur
du cours GIF-1003.  C'est une initiative personnelle et je ne fais aucune promesse
ni garantie sur le contenu de l'examen final.

### Mode d'emploi

Ce présent exercice n'est ni plus ni moins qu'un prétexte pour réviser les différentes notions
essentielles de l'examen final, qui sont essentiellement ce qui a été vu lors du TP3:

- Héritage: à quoi sert-il?  Modes privé, public, protégé
- Polymorphisme: méthodes virtuelles
- Polymorphisme: méthodes virtuelles pures et classes abstraites
- Classes de Coplien: pourquoi une classe est de Coplien, règle des 5
- Contrat: qu'est-ce que le contrat, rôle des assertions de contrat, invariant de classe
- Tests: comment les rédiger, comment faire un dispositif de test
- Documentation: comment la rédiger, son importance
- Exceptions: classes d'exceptions, rôle et différence avec les assertions de contrat

Le présent dépôt peut être cloné tel quel et exécuté dans Netbeans.  Je vous suggère de suivre les étapes suivantes:

Pour chaque classe:

- Lire le problème, le comprendre et rédiger sur papier la hiérarchie de classe
- Rédiger les headers
- Rédiger les tests
- Rédiger les .cpp avec une implémentation bidon de manière à que ça compile
- Parfaire les implantations afin de faire passer les tests

Un exemple de cette démarche est déjà inclus dans ce dépôt avec la classe Animal.
Mais je vous suggère fortement de rédiger vous-même votre propre solution avant
de consulter une quelconque solution externe...  Sinon vous perdez votre temps!!!

Posez-vous aussi des questions afin de mieux comprendre:

- Pourquoi telle méthode est virtuelle?
- Pourquoi telles méthodes sont const ou non?
- Pourquoi n'y a-t-il pas de mutateur pour tel attribut?

### Formulation du problème:

Vous êtes à l'emploi de la réserve faunique de Pilanesberg en Afrique du Sud.  Vous devez implanter un système permettant d'accéder à la base de données du parc sur les animaux.  Les populations d'hippopotames et d'éléphants doivent être suivies attentivement...

Chaque animal a un numéro de tag unique, de la forme HXXXX pour les hippos et EXXXX pour les éléphants, ou les X sont des chiffres.  Donc H5764, E0000 sont valides, mais 2435H, H56, HH7777, A2345 sont non-valides. Les minuscules ne sont pas valides non plus.

Chaque animal a donc un numéro de tag, un poids, un âge et un sexe qui ne peut que prendre les valeurs mâle ou femelle (pensez à utiliser un enum, mais ce n'est pas obligatoire).  Le poids et l'âge sont les valeurs courantes de cette année.

De plus, pour les hippos, on est intéressés à connaître la rivière ou ils ont leur résidence, c'est important car ils sont extrêment territoriaux.

Pour les éléphants, par-contre, on veut seulement savoir la longueur des défenses.  Celle-ci peut être 0 si ils n'en ont pas.

Comme premier exercice, concevez la liste des classes nécessaires pour faire le suivi demandé.  Dites quelles classes seront de base, et quelles classes seront dérivées.  Si des classes abstraites sont nécessaires, dites pourquoi.  Essayez de prévoir quelles méthodes seront demandées pour chacune des classes, selon votre jugement.

