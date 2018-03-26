min3 = 100
max3 = 999
mul = 0
mx = 0  # max palindrome

for i in range(max3, min3-1, -1):
    for j in range(i, min3-1, -1):
        mul = i*j
        rev = int(str(mul)[::-1])  # reversed
        if (mul <= mx):
            break
        if (mul == rev):
            mx = mul

print(mx)
