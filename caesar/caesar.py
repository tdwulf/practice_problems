
def main():
    
    #ask for text to cipher 
    print("plaintext: ", end ="")
    plaintext = input()
    
    #ask for key
    print("key: ", end="")
    key = int(input())

    #create list to store encrypted chars
    ciphertext = list(map(str,plaintext))
    
    #loop through letters and process them with cipher function
    for letter in range(len(plaintext)):
        ciphertext[letter] = cipher(ord(plaintext[letter]),key)
    
    #join list to create the encrypted string then print it
    ciphertext = ''.join(ciphertext)
    print("ciphertext: {}".format(ciphertext))

#cipher function
def cipher(letter, key):
    #if character is between A and Z inclusively then encrypt text by by adding A to the mod of plainttext - A + cipher key
    if letter >= 97 and letter <= 122:
        return chr((((letter - 97)+key)%26)+97)
    #if character is between a and z inclusively then encrypt text by by adding a to the mod of plainttext - a + cipher key
    elif letter >= 65 and letter <= 90:
        return chr((((letter - 65)+key)%26)+65)
    #if character is a number or special character do not encrypt it
    else:
        return chr(letter)

if __name__ == "__main__":
    main()