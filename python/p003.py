ldiv=numb=600851475143 
div = 2
hdiv = 1
while div <= numb:
    if numb % div == 0:
        numb = numb/div
        if div > hdiv:
            hdiv = div
        if div < ldiv:
            ldiv = div
        div = ldiv
    div+=1
print "Low: %d" % ldiv
print "High: %d" % hdiv

