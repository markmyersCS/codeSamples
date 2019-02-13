#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{

	//base number being converted into
	int base = 2;

	//carryBit number before and during transformation
	float carryBit = 0.0; 

	//transform arg into variable for carryBit
	carryBit = atof(argv[1]); 

	//variable for result of binary transformation
	int binaryResult = 0;

	//int counter for whileloop
	int i = 0;

	if (carryBit > 1)
		cout<<"Make a valid entry.";


	else
	{

	//print original
	cout<< "\nOriginial:    " << carryBit << endl;

	//print binaryresult
	cout<< "BinaryResult: ";

	while (i<8 && carryBit != 0)
		{
			//increment counter 
			i = i+1;

			carryBit = base * carryBit;

			//binary result is transform carryBit to integer
			binaryResult = (int) carryBit;

			//carrybit is binary result subtracted from transformed carryBit to float
			carryBit = ((float) carryBit ) - binaryResult;

			//cerr << "\ncarryBit" << carryBit << endl;
			cout<< binaryResult;
		}

	//lines for formatting
	cout<<endl;

	}//end of else statement

	return 0;
}