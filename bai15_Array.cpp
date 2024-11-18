#include <iostream>
using namespace std;
int main()
{
// Create an array of strings
string cars[5] = { "Volvo", "BMW", "ford", "Mzada", "Tesla" };

// Loop through strings
cars[1] = "Vinfast";
for (int i = 0; i < 5; i++) {
	cout << cars[i] << "\n";
	
}
return 0;
}