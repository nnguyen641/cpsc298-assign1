// Problem 3 (Employee Pay) - Nathan Nguyen

/* An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
$10 per week is withheld for medical insurance. Write a program that will read in the number of hours
worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
the net take-home pay for the week. */

#include <iostream>
using namespace std;

int main(){
  float payRate = 16.00;
  float ssTax = 0.06;
  float fiTax = 0.14;
  float siTax = 0.05;
  float medInsure = 10.00;
  float grossPay;
  float withholdAmt;
  float netPay;
  int hours;
  int xtraHours;

  cout << "Enter the number of hours worked this week: ";
  cin >> hours;
  cout << endl;

  if (hours <= 40){
    grossPay = payRate * hours;
  } else{
    xtraHours = hours - 40;
    grossPay = (payRate * 40) + (xtraHours * 24);
  }

  withholdAmt = (ssTax * grossPay) + (fiTax * grossPay) + (siTax * grossPay) + medInsure;
  netPay = grossPay - withholdAmt;

  cout << "Gross pay for this week: " << grossPay << endl;
  cout << "Amount for Social Security (6%): " << (ssTax * grossPay) << endl;
  cout << "Amount for Federal Income Tax (14%): " << (fiTax * grossPay) << endl;
  cout << "Amount for State Income Tax (5%): " << (siTax * grossPay) << endl;
  cout << "Amount for medical insurance ($10): 10" << endl;
  cout << "Net withholding amount for this week: " << withholdAmt << endl;
  cout << "Net take-home pay: " << netPay << endl;
}
