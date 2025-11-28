#include <bits/stdc++.h>
using namespace std;
int main()
{
  double x, y, z;
  cin>>x>>y>>z;
 double E =2.0 * x + y - z;
 cout<<fixed<<setprecision(6)<<(7.0 + pow(E, E)) / E<<endl;
return 0;
}
