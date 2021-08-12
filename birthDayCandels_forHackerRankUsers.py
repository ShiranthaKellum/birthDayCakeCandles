
n = int (input ())

candels = list (map (int, input ().strip ().split ()))          # convert string squence with space in to an integer list
                                                                # without strip () method, it doesn't matter 
candels.sort ()                                                 # sort list

print (candels.count (candels [n-1]))                           

# input style : ex: 4               (line 1)
#                   3 2 1 3         (line 2)