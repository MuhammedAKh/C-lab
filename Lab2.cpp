#include<iostream>>
using namespace std;

int main(){
	int grossincome,debt;
	cout<<"Enter Monthly grossincome"<<endl;
	cin>>grossincome;
	cout<<"Enter Monthly debt payments"<<endl;
	cin>>debt;
	int monthlypaygross,monthlypaydebt;
	monthlypaygross=grossincome*28/100;
	monthlypaydebt=grossincome*36/100 - debt;
	cout << "Gross income payment " << monthlypaygross<<" dollars"<<endl;
	cout << "gross income minus debt payment " << monthlypaydebt<<" dollars"<<endl;
}
