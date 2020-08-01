void sterge(nod *p, nod *q) {
    if(q->urm) {
        nod *aux = q->urm;
        q->urm = aux->urm;
        delete aux;
    }
}
