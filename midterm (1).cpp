#include<iostream>
#include<cmath>
using namespace std;
double salary=0;
int p=10;
double intrest=3.99;
int months=12;
void menu(){
	cout << "It’s time to buy a new car!  You have decided upon a Toyota Highlander due to its decent gas mileage for a vehicle in its class as well as its versatility. " <<endl;

	cout << "		Base price: $30,999.  Today’s interest rate:  3.99% Fixed APR (annual percentage rate)" <<endl;

	cout << "		Highlander Models are as follows:" <<endl;

	cout << "			Option 1:" <<endl;

	cout << "		LE: base model; seating for 8; 18-in. alloy wheels, integrated backup camera.  Cost: base price" <<endl;

	cout << "			Option 2:" <<endl;

	cout << "		LE Plus: base model plus flip up hatch, power liftgate, 8-way driver’s seat, 3-zone automatic climate control with separate second-row control panel.  Cost: base + $4,999" <<endl;

	cout << "			Option 3:" <<endl;

	cout << "		XLE: LE Plus model plus moonroof, roof fails, LCD/navigation, smart-key.  Cost: base + $8,999" <<endl;

	cout << "			Option 4:" <<endl;

	cout << "		Limited: XLE model plus 19-in 5 spoke allow wheels, rear parking sensor, blind spot monitor, rear crossing traffic alert, leather seats, blue LED ambient lighting.  Cost: base + 14,999" <<endl;
	
}
void menu2(){
	cout <<"Select from Following"<<endl;
	cout << "1. calculate financials"<<endl;
	cout <<"2. quit"<<endl;
}
void input(){
	cout <<"Input your salary: ";
	cin>>salary;
}
void calculations(){
	double res1,res2;
	res1=pow(1+intrest,months)*intrest;
	res2=pow(1+intrest,months)-1;
	
	double loan=res1/res2;
	cout << "The loan per month will be " << loan <<" "<<endl;
	
}
int main(){
	
	char c;
	int a;
	int b;
	do{
	menu();
	
	cout <<"Select a model as above, 1 for option 1,2 for option 2 and so on ";
	cin>>a;
	
	if(a==1){
	menu2();
	cin>>b;
	if(b==1){
	input();
	calculations();
		
	}
	else
	break;
	}
	else if(a==2){
	menu2();
	if(b==1){
	input();
	calculations();
		
	}
	else
	break;
	}
	else if(a==3){
	menu2();
	if(b==1){
	input();
	calculations();
		
	}
	else
	break;
	}
	else if(a==4){
	menu2();
	cin>>b;
	if(b==1){
	input();
	calculations();
		
	}
	else
	break;
	}
	else
	cout <<"Invalid Input"<<endl;
	
	cout << "Want more,Enter y: ";
	cin>>c;	
	}
	while(c=='y');
}
