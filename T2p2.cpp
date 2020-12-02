#include<iostream>
#include<string.h>
#include <ctime>
#include <cstdlib>
using namespace std;
double *momentum(double velocity[3], double mass)
{
double *arymntm = new double[3];
for (int i=0; i<3; i++)
{
arymntm[i] = velocity[i] * mass;
}
return arymntm;
}
double *randVec()
{
double *velVec = new double[3];
for (int i=0; i<3; i++)
{
velVec[i] = rand() %200+(-100);
}
return velVec;
}
int main()
{
double mass[1000];
double *velocity[1000][3];
double *res[1000],sum[1000];
for (int it=0;it<1000;it++)
{
mass[it]=(rand() % 10)+1;
*velocity[it]=randVec();
res[it]=momentum(*velocity[it],mass[it]);
cout<<"Momentum values:";
sum[it]=0;
for(int i=0; i<3; i++)
{
cout<<res[it][i]<<" ";
sum[it]=sum[it]+res[it][i];
}
cout<<"Average of Momentum "<<it+1<<" value is :"
<<sum[it]/3<<endl;
}
system("pause");
return 0;
}

