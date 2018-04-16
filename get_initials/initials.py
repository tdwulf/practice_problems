
def getInitials(name):
    for i in range(len(name)):
        if name[i] != chr(32) and (name[i-1] == chr(32) or name[i] == name[0]):
            print(name[i],end="")

    print("\n")

print("Type your name: ", end="")
name = input()

getInitials(name)
