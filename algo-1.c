//fonction somme tab
float sommeMontants(Facture tab[], int n) {
    float somme = 0;
    for (int i = 0; i < n; i++) {
        somme += tab[i].montant;
    }
    return somme;
}
//fonction mi tab
float montantMin(Facture tab[], int n) {
    if (n == 0) return 0;
    float min = tab[0].montant;
    for (int i = 1; i < n; i++) {
        if (tab[i].montant < min)
            min = tab[i].montant;
    }
    return min;
}

<<<<<<< HEAD
//definir la structure facture 
=======
//definir la structure facture
Facture = enregistrement
objet:chaine
montant: réel
fin
>>>>>>> b36e711e89fc812cda3ffef0605fccc49b129976
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
  fin pour
fin
 //procedure affiche tab
 procédure affiche_tab(T: tableau de Facture; n: entier)
var
  i: entier
début
  pour i de 1 à n faire
    écrire("Facture ", i, ": Objet = ", T[i].objet, ", Montant = ", T[i].montant)
  fin pour
fin

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
END
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
END;
