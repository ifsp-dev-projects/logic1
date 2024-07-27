tempo=float(input("digite o tempo gasto na viagem(em horas):"))
vm= float(input( "digite a velocide media durante a viagem (em km/h)"))
distancia= tempo*vm
lu= distancia/12
print("velocidade media", vm, "km/h")
print ("tempo gasto na viagem", tempo, "horas")
print("distancia percorrida", distancia, "km")
print ("quantidade de litros usados na viagem", '%.2f' %lu, "litros")