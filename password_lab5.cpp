#include<iostream>
#include<cctype>
using namespace std;

int main(){
	char c;
	cout << "Do you wanna create your password (y/n) :";
	cin>>c;
	char  password [10];
	if(c=='y')
	{
		cout << "Enter you password";
		cin>>password;
		int i;
		for(i=0; password[i]; i++);
		while(i<8){
			cout << " The password length must be 8 characters,Enter again " ;
			cin>>password;
			for(i=0; password[i]; i++);
		}
		cout << "Length is okay now"<<endl;
		cout << " Checking upper case .."<<endl;
		int j;
		bool up;
		bool low;
		bool dig;
		bool spe;
		for(int i=0; password[i]; i++){
			if(isupper(password[i])){
			
			cout << "Upper case criteria is okay"<<endl;
			up=false;
			break;
		}
			else{
				up=true;
			}
		}
		i=0;
		while(up){
			cout <<"One character must be capital";
			cin >> password;
			for(int i=0; password[i]; i++){
			if(isupper(password[i])){
			cout << "Upper case criteria is okay"<<endl;
			up=false;
			break;
		}
			else{
				up=true;
			}
		}
		
		}
		
		
		for(int i=0; password[i]; i++){
			if(islower(password[i])){
			cout << "lower case criteria is okay"<<endl;
			low=false;
			break;
			}
			else{
				low=true;
			}
		}
		i=0;
		while(low){
			cout <<"One character must be lower";
			cin >> password;
			for(int i=0; password[i]; i++){
			if(islower(password[i])){
			cout << "lower case criteria is okay"<<endl;
			low=false;
			break;
			}
			else{
				low=true;
			}
		}
		}
		
		i=0;
		for(int i=0; password[i]; i++){
			if(isdigit(password[i]))
			{
			cout << "Digit  criteria is okay"<<endl;
			dig=false;
			break;
		}
			else{
				dig=true;
			}
		}
		i=0;
		while(dig){
			cout <<"One character must be digit";
			cin >> password;
			for(int i=0; password[i]; i++){
			if(isdigit(password[i]))
			{
			cout << "Digit  criteria is okay"<<endl;
			dig=false;
			break;
			}
			else{
				dig=true;
			}
		}
		
		}
		
		for(int i=0; password[i]; i++){
				if(isalpha(password[i])){
			spe=true;
		}
			else{
				cout << "Special character  criteria is okay"<<endl;
				spe=false;
				break;
			}
		}
		i=0;
		while(spe){
			cout <<"One character must be a special character";
			cin >> password;
			for(int i=0; password[i]; i++){
				if(isalpha(password[i])){
			spe=true;
		}
			else{
				cout << "Special character  criteria is okay"<<endl;
			spe=false;
			break;
			}
		}
		}
		
	}
	if(c=='n' || c=='q')
	exit(0);
}
