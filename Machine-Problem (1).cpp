#include <iostream>
#include <conio.h>
#include <cmath>
#include <math.h>

#define _USE_MATH_DEFINES
#define pi 3.1415926535

using namespace std;

int main()
{
	double a,b,c,s,x,A,P,cax,cay,cbx,cby,ccx,ccy,yc,xc;
	int AngleA, AngleB, AngleC, hyp;
	char cs;

do{
	cout << "This program lets you generate the different calculations for a triangle.\n";
	cout << "REMEMBER: THE SUM OF TWO SIDES MUST BE GREATER THAN THE THIRD!!\n\n";

	cout << "Please enter the first side of the triangle: ";
	cin >> a;

	cout << "Please enter the second side of the triangle: ";
	cin >> b;
	
	cout << "Please enter the third side of the triangle: ";
	cin >> c;

	cout << "Please enter ACCURATE coordinates for Side 'a'(x,y)";
	cin >> cax;
	cin >> cay;
	cout << "Please enter ACCURATE coordinates for Side 'b'(x,y)";
	cin >> cbx;
	cin >> cby;
	cout << "Please enter ACCURATE coordinates for Side 'c'(x,y)";
	cin >> ccx;
	cin >> ccy;
if (a+b > c && a+c > b && b+c > a)
{

	cout << "\nA. The interior angles of the triangle are: ";
	cout << "\nThe angle between a and b is: " << (acos(((a*a)+(b*b)-(c*c))/(2*a*b))*180)/pi << " degrees";
		AngleA = (acos(((a*a)+(b*b)-(c*c))/(2*a*b))*180)/pi;
	cout << "\nThe angle between b and c is: " << (acos(((c*c)+(b*b)-(a*a))/(2*c*b))*180)/pi << " degrees";
		AngleB = (acos(((c*c)+(b*b)-(a*a))/(2*c*b))*180)/pi;
	cout << "\nThe angle between a and c is: " << (acos(((c*c)+(a*a)-(b*b))/(2*a*c))*180)/pi << " degrees\n";
		AngleC = (acos(((c*c)+(a*a)-(b*b))/(2*a*c))*180)/pi;

	cout << "\nB. The triange is: \n";
	if (a==b && b==c)
		cout << "It is an equilateral triangle.\n";
	else if (a==b && b<c)
		cout << "It is an isosceles triangle.\n";
	else if (a==b && b>c)
		cout << "It is an isosceles triangle.\n";
	else if (c==b && a>c)
		cout << "It is an isosceles triangle.\n";
	else if (c==b && a<c)
		cout << "It is an isosceles triangle.\n";
	else
		cout << "It is a scalene triangle.\n";

	cout << "\nC. The area and perimeter is: \n";
		s = (a+b+c)/2;
		x = s*(s-a)*(s-b)*(s-c);
	cout << "Area: " << sqrt(x) << " square units\n";
		A = sqrt(x);
	cout << "Perimeter: " << a+b+c << " units\n";
		P = a+b+c;

	cout << "\nD. Based on its angles, it is:\n"; 
	if (AngleA<90 && AngleB<90 && AngleC<90)	
		cout << "It is an acute triangle.\n";
	else if (AngleA==90 || AngleB==90 || AngleC==90)
		cout << "It is a right triangle.\n";
	else if (AngleA>=90 || AngleB>=90 || AngleC>=90)
		cout << "It is a obtuse triangle.\n";
	else
		cout << "Invalid";
	
int mpabx = (cax+cbx)/2; int mpaby = (cay+cby)/2; int slopeab= -1*(cby-cay)/(cbx-cax); int eq1;

eq1= yc - mpaby - slopeab* (xc-mpabx); 

int mpacx = (cax+ccx)/2; int mpacy = (cay+ccy)/2; int slopeac = -1*(ccy-cay)/(ccx-cax); int eq2;

eq2= yc-mpacy - slopeac*(xc-mpacx);


	cout << "\nE. The apothem and circumcenter: \n";
	if (a==b && b==c)
		cout << "The apothem of the triangle is: " << (2*A)/P;
	else
		cout << "The triangle is not equilateral which means it does not have a midpoint thus not having any apothem.";

	cout << "\nAssume the top of the triangle is The circumcenter is at: ";
	


cout << "("<< xc << "," << yc << ")" ;

	cout << "Would you like to continue simulation? (Y/N)"<< endl;
		
	cin >> cs;
}
else 

cout << "Error" << endl;
break;
}
while ((cs=='y') || (cs=='Y'));
{
	cout << "Thank you!";
	return 0;
}







	return 0;
	
	


	_getch();
	return 0;
}
