
def drawSteps(height)
    rows = height + 1
    rCount = 1
    (0..height-1).each do |i|
        print " " *(rows-i)
        print "#" *(rCount+i)
        print "\n"
    end
end

print "Enter Height of Steps "
height = gets.chomp.strip.to_i
drawSteps(height)
