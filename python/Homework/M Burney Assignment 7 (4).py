#Michael Burney
#Assignment Ch 7
#Automobile Costs Calculator
#10/12/2014


#ask user to enter monthly costs for the following expenses
#loan payment, insurance, gas, oil, tires and maintenance.
def main():
     
     loanPayment = float(input('Enter monthly costs for loan payment: '))
     insurance = float(input('Enter monthly costs for insurance: '))
     gas = float(input('Enter monthly costs for gas: '))
     oil = float (input ('Enter monthly costs for oil: '))
     tires = float(input('Enter monthly costs for tires: '))
     maintenance = float(input('Enter monthly costs for maintenance: '))
     
#Monthly Math
     monthlyTotal = (loanPayment + insurance + gas + oil + tires + maintenance)
     
#Annual Math
     annualTotal = (loanPayment + insurance + gas + oil + tires + maintenance)* 12
     
#display monthly cost of these expenses
     print('Total monthly costs add up to ', monthlyTotal,)
     
#display total annual cost of these expenses     
     print('Total annual costs add up to ', annualTotal,)
     

#start it
main()
