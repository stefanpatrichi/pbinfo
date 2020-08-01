void adaugare(nod*& p, int x) {
    nod *nou = new nod;
    nou->info = x;
    nou->urm = NULL;
    if(!p) p = nou;
    else {
        nod* aux = p;
        while(aux->urm)
            aux = aux->urm;
        aux->urm = nou;
    }
}
