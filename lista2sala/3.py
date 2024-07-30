a=float(input("digite o primeiro valor numérico:"))
b=float(input("digite o segundo valor numérico:"))
if a==b:
    print("os números digitados são iguais, então não há diferenças entre eles")
else:
    if a<b:
        dif=b-a
    else:
        dif=a-b
    print("a diferença entre os números é:", dif)