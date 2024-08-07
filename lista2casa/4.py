a=int(input("digite um valor"))
b=int(input("digite um valor"))
c=int(input("digite um valor"))
if a>b and b>c: 
    print( a,",", c, ",",b)
elif b>a and a>c:
    print (b,",",c,",",a)
elif c>b and b>a:
    print(c,",",a,",",b)
elif a>c and c>b:
    print(a,",",b,",",c)
elif c>a and a>b:
    print (c,",",b,",",a)
elif b>c and c>a:
    print(b,",",a,",",c)