import os
def clear_screen():
    #Clears the console screen for better readability
    os.system('cls' if os.name == 'nt' else 'clear')
def triangle_ops():
    """Handles operations for a triangle."""
    while True:
        clear_screen()
        print("--- Triangle Operations ---")
        try:
            base = float(input("Enter the base length: "))
            height = float(input("Enter the height: "))
            side_a = float(input("Enter the length of side A: "))
            side_b = float(input("Enter the length of side B: "))
            side_c = float(input("Enter the length of side C: "))
            area = 0.5 * base * height
            perimeter = side_a + side_b + side_c
            #Volume is not applicable (N/A) for a 2D figure
            print(f"\nArea: {area:.2f}")
            print(f"Perimeter: {perimeter:.2f}")
            print("Volume: N/A")
            break
        except ValueError:
            print("Invalid input. Please enter numerical values.")
            input("Press Enter to retry...")
def square_ops():
    """Handles operations for a square."""
    while True:
        clear_screen()
        print("--- Square Operations ---")
        try:
            side = float(input("Enter the side length: "))
            area = side * side
            perimeter = 4 * side
            #Volume is N/A for a 2D figure
            print(f"\nArea: {area:.2f}")
            print(f"Perimeter: {perimeter:.2f}")
            print("Volume: N/A")
            break
        except ValueError:
            print("Invalid input. Please enter a numerical value.")
            input("Press Enter to retry...")
def rhombus_ops():
    """Handles operations for a rhombus."""
    while True:
        clear_screen()
        print("--- Rhombus Operations ---")
        try:
            diagonal1 = float(input("Enter the length of the first diagonal: "))
            diagonal2 = float(input("Enter the length of the second diagonal: "))
            side = float(input("Enter the side length: "))
            area = 0.5 * diagonal1 * diagonal2
            perimeter = 4 * side
            #Volume is N/A for a 2D figure
            print(f"\nArea: {area:.2f}")
            print(f"Perimeter: {perimeter:.2f}")
            print("Volume: N/A")
            break
        except ValueError:
            print("Invalid input. Please enter numerical values.")
            input("Press Enter to retry...")
def trapezium_ops():
    """Handles operations for a trapezium."""
    while True:
        clear_screen()
        print("--- Trapezium Operations ---")
        try:
            parallel_side_a = float(input("Enter the length of parallel side A: "))
            parallel_side_b = float(input("Enter the length of parallel side B: "))
            height = float(input("Enter the height: "))
            side1 = float(input("Enter the length of non-parallel side 1: "))
            side2 = float(input("Enter the length of non-parallel side 2: "))
            area = 0.5 * (parallel_side_a + parallel_side_b) * height
            perimeter = parallel_side_a + parallel_side_b + side1 + side2
            #Volume is N/A for a 2D figure
            print(f"\nArea: {area:.2f}")
            print(f"Perimeter: {perimeter:.2f}")
            print("Volume: N/A")
            break
        except ValueError:
            print("Invalid input. Please enter numerical values.")
            input("Press Enter to retry...")
def figures_menu():
    """Displays the figures submenu."""
    while True:
        clear_screen()
        print("--- Figure Menu ---")
        print("1. TRIANGLE")
        print("2. SQUARE")
        print("3. RHOMBUS")
        print("4. TRAPEZIUM")
        print("5. RETURN TO PREVIOUS MENU")
        choice = input("ENTER CHOICE: ")
        if choice == '1':
            triangle_ops()
        elif choice == '2':
            square_ops()
        elif choice == '3':
            rhombus_ops()
        elif choice == '4':
            trapezium_ops()
        elif choice == '5':
            return
        else:
            print("Invalid choice. Please enter a number between 1 and 5.")
        #Ask to continue within the submenu after an operation
        while True:
            cont = input("\nDo you wish to continue (Y/N)? ").strip().lower()
            if cont == 'n':
                return
            elif cont == 'y':
                break #Break to the submenu loop
            else:
                print("Invalid input. Enter 'Y' or 'N'.")
def main_menu():
    """Displays the main menu."""
    while True:
        clear_screen()
        print("--- Main Menu ---")
        print("1. Figure")
        print("2. Exit")
        choice = input("Enter Choice: ")
        if choice == '1':
            figures_menu()
        elif choice == '2':
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please enter 1 or 2.")
if __name__ == "__main__":
    main_menu()
