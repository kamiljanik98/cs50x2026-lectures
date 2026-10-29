from cs50 import get_int

# Prompt user for integers
x = get_int("X: ");
y = get_int("Y: ");

# Compare integers
if x < y:
    print("x is less than y");
elif x > y:
    print("x is greater than y");
else: 
    print("x is equal to y");


