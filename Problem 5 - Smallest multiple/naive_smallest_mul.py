from fractions import gcd

'''
def gcd(i,j):
    while j!= 0:
        (i,j) = (j, i%j)
    return i
'''

smlmul=1
for x in range(1, 21):
	smlmul= smlmul* x// gcd(x, smlmul)
print(smlmul)
