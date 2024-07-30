a= float(input("digite o valor do coeficiente A:"))
b= float(input("digite o valor do coeficiente B:"))
c= float(input("digite o valor do coeficiente C:"))
if a!=0:
    delta=(b**2)-(4*a*c)
    if delta<0:
       print("esta equação não possui solução")
    elif delta==0:
       x1=(-b)/(2*a)
       x2=x1
       print("a equação tem duas raizes reais e iguais:", x1, x2)
    else:
       x1=(-b+delta**0.5)/(2*a)
       x2=(-b-delta**0.5)/(2*a)
       print("a equação tem duas raízes reais e diferentes:", x1, "e", x2)
