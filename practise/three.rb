class Demo
	attr_accessor :a    # public

	def initialize
		@a = @b = @c = nil
	end

	def set_values(x, y, z)
		@a = x
		@b = y
		@c = z
	end

	def display
		puts "a = #{@a} b = #{@b} c = #{@c}"
	end

	private
	attr_accessor :b    # b's getter/setter are private

	protected
	attr_accessor :c    # c's getter/setter are protected
end

# Usage
obj = Demo.new
obj.a = 10
# obj.b = 20   # NoMethodError: private method `b=' called
# obj.c = 30   # NoMethodError / protected method `c=' called

obj.set_values(10, 20, 30)
obj.display
