a = float(input('Enter value of a: '))
b = float(input('Enter value of b: '))
c = float(input('Enter value of c: '))
if a <= 0 or b <= 0 or c <= 0:
    print('Invalid parallelepiped!')
else:
    S = 2 * (a * c + b * c)
    formatedArea = "{:.2f}".format(S)
    V = a * b * c;
    formatedVolume = "{:.2f}".format(V)
    print("Trapezoid's area is " + str(formatedArea) + "!")
    print("Trapezoid's volume is " + str(formatedVolume) + "!")
