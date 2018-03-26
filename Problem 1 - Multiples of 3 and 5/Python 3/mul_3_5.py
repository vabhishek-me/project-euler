
def sumDivisibleBy(num, upto):
    localUpto = (upto-1)//num
    return num * ((localUpto * (localUpto + 1))//2)

# Sum of num divisble by 3 and 5 upto 1000
upto = 1000
ans = sumDivisibleBy(3,upto) + sumDivisibleBy(5,upto) - sumDivisibleBy(15,upto)
print(ans)
