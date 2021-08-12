
hights = []                             # for storing hights  of candels
n = int (input ("size = "))
for i in range (n):
    x = int (input ("height = "))
    hights.append (x)

hights.sort ()                          # sort array

print ("Number of highest candels are", hights.count (hights [n-1]))     # count how many max values are in the list 

# The right most element is the maximum value after sorted the list {hights [n-1]}
