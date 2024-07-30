a=int(input("digite o valor do 1º lado do triangulo:"))
b=int(input("digite o valor do 2º lado do triangulo:"))
c=int(input("digite o valor do 3º lado do triangulo:"))
triangulo=True
if a<b+c and b<a+c and c<a+b:
    triangulo=True
else:
    triangulo=False
if triangulo==True:
    if (a==b) and (b==c):
        print("o triangulo é equilátero")
    elif (a==b) or (a==c) or (b==c):
        print("o triangulo é isósceles")
    else:
        print("o triangulo é escaleno")
if triangulo==False:
    print("o valor dado não corresponde a um triangulo")