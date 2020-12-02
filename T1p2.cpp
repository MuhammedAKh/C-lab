#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
double* momentum(int mass, double velocity[])
{
double *mm = new double[3]; 
for (int i = 0; i < 3; ++i) 
{
mm[i] = mass * velocity[i];
}
return mm;
}
double* randVec()
{
int MIN_VAL = -100 , RANGE = 201;
double *vel = new double[3];
for(int i = 0; i < 3 ; ++i)
{
vel[i] = MIN_VAL + rand() % RANGE; 
}
return vel;
}
int main()
{
int mass;
double *velocity;
double *mom[1000];
srand(time(0));
for(int i = 0 ; i < 1000; ++i)
{

velocity = randVec(); 
mass = 1 + rand() % 10;
mom[i] = momentum(mass,velocity);
delete []velocity; 
}

double avg[3]={0};


for(int i = 0; i < 1000; ++i)
{
for(int j = 0; j < 3; ++j)
{
	avg[j] += mom[i][j];
}

}

for(int i = 0; i < 3; ++i)
{

avg[i] /= 1000; 
}

cout<<endl;
cout << "The average momentum is [" << avg[0] << ", " << avg[1] << ", " << avg[2] << " ]" <<endl;



}

