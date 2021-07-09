import random
rand=random.randrange(100)
# print(rand)

guess=1
while(True):
    user=int(input("Enter the number range between (1-100) :"))
    if(user==rand):
        print(f"You guess the number in {guess} attempt")
        break
    elif(user>rand):
        print("Lower number please !!!")
    else:
        print("Higher number please!!")
    guess+=1
