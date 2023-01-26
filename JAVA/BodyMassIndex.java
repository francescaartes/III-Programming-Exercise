/*
    Artes, Francesca Q.
    BSCpE 1-1
    
    This program calculates the person's Body Mass Index (BMI).

	JAVA
*/

import java.util.Scanner;

public class BodyMassIndex
{
	public static void main(String[] args) 
	{
        Scanner in = new Scanner(System.in);
        double weight, height, bmi;
        String interpretation;
        System.out.println("This program calculates your Body Mass Index (BMI).");
        System.out.print("What is your weight in pounds? ");
        weight = in.nextDouble();
        System.out.print("What is your height in inches? ");
        height = in.nextDouble();
        bmi = Math.round(bmiCalculation(weight, height) * 100.0)/100.0;
        interpretation = bmiInterpret(bmi);
        System.out.println("Your Body Mass Index is " + bmi + " - " + interpretation);
    }
    public static double bmiCalculation(double weight, double height)
    {
        int constant = 703;
        return (weight * constant / (height * height));
    }
    public static String bmiInterpret(Double bmi)
    {
        if (bmi < 18.5) {return "Underweight";}
        else if (bmi >= 18.5 & bmi <= 24.9) {return "Normal";}
        else if (bmi >= 25 & bmi <= 29.9) {return "Overweight";}
        else if (bmi >= 30) {return "Obese";}
        {return "";}
    }
}