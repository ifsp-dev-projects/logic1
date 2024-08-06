n1=int(input("digite o 1º número inteiro:"))
n2=int(input("digite o 2º número inteiro:"))
n3=int(input("digite o 3º número inteiro:"))
if n1%2==0==0 and n1%3==0 or n2%2==0 and n2%3==0 or n3%2==0 and n3%3==0:
    if n1%2==0 and n1%3==0:
        print("numero divisivel por 2 e 3:",n1 )
    if n2%2==0 and n2%3==0:
        print("numero divisivel por 2 e 3:", n2)
    if n3%2==0 and n3%3==0:
        print("numero divisivel por 2 e 3:", n3)
else:
    print("não foi digitado nenhum número divisivel por 2 e 3")



