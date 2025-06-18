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
 //fonction max tab
