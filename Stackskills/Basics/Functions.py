def my_function():
	print("Hellow World")
	print("A second string")

def my_function2(str1,str2):
	print(str1)
	print(str2)

def my_function3(name="Someone",age="Unknown"):
	print("Hello, my name is " + name + " and my age is " + str(age))

def my_function4(*my_list):
	for element in my_list:
		print("This element is "+ str(element))

# my_function3("test1",5)
my_function4("I","am","Gr00t",1,True)