
def primos(x):
    if x==0:
        return 1
    elif x<0:
        return "não possui fatorial"
    else:
        r=1
        i=x
        while i>0:
            r*=i
            i=i-1
        return r
x=int(input("digite o numero"))
resultado= primos(x)
print(resultado)
