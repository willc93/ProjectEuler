x = 2**1000
sum = 0

while (x != 0):
	sum += (x % 10)
	x //= 10

print "The solution is %d" % (sum)
