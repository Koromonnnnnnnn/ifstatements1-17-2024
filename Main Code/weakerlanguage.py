question = input("Which do you prefer: Burgers or Hotdogs?")

if question.lower() == "burgers":
    question2 = input(
        "Nice! Do you like lettuce on your burger?")
    if question2.lower() == "yes":
        print("Here is a burger with lettuce")
    elif question2.lower() == "no":
        print("Here is a burger without lettuce")
elif question.lower() == "hotdogs":
    question3 = input(
        "Nice! Would you like ketchup on your hotdog? ")
    if question3.lower() == "yes":
        print("Here is a hotdog with ketchup")
    elif question3.lower() == "no":
        print("Here is a hotdog without ketchup")
