import os
import math

def clear_screen():
    """Clears the console screen."""
    # Use 'cls' for Windows, 'clear' for Linux/macOS
    os.system('cls' if os.name == 'nt' else 'clear')

def calculate_triangle():
    """Asks for triangle data and prints area and perimeter."""
    clear_screen()
    print("## Triangle Calculations")
    try:
        b = float(input("Enter base length: "))
        h = float(input("Enter height: "))
        s1 = float(input("Enter side 1 length: "))
        s2 = float(input("Enter side 2 length: "))
        s3 = float(input("Enter side 3 length: "))
        area = 0.5 * b * h
        perimeter = s1 + s2 + s3
        print(f"\nArea: {area:.2f}")
        print(f"Perimeter: {perimeter:.2f}")
        # Note: Volume is not applicable for a 2D figure
    except ValueError:
        print("Invalid input. Please enter valid numbers.")

def calculate_square():
    """Asks for square data and prints area, volume (if applicable), and perimeter."""
    clear_screen()
    print("## Square Calculations")
    try:
        s = float(input("Enter side length: "))
        area = s * s
        perimeter = 4 * s
        # Volume would be for a cube, assuming a 2D square here
        print(f"\nArea: {area:.2f}")
        print(f"Perimeter: {perimeter:.2f}")
        # Note: Volume is not applicable for a 2D figure
    except ValueError:
        print("Invalid input. Please enter valid numbers.")

def calculate_rhombus():
    """Asks for rhombus data and prints area and perimeter."""
    clear_screen()
    print("## Rhombus Calculations")
    try:
        d1 = float(input("Enter diagonal 1 length: "))
        d2 = float(input("Enter diagonal 2 length: "))
        s = float(input("Enter side length: "))
        area = 0.5 * d1 * d2
        perimeter = 4 * s
        print(f"\nArea: {area:.2f}")
        print(f"Perimeter: {perimeter:.2f}")
        # Note: Volume is not applicable for a 2D figure
    except ValueError:
        print("Invalid input. Please enter valid numbers.")

def calculate_trapezium():
    """Asks for trapezium data and prints area and perimeter."""
    clear_screen()
    print("## Trapezium Calculations")
    try:
        a = float(input("Enter parallel side 1 length: "))
        b_side = float(input("Enter parallel side 2 length: "))
        h = float(input("Enter height: "))
        s1 = float(input("Enter non-parallel side 1 length: "))
        s2 = float(input("Enter non-parallel side 2 length: "))
        area = 0.5 * (a + b_side) * h
        perimeter = a + b_side + s1 + s2
        print(f"\nArea: {area:.2f}")
        print(f"Perimeter: {perimeter:.2f}")
        # Note: Volume is not applicable for a 2D figure
    except ValueError:
        print("Invalid input. Please enter valid numbers.")

def figure_menu():
    """Displays the figure menu and handles choices."""
    while True:
        clear_screen()
        print("## Figure Menu")
        print("1. TRIANGLE")
        print("2. SQUARE")
        print("3. RHOMBUS")
        print("4. TRAPEZIUM")
        print("5. RETURN TO PREVIOUS MENU")
        choice = input("Enter Choice: ")

        if choice == '1':
            calculate_triangle()
        elif choice == '2':
            calculate_square()
        elif choice == '3':
            calculate_rhombus()
        elif choice == '4':
            calculate_trapezium()
        elif choice == '5':
            break
        else:
            print("Invalid choice. Please enter a number between 1 and 5.")
        
        # Ask to continue within the figure menu after a calculation
        if choice in ['1', '2', '3', '4']:
            cont = input("\nDo you wish to continue (Y/N)? ").strip().lower()
            if cont != 'y':
                break
def main_menu():
    """Displays the main menu and handles choices."""
    while True:
        clear_screen()
        print("## Main Menu")
        print("1. Figure")
        print("2. Exit")
        choice = input("Enter Choice: ")

        if choice == '1':
            figure_menu()
        elif choice == '2':
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please enter 1 or 2.")
            input("Press Enter to continue...")
if __name__ == "__main__":
    main_menu()
