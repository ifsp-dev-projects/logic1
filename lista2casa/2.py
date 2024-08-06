n1=int(input("digite um número inteiro entre 0 e 100: "))
c=int(input("digite o número chave: "))
if 0<=n1<=100:
    v=True
else:
    v=False
    print("não foi possivel calcular o valor digitado")
if v==True:
    if n1>c:
        dif=n1-c
    else:
        dif=c-n1
    print("a diferença entre os números é:", dif)
