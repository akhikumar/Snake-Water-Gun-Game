import random
def comparision(comp,user_choice):
    if(comp==user_choice):
        return None
    elif(comp=='s'):
        if(user_choice=='g'):
            return True
        elif(user_choice=='w'):
            return False
    elif(comp=='w'):
        if(user_choice=='s'):
            return True
        elif(user_choice=='g'):
            return False
    elif(comp=='g'):
        if(user_choice=='w'):
            return True
        elif(user_choice=='s'):
            return False

print("\n\t\t\t\tcomputer Turn:  snake(s),gun(g) and water(w) ") 
comp_choice=random.randint(1,100)
if 0< comp_choice <30:
    comp='s'
elif 30 < comp_choice <60:
    comp='w'
else:
    comp='g'

user_choice=input("\n\t\t\t\t Your Turn: snake(s),gun(g) and water(w) :")

result=comparision(comp,user_choice)

if result==None:
    print("\t\t\t\t--------------------------------------------------------------")
    print("\n\t\t\t\tMatch Tie : Both you and computer chose same event")
    print("\t\t\t\t--------------------------------------------------------------")
elif result==True:
    print("\t\t\t\t--------------------------------------------------------------")
    print('''\n\t\t\t\tHurrey YOU Win The Match
              \t\t\t\tEnjoy your day!!!''')
    print("\t\t\t\t--------------------------------------------------------------")

elif result==False:
    print("\t\t\t\t--------------------------------------------------------------")
    print('''\n\t\t\t\tOhh No !! You Lose The Match 
              \t\t\t\t    Try Next Time 
            \t\t\t\t   Good Day!!''')
    print("\t\t\t\t--------------------------------------------------------------")
