#include <fstream>

using namespace std;

ifstream fin("numerus.in");
ofstream fout("numerus.out");
int k,n,linie,rest;
int main()
{
    fin >> k >> n;

    if(k % 2 == 1)
        fout << k*5-4 << " " << k*5-3 << " " << k*5-2 << " " << k*5-1 << " " << k*5 << " " << k*5 << endl;
    else
        fout << k*5 << " " << k*5 << " " << k*5-1 << " " << k*5-2 << " " << k*5-3 << " " << k*5-4 << endl;

    if (n%5==0) linie = n/5;
    else linie = n/5+1;

    fout << linie << endl;

    rest = n % 5;
    if (linie % 2 == 1) {
        switch (rest) {
            case 0:
                fout << "E F";
                break;
            case 1:
                fout << "A";
                break;
            case 2:
                fout << "B";
                break;
            case 3:
                fout << "C";
                break;
            case 4:
                fout << "D";
                break;
        }
    } else {
        switch(rest) {
            case 0:
                fout << "A B";
                break;
            case 1:
                fout << "F";
                break;
            case 2:
                fout << "E";
                break;
            case 3:
                fout << "D";
                break;
            case 4:
                fout << "C";
                break;
        }
    }

    return 0;
}
