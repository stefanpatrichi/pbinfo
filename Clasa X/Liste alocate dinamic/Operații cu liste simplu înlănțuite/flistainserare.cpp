void inserare(nod *p, nod *q, int x) {
    if(q) {
        nod *nou = new nod;
        nou->info = x;
        nou->urm = q->urm;
        q->urm = nou;
    }
}
