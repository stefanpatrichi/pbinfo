#include <iostream>
using namespace std;

int x,K = 0;

int main()
{
  cin >> x;

  while(x != 0)
  {
    if(x % 2 == 0)
      K++;
    cin >> x;
  }

  if(K == 0) cout << "NU EXISTA";
  else cout << K;
}
