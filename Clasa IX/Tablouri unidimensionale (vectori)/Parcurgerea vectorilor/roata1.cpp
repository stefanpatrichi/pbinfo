#include <fstream>
using namespace std;
int poz[50000];
int main() {
    ifstream fin;
    ofstream fout;
    int n, c, i;
    long long rot;

    fin.open("roata.in");
    fin >> n;
    for(i = 0; i < n; i++) {
        fin >> c;
        poz[c - 1] = i;
    }
    fin.close();
    c = 0;
    rot = 0;
    fout.open("roata.out");
    for(i = 0; i < n; i++) {
        rot += n - (n + rot + poz[i] - c) % n;
        fout << rot << ' ';
        c = poz[i];
    }
    fout << '\n';
    fout.close();
    return 0;
}
