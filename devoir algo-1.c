//fonction somme tab
//fonction mi tab

//definir la structure facture
Facture = enregistrement
objet:chaine
montant:réel
fin
//procedure remplir tab
procédure remplir_tab(var T: tableau de Facture; n: entier)
var
  i: entier
début
  pour i de 1 à n faire
    écrire("Entrer l'objet de la facture ", i, ": ")
    lire(T[i].objet)
    écrire("Entrer le montant de la facture ", i, ": ")
    lire(T[i].montant)
finpour
fin
 //procedure affiche tab
 procédure affiche_tab(T: tableau de Facture; n: entier)
var
  i: entier
début
  pour i de 1 à n faire
    écrire("Facture ", i, ": Objet = ", T[i].objet, ", Montant = ", T[i].montant)
finpour
fin

 //fonction somme par objet 
 //fonction max tab
