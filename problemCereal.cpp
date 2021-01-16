// Problem 1 (Cereal) - Nathan Nguyen

// A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input) of a package of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed to yield one metric ton of cereal.

#include <iostream>
using namespace std;

int main(){
   const float metricTon = 35273.92;
   float weight;
   float newWeight;
   int numBoxes; // Boxes can't be divided

   cout << "Enter the weight of a package of breakfast cereal in ounces: ";
   cin >> weight; // User input for weight in ounces
   cout << endl;
   newWeight = weight / metricTon; // Calculating new weight of cereal in metric tons
   numBoxes = metricTon / newWeight; // Calculating number of boxes for one metric ton

   // Print Statements
   cout << "The weight of the cereal in metric tons: " << newWeight << endl;
   cout << "Amount of boxes needed to make one metric ton: " << numBoxes << endl;

   return 0;
}
