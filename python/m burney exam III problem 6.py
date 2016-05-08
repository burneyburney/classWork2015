"""
Michael Burney 11/9/2014
ask for 2 numbers
displaly "first number is greater" or "second number is greater"
"""


#ask for number1
number1 = (float(input("Enter number 1: ")))

#ask for number2
number2 = (float(input("Enter number 2: ")))

#Greater than -> print result  |   less than -> print result
if number1 > number2:
    print("first number is greater")
elif number2 > number1:
    print ("second number is greater")
    
#numbers are equal -> display error
else:
    print("Error")

