#Small Factorials
#Python2.7
#solved on 04-10-16

import sys

def fact(n):
	if n==0 or n==1:
		return 1
	else:
		return n*fact(n-1)
		

t=int(sys.stdin.readline())

for i in range(0,t):
	n=int(sys.stdin.readline())
	print fact(n)
	
