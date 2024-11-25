def primo (x):
    if x<0:
        return "numeros negativos não são primos"
    elif x==2:
        return True
    elif x%2==0:
        return False
    else:
        y=3
        while y*y<=x:
            if x % y==0:
                return False
            i+=2
        return True
            
x=int(input("digite o numero"))
resultado=primo(x)
print(resultado)