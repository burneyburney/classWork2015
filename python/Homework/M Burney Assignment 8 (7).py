"""
Michael Burney
Book Club Points
10/26/2014
"""

#ask the  user to enter the number of books that he/she purchased this month
numberBooks = float(input(" Enter the number of books you have purchased this month: "))


#Display the number of points awarded.
if numberBooks == 0:
    print("You have earned 0 points")
elif numberBooks == 1:
    print("You have earned 5 points")
elif numberBooks == 2:
    print("You have earned 15 points")
elif numberBooks ==3:
    print("You have earned 30 points")
elif numberBooks >= 4:
    print("You have earned 60 points")
elif numberBooks < 0:
    print (" YOU DUMB ")
#end
