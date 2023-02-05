#include <iostream> //for cout and cin 
#include <cstdlib> //for atoi convert cmd line argument to int variable
using namespace std;

int main(int argc, char *argv[])
{
	int side1 = 0;
	int side2 = 0;
	int side3 = 0;
	if(argc < 4 or argc > 4)
	{
		cout<<"You entered more or less than three values, enter them all here\n";
		cout << "Enter side 1: ";
		cin >> side1;
		cout << "Enter side 2: ";
		cin >> side2;
		cout << "Enter side 3: ";
		cin >> side3;
	}
//		cout << side1<<" "<<side2<<" "<<side3<<"\n";
	if (argc == 4)
	{
		side1 = atoi(argv[1]);
		side2 = atoi(argv[2]);
		side3 = atoi(argv[3]);
	}

//The logic below tests to see if one side is larger than the other two combined sides
//This will also check if a negative or zero length side
	if ((side1 >= (side2 + side3)) || (side2 >= (side1 + side3)) || (side3 >= (side1 + side2)))
	{
		cout << "You entered a side that is larger than the other two sides combined\n";
		return 0;
	}

	if(side1==side2 && side2==side3)
	{
		cout << "Equilateral triangle\n";
	} else if (side1==side2 or side1==side3 or side2==side3)
	{
		cout << "Isosceles\n";
	} else 
	{
		cout << "Scalene\n";
	}

	return 0;	
	
}
