
sb=float(input("digite o salario bruto"))
ht=float(input("digite as horas trabalhadas no mês"))
e=0
i=0
if sb<800:
    e=0
    i=0
elif 800<sb<1600:
    e= sb*0.05
    i=sb*0.08
elif sb>1600:
    e=sb*0.07
    i=sb*0.15
adhe=0
if ht>160:
    he=ht-160
    vh=sb/160
    adhe=he*vh*0.5
sl=sb-(e+i)+adhe
print ("o salario liquido é:", '%.2f' %sl)

