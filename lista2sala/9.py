n1=int(input("digite o 1º número inteiro:"))
n2=int(input("digite o 2º número inteiro:"))
if n1%4==0==0 or n1%5==0 or n2%2==0 or n2%3==0:
    if n1%4==0 or n1%5==0:
        print("numero divisivel por 4 ou 5:",n1 )
    if n2%4==0 or n2%5==0:
        print("numero divisivel por 4 ou 5:", n2)
else:
    print("não foi digitado nenhum número divisivel por 4 ou 5")