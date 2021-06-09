

print("Enter the marks of five subjects::")

Maths, English, Hindi, Computer, Gk, total, average, percentage = float(input()), float(input()), float(input()), float(input()), float(input()), None, None, None


total = Maths + English + Hindi + Computer + Gk
average = total / 5.0
percentage = (total / 500.0) * 100

print("The Total marks   = ", total, "/500.0")
print("The Average marks = ", average)
print("The Percentage    = ", percentage, "%")