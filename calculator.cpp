#include<iostream>
using namespace std;
struct{
	//inputs of number 1, number 2, and operator
	double num1;
	double num2;
	char op;
}inpNum, inpOp;//indication of num1, num2 and op

void calcStruct(){
	
	cout<<"*****______________CALCULATOR______________*****\n\n";
	cout<<"Selected Operations:\n\n";
	cout<<"[+]............ Addition\n";
	cout<<"[-]............ Subtraction\n";
	cout<<"[*]............ Multiplication\n";
	cout<<"[/]............ Division\n";
	cout<<"[^]............ Raise to the Power\n\n";
	cout<<"*****______________________________________*****\n\n";
	/*cout<<"Enter your inputs like this:"<<endl<<endl;
	cout<<"\t1 + 1"<<endl<<endl;
	cout<<"\t or"<<endl<<endl;
	cout<<"\t 1"<<endl;
	cout<<"\t +"<<endl; 
	cout<<"\t 1"<<endl<<endl;*/
	cout<<"============================="<<endl<<endl;
	
}

void inpFunc(){
	
	
	cout<<" ";
	cin>>inpNum.num1;//input number(1)
	
	while (true){//if the user inputted an invalid operator it loops back to this line not until the condition has been met
		cout<<" ";
		cin>>inpOp.op;//input operator
		if (inpOp.op != '+' && inpOp.op != '-' && inpOp.op != '*' && inpOp.op != '/' && inpOp.op != '^'){//program that consists the conditions for operator
			cout<<" Warning: Not a valid operator!"<<"\n";//Outputs this line if the inputted operator didn't meet the requirements
		}
		else{
			break;//if the user inputted a valid operator he will break the code and will proceed to the 3rd input which is the input number(2)
		}
	}
	
	cout<<" ";
	cin>>inpNum.num2;//input number(2)
	
}

void calcFunc(){
	
	double result;
	//ADDITION
	if(inpOp.op == '+'){
		result = inpNum.num1 + inpNum.num2;
		cout<<" Answer: "<<result<<"\n\n";
	}
	//SUBTRACTION
	else if(inpOp.op == '-'){
		result = inpNum.num1 - inpNum.num2;
		cout<<" Answer: "<<result<<"\n\n";
	}
	//MULTIPLICATION
	else if(inpOp.op == '*'){
		result = inpNum.num1 * inpNum.num2;
		cout<<" Answer: "<<result<<"\n\n";
	}
	//DIVISION
	else if(inpOp.op == '/'){
		result = inpNum.num1 / inpNum.num2;
		cout<<" Answer: "<<result<<"\n\n";
	}
	//RAISING TO A POWER
	else if(inpOp.op == '^'){
		double multi = inpNum.num1;
		for(int i = 1; i < inpNum.num2; i++){
			multi *= inpNum.num1;
		}
		cout<<" Answer: "<<multi<<"\n\n";
	}
	
	cout<<"============================="<<endl;
	
}

int main(){
	
	calcStruct();//Body of code containing the 1st structure of the program
	inpFunc();//Body of code containing the 2nd structure of the program, it also includes the inputs
	calcFunc();//Contains the program of a calculator
	char letter;
	cout<<"DISPLAY R/r TO RESTART THE PROGRAM OR Q/q TO QUIT THE PROGRAM"<<endl;//THE RESTART OR QUIT OPERATION FOR THE USER TO CONTINUE OR NOT
	
	while(true){//IF THE USER ENTERED AN INVALID LETTER, THIS WILL LOOP BACK NOT UNTIL THE CONDITION OR REQUIREMENT HAS BEEN MET
		cout<<"Letter: ";
		cin>>letter;//INPUT R OR Q
		if(letter != 'R' && letter != 'r' && letter != 'Q' && letter != 'q'){//CONDITIONS FOR USERS 
			cout<<"Enter enter a valid letter!"<<endl;//THIS LINE WILL BE OUTPUT IF A USER ENTERED AN INVALID LETTER
		}
		else{//this will tell if the user entered a valid letter (Q or R)
			if(letter == 'R' || letter == 'r'){
				system("cls");//THIS WILL CLEAR THE CONSOLE
				calcStruct();//WILL KEEP REPEATING NOT UNTIL A USER ENTERED Q
				inpFunc();
				calcFunc();
				cout<<"DISPLAY R/r TO RESTART THE PROGRAM OR Q/q TO QUIT THE PROGRAM"<<endl;
			}
			else{//THIS WILL STOP THE WHOLE PROGRAM IF THE USER ENTERED Q
				break;
			}
		}
	}
}


