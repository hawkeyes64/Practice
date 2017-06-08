print("Hello World")

# Operation with type cast
var1 = int("5") + int("7")
print(str(var1))

# Escape characters
str1 = "Escape the apastrophe \'"
print(str1)

# Concatenation with different datatypes requires typecast
str1 = "String concatenation" + "is performed by " + str(1) + " iteration"
print (str1)

# Boolean
str1 = True
print("Boolean str(True) = " + str(str1))

# List/Array
str1 = ["I", "am", "groot"]
print(str1[2] + " " + str1[1] + " " + str1[0])

# Dictionary
str1 = { "name":"Hawkeye", "age":500 , "weapon":"sword"}
print(str1["name"] + " " + str(str1["age"]))