#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int choice;
	float num1,num2,result;
	for(;;){
		cout<<
"=========================\n";
cout<<
"   SIMPLE CALCULATOR\n";
cout<<
"=========================\n";
cout<<
"   1.ADDITION\n";
cout<<
"   2.SUBTRACTION\n";
cout<<
"   3.MULTIPLICATION\n";
cout<<
"   4.DIVISION\n";
cout<<
"   5.EXIT\n";
cout<<
"=========================\n";
cout<<
"   Enter your choice:";
cin>>choice;
cout<<"\n";
if(choice==5){
	cout<<
"   Thank you for using\n";
break;
	}
else if(choice<1||choice>5){
	cout<<
"   INVALIDE\n";
	}
cout<<
"   Enter 1st number:";
cin>>num1;
cout<<
"\n";
cout<<
"   Enter 2nd number:";
cin>>num2;
cout<<
"\n";
	
switch(choice){
	case 1:
	result=num1+num2;
	cout<<
"   result is:"<<result;
cout<<"\n";
	break;
	case 2:
	result=num1-num2;
		cout<<
"   result is:"<<result;
cout<<"\n";
	break;
    case 3:
	result=num1*num2;
		cout<<
"   result is:"<<result;
cout<<"\n";
	break;
	case 4:
	result=num1/num2;
		cout<<
"   result is:"<<result;
cout<<"\n";
	break;
	 }
}
	return 0;
}