//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
#include <iostream>
using std::cout;	using std::cin;

int main() 
{
	int grade;
	cout<<"Enter your grade number: ";
	cin>>grade;

	cout<<get_letter_grade_using_if(grade)<<"\n";
	cout<<get_letter_grade_using_switch(grade);
}

