from cs50 import get_string

s = input("Do you agree? ").lower();

if s in ["y", "yes" ]:
    print("Agreed.");
else:
    print("Not agreed.");
