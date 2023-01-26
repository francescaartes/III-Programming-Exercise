# Artes, Francesca Q.
# BSCpE 1-1
# This program calculates the person's Body Mass Index (BMI).
# PYTHON

def main():
    print("This program calculates your Body Mass Index (BMI).")
    weight = int(input("What is your weight in pounds? "))
    height = int(input("What is your height in inches? "))
    bmi = round(bmiCalculation(weight, height), 2)
    interpretation = bmiInterpret(bmi)
    print("Your Body Mass Index is " + str(bmi) + " - " + interpretation)

def bmiCalculation(weight, height):
    constant = 703
    bmi = weight * constant / (height**2)
    return bmi

def bmiInterpret(bmi):
    if (bmi < 18.5): return "Underweight"
    elif (bmi >= 18.5 and bmi <= 24.9): return "Normal"
    elif (bmi >= 25 and bmi <= 29.9): return "Overweight"
    elif (bmi >= 30): return "Obese"

main()