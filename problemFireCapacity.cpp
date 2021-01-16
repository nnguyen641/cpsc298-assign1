// Problem 2 (Fire Capacitity) - Nathan Nguyen

/* Write a program that determines whether a meeting room is in violation of fire law regulations regarding
the maximum room capacity. The program will read in the maximum room capacity and the number of
people to attend the meeting. If the number of people is less than or equal to the maximum room capacity,
the program announces that it is legal to hold the meeting and tells how many additional people may
legally attend. If the number of people exceeds the maximum room capacity, the program announces that
the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded
in order to meet the fire regulations */

#include <iostream>
using namespace std;

int main(){
  int max;
  int numPpl;
  int remain;

  cout << "Enter the maximum room capacity: ";
  cin >> max;
  cout << "Enter the number of people to attend: ";
  cin >> numPpl;
  cout << endl;

  if (numPpl <= max){
    remain = max - numPpl;
    cout << "It is legal to hold the meeting and " << remain << " additonal people may legally attend." << endl;
  } else{
    remain = numPpl - max;
    cout << "The meeting cannot be held as planned due to fire regulations. " << remain << " people must be excluded in order to meet fire regulations." << endl;
  }

  return 0;

}
