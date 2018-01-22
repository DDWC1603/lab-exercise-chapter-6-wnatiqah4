//convert string to uppercase
//complete the fragment code below using the string to uppercase function.

#include <iostream>

int main()
{
	char lowerToUpper[80];

	/*use string copy function here*/(lowerToUpper, "This is a check");

	for(i=0;i<80;i++)
	{
		lowerToUpper[i] = /*uppercase function*/(lowerToUpper[i]);

	}

	cout<<lowerToUpper<<endl;
}

//AFTER
//student name : WAN NURUL ATIQAH
//matric no : A17DW2386

#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

int main()
{
	char lowerToUpper[80];
	int i=0;

	strcpy(lowerToUpper, "This is a check");

	for(i=0;i<80;i++)
	{
		lowerToUpper[i] = toupper(lowerToUpper[i]);

	}

	cout<<lowerToUpper<<endl;
	
	return 0;
}
