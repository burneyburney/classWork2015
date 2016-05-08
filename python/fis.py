#Initialize the accumulator.
total = 0

#Get the bugs collecte for each day.
for day in range (1, 8):
    print('Enter the bugs collected on day', day)
    bugs = int(input ())
    total += bugs

#Display the total bugs
print ('you collected a total of', total, 'bugs.')
