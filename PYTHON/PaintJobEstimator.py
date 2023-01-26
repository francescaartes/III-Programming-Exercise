# Artes, Francesca Q.
# BSCpE 1-1
# This program is a Paint Job Estimator.
# PYTHON

def main():
    wallSpace = float(input("How many square feet of wall space to be painted? "))
    paintPrice = float(input("How much is the paint per gallon? "))

    wallConstant = 115
    hourConstant = 8
    chargeConstant = 20

    paintGallon = getPaintGallon(wallSpace, wallConstant)
    laborHours = getLaborHours(wallSpace, wallConstant, hourConstant)
    paintCost = getPaintCost(paintGallon, paintPrice)
    laborCharges = getLaborCharges(laborHours, chargeConstant)
    paintJobTotal = getPaintJobTotal(paintCost, laborCharges)

    print("The paint job will cost the following: ")
    print("Number of gallons of paint: {:.2f} gallon/s.".format(paintGallon))
    print("Hours of labor: {:.2f} hours.".format(laborHours))
    print("Cost of the paint: ${:.2f}".format(paintCost))
    print("Labor charges: ${:.2f}".format(laborCharges))
    print("Total cost of the paint job: ${:.2f}".format(paintJobTotal))

def getPaintGallon(wallSpace, wallConstant):
    return (wallSpace / wallConstant)

def getLaborHours(wallSpace, wallConstant, hourConstant):
    return ((wallSpace / wallConstant) * hourConstant)

def getPaintCost(paintGallon, paintPrice):
    return (paintGallon * paintPrice)

def getLaborCharges(laborHours, chargeConstant):
    return (laborHours * chargeConstant)

def getPaintJobTotal(paintCost, laborCharges):
    return (paintCost + laborCharges)
main()