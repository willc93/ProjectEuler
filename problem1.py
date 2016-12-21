total = 0;
for i in range(0,1000):
    if (i%5 == 0):
        total += i;
    else:
        if (i%3 == 0):
            total +=i; 
print total;
