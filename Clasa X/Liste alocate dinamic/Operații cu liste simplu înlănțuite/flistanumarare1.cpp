int numarare(nod *p) {
    int k = 0;
    while(p->urm) {
        if(p->info == p->urm->info) k++;
        p = p->urm;
    }
    return k;
}
