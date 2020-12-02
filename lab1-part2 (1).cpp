#include<iostream>>
using namespace std;

int main(){
	int currentprice,lastmonth;
	cout << "Enter the NUmber"<<endl;
	cin>>currentprice;
	cout << endl;
	cin>>lastmonth;
	cout << "This house is " << currentprice << " The change is " << currentprice-lastmonth <<  "Since last month. The estimated monthly mortagage is " << currentprice*0.051/12 << " "<<endl; 
	
	
}
