def printIncreasingPower(x):
    #code here
    # Loop to jump in powers of 2
    i=1
    while i*i<=x:
         print(i*i, end=" ")
         i+=1