#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string>
#include <ctype.h>
using namespace std;
int checkflag = 0;
int cot = 0;
float final_res = 0;
int no_of_sym = 0;
int no_of_var = 0;
char * sym[100];
char * svar[100];

template <class A_Type=A_Type, class B_Type=B_Type> class Pair {//Class Declaration
private:
	 A_Type key;//private attributes
	 B_Type value;
public:
	
	Pair(){};//constructor
	Pair(A_Type k, B_Type v){
		key = k;
		value = v;
	}
	//getter and setter
	B_Type getValue(){ return value; }
	A_Type getKey(){ return key; }
	void setValue(B_Type v){ value = v; }
	void setKey(A_Type k){ key = k; }

	//++ operator
	Pair operator+(Pair var){
		Pair temp;
		temp.value = value + var.value;
		//temp.key=var.key;
		return temp;

	}
	B_Type addition(B_Type a, B_Type b){//when + operator used then call function
	B_Type c=a + b;
	cout<<"\n\n***sum is:"<<c<<"*********"<<endl;
	return c ;
}
	B_Type division(B_Type a, B_Type b){//when / operator used then call function
		B_Type c;
		if(b!=0){
	c=a / b;
		cout<<"\n\n***result is:"<<c<<"*********"<<endl;
		return c ;
		}
		else{
			cout << "can not divide by zero\n";
			return c ;
		}
	
}
	B_Type multiplication(B_Type a, B_Type b){//when * operator used then call function
	B_Type c=a * b;
	cout<<"\n\n***multiply is:"<<c<<"*********"<<endl;
	return c ;
}
	//assignment operator
	Pair operator=(Pair var){
		key = var.key;
		value = var.value;
	}

	//when print keyword used this fun gets called
	void display(){
		cout << "the value of Key is" << value;
		cout << endl;
	}
	B_Type Subtraction(B_Type a, B_Type b){//when - operator used then call function
	B_Type c=a - b;
	cout<<"\n\n***Difference is:"<<c<<"*********"<<endl;
	return c ;
}
};

void CheckingLength(char*s[], int x2){//measure the length of the expression in order to check the syntax


	int k = 0;
	int l = 0;
	for (int i = 0; i < x2; i++)//loop to count the variable and operators
	{
		if ((strcmp(s[i], "+") == 0) || (strcmp(s[i], "-") == 0) || (strcmp(s[i], "/") == 0) || (strcmp(s[i], "*") == 0))
		{
			no_of_sym++;//increment if operator found
			sym[k] = s[i];
			k++;//track to count the operator

		}
		else
		{
			no_of_var++;//if variable found increment it
			svar[l] = s[i];
			l++;
		}
	}

	if (no_of_sym == no_of_var - 1)//if lenght of variable is less then the operator then fine
	{

	}
	else
	{
		std::cout << "syntax error\n";
		checkflag = 1;
	}

}

void SytaxErrorCheck(string s)
{
	char s2[100];
	char s23[100];
	char *str3[100];
	char * pch1;
	const char * cs;
	int x = 0;
	cs = s.c_str();
	strcpy(s2, cs);
	pch1 = strtok(s2, "  ;");
	str3[x] = pch1;
	//const char * a;
	x++;
	while (pch1 != NULL)
	{
		pch1 = strtok(NULL, "  ;");
		str3[x] = pch1;
		x++;
	} // end of while


	char str[] = " ";

	for (int i = 0; i < x - 1; i++)
	{


		if (strcmp(str3[i], "=") == 0)
		{
			str3[i - 1]; //should be a variable name
			strcpy(s23, str3[i - 1]);
			if (isdigit(s23[0]))
			{
				std::cout << "Syntax error\n";
				checkflag = 1;
			}

			if (str3[i + 1] == NULL)
			{
				std::cout << "Syntax error\n";
				checkflag = 1;
			}

		}

	}


}

