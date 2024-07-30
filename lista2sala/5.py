a=float(input("digite o 1º valor:"))
b=float(input("digite o 2º valor:"))
c=float(input("digite o 3º valor:"))
if (a<b) and (a<c) and (b<c):
    print("os valores em ordem crescente são:", a, b, c)
elif a<b and a<c and c<b:
    print("os valores em ordem crescente são:", a, c, b)
elif b<a and b<c and a<c:
    print("os valores em ordem crescente são:", b, a, c)
elif b<a and b<c and c<a:
    print("os valores em ordem crescente são:", b, c, a)
elif c<a and c<b and a<b:
    print("os valores em ordem crescente são:", c, a, b)
else:
    print("os valores em ordem crescente são:", c, b, a)
            
    