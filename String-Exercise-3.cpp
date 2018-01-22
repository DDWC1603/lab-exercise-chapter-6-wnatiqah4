//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)

#include <iostream>

int main()
{
	char strPswd[80];

	cout<<"Enter password: ";
	//get the strPswd
	
	//make an if else that check the password(strPswd)
	//(string compare function (strPswd,"Check")) 
		
		cout<<"invalid password "<<endl;
	
	 
		cout<<"Logged in "<<endl;

	

	return 0;
}

//AFTER 
//student name : WAN NURUL ATIQAH
// matric no : A17DW2386

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char strPswd[80];
	
	cout<<"Enter password: "<<endl;
	cin>>strPswd;
	
	if (strPswd == "atiqah")
		
		cout<<"Logged in "<<endl;
	
	else 
	
		cout<<"invalid password "<<endl;

	return 0;
}
