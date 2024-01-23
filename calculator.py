while (1):
    try:
        key = int(input("Press 1: Run Program\nPress 0:Exit From Program\n"))
    except ValueError:
        print("Enter Valid Input\n")
        continue
    if (key == 1):
       try:
            num1 = float(input("Enter First Number: "))
            operator = input("Enter Operator:+ , - , * , / , % , // : ")
            num2 = float(input("Enter Second Number: "))
       except ValueError:
           print("Value Error!!")
           continue
       if (operator == "+"):
            print(f"{num1} + {num2} = {num1 + num2}")

       elif (operator == "-"):
            print(f"{num1} - {num2} = {num1 - num2}")

       elif (operator == "*"):
            print(f"{num1} * {num2} = {num1 * num2}")

       elif (operator == "/"):
            if (num2==0):
                print("Error!Can't divide by zero")

            else:
                print(f"{num1} / {num2} = {num1 / num2:.2f}")

       elif (operator == "%"):
            print(f"{num1} % {num2} = {num1 % num2}")

       elif (operator == "//"):
            print(f"{num1} // {num2} = {num1 // num2}")

       else:
            print("Invalid Operator")
    elif(key == 0):
        print("Exiting Program!!")
        break
    else:
        print("Enter a valid Key!")
