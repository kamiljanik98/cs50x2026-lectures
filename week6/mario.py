# Prints column of 3 bricks with a loop

from cs50 import get_int

while True:
    n = get_int("Height: ");
    if n > 0:
        break

for i in range(n):
    print("#");

# Horizontal blocks
print("?" * 4);

# Prints a 3-by-3 grid of bricks with loops
for i in range(3):
    for j in range(3):
        print("#", end="");
    print();
