def chkpal(val):
	strval=str(val)
	pali=1
	for i in range(1,len(strval)/2+1):
		if strval[i-1] != strval[-1*i]:
			pali = 0
	if pali == 0 :
		return 0
	return val

x,y=100,100
bigpal=0
while x < 1000 :
	y = 100
	while y < 1000 :
		if (chkpal(x*y) > bigpal):
			bigpal=x*y
		y += 1
	x += 1
print bigpal

