//046633 - Catherine Kimani
// class exercise II - Due 22nd October 2021
//Area and perimetre of a right angled triangle given base 10, height 7 and hypotenuse 12
#include <iostream>;
using namespace std;

int main()
{
	//Declare base, height and hypotenuse  to find the area of a right angled triangle; Formulae is (base*height)/2 
	//Find its perimeter also; Formulae is height + base + hypotenuse
	int base = 10;
	int height = 7;
	int hypotenuse = 12;
	int _2;
	cout<<"\n";
	cout<<"The Area and Perimetre of a right angled Triangle" << endl;
	cout <<"\n";
	cout<<"Formulae: " << endl;
	cout << "\n";
	cout<<"Area = (Base * Height) / 2 " << endl;
	cout<<"Perimeter = Base + Height + Perimeter" << endl;
	cout <<"\n";
	cout <<"Triangle base is " << 10 << endl;
	cout <<"Triangle height is " << 7 << endl;
	cout <<"Triangle hypotenuse is " << 12 <<endl;
	cout <<"\n";

	cout <<"Therefore: " << endl;
	cout <<"The Area of the Triangle is " << (10 * 7) / 2 <<endl;
	cout << "The Perimetre of the Triangle is " << (10 + 7 + 12) <<endl;

	return 0;
}
