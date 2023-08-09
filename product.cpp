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
        if self._check_availability(product, quantity):
            # Check if the product is already in the cart
            for item in self.items:
                if item['product'] == product:
                    item['quantity'] += quantity
                    break
            else:
                # If the product is not in the cart, add it
                self.items.append({'product': product, 'quantity': quantity})
            # Update the products quantity
            product.quantity -= quantity
            print(f"{quantity} {product.name}(s) added to cart.")

    def remove_from_cart(self, product, quantity):
        for item in self.items:
            if item['product'] == product:
                if item['quantity'] <= quantity:
                    # If requested quantity is greater or equal to cart quantity, remove the product from cart
                    self.items.remove(item)
                    # Restore the product's quantity
                    product.quantity += item['quantity']
                    print(f"{item['quantity']} {product.name}(s) removed from cart.")
                else:
                    # If requested quantity is less than cart quantity, reduce cart quantity
                    item['quantity'] -= quantity
                    # Restore the product's quantity
                    product.quantity += quantity
                    print(f"{quantity} {product.name}(s) removed from cart.")
                break

    def update_cart(self, product, new_quantity):
        # Update the cart by removing and adding the product with new quantity
        self.remove_from_cart(product, product.quantity)
        self.add_to_cart(product, new_quantity)

    def calculate_total(self):
        total = 0
        for item in self.items:
            total += item['product'].price * item['quantity']
        return total

def main():
    # List of available products
    products = [
        Product(1, "Product A", 10.0, 20),
        Product(2, "Product B", 15.0, 15),
        # Add more products
    ]
    
    cart = ShoppingCart()

    while True:
        # Display user menu
        print("1. Display available products")
        print("2. Add to cart")
        print("3. Remove from cart")
        print("4. Update cart")
        print("5. Display cart")
        print("6. Calculate total")
        print("0. Exit")
        
        choice = int(input("Enter your choice: "))
        
        if choice == 1:
            # Display available products and their details
            for product in products:
                print(f"{product.product_id}: {product.name} - ${product.price} ({product.quantity} available)")
        elif choice == 2:
            # Add a product to the cart
            product_id = int(input("Enter product ID: "))
            quantity = int(input("Enter quantity: "))
            cart.add_to_cart(products[product_id - 1], quantity)
        # Implement other choices (3-6) here
        elif choice == 0:
            # Exit the program
            break

if __name__ == "__main__":
    main()