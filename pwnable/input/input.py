# create input of 99 arguments, and set arguments 65 and 66 to "\x00" and "\x20\x0a\x0d"
string = ""
i = 0

for i in range(99):
    if i == 65:
        string += "\x00"
    elif i == 66:
        string += "\x20\x0a\x0d"
    else:
        string += " " + str(i)

print(string)