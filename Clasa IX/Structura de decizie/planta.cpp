#include <fstream>
using namespace std;

ifstream fin("planta.in");
ofstream fout("planta.out");

int D, A, B, N;

int main()
{
    fin >> D >> A >> B >> N;

    if(N % 2 == 0) D = D + (N/2) * (A-B);
    else D = D + (N/2) * (A-B) + A;

    fout << D;

}
