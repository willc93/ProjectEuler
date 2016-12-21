longestChain = 0
longestNumb = 0

for i in range(1,1000000):
	currentChain = 1
	currentNumber = i
	
	while(currentNumber != 1):
		
		if(currentNumber & 0x1):
			currentNumber += ((2*currentNumber) + 1)

		else:
			currentNumber /= 2
		
		currentChain += 1
	
	if(++currentChain > longestChain):
		longestChain = currentChain
		longestNumb = i	

print "The longest Collatz sequence under one million is %d" % (longestChain)
print "Which starts with %d as the seed" % (longestNumb)
