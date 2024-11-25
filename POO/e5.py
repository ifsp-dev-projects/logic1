class animal:
    def som (self):
        return "som do animal"
class cachorro(animal):
    def som(self):
        return "auau"
class gato(animal):
    def som(self):
        return "miau"
def fazerbarulho(animal):
    print(animal.som())
cachorro=cachorro()
gato=gato()
fazerbarulho(cachorro)
fazerbarulho(gato)
