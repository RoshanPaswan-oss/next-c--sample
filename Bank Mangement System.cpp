#include<stdio.h>
#include<conio.h>
#include<iostream>
class bank 
{
	char name[100],add[100],y;
	int balance;
	public:
		void open_account();
		void deposite_money();
		void withdraw_money();
		void display_account();
	};
	void bank :: open_account()
	{
		std::cout<<"Enter your name";
 std::cin.ignore();
 std::cin.getline(name,100);
 std::cout<<"enter your addrass ::";
std::		cin.ignore();
std::		cin.getline(add,100);
std::		cout<<"What type of account you want to open savings or current ::";
std::		cin>>y;
std::		cout<<"Enter your diposited amountt";
std::		cin>>balance;
std::		cout<<"Your account has been creaded \n";
		
	}
	void bank :: deposite_money()
	{
		int a;
		std::cout<<"Enter the amount you want to deposit::";
		std::cin>>a;
		balance+=a;
		std::cout<<"The amout you diposited is \t"<<balance;
	}
	void bank :: display_account()
	{
    	std::cout<<"Your full name :: \t"<<name;
		std::cout<<"Your address is :: \t"<<add;
		std::cout<<"type of account that you opend ::\t"<<y;
		std::cout<<"Amount of money diposited is ::\t"<<balance;
	}
	void bank :: withdraw_money()
	{
		float amount;
		std::cout<<"\n withdraw ::";
		std::cout<<"Enter amount to withdraw ::";
		std::cin>>amount;
		balance=balance-amount;
		std::cout<<"The withdraw amount is ::"<<balance;
	}
int main()
{
	int x;
	using namespace std;
	int ch;
	bank obj;
	do
	{
	cout<<"1) open_account \n";
	cout<<"2) deposite money \n";
	cout<<"3) withdraw money \n";
	cout<<"4) Display account \n";
	cout<<"5) Exit";
	cout<<"select the option from above \n";
	cin>>ch;
	switch(ch)
	{
		case 1:
std::cout<<"1) open account \n";
		obj.open_account();
		break;
	case 2:
		std::cout<<"Deposite money \n";         
		obj.deposite_money();
		break;
		case 3:
		std::cout<<"3) withdraw money \n";
		obj.withdraw_money();
		break;
		case 4:
		std::cout<<"4) Display account \n";
		obj.display_account();
		break;
		case 5:
			if(ch==5)
			{
				exit(1);
			}
			default:
				cout<<" \n this is not exit try again \n";
	}
	cout<<"If you want to select next option then select ::y \n";
	cout<<"If you want to exit then press ::N \n";
	
	x=getch();
	if(x=='n'||x=='N')
		exit(0);
	}
	while(x=='y'||x=='Y');
	
	

	
	getch();
	return 0;
	}
