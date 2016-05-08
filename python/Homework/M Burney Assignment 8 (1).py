"""
Michael Burney
10/26/2014
This program will retun the roman numeral character of any number inputted 1-10.
Error shows if any other number is entered.
"""


#prompt user to input Number that is 1-10
number = float(input("Enter a number from 1-10 to display its Roman Numeral equivilant: "))

#If / elif / else arithmatic

if number == 1:
        print(" I ")
elif number == 2:
        print (" II ")
elif number == 3:
        print (" III ")
elif number == 4:
        print ("IV")
elif number == 5:
        print ( " V " )
elif number == 6:
         print ( " VI " )
elif number == 7:
         print ( " VII " )
elif number == 8:
         print ( " VIII " )
elif number == 9:
         print ( " IX " )
elif number == 10:
         print ( " X " )
else:
        print(" ERROR: outside of number range ")
        
#end 
