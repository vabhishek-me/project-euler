min3 = 100
max3 = 999
mul = 0
mx = 0  # max palindrome

for i in range(min3, max3+1):
    for j in range(i, max3+1):
        mul = i*j
        rev = int(str(mul)[::-1])  # reversed
        if (mul == rev) and (mul > mx):
            mx = mul
print(mx)
