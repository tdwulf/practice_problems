
def cipher(to_encrypt, key)
    encrypted = ""
    lower = Array('a'..'z')
    upper = Array('A'..'Z')
    lower_hash = Hash[lower.zip(lower.rotate(key))]
    upper_hash  = Hash[upper.zip(upper.rotate(key))]
    to_encrypt.chars.each do |c|
        if lower_hash.has_key?(c)
            encrypted << lower_hash[c]
        elsif upper_hash.has_key?(c)
            encrypted << upper_hash[c]
        else 
            encrypted << c
        end
    end
    return encrypted
end


print "Enter text to be encrypted "
to_encrypt = gets.chomp.strip.to_s

puts ""
puts ""
print "Enter encryption key "
key = gets.chomp.strip.to_i

puts cipher(to_encrypt,key)


