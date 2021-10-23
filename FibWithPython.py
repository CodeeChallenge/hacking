fibb_cache={1:0,2:1}
def cache(n):
	if n in fibb_cache:
		return fibb_cache[n]
	else:
		a,b=0,1
		x=n
		while x :
			a,b=b,a+b
			x=x-1
		fibb_cache[n]=b
		return fibb_cache[n]	
for i in range(1,50):
	print(cache(i))