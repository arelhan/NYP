class Product(object):
    def __init__(self,name:str="Default", price:float=0, quantity:int=1) -> None:
        print(f"An instance with name: {name} has been derived from Product Class")
        self.__name=name
        self.__price= price
        self.__quantity=quantity
    @property
    def name(self):
        return self.__name
    @property
    def price(self):
        return self.__price
    @property
    def quantity(self):
        return self.__quantity
    
    @name.setter
    def name(self,value):
            if len(value) >=3 or len(value) <=8:
               self.__name = value
            else:
               return f"Hata"
    def __repr__(self) -> str:
         return f"name = {self.__name} - price = {self.__price} - quantity = {self.__quantity}"

item1=Product("Laptop",1000,3)
item1.name="Ahmet"
print(item1)
