n1=float(input("digite o valor da nota 1:"))
n2=float(input("digite o valor da nota 2:"))
n3=float(input("digite o valor da nota 3:"))
m=(n1+n2+n3)/3
if m>=6:
    print("aluno APROVADO com média:", '%.2f' %m)
else:
    print("aluno REPROVADO com média:", '%.2f' %m)
