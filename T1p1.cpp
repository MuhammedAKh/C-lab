#include <iostream>
using namespace std;
double* momentum(int mass, double velocity[])
{
double *mm = new double[3]; 
for (int i = 0; i < 3; ++i) mm[i] = mass * velocity[i];
return mm;
}
int main()
{
int mass;
double velocity[3];
double *mom ;
cout << "Enter mass: ";
cin >> mass;
cout << "Enter the 3 components of velocity(separated by space): ";
cin >> velocity[0] >> velocity[1] >> velocity[2];
mom = momentum(mass, velocity);
cout<<"The momentum vector is [" << mom[0] << ", " << mom[1] << ", " << mom[2] << "]" << endl;
delete []mom; 
}
