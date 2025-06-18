//fonction somme tab
//fonction mi tab

//definir la structure facture
<<<<<<< HEAD
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
=======
//procedure remplir tab
 //procedure affiche tab

 //fonction somme par objet 
 FUNCTION sommeParObjet(tab: ARRAY OF Facture; n: INTEGER; objetRecherche: STRING): REAL;
VAR
  i: INTEGER;
  total: REAL;
BEGIN
  total := 0;
  FOR i := 0 TO n - 1 DO
    IF tab[i].objet = objetRecherche THEN
      total := total + tab[i].montant;
  sommeParObjet := total;
END;
 //fonction max tab
 FUNCTION maxTab(tab: ARRAY OF Facture; n: INTEGER): REAL;
VAR
  i: INTEGER;
  max: REAL;
BEGIN
  max := tab[0].montant;
  FOR i := 1 TO n - 1 DO
    IF tab[i].montant > max THEN
      max := tab[i].montant;
  maxTab := max;
END
>>>>>>> 1e0f4279e05d6d916b0719097fd264b8de1f721c
