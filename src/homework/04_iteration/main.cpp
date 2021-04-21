//write include statements
#include<dna.h>
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	char quit = 'N';

	while (quit == 'N' or quit == 'n')
	{
		cout<<"Enter 1 for Get GC Content, or enter 2 for Get DNA Complement: ";
		cin>>choice;
		if(choice == 1)
		{
			string dna;
			cout<<"Enter a DNA string: ";
			cin>>dna;
			cout<<get_gc_content(dna)<<"\n";
			cout<<"Would you like to quit? Type N for no or Y for yes: ";
			cin>>quit;
		}
		else if(choice == 2)
		{
			string dna;
			cout<<"Enter a DNA string: ";
			cin>>dna;
			cout<<get_dna_complement(dna)<<"\n";
			cout<<"Would you like to quit? Type N for no or Y for yes: ";
			cin>>quit;
		}
		else if(choice != 1 || choice != 2)
		{
			cout<<"Invalid input.";
			break;
		}
	}
	

	return 0;
}