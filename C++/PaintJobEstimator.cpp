/*
    Artes, Francesca Q.
    BSCpE 1-1
    
    TThis program is a Paint Job Estimator.

	C++
*/

#include <iostream>
#include <cmath>
using namespace std;

double getPaintGallon(double wallSpace, int wallConstant);
double getLaborHours(double wallSpace, int wallConstant, int hourConstant);
double getPaintCost(double paintGallon, double paintPrice);
double getLaborCharges(double laborHours, int chargeConstant);
double getPaintJobTotal(double paintCost, double laborCharges);

int main() {
    double wallSpace, paintPrice;
    int wallConstant = 115, hourConstant = 8, chargeConstant = 20;
    cout << "This program is a Paint Job Estimator from Painting Company. " << endl;
    cout << "How many square feet of wall space to be painted? ";
    cin >> wallSpace;
    cout << "How much is the paint per gallon? ";
    cin >> paintPrice;

    double paintGallon = getPaintGallon(wallSpace, wallConstant);
    double laborHours = getLaborHours(wallSpace, wallConstant, hourConstant);
    double paintCost = getPaintCost(paintGallon, paintPrice);
    double laborCharges = getLaborCharges(laborHours, chargeConstant);
    double paintJobTotal = getPaintJobTotal(paintCost, laborCharges);

    cout << "The paint job will cost the following: " << endl;
    cout << "Number of gallons of paint: " << paintGallon << " gallon/s." << endl;
    cout << "Hours of labor: " << laborHours << " hours." << endl;
    cout << "Cost of the paint: $" << paintCost << endl;
    cout << "Labor charges: $" << laborCharges << endl;
    cout << "Total cost of the paint job: $" << paintJobTotal << endl;

    return 0;
}
double getPaintGallon(double wallSpace, int wallConstant) {
    return round((wallSpace / wallConstant)*100.0)/100.0;
}
double getLaborHours(double wallSpace, int wallConstant, int hourConstant) {
    return round(((wallSpace / wallConstant) * hourConstant)*100.0)/100.0;
}
double getPaintCost(double paintGallon, double paintPrice) {
    return round((paintGallon * paintPrice)*100.0)/100.0;
}
double getLaborCharges(double laborHours, int chargeConstant) {
    return round((laborHours * chargeConstant)*100.0)/100.0;
}
double getPaintJobTotal(double paintCost, double laborCharges) {
    return round((paintCost + laborCharges)*100.0)/100.0;
}