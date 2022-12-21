#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
	public:
		Management()
		{
			mainMenu();
		}
};
  class Details{
  	public:
  		static string name,gender;
  		int phoneNo;
  		int age;
  		string add;
  		static int cId;
  		char arr[100];
  		
  		void information()
		   {
		  cout<<"\nEnter the customer ID:";
		  cin>>cId;

          cout<<"\nEnter the name :"	;
		  cin>>name;
		  cout<<"\nEnter the age :";
		  cin>>age;
		  cout<<"\n Address :";
		  cin>>add;
		  cout<<"\n Gender :";
		  cin>>gender;
		  cout<<"Your details are saved with us\n"<<endl;
		  
		  	  }
  };
  
  int Details::cId;
  string Details::name;
  string Details::gender;
  
  class registration{
  	public:
  		static int choice;
  		int choice1;
  		int back;
  		static float charges;
  		
  		void flights(){
  			string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
  			
  			for(int a=0; a<6; a++){
  				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
			  }
			  cout<<"\n Welcome to the Airlines!"<<endl;
			  cout<<"Press the number of the country of which you want to book the flight:";
			  cin>>choice;
			  
			  switch(choice){
			  	case 1:{
			  		cout<<"____________________Welcome to Dubai Emirates______________\n"<<endl;
			  		
			  		cout<<"Your comfort is our priority. Happy Journey!"<<endl;
			  		
			  		cout<<"Following are the flights \n"<<endl;
			  		
			  		cout<<"1, DUB -498 "<<endl;
			  		cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
			  		cout<<"1, DUB -598 "<<endl;
			  		cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
			  		cout<<"1, DUB -698 "<<endl;
			  		cout<<"\t11-01-2022 11:00AM 11hrs Rs. 12000"<<endl;
			  		
			  		cout<<"\nSelect the flight you want to book :";
			  		cin>>choice1;
			  		
			  		if(choice1==1)
			  		{
			  			charges=14000;
			  			cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
			  		else if(choice1==2){
			  			charges=10000;
			  			cout<<"\nYou have successfully booked the flight DUB-598"<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else if(choice1==3){
			  			charges=12000;
			  			cout<<"\nYou have successfully booked the flight DUB-698"<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else{
					  	cout<<"Invalid input,shifting to the previous menu"<<endl;
					  	flights();
					  }
					cout<<"Press any key to go back to the menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
				  }
				  case 2:{
				  	
					cout<<"____________________Welcome to Canadian Airlines______________\n"<<endl;
			  		
			  		cout<<"Your comfort is our priority. Happy Journey!"<<endl;
			  		
			  		cout<<"Following are the flights \n"<<endl;
			  		
			  		cout<<"1, CA -198 "<<endl;
			  		cout<<"\t09-01-2022 2:00AM 11hrs Rs. 25000"<<endl;
			  		cout<<"1,CA -298 "<<endl;
			  		cout<<"\t10-01-2022 4:00PM 12hrs Rs. 20000"<<endl;
			  		cout<<"1, CA -398 "<<endl;
			  		cout<<"\t12-01-2022 10:00AM 11hrs Rs. 22000"<<endl;
			  		
			  		cout<<"\nSelect the flight you want to book :";
			  		cin>>choice1;
			  		
			  		if(choice1==1)
			  		{
			  			charges=25000;
			  			cout<<"\nYou have successfully booked the flight CA-198"<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
			  		else if(choice1==2){
			  			charges=20000;
			  			cout<<"\nYou have successfully booked the flight CA-298"<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else if(choice1==3){
			  			charges=22000;
			  			cout<<"\nYou have successfully booked the flight CA-398"<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else{
					  	cout<<"Invalid input,shifting to the previous menu"<<endl;
					  	flights();
					  }
					cout<<"Press any key to go back to the menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
					
				  }
				  case 3:
				  	{
				  		cout<<"____________________Welcome to UK Airways______________\n"<<endl;
			  		
			  		cout<<"Your comfort is our priority. Happy Journey!"<<endl;
			  		
			  		cout<<"Following are the flights \n"<<endl;
			  		
			  		cout<<"1, UK -398 "<<endl;
			  		cout<<"\t12-01-2022 8:00PM 10hrs Rs. 34000"<<endl;
			  		
			  		
			  		cout<<"\nSelect the flight you want to book :";
			  		cin>>choice1;
			  		
			  		if(choice1==1)
			  		{
			  			charges=34000;
			  			cout<<"\nYou have successfully booked the flight UK -398"<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
			  		
					  else{
					  	cout<<"Invalid input,shifting to the previous menu"<<endl;
					  	flights();
					  }
					cout<<"Press any key to go back to the menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
					  }
					  case 4:
					  	{
					  		cout<<"____________________Welcome to USA Airways______________\n"<<endl;
			  		
			  		cout<<"Your comfort is our priority. Happy Journey!"<<endl;
			  		
			  		cout<<"Following are the flights \n"<<endl;
			  		
			  		cout<<"1, US-567  "<<endl;
			  		cout<<"\t09-02-2022 2:00AM 21hrs Rs. 45000"<<endl;
			  		cout<<"1, US-667 "<<endl;
			  		cout<<"\t10-02-2022 4:00PM 22hrs Rs. 40000"<<endl;
			  		cout<<"1,  US-767 "<<endl;
			  		cout<<"\t12-02-2022 10:00AM 20hrs Rs. 42000"<<endl;
			  		
			  		cout<<"\nSelect the flight you want to book :";
			  		cin>>choice1;
			  		
			  		if(choice1==1)
			  		{
			  			charges=45000;
			  			cout<<"\nYou have successfully booked the flight  US-567 "<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
			  		else if(choice1==2){
			  			charges=40000;
			  			cout<<"\nYou have successfully booked the flight  US-667 "<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else if(choice1==3){
			  			charges=42000;
			  			cout<<"\nYou have successfully booked the flight  US-767 "<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else{
					  	cout<<"Invalid input,shifting to the previous menu"<<endl;
					  	flights();
					  }
					cout<<"Press any key to go back to the menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
					  		
					  		
						  }
						  case 5:
						  	{
						  			cout<<"____________________Welcome to Australian Airlines______________\n"<<endl;
			  		
			  		cout<<"Your comfort is our priority. Happy Journey!"<<endl;
			  		
			  		cout<<"Following are the flights \n"<<endl;
			  		
			  		cout<<"1, AUS-667  "<<endl;
			  		cout<<"\t11-02-2022 2:00AM 21hrs Rs. 16000"<<endl;
			  		cout<<"1, AUS-668 "<<endl;
			  		cout<<"\t13-02-2022 4:00PM 22hrs Rs. 26000"<<endl;
			  		cout<<"1,  UAS-669"<<endl;
			  		cout<<"\t15-02-2022 10:00AM 20hrs Rs. 36000"<<endl;
			  		
			  		cout<<"\nSelect the flight you want to book :";
			  		cin>>choice1;
			  		
			  		if(choice1==1)
			  		{
			  			charges=16000;
			  			cout<<"\nYou have successfully booked the flight  AUS-667 "<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
			  		else if(choice1==2){
			  			charges=26000;
			  			cout<<"\nYou have successfully booked the flight  AUS-668 "<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else if(choice1==3){
			  			charges=36000;
			  			cout<<"\nYou have successfully booked the flight  AUS-669 "<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else{
					  	cout<<"Invalid input,shifting to the previous menu"<<endl;
					  	flights();
					  }
					cout<<"Press any key to go back to the menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
							  }
			case 6:{
					cout<<"____________________Welcome to European Airlines______________\n"<<endl;
			  		
			  		cout<<"Your comfort is our priority. Happy Journey!"<<endl;
			  		
			  		cout<<"Following are the flights \n"<<endl;
			  		
			  		cout<<"1, EU-767 "<<endl;
			  		cout<<"\t21-02-2022 2:00AM 21hrs Rs. 26000"<<endl;
			  		cout<<"1,  EU-867 "<<endl;
			  		cout<<"\t23-02-2022 4:00PM 22hrs Rs. 36000"<<endl;
			  		cout<<"1,   EU-967"<<endl;
			  		cout<<"\t25-02-2022 10:00AM 20hrs Rs. 46000"<<endl;
			  		
			  		cout<<"\nSelect the flight you want to book :";
			  		cin>>choice1;
			  		
			  		if(choice1==1)
			  		{
			  			charges=26000;
			  			cout<<"\nYou have successfully booked the flight   EU-767 "<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
			  		else if(choice1==2){
			  			charges=36000;
			  			cout<<"\nYou have successfully booked the flight   EU-867 "<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else if(choice1==3){
			  			charges=46000;
			  			cout<<"\nYou have successfully booked the flight  EU-967 "<<endl;
			  			cout<<"You can go back to menu and take the ticket"<<endl;
					  }
					  else{
					  	cout<<"Invalid input,shifting to the previous menu"<<endl;
					  	flights();
					  }
					cout<<"Press any key to go back to the menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
				
				
			}
			default :
				{
					cout<<"Invalid input, Shifting you to the main menu!"<<endl;
					mainMenu();
					break;
				}
			  }
			  
		  }
  };
  float registration::charges;
  int registration::choice;
  
  class ticket : public registration, Details
  {
  	public:
  		
  		void Bill()
		  {
  			string destination="";
  			ofstream outf("records.txt");
  			{
  				outf<<"______________CLOUD Airlines_____________"<<endl;
  				outf<<"________________Ticket___________________"<<endl;
  				outf<<"_________________________________________"<<endl;
  				
  				outf<<"Customer ID: "<<Details::cId<<endl;
  				outf<<"Customer Name: "<<Details::name<<endl;
  				outf<<"Customer Gender: "<<Details::gender<<endl;
  				outf<<"\tDescription"<<endl<<endl;
  				
  				if(registration::choice==1)
  				{
  					destination="Dubai";
  					
				  }
				 else if(registration::choice==2)
  				{
  					destination="Canada";
  					
				  }
				 else if(registration::choice==3)
  				{
  					destination="UK";
  					
				  }
				 else if(registration::choice==4)
  				{
  					destination="USA";
  					
				  }
				 else if(registration::choice==5)
  				{
  					destination="Australia";
  					
				  }
				 else if(registration::choice==6)
  				{
  					destination="Europe";
  					
				  }
				  
				  outf<<"Destination\t\t"<<destination<<endl;
				  outf<<"Flight cost:\t\t "<<registration::charges<<endl;
				  
			  }
			  outf.close();  			
		  }
		  void dispBill()
		  {
		  	ifstream ifs("records.txt");
		  	{
		  		if(!ifs){
		  			cout<<"File error!"<<endl;
				  }
				  while(!ifs.eof()){
				  	ifs.getline(arr,100);
				  	cout<<arr<<endl;
				  }
			  }
			  ifs.close();
		  }
  		
  };
  
void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
	
	cout<<"\t             CLOUD Airlines\n"<<endl;
	cout<<"\t____________Main Menu_____________"<<endl;
	
	cout<<"\t________________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details   \t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration       \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges        \t|"<<endl;
	cout<<"\t|\t Press 4 to Exist                      \t|"<<endl;
	cout<<"\t|\t\t\t\t\t\t|"<<endl;	
	cout<<"\t_________________________________________________"<<endl;

    cout<<"Enter the choice: ";
    cin>>lchoice;
    
    
    Details d;
    registration r;
    ticket t;
    
    switch(lchoice)
	{
    	case 1 :
		{
			cout<<"____________Customers___________\n"<<endl;
			d.information();
			cout<<"Press any key to go back to Main menu ";
			cin>>back;
			
			if(back==1)
			{
				mainMenu();
				
			}
				else
				{
					mainMenu();
				}
				break;
		}
		case 2:
			{
				cout<<"__________Book a flight using this system__________\n"<<endl;
			    r.flights();
			    break;
			}
			
			case 3:
			{
				
				cout<<"__________GET YOUR TICKET________\n"<<endl;
				t.Bill();
				
				
				cout<<"Your ticket is printed,  you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				
				
				cin>>back;
				
				  if(back==1)
				  {
				  	t.dispBill();
				  	cout<<"Press any key to go back to main menu:";
				  	cin>>back;
				  	if(back==1)
					  {
				  		mainMenu();
					  }
					  else
					  {
					  	mainMenu();
					  }
				  }
				else{
					mainMenu();
					
				}
				break;
				
			}
			case 4:
				{
				cout<<"\n\n\t_________Thank-YOU_______"<<endl;
					break;
				}
				default :
					{
						cout<<"Invalid input, Please try again!\n"<<endl;
						mainMenu();
						break;
					}
	}
}
int main()
{
	Management Mobj;
	return 0;
}
