import random 

print("Welcome to the perfect guess game made by ADITYA ")

actual_number = random.randint(1,100)

for guess_count in range(1,101):
    user_guess = int(input(" Enter Your number :  "))


    if user_guess > actual_number:
        print("Lower number please")

    elif user_guess < actual_number:
        print("Higher number please") 

    else :
        print(f"Congratulations you guessed the correct number {actual_number} in {guess_count} attempts") 

        break   


   
