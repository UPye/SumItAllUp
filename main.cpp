
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Number of elements in vector
   const int NUM_ELEMENTS = 8;   
  // User values
   vector<int> userVals(NUM_ELEMENTS); 
  // Loop index
   unsigned int i;   
  // For computing sum
   int sumVal;                         
   
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
      cout << endl;
   }
   
   // Determine sum
   sumVal = 0;
   for (i = 0; i < userVals.size(); ++i) {
      sumVal = sumVal + userVals.at(i);
   }
   cout << "Sum: " << sumVal << endl;
   
   return 0;
}
