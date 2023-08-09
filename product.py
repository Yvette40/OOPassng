class Product:
    def __init__(self, product_id, name, price, quantity):
        self.product_id = product_id
        self.name = name
        self.price = price
        self.quantity = quantity

class ShoppingCart:
    def __init__(self):
        self.items = []

    def add_to_cart(self, product, quantity):
        if self.check_availability(product, quantity):
            for item in self.items:
                if item['product'] == product:
                    item['quantity'] += quantity
                    break
            else:
                self.items.append({'product': product, 'quantity': quantity})
            product.quantity -= quantity
            print(f"{quantity} {product.name}(s) added to cart.")

    def remove_from_cart(self, product, quantity):
        for item in self.items:
            if item['product'] == product:
                if item['quantity'] <= quantity:
                    self.items.remove(item)
                    product.quantity += item['quantity']
                    print(f"{item['quantity']} {product.name}(s) removed from cart.")
                else:
                    item['quantity'] -= quantity
                    product.quantity += quantity
                    print(f"{quantity} {product.name}(s) removed from cart.")
                break

    # Other methods for cart functionalities (update, calculate total, etc.)

    def check_availability(self, product, quantity):
        return product.quantity >= quantity

def main():
    products = [
        Product(1, "Product A", 10.0, 20),
        Product(2, "Product B", 15.0, 15),
        # Add more products
    ]
    
    cart = ShoppingCart()

    while True:
        print("1. Display available products")
        print("2. Add to cart")
        print("3. Remove from cart")
        # Add more options

        choice = int(input("Enter your choice: "))
        if choice == 1:
            for product in products:
                print(f"{product.product_id}: {product.name} - ${product.price} ({product.quantity} available)")
        elif choice == 2:
            product_id = int(input("Enter product ID: "))
            quantity = int(input("Enter quantity: "))
            cart.add_to_cart(products[product_id - 1], quantity)
        elif choice == 3:
            # Implement removing from cart
            pass
        # Add more cases for other options

        elif choice == 0:
            print("Exiting the program.")
            break
        else:
            print("Invalid choice.")

if __name__ == "__main__":
    main()