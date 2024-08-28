nome = input("Digite o seu nome: ")
sl = float(input("Digite o salário atual: "))
ida = 0
if 0 < sl <= 500:
    ida = sl * 0.15
elif 500 < sl <= 700: 
    ida = sl * 0.12
elif 700 < sl <= 1000:
    ida = sl * 0.10
elif 1000 < sl <= 1800:
    ida = sl * 0.07
elif 1800 < sl <= 2500:
    ida = sl * 0.04
elif sl > 2500:
    ida = 0
else:
    print("Digite um valor válido!")
    exit() 
nvs = sl + ida
percentual_aumento = (ida / sl) * 100
print("Nome do usuário:", nome)
print("Percentual de aumento: %.2f%%" % percentual_aumento)
print("Salário atual: R$%.2f" % sl)
print("Novo salário: R$%.2f" % nvs)
