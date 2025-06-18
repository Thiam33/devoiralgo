//fonction somme tab
//fonction mi tab

//definir la structure facture
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
