#include<iostream>>
#include<string.h>
#include<cstring>
using namespace std;

int main(){
	char fname [10];
	cout << "    Welcome to Diana and Jack Pizza" << endl;
	cout << "    Enter Your first Name :";
	cin>>fname;
	
	cout << "Pizza size (inches)       Cost"<<endl;
	cout << "       10                 $10.99"<<endl;
	cout << "       12                 $12.99"<<endl;
	cout << "       14                 $14.99"<<endl;
	cout << "       16                 $16.99"<<endl;
	int size;
	float price;
	char crust,s,p,o,m;
	cout << "  What size pizza do you like ?"<<endl;
	cin>>size;
	cout << "  What type of crust do you want ?"<<endl;
	cout << "  (H)and-tossed,(T)hin-crust,(D)eep-dish .. ENter H ,T , D?"<<endl;
	cin>>crust;
	cout << "Additional toppings are , choose from below "<<endl;
	cout << "Do you want papperoni ( y/n) :";
	cin>>p;
	cout << "Do you want sausage ( y/n) :";
	cin>>s;
	cout << "Do you want Onion ( y/n) :";
	cin>>o;
	cout << "Do you want Mushroom ( y/n) :";
	cin>>m;
	cout << "Jack you order is as follows:"<<endl;
	cout << size << " inches pizza"<<endl;
	if(crust=='H' | crust=='h')
	cout << "Hand - toosed crust"<<endl; 
	else if(crust=='T' | crust=='t')
	cout << "Thin crust"<<endl;
	else if(crust=='D' | crust=='d')
	cout << "Deep -dish  crust"<<endl;
	else 
	cout << " Invalid"<<endl;
	if(p=='y')
	cout << "papparoni ";
	if(s=='y')
	cout << "sausage";
	if(o=='y')
	cout << "Onion ";
	if(m=='y')
	cout << "Mushroom"<<endl;
	if(size==10)
	price=10.99;
	if(size==12)
	price=12.99;
	if(size==14)
	price=14.99;
	if(size==16)
	price=16.99;
	
	if(o=='y' | m=='y' | p=='y' | s=='y' )
	price =price + 1.26;
	cout << " The cost of your order is $" << price << endl;
	cout << " The tex is 6%  : $1.05"  << endl;
	cout << " Total due  : $"  << price + 1.05 << endl;
}
