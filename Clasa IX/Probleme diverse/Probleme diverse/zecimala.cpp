#include <fstream>
using namespace std;
ifstream fin("zecimala.in");
ofstream fout("zecimala.out");
int x;
int main() {
    fin >> x;
    if(x == 0) fout << 0;
    else fout << 5;
    return 0;
}
