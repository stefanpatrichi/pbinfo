void adaugareInainte(nod *&p, int x) {
    nod *nou = new nod;
    nou->info = x;
    nou->urm = p;
    p = nou;
}
