////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: Constants and initialisation (Question 7a) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
#include <string>
#include <iomanip>
using namespace std;

void print( int value, const string& leadStr="\n", char fill=' ', int width=0);

int main() {
    print(12, "\nValue is: "); 
    print(12, "\nFormatted value is: ", '0', 3 ); 
    print(12); 
 //   print();
//    print("\nNo Value");  

	cout << "\n\n";
	system("pause");
    return 0;
}

void print( int value, const string& leadStr/*="\n"*/, char fill/*=' '*/, int width/*=0*/) {
	cout << leadStr << setfill(fill) << setw( width) << value;
}