/*
    Artes, Francesca Q.
    BSCpE 1-1
    
    This program calculates the person's Body Mass Index (BMI).

	C++
*/

#include <iostream>
#include <cmath>
using namespace std;

double bmiCalculatoion(double weight, double height);
string bmiInterpret(double bmi);

int main()
{
    double bmi, height, weight;
    string interpretation;
    
    cout << "This program calculates your Body Mass Index (BMI)." << endl;
    cout << "What is your weight in pounds? ";
    cin >> weight;
    cout << "What is your height in inches? ";
    cin >> height;
    bmi = round(bmiCalculatoion(weight, height)*100.0)/100.0;
    interpretation = bmiInterpret(bmi);
    cout << "Your Body Mass Index is " << bmi << " - " << interpretation;
    return 0;
}
double bmiCalculatoion(double weight, double height)
{
    int constant = 703;
    double bmi = (weight * constant/(height * height));
    return bmi;
}
string bmiInterpret(double bmi)
{
    if (bmi < 18.5) {return "Underweight";}
    else if (bmi >= 18.5 & bmi <= 24.9) {return "Normal";}
    else if (bmi >= 25 & bmi <= 29.9) {return "Overweight";}
    else if (bmi >= 30) {return "Obese";}
    return "";
}