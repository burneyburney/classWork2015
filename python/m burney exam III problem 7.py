"""
Display bonus = 100 if sales > 5000
else display bonus = 50 if sales > 1000
else display bonus = 0
"""

sales = (float(input("Enter the amount of sales: ")))
if sales > 5000:
    print("You have a bonus of 100")
elif sales > 1000:
    print("You have a bonus of 50")
else:
    print("You have no bonus")
