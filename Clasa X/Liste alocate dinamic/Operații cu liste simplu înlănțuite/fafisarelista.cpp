void afisare(nod *p) {
    while(p) {
        std::cout << p->info << ' ';
        p = p->urm;
    }
}
