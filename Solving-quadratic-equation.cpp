#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h> 
using namespace std;

quadrantic()
{
	while(true)
{
	double a,b,c;
	char ch,ar,y,n;
	
cout<<"Solving quadratic equation"<<endl<<endl;
cout<<"Quadratic equation format is: (a(x^2)+bx+c)"<<endl;
cout<<"Enter a: ";
cin>>a;	
cout<<"Enter b: ";
cin>>b;
cout<<"Enter c: ";
cin>>c;

	double delta= b*b-4*a*c;
	double d = double (pow(delta,0.5));
	double f1= double (-b+d)/(2*a);
	double f2= double (-b-d)/(2*a);

system("cls");

cout<<"Your quadratic equation: ";
cout<<a<<"(x^2)+"<<b<<"x+"<<c<<endl;
cout<<"If it is correct, choose <y> and if it is wrong, choose <n> to correct it.";
cout<<endl<<"[y/n]: ";

cin>>ch;

if(ch=='y')
{
     system("cls"); 

     if(delta<0)
     {cout<<"No root."<<endl<<endl; break;}
	 
     if(delta==0)
     {cout<<"Double root: "<<f1<<endl<<endl; break;}
	 
     if(delta>0)
     {cout<<"It has 2 roots."<<endl<<"Root1: "<<f1<<endl<<"Root2: "<<f2<<endl<<endl; break;}
	 
}

if(ch=='n')
{system("cls"); continue;}

}
}

main()
{
system("color F0");

quadrantic();

while(true)
{
cout<<"If you want to continue, choose <y>, and if you want to exit the program, choose <n> .";
cout<<endl<<"[y/n]: ";	
char ar,y,n;
cin>>ar;

if(ar=='n')
exit(0);
if(ar=='y')
system("cls"); quadrantic();
}

    getch ();
    return 0;	
}



	
