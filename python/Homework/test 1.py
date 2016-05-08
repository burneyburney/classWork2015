'''
Name - Michael Burney
Date program written - 10/5/2014
program objective - This program was created to display the correct radius, diameter, and area
                             of any given circle. Input the radius and it will calculate the rest.
'''

#ask radius
radius = float(input('Input radius of the circle: '))

#diameter formula
diameter = (2 * radius)

#area forumula
area = (3.14 * radius * radius)

#circumference forumula
circumference = (2 * 3.15 * radius)

#display results
print ("\t" 'Diameter is' ,diameter, "\t" 'Area is', area, "\t" 'Circumference is', circumference)
