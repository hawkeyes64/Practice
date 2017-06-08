def Q2(cash, balance):
	int_cash = float(cash)
	int_bal = float(balance)

	if int_cash%5 != 0 or int_cash + 0.5 > int_bal:
		print(str(int_bal))

	else:
		print("%.2f" % float(int_bal - int_cash - 0.50))

def Main():
	str_input = str(input()).split(' ', 2)
	Q2(str_input[0], str_input[1])


Main()

