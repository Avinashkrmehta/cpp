class Student
	def initialize
		@roll_no = nil
		@name = nil
	end

	def set_data(r, n)
		@roll_no = r
		@name = n
	end

	def display
		puts "Roll no: #{@roll_no}"
		puts "Name: #{@name}"
	end
end

s1 = Student.new
s1.set_data(101, "Avinash")
s1.display
