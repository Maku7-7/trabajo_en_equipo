#include <bits/stdc++.h>
using namespace std;

int main()
{
double x, y, z;
double num1, num2, num, den1, den2, den, resultado;
cin>>x>>y>>z;
num1=(2*x+y)/z;
num2=pow(y, 3)-z;
num=num1*num2;
den1=(x+2*y+3*z)/(z-2*y-3*x);
den2=pow(x, 2)+pow(z,2);
den=den1+den2;
resultado=num/den;
cout<<resultado<<endl;
return 0;
}
