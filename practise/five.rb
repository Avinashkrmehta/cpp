# program to find the Greatest Common Divisor (GCD) of two integers

def gcd(a, b)
	gcd = 1
	i = [a.abs, b.abs].min
	while i >= 1
		if a % i == 0 && b % i == 0
			gcd = i
			break
		end
		i -= 1
	end
	gcd
end

def better_gcd(a, b)
	a = a.abs
	b = b.abs
	return a if b == 0
	while a != b
		if a > b
			a -= b
		else
			b -= a
		end
	end
	a
end

def optimal_gcd(a, b)
	a = a.abs
	b = b.abs
	return a if b == 0
	optimal_gcd(b, a % b)
end

x = 10
y = 20
# puts "GCD of number #{x} and #{y} is #{gcd(x, y)}"
# puts "Better GCD of number #{x} and #{y} is #{better_gcd(x, y)}"
puts "Optimal GCD of number #{x} and #{y} is #{optimal_gcd(x, y)}"
