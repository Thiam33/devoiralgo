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
