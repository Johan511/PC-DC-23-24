try:
    while True:
        user_input = input("")
        inputStr = ""
        for i in user_input:
            if i == '/':
                inputStr += i
            inputStr += i
        print(eval(inputStr))
except EOFError:
    pass
except ZeroDivisionError:
    print("Division by zero")