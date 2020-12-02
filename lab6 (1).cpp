#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;

	string names [50];
	double payrate[50];
	double hourWorked[50];
	
void menu(){
	
	cout << setw(30)<<"Welcome To the employee pay check calculator"<<endl;
	cout << setw(30)<<"--------------------------------------------"<<endl;
	cout << setw(30)<<"1. Add Employee record(s) to the database  "<<endl;
	cout << setw(30)<<"2. Print All employee Employee record(s)   "<<endl;	
	cout << setw(30)<<"3. Print the paycheck for employee         "<<endl;
	cout << setw(30)<<"4. Print Paychecks For all employess  "<<endl;
	cout << "0. Exit  "<<endl;
}
void AddEmp(){
	int size;
	int i=0;
	cout << "Enter the number of employees u wanna add :";
	cin>>size;
	cout<<endl;
	bool flag=false,done;
	while(!flag){
	if(size<50 && size > 0){
		int currsize=50-i;
		if(currsize>size){
		cout << "Fine add details "<<endl;
		flag=true; 
		}
	}
	else {
	cout << "Invalid input"<<endl;
	cout << "Enter the number of employees u wanna add :";
	cin>>size;
	cout<<endl;
	flag=false;
	}
	}
	char name[10];
	double pay,hour;
	
	for(i; i<size; i++){
		cout << "Enter The name of employee: ";
		cin>>name;
		names[i]=name;
		cout << "Enter The Pay rate of employee: ";
		cin>>pay;
		payrate[i]=pay;
		cout << "Enter The hours worked of employee: ";
		cin>>hour;
		hourWorked[i]=hour;
		done=true;
	}
	if(done)
	cout <<"Added succefully"<<endl;

	
}
void printall(){
	cout << "Index " << " Name " << " Rate " << " Hours "<<endl;
	for(int i=0; payrate[i]; i++){
		cout << i << " " << names[i] << " " << payrate[i] << " " << hourWorked[i]<<endl;
	} 
}
void printone(){
	int ind;
	cout <<"Enter the index number : ";
	cin>>ind;
	if(ind>=0 && ind<50){
		
		for(int i=0; payrate[i]; i++){
			if(i==ind)
		cout <<  "Employee : " << names[i] << " Rate: " << payrate[i] << " Hours: " << hourWorked[i]<< " Weekly Pay: " << payrate[i] * hourWorked[i] <<endl;
	} 
	}
	else
	cout<<"Invalid Index"<<endl;
	
}
void paycheckall(){
	for(int i=0; payrate[i]; i++){
		cout <<  "Employee : " << names[i] << " Rate: " << payrate[i] << " Hours : " << hourWorked[i]<< " Weekly Pay: " << payrate[i] * hourWorked[i] <<endl;
	} 
}
int main(){
	
	
	int a;
	char c;
	do{
	menu();
	cout << "Enter Accordingly : ";
	cin>>a;
	if(a==1)
		AddEmp();
	else if(a==2)
		printall();
	else if(a==3)
		printone();
	else if(a==4)
		paycheckall();
	else if(a==0)
		exit(0);
	else
	cout << "Invalid Input "<<endl;
	
	cout << "Want more,Enter y"<<endl;
	cin>>c;
	}
	while(c=='y');
}
