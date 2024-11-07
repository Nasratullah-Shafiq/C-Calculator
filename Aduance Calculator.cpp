#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,y,z;  //Declaring of Three Variables tow For storing numbers and the last one is for store the result of x and y;
	
	char n;  //// This is the Charachter variable which is for character means it just save 1 bit
	cout<<"Welcome To Nasratullah Shafiq's Calculator\n";
	cout<<"\nHere you can calculate some Numbers\n";
			
			char s;
			do {
			cout<<"\nEnter First Number \n";
			cin>>x;
			
			cout<<"\nEnter Second Number \n";
			cin>>y;
			cout<<"\nEnter + for Add - For Minus * for Multiply and / For Divide = "<<endl;
			cin>>n;
			
			
			switch (n){
			case '+':
				z=x+y;
				cout<<"This is your Addition "<<x<<" + "<<y<<" = "<<z;
				break;    // it Brake this part when this part is wrong and it might not be running 
				case'-':
					z=x-y;
					cout<<"This is your Minus "<<x<<" - "<<y<<" = "<<z;
					break;
					case'*':
						z=x*y;
						cout<<"This is your Multiplication "<<x<<" * "<<y<<" = "<<z;
						break;
						case '/':
							z=x/y;	
							cout<<"This is your Division "<<x<<" / "<<y<<" = "<<z;
							break;
							case'^':
								z=x*y;
								cout<<"This is your Power "<<x<<" ^ "<<y<<" = "<<z;
								break;
								case 'a':
									cout<<"Hi Ahmad Shafiq How are you?";
									break;
									case'm':
										cout<<"Hi Mukhtar Ahmad Shafiq ";
										break;
										default:
											cout<<"Sorry You Are Entering The Wrong Number";	
	}   /// end of Switch function with all Cases
	cout<<"\n\nDo another (Enter yes (y) or No (n))? ";
	cin>>s;	
	}while(s=='y');exit(1);  /// End of Do Statement
			
		
	
		
	getch ();
	return 0;
}//end of Main functin

