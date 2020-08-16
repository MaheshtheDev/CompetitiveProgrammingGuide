from itertools import permutations
import math

ip_n = int(input())
cmb = []

s1 = math.factorial(ip_n)//math.factorial(ip_n-(ip_n))
s2 = math.factorial(ip_n)//math.factorial(ip_n-(ip_n-1))

cmb.append(s1)
cmb.append(s2)

if((ip_n)%2!=0):
    total=sum(cmb)-1
else:
    total=sum(cmb)+2

print("%.6f"%(total/cmb[-1]))