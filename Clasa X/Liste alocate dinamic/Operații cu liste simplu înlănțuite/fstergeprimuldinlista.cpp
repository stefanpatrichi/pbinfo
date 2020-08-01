void stergePrimul(nod *&p) {
    if(p) {
        nod *temp = p;
        p = p->urm;
        delete temp;
    }
}
