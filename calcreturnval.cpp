#include <iostream>
using namespace std;

void calcStruct(){
	cout<<"Selected Operations:\n\n";
	cout<<"[+]............ Addition\n";
	cout<<"[-]............ Subtraction\n";
	cout<<"[*]............ Multiplication\n";
	cout<<"[/]............ Division\n";
	cout<<"[^]............ Raise to the Power\n\n";
	
}
double calcFunc(double x, char z, double y){
	
	if (z == '+'){
		return x + y;
	}
	else if(z == '-'){
		return x - y;
	}
	else if(z == '*'){
		return x * y;
	}
	else if(z == '/'){
		return x / y;
	}
	else if(z == '^'){
		double multi = x;
		for(int i = 1; i < y; i++){
			multi *= x;
		}
		return multi;
	}
}
int main(){
	int num1;
	int num2;
	char opp;
	char letter;
	calcStruct();
	cin>>num1;
	
	while (true){
		cin>>opp;
		if (opp != '+' && opp != '-' && opp != '*' && opp != '/' && opp != '^'){
			cout<<" Warning: Not a valid operator!"<<"\n";
		}
		else{
			break;
		}
	}
	cin>>num2;
	cout<<calcFunc(num1, opp, num2);
	cout<<"\nPress the R and r key to continue or Q and q to quit the console"<<endl;
	
	while (true){
		cout<<"Letter: ";
		cin>>letter;
		if (letter != 'R' && letter != 'r' && letter != 'Q' && letter != 'q'){
			cout<<"Enter a valid letter!"<<endl;
		}
		else{
			if (letter == 'r' || letter == 'R'){
				system("cls");
				calcStruct();
				cin>>num1;
				calcFunc(num1, opp, num2);
				while (true){
					cin>>opp;
					if (opp != '+' && opp != '-' && opp != '*' && opp != '/' && opp != '^'){
						cout<<" Warning: Not a valid operator!"<<"\n";
					}
					else{
						break;
					}	
				}
				cin>>num2;
				cout<<calcFunc(num1, opp, num2);
				cout<<"\nPress the R and r key to continue or Q and q to quit the console"<<endl;			
			}
			else{
				break;
			}
		}
	}
	
	
}
