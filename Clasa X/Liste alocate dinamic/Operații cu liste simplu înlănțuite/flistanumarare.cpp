int numarare(nod *p) {
    int k = 0;
    while(p) {
        k++;
        p = p->urm;
    }
    return k;
}
