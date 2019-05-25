#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cmath>

using namespace std;
int main()

{
	char x;
	char ans = 'Y';
	float r, h, l, w;
	const float pi = 3.1415;

	do
	{
		cout << "__________________________________________________________________________\n\n\n" << endl;
		cout << "\t\t\tGEOMETRIC CALCULATOR\n\n" << endl;
		cout << "Select which of the following geometric figure you want to calculate." << endl;
		cout << "\t(Write only the first letter of the geometric figure)\n\n" << endl;
		cout << "\t\t\tCone (C)" << endl;
		cout << "\t\t\tPyramid (P)" << endl;
		cout << "\t\t\tSphere (S)" << endl;
		cout << "\nAnswer: \t\t";
		cin >> x;

		{
			switch (x)
			{
			case 'C':
			case 'c':
			{
				cout << "\n\n\t\tDIFFERENT GEOMETRIC PARAMETERS OF A CONE\n" << endl;
				cout << "Radius:\t";
				cin >> r;
				cout << "Height:\t";
				cin >> h;

				const float Vcone = (pi * r*r*(h / 3));
				const float LAcone = pi * r * (sqrt((h*h) + (r*r)));

				cout << "\nVolume:\t" << Vcone << endl;
				cout << "Lateral Area:\t" << LAcone << endl;
				cout << "Base Area:\t" << 3 * Vcone / h << endl;
				cout << "Surface Area:\t" << (sqrt((h*h) + (r * r)) + r) * pi * r << endl;
				break;
			}
			case 'P':
			case 'p':
			{
				cout << "\n\n\t\tDIFFERENT GEOMETRIC PARAMETERS OF A PYRAMID\n" << endl;
				cout << "Length:\t";
				cin >> l;
				cout << "Width:\t";
				cin >> w;
				cout << "Height:\t";
				cin >> h;

		
				const float Slantheight = sqrt((h*h + (w / 2)*(w / 2)));
				const float A = (l*Slantheight / 2);
				const float Bp = l * w;
				const float P = 2 * (l + w);
				const float LAp = P * Slantheight / 2;
				const float Vp = Bp * h / 3;
				const float SAp = Bp + LAp;

				cout << "\nVolume:\t" << Vp << endl;
				cout << "Lateral Area:\t" << LAp << endl;
				cout << "Base:\t" << Bp << endl;
				cout << "Surface Area:\t" << SAp << endl;
				break;
			}
			case 'S':
			case 's':
			{
				cout << "\n\n\t\tDIFFERENT GEOMETRIC PARAMETERS OF A SPHERE\n" << endl;
				cout << "Radius:\t";
				cin >> r;

				cout << "\nVolume:\t" << pi * r*r*r * 4 / 3 << endl;
				cout << "Surface Area:\t" << 4 * pi*r*r << endl;

				break;
			}
			default:
			{
				cout << "\n\tWrong Input" << endl;
				return 0;
			}
			}

			cout << "\n\nThank you for using this calculator. \nDo you want to quit? (Y/N)" << endl;
			cout << "Answer:\t";
			cin >> ans;

		}
	} while ((ans == 'N') || (ans == 'n'));

	cout << "\nThank you!" << endl;

	system("Pause");


	_getch();
	return 0;
}
