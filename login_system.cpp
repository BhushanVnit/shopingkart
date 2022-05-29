#include<bits/stdc++.h>
#include <conio.h>

using namespace std;

class products{
	int price;
	int quantity;
	public:
		void setPrice(int price)
		{
			this->price= price;
		}
		void setQyantity(int n)
		{
			quantity = n;
		}
		int getPrice()
		{
			return price;
		}
		int getQuantity()
		{
			return quantity;
		}
};


class consumer{
	
	int total=0;
	string customerName;
	vector<pair<string,int>>fruits;
	public:
		consumer()
		{
			cout<<"    Enter the name of customer:\n    >>>";
			cin>>ws;
 			getline(cin,customerName);
 			cout<<"\n \n";
 			menu();
		}
		void menu()
		{
				bool operate = true;
				 while(operate)
				 {
				 	 cout<<"   Select the operation you want to perform :\n"<<endl;
					 cout<<"     1.Add items\n\n     2.View Cart\n\n     3.Checkout\n\n    >>>";
				 
					 int option;
				 
					 cin>>option;
				 	 if(option == 1)
					 {
					 	addItems();
					 }
					 else if( option == 2)
					 {
					 	viewCart();
					 }
					 else
					 {
					 	checkout();
					 	operate = false;
					 }
				 }
				 
		}		
		void addItems()
		{	
			cout<<"\n   $$ Available Fruits : \n"<<endl;
			
			products apple;
			products banana;
			products papaya;
			
			apple.setPrice(100);
			banana.setPrice(40);
			papaya.setPrice(30);	
			
			cout<<"   1. Apple "<<apple.getPrice()<<" per kg"<<endl;
			cout<<"   2. Banana "<<banana.getPrice()<<" per kg"<<endl;
			cout<<"   3. Papaya "<<papaya.getPrice()<<" per kg\n\n   >>>  ";
			
			int value;
			cin>>value;
	
			pair<string,int> p1;
			
			if(value == 1)
			{
				int n;
				cout<<"\n   Enter the quantity(in Kg) :\n   -> ";
				cin>>n;
				total += ( apple.getPrice()*n);
				p1.first = "Apple";
				p1.second = n;
				fruits.push_back(p1);
			}
			else if(value == 2)
			{
				int n;
				cout<<"\n   Enter the quantity(in Kg) :\n   -> :";
				cin>>n;
				total += ( banana.getPrice()*n);
				p1.first = "Banana";
				p1.second = n;
				fruits.push_back(p1);	
			}
			else if(value == 3)
			{
				int n;
				cout<<"\n   Enter the quantity(in Kg) :\n   -> ";
				cin>>n;
				total += ( papaya.getPrice()*n);
				p1.first = "Papaya";
				p1.second = n;
				fruits.push_back(p1);
			}
			else
			{
				cout<<"Invalid Input"<<endl;
			}
			
			cout<<"\n\n   Add more items(a)            View Cart(b)               Main menu(c)"<<endl;
			
			char m;
			cin>>m;
			
			if(m=='a')
			{
				addItems();
			}
			else if(m == 'b')
			{
				viewCart();
			}	
		}
		void viewCart()
		{	cout<<"\n     ---------------------------------------------"<<endl;
			cout<<"\n   $Here is the list of items inside your cart :\n"<<endl;
			int size = fruits.size();
			
			for(auto pr: fruits)
		    {
		      cout <<"       "<< pr.first << " - " << pr.second<<" kg"<<endl;
		    }
			 
		    cout<<"     -----------------------------------"<<endl;
		    cout<<"    Total Amount -      "<<total<<endl;
		    cout<<"     -----------------------------------\n"<<endl;	      
		}
		void checkout()
		{	
			cout<<"\n\n           Sai Jeevan Supershop"<<endl;
			cout<<"      Jamner road, Bhusawal - 425201."<<endl;
			cout<<"      ---------------------------------"<<endl;
			
			cout<<"      Hello "<<customerName<<", \n\n      Here's your Bill :'"<<endl;
			
			int size = fruits.size();
			for(auto pr: fruits)
		    {
		      cout <<"       "<< pr.first << " - " << pr.second<<" kg"<<endl;
		    } 
		    cout<<"     -----------------------------------"<<endl;
		      
		    cout<<"     Total Amount     -  "<<total<<endl;
		    cout<<"     -----------------------------------"<<endl;
		    cout<<"     Thanks for visiting. \n       Have a good day !!!\n"<<endl;
		      
		    cout<<"    Do you want to continue with next customer ? (y / n)\n   >>>  ";
		    char response;
		    cin>>response;
		     
		     if(response == 'y')
		     { 
		     	consumer();
			 }
			 else
			 {
				exit;
			 }

		}
};

class login {
	
	string admin_password = "123";
	public:
		    login( )
			{
				cout<<"\n"<<endl;
				cout<<"                            -.-.-.- Welcome to Bahale Software Services Limited.-.-.-.- \n \n" <<endl;
				cout<<"                                            - - - Administrator Login - - -    \n\n" <<endl;
	       		
	       		adminLogin();
			}
			
			void adminLogin()
			{	
				bool loginScreen = true;
	
				while(loginScreen)
				{
					string password;
					char ch;	
					cout<<"   **Enter the administrator password :"<<endl;
					cout<<"   >>>   ";
					ch = _getch();
					
					while(ch != 13)
					{
				      password.push_back(ch);
				      cout << '*';
				      ch = _getch();
  					 }
					//getline(cin,password);
	
					if(password==admin_password)
					{
					    loginScreen = false;
						cout<<"\n    Access granted  !!! \n\n "<<endl; 
						cout<<"   - - - Welcome to Saijeevan Fruit Shop - - -\n\n"<<endl;
						consumer();  
					} 
					else
					{
						cout<<"   Access aborted. Please try again !!! \n \n"<<endl;
					}
			    }
			}				  	
};
login administrator;


int main()
{   
 	return 0;
}
