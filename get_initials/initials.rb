
def getInitials(name)
    (0..name.length).each do |i|
        if name[i] != 32.chr && (name[i] == name[0] || name[i-1] == 32.chr)
            print(name[i])
        end
    end
    print("\n")
end

print("Enter your full name: ")
name = gets.chomp.strip.to_s

getInitials(name)

