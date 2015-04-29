def factor(numb):
	wnumb=numb 
	div = 2
	factors=[1]
	while div <= wnumb:
		if (wnumb % div) == 0:
			wnumb = wnumb/div
			factors.append(div)
			div = 1
		div+=1
	if wnumb > 1:
		factors.append(wnumb)
	factors.sort()
	return factors

print "This application calculates the LCD of numbers 1 to n..."
n=int(raw_input('n=?'))
tnum=1
primes=[]
factors=[]
dbg=[]
for i in range(1,n):
	for f in factor(i):
		factors.append(f)
factors.sort()
primes.append(factors[0])
for p in factors:
	if (primes[-1] != p):
		primes.append(p)

for s in primes:
	r=s
	while (r>1) and ((r*s)<=n):
		r*=s
	tnum*=r
	dbg.append(r)

print "primes in 1-%d" % n
print primes
print "LCD: %d" % tnum
print dbg
