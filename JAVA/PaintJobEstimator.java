/*
    Artes, Francesca Q.
    BSCpE 1-1
    
    This program is a Paint Job Estimator.

	JAVA
*/

import java.util.Scanner;

public class PaintJobEstimator
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double wallSpace, paintPrice;
        int wallConstant = 115, hourConstant = 8, chargeConstant = 20;
        System.out.println("This program is a Paint Job Estimator from Painting Company.");
        System.out.print("How many square feet of wall space to be painted? ");
        wallSpace = in.nextDouble();
        System.out.print("How much is the paint per gallon? ");
        paintPrice = in.nextDouble();

        double paintGallon = getPaintGallon(wallSpace, wallConstant);
        double laborHours = getLaborHours(wallSpace, wallConstant, hourConstant);
        double paintCost = getPaintCost(paintGallon, paintPrice);
        double laborCharges = getLaborCharges(laborHours, chargeConstant);
        double paintJobTotal = getPaintJobTotal(paintCost, laborCharges);

        System.out.println("The paint job will cost the following: ");
        System.out.println("Number of gallons of paint: " + paintGallon + " gallon/s.");
        System.out.println("Hours of labor: " + laborHours + " hours.");
        System.out.println("Cost of the paint: $" + paintCost);
        System.out.println("Labor charges: $" + laborCharges);
        System.out.println("Total cost of the paint job: $" + paintJobTotal);
    }
    public static double getPaintGallon(double wallSpace, int wallConstant) {
        return Math.round((wallSpace / wallConstant)*100.0)/100.0;
    }
    public static double getLaborHours(double wallSpace, int wallConstant, int hourConstant) {
        return Math.round(((wallSpace / wallConstant) * hourConstant)*100.0)/100.0;
    }
    public static double getPaintCost(double paintGallon, double paintPrice) {
        return Math.round((paintGallon * paintPrice)*100.0)/100.0;
    }
    public static double getLaborCharges(double laborHours, int chargeConstant) {
        return Math.round((laborHours * chargeConstant)*100.0)/100.0;
    }
    public static double getPaintJobTotal(double paintCost, double laborCharges) {
        return Math.round((paintCost + laborCharges)*100.0)/100.0;
    }
}