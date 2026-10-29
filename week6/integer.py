# Doesn't handle exception

# n = int(input("Input: "));
# print("Integer");


# Handles exception

try:
    # Prompt user for an integer
    n = int(input("Input: "));
    print("Integer");
except ValueError:
    print("Not integer");
