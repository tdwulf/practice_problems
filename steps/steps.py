
def drawSteps(height):
    rows = height+1
    rCount = 1
    for i in range(rows-1):
        print(" ".rjust(rows-i), end ="")
        print("#"*(rCount+i))


print("Enter a height for your steps ")
height = int(input())
drawSteps(height)

