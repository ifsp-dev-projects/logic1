nome=(input("digite o seu nome: "))
sl=float(input("Digite o salário atual: "))
ida=0
if 0<sl<500:
    ida=sl*0.15
if 401<sl<700:
    ida=sl*12
if 701<1000:
    ida=sl*0.1
if 1001<sl<1800:
    ida=sl*0.07
if 1801<sl<2500:
    ida=sl*0.04
if sl>2500:
    ida=0
else:
    print("digite um valor válido!")
nvs=sl+ida
print("\nNome do usuário:",nome,";\n","% de aumento:",ida,"%;\n", "salário atual: R$",sl,";\n", "novo salário:R$",nvs,"\n")
