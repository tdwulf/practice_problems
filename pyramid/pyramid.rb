
def drawPyramid(height)
    rows = height + 1
    rCount = 1
    (0..height-1).each do |i|
        print " " *(rows-i)
        print "#" *(rCount+i)
        print "\n"
        rCount +=1
    end
end

print "Enter Height of Pyramid "
height = gets.chomp.strip.to_i
drawPyramid(height)
