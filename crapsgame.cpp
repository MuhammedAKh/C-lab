#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void printGamerRules(){

	cout<<"You win iff the sum is 7 or 11 of both dies"<<endl;	
}

double GetBalance(){
	double bal;
	cout<<"Enter the balance"<<endl;
	cin>>bal;
	return bal;
}


double GetWager(){
	double wag;
	cout<<"Enter the balance"<<endl;
	cin>>wag;
	return wag;
}

int checkWager(double wager,double bal){
	if(wager<bal)
	return 1;
	else 
	return 0;
}

int RollDie(){
	
	srand(time(NULL));
	int random=rand()%6+1;
	return random;
}

int dicesum(int die1,int die2){
	return die1+die2;
}

int isWinorLoss(int dicesum)
{
	if(dicesum==7 || dicesum==11)
	return 1;
	else if(dicesum==2 || dicesum==3 || dicesum==12 )
	return 0;
	else
	return -1;
}

int pointloss(int dicesum,int pt){
	if(dicesum==pt)
	return 1;
	else if(dicesum==7)
	return 0;
	else
	return -1;
}
double adjustbal(double bal,double wag,int add_sub){
	if(add_sub==1)
	return wag+bal;
	else if(add_sub==0)
	return bal-wag;
	else
	return bal;
	
}
void message(int rolls,int losswin,double initialbal,double currbal){
	cout <<"you did " << rolls <<  " and do have " <<  losswin <<  " wins "<<endl;
	cout <<"your current balance is " << currbal<<endl;
}



int main(){
	char c;
	int count=0;
	double bal,wag,adjustba;
	int die1,die2,dicesu,winorloss,pt,checkwag;
	do{
		printGamerRules();
		bal=GetBalance();
		wag=GetWager();
		checkwag=checkWager(wag,bal);
		die1=RollDie();
		die2=RollDie();
		count=count+2;
		dicesu=dicesum(die1,die2);
		cout << "player rolled"<<die1 << " + "<<die2 << " = " << dicesu << endl;
		winorloss=isWinorLoss(dicesu);
		pt=pointloss(dicesu,winorloss);
		adjustba=adjustbal(bal,wag,winorloss);
		message(count,winorloss,bal,adjustba);
		cout<<"Want to paly again : Enter y "<<endl;
		cin>>c;
	}
	while(c=='y');
	
	
}
