fp,fpp,fn,n = 1,1,2,3
while (len(str(fn)) < 1000):
    n+=1
    fp,fpp,fn=fn,fp,fn+fp
print "f=%d \nn=%d" % (fn,n)
