#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <ctime>
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
double *res[1000];
double avg[3] = {0, 0, 0};
for (int it=0;it<1000;it++)
{ mass[it]=(rand() % 10)+1;
*velocity[it]=randVec();
res[it]=momentum(*velocity[it],mass[it]);
cout<<"Momentum values:";
for(int i=0; i<3; i++)
{
cout<<res[it][i]<<" ";
avg[i]=avg[i]+res[it][i];
}
cout << endl;
}
for(int i=0;i<3;i++)
avg[i] = avg[i]/1000;
cout<< endl << "Average Momentum vector is: ";
for(int i=0; i<3;i++)
cout << avg[i] << " " ;
cout << endl;
return 0;
}

