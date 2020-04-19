#include <fstream>
using namespace std;

ifstream fin("smartphone.in");
ofstream fout("smartphone.out");

int c,ind;

int ver()
{
  int tel[ind];
  for(int i = 0; i < ind; i++)
    fin >> tel[i];

  int maxim = 0, maxim2 = 0;

  for(int j = 0; j < ind; j++)
  {
    if(tel[j] > maxim)
    {
      maxim2 = maxim;
      maxim = tel[j];
    }
    else if(tel[j] > maxim2)
      maxim2 = tel[j];
  }

  if(c == 1) fout << maxim;
  else if(c == 2) fout << maxim2;
}
int main()
{
  fin >> c >> ind;
  ver();
}
