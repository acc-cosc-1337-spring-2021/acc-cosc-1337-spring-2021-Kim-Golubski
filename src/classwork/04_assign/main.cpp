//write includes statements
#include"loops.h"
//write using statements for cin and cout
using std::cout;	using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main()
{
	int number;

	do
	{
		cout<<"Enter a number from 1 to 10 to find it's factorial: ";
		cin>>number;
		cout<<factorial(number)<<"\n";
	}
	while(number>=1 && number <=10);

	return 0;
}