def factor(numb):
	wnumb=numb 
	div = 2
	factors=[1]
	while div <= wnumb:
		if (wnumb % div) == 0:
			wnumb = wnumb/div
			factors.append(div)
			div = 2
		div+=1
	if wnumb > 1:
		factors.append(wnumb)
	factors.sort()
	return factors



print "factors in 1500:"
print factor(1238974512)
