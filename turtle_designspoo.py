import imp
import turtle
import random

turtle.Screen().bgcolor("black")
turtle.speed(0)
 
turtle.colormode(255)
for i in range(302):
    a = random.randint(0, 255)
    b = random.randint(0, 255)
    c = random.randint(0, 255)

    turtle.pencolor(a, b, c)
    turtle.left(154)
    turtle.forward(i)
    for j in range(3):
        turtle.left(55)
        turtle.forward(i)
    