#include <fstream>
using namespace std;
ifstream fin("numere24.in");
ofstream fout("numere24.out");
long long n, a, b, c, i;
short e;
long long ras(long long x) {
    long long e = 0, o = 0;
    while(x) {
        e = x % 10;
        o = o * 10 + e;
        x /= 10;
    }
    return o;
}

bool palindrom(long long x) {
    if(x == ras(x)) return true;
    return false;
}
int main(){
    fin >> c >> n;
    if(c == 1) {
        if(n > 1)
            fout << n-1 << '0';
        else fout << 0;
    } else if(c == 2) {
        a = n / 10; b = n / 100; c = n / 1000;

        if(a % 10 == 0) fout << 0 << ' ';
        else if(palindrom(a)) fout << 1 << ' ';
        else fout << 2 << ' ';

        if(b % 10 == 0) fout << 0 << ' ';
        else if(palindrom(b)) fout << 1 << ' ';
        else fout << 2 << ' ';

        if(c % 10 == 0) fout << 0 << ' ';
        else if(palindrom(c)) fout << 1 << ' ';
        else fout << 2 << ' ';
    } else {
        if(n == 1) fout << 9;
        else if(n == 2) fout << 153;
        else if(n == 3) fout << 1530;
        else {
            if(n % 2 == 0) c = n/2 - 1;
            else c = n/2;
            fout << 161;
            if(n%2 == 0)
                for(i = 0; i < c-1; i++) fout << 9;
            else
                for(i = 0; i < c-2; i++) fout << 9;
            fout << 1;
            for(i = 0; i < c; i++) fout << 0;
        }
    }
    return 0;
}
