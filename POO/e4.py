class animal:
    def som (self):
        return "som do animal"
class cachorro(animal):
    def som(self):
        return "auau"
class gato(animal):
    def som(self):
        return "miau"
cachorro=cachorro()
gato=gato()
print(f"o gato faz: {gato.som()}")
print(f"o cachorro faz: {cachorro.som()}")