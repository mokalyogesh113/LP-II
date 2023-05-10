# Yogesh's Pizza Ordering Chatbot in Python

import time

# Define menu with prices in rupees
menu = {
    "pepperoni": 799,
    "margherita": 699,
    "veggie": 749,
    "meat lovers": 999,
    "hawaiian": 899
}

# Define payment methods
payment_methods = ["cash on delivery", "online payment", "upi", "card payment"]

# Define function for ordering
def order_pizza():
    # Display menu to user
    print("\n\nWelcome to Yogesh Pizzas!")
    print("Here's our menu:")
    for item in menu:
        print(f"{item.title()} - Rs.{menu[item]}")
    print("\n\n")
   
    # Get user input for pizza choice
    pizza_choice = input("What would you like to order? ").lower()

    # Check if pizza choice is valid
    while pizza_choice not in menu:
        pizza_choice = input("Sorry, we don't have that on our menu. Please choose something else: ").lower()

    # Get user input for payment method
    payment_choice = input("How would you like to pay? ").lower()

    # Check if payment method is valid
    while payment_choice not in payment_methods:
        payment_choice = input("Sorry, we don't accept that payment method. Please choose something else: ").lower()

    # Calculate total cost of pizza
    total_cost = menu[pizza_choice]

    # Generate receipt
    print("Generating receipt...")
    time.sleep(2)
    print("\n\n")
    print(f"You ordered a {pizza_choice.title()} pizza from Yogesh Pizzas for Rs.{menu[pizza_choice]}.")
    print(f"Your total cost is Rs.{total_cost}.")
    print(f"Payment method: {payment_choice.title()}.")
    print("Thank you for your order!")

# Call the order_pizza function to start the chatbot
order_pizza()
