#Michael Burney
#Assignment 7 Number 8
#Stadium Seating total earnings 
#10/12/2014

#Seating categories Class A ($15) Class B ($12)Class C ($9)
def main():
    amountA = float(input('Enter the amount of Class A tickets sold: '))
    amountB = float(input('Enter the amount of Class B tickets sold: '))
    amountC = float(input('Enter the amount of Class C tickets sold: '))
#ticket costs
    classAcost = 15.00
    classBcost = 12.00
    classCcost =   9.00

#math
    totalA = amountA * classAcost
    totalB = amountB * classBcost
    totalC = amountC * classCcost

#sum of tickets and cost
    total = totalA + totalB + totalC
    
#show total sales
    print ('The total amount of money made from selling tickets is ', total, 'dollars')

#start program
main()
