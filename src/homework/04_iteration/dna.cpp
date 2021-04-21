#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string dna)
{
    double length = 0;
    double count = 0;
    for(auto c: dna)
    {
        length++;
        if (c == 'G' || c =='g' || c == 'c' || c == 'C')
        {
            count++;
        }
    }
    double GC = count / length;
    return GC;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    string reverse;
    for(auto c: dna)
    {
        reverse.insert(0, 1, c);
    }
    return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string
*/
string get_dna_complement(string dna)
{
    string complement;
    string reverse = get_reverse_string(dna);
    for(auto c: reverse)
    {
        if(c == 'A' || c == 'a')
        {
            c = 'T';
            complement.push_back(c);
        }
        else if(c == 'T' || c == 't')
        {
            c = 'A';
            complement.push_back(c);
        }
        else if(c == 'C' || c == 'c')
        {
            c = 'G';
            complement.push_back(c);
        }
        else if(c == 'G' || c == 'g')
        {
            c = 'C';
            complement.push_back(c);
        }
    }
    return complement;
}
