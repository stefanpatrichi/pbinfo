#include <fstream>
using namespace std;

ifstream fin("patrate3.in");
ofstream fout("patrate3.out");

long M,K,N,T,c;

int main()
{
    fin >> c;
    if(c == 1)
    {
        fin >> M;
        K = M * 8;
        fout << K;
    }
    else if(c == 2)
    {
        fin >> N;
        T = 1;
        while(true)
        {
            if(4 * T * (T-1) + 1 <= N and N <= 4 * T * (T + 1)) break;
            T++;
        }
        fout << T;
    }
    return 0;
}
