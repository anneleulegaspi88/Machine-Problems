#include <iostream>
#include <conio.h>
#include <cmath>
#include <math.h>

#define _USE_MATH_DEFINES
#define pi 3.1415926535

using namespace std;

int main()
{
	double a,b,c,s,x,A,P;
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
	


	cout << "\nE. The apothem and circumcenter: \n";
	if (a==b && b==c)
		cout << "The apothem of the triangle is: " << (2*A)/P;
	else
		cout << "The triangle is not equilateral which means it does not have a midpoint thus not having any apothem.";

	cout << "\nAssuming side 'a' begins at the origin and goes along the x axis, The circumcenter is at: ";
if (AngleA==90)
cout << "(" <<a/2 << "," << b/2 << ")" << endl;

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
