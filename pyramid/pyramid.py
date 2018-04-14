
def drawPyramid(height):
    rows = height+1
    rCount = 1
    for i in range(rows-1):
        print(" ".rjust(rows-i), end ="")
        print("#"*(rCount+i))
        rCount +=1


print("Enter a height for your pyramid ")
height = int(input())
drawPyramid(height)


