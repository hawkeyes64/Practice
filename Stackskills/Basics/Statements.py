def my_function1(*array1):
	for element in array1:
		if(element.isdigit()):
			print(str(element) + " is a number")
		else:
			print(str(element) + " is not a number")

my_function1("I","am","the","r00t`")
