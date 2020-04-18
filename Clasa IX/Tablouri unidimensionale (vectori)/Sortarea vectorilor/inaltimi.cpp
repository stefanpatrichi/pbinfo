#include <iostream>
using namespace std;
int n, i, aux;
bool f;
struct Copil {
    int inaltime, index;
};
Copil v[1000];
int main(){
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> v[i].inaltime;
        v[i].index = i;
    }
    f = false;
    while(f == false) {                             //later edit: foloseste bubble sort, destul de ineficient
        f = true;
        for(i = 0; i < n-1; i++) {
            if(v[i].inaltime > v[i+1].inaltime) {
                swap(v[i], v[i+1]);
                f = false;
            }
        }
    }
    for(i = 0; i < n; i++) cout << v[i].index + 1 << ' ';
    return 0;
}
