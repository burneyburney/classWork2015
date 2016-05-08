def main():

    hours, rate = getinput()

    strtime, overtimehr, overtime  = calculate_hours (hours,rate)

    regular, totalpay  = calculate_payregular (hours, rate, overtime)

    calprint  (rate, strtime, overtimehr, regular, overtime, totalpay)


def getinput():

    print ()
    print ('How many hours were worked?')
    print ('Hours worked must be at least 8 and no more than 86.')
    hours = float (input('Now enter the hours worked please:'))

    while hours < 8 or hours > 86: #validate the hours
        print ('Error--- The hours worked must be atleast 8 and no more than 86.')
        hours = float (input('Please try again:'))

    print ('What is the pay rate?')
    print ('The pay rate must be at least $7.00 and not more than $50.00.')
    rate = float (input('Now enter the pay rate:'))

    while rate < 7 or rate > 50: #validate the payrate
        print ('Error--- The pay rate must be at least $7.00 and not more than $50.00.')
        rate = float (input('Please try again:'))

    return hours, rate

def calculate_hours (hours,rate):

    if hours < 40:
        strtime = hours
        overtimehr = 0
    else:
        strtime = 40
        overtimehr = hours - 40

    if hours > 40:
        overtimerate = 1.5 * rate
        overtime = (hours-40) * overtimerate
    else:
        overtime = 0

    return strtime, overtimehr, overtime

def calculate_payregular (hours, rate, overtime):

    regular = hours * rate

    totalpay = overtime + regular

    return regular, totalpay


def calprint (rate, strtime, overtimehr, regular, overtime, totalpay):

    print ("           Payroll Information")
    print ()
    print ("Pay rate                $", format (rate,  '9,.2f'))
    print ("Regular Hours            ", format (strtime,  '9,.2f'))
    print ("Overtime hours           ", format (overtimehr,  '9,.2f'))
    print ("Regular pay             $", format (regular,  '9.2f'))
    print ("Overtime pay            $", format (overtime,  '9.2f'))
    print ("Total Pay               $", format (totalpay,  '9.2f'))



main ()

raw_input()
