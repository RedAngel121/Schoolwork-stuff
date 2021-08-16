import os
import sys
os.system('cls')
os.chdir(sys.path[0])
currentTestSubjectList = []

def finalPopulateOutputForPrint():
    finalOutput = list.copy(currentTestSubjectList)
    currentTestSubjectName = finalOutput.pop(viewList*5)
    currentTestSubjectSSN = finalOutput.pop(viewList*5)
    currentTestSubjectPhone = finalOutput.pop(viewList*5)
    currentTestSubjectEmail = finalOutput.pop(viewList*5)
    currentTestSubjectSalary = finalOutput.pop(viewList*5)
    currentTestSubjectSSN = currentTestSubjectSSN[0:3] + "-" + currentTestSubjectSSN[3:5] + "-" + currentTestSubjectSSN[5:]
    currentTestSubjectPhone = currentTestSubjectPhone[0:3] + "-" + currentTestSubjectPhone[3:6] + "-" + currentTestSubjectPhone[6:]
    lastThing = ""
    for _ in range(len(currentTestSubjectName)):
        lastThing += "-"
    input("\n--------------- " + currentTestSubjectName + " ---------------\n\nSSN: " + currentTestSubjectSSN + "\n\nPhone: " + currentTestSubjectPhone + "\n\nEmail: " + currentTestSubjectEmail + "\n\nSalary: $" + currentTestSubjectSalary + "\n\n----------------" + lastThing + "----------------\n\nPress Enter to continue...")
    os.system('cls')

def editedFinalForPrint():
    def replaceElement():
        replacementIndex = currentTestSubjectList.index(oldInfo)
        currentTestSubjectList.remove(oldInfo)
        currentTestSubjectList.insert(replacementIndex, newInfo)
        input("You have successfully edited the Test Subjects information.\nPress Enter To continue...")
        os.system('cls')
    chooseFromEditList = list.copy(currentTestSubjectList)
    editCurrentTestSubject = []
    for _ in range(5):
        editCurrentTestSubject.append(chooseFromEditList.pop(viewList*5))
    editCurrentTestSubjectALT = list.copy(editCurrentTestSubject)
    for displayEdit, editCurrentTestSubject in enumerate(editCurrentTestSubject, 1):
        print(displayEdit, editCurrentTestSubject)
    editTestSubject = input("\nPlease choose which value to edit: ")
    if editTestSubject == "1":
        oldInfo = editCurrentTestSubjectALT.pop(0)
        newInfo = str.title(input("You have chosen to edit the name of the Test Subject: " + oldInfo + "\nPlease enter the correct information: "))
        replaceElement()
    elif editTestSubject == "2":
        oldInfo = editCurrentTestSubjectALT.pop(1)
        newInfo = input("You have chosen to edit the Social Security Number of the Test Subject: " + oldInfo + "\nPlease enter the correct information: ")
        replaceElement()
    elif editTestSubject == "3":
        oldInfo = editCurrentTestSubjectALT.pop(2)
        newInfo = input("You have chosen to edit the phone number of the Test Subject: " + oldInfo + "\nPlease enter the correct information: ")
        replaceElement()
    elif editTestSubject == "4":
        oldInfo = editCurrentTestSubjectALT.pop(3)
        newInfo = str.lower(input("You have chosen to edit the email of the Test Subject: " + oldInfo + "\nPlease enter the correct information: "))
        replaceElement()
    elif editTestSubject == "5":
        oldInfo = editCurrentTestSubjectALT.pop(4)
        newInfo = input("You have chosen to edit the salary of the Test Subject: " + oldInfo + "\nPlease enter the correct information: ")
        replaceElement()
    else:
        input("That is an invalid selection.\n\nPress Enter to continue...")
        os.system('cls')

print("Hello [Valued User], Welcome to Aperature's Scientific Collection of Informed Test Subjects and Nocturnal Conscious Ethologicals!")
while True:
    i = 0
    listnum = len(currentTestSubjectList)
    currentTestSubjectNames = []
    currentTestSubjectSSNList = []
    while i < listnum:
        copylist = list.copy(currentTestSubjectList)
        cenl = copylist.pop(i)
        cSSNl = copylist.pop(i)
        currentTestSubjectNames.append(cenl)
        currentTestSubjectSSNList.append(cSSNl)
        i += 5
    print("\n------------ Test Subject Management System ------------\n\n  There are currently " + str(len(currentTestSubjectNames)) + " Test Subjects in the system.\n\n--------------------------------------------------------\n")
    print("1. Add a New Test Subject")
    print("2. View All Test Subjects")
    print("3. Search an Test Subject by SSN")
    print("4. Edit Test Subject Info")
    print("5. Import Test Subject Info from .TXT")
    print("6. Export Test Subject Info to .TXT")
    print("\n--------------------------------------------------------")
    startScreenSelection = str.title(input("\nPlease make a selection: "))
    if startScreenSelection == "1":
        enterNewTestSubjectName = str.title(input("Please enter the Name of the new Test Subject: "))
        currentTestSubjectList.append(enterNewTestSubjectName)
        enterNewTestSubjectSSN = input("Please enter the Social Security Number for " + enterNewTestSubjectName + ": ")
        enterNewTestSubjectSSN = ''.join(letterCheck for letterCheck in enterNewTestSubjectSSN if letterCheck.isnumeric())
        while len(enterNewTestSubjectSSN) != 9:
            enterNewTestSubjectSSN = str.lower(input("\nThat was not a valid SSN\n\nPlease enter the 9-digit Social Security Number for " + enterNewTestSubjectName + ": "))
            enterNewTestSubjectSSN = ''.join(letterCheck for letterCheck in enterNewTestSubjectSSN if letterCheck.isnumeric())
        currentTestSubjectList.append(enterNewTestSubjectSSN)
        enterNewTestSubjectPhone = str.lower(input("Please enter the phone number for " + enterNewTestSubjectName + ": "))
        enterNewTestSubjectPhone = ''.join(letterCheck for letterCheck in enterNewTestSubjectPhone if letterCheck.isnumeric())
        while len(enterNewTestSubjectPhone) != 10:
            enterNewTestSubjectPhone = str.lower(input("\nThat was not a valid phone number\n\nPlease enter the 10-digit phone number for " + enterNewTestSubjectName + ": "))
            enterNewTestSubjectPhone = ''.join(letterCheck for letterCheck in enterNewTestSubjectPhone if letterCheck.isnumeric())
        currentTestSubjectList.append(enterNewTestSubjectPhone)
        enterNewTestSubjectEmail = str.lower(input("Please enter the email for " + enterNewTestSubjectName + ": "))
        currentTestSubjectList.append(enterNewTestSubjectEmail)
        enterNewTestSubjectSalary = str.lower(input("Please enter the salary for " + enterNewTestSubjectName + ": "))
        currentTestSubjectList.append(enterNewTestSubjectSalary)
        print("\nSuccess! You have added " + enterNewTestSubjectName + " to the database with the following information:")
        enterNewTestSubjectSSN = enterNewTestSubjectSSN[0:3] + "-" + enterNewTestSubjectSSN[3:5] + "-" + enterNewTestSubjectSSN[5:]
        enterNewTestSubjectPhone = enterNewTestSubjectPhone[0:3] + "-" + enterNewTestSubjectPhone[3:6] + "-" + enterNewTestSubjectPhone[6:]
        lastThing = ""
        for _ in range(len(enterNewTestSubjectName)):
            lastThing += "-"
        print("\n--------------- " + enterNewTestSubjectName + " ---------------\n\nSSN: " + enterNewTestSubjectSSN + "\n\nPhone: " + enterNewTestSubjectPhone + "\n\nEmail: " + enterNewTestSubjectEmail + "\n\nSalary: $" + enterNewTestSubjectSalary + "\n\n----------------" + lastThing + "----------------")
    elif startScreenSelection == "2":
        for testSubjectList, currentTestSubjectNames in enumerate(currentTestSubjectNames, 1):
            print(testSubjectList, currentTestSubjectNames)
        viewList = input("Please enter the number of the Test Subject you want to view: ")
        if viewList.isdigit() and int(viewList) <= len(currentTestSubjectList) / 5:
            viewList = int(viewList)
            viewList -= 1
            finalPopulateOutputForPrint()
        else:
            print("\nSorry, that is not a valid Test Subject Number.")
    elif startScreenSelection == "3":
        searchSSN = input("Please enter the Test Subject's SSN: ")
        if searchSSN in currentTestSubjectSSNList:
            viewList = currentTestSubjectSSNList.index(searchSSN)
            finalPopulateOutputForPrint()
        else:
            print("That SSN is not currently in the system.\nIf you would you like to add a new Test Subject please use the Main Menu.")
    elif startScreenSelection == "4":
        for testSubjectList, currentTestSubjectNames in enumerate(currentTestSubjectNames, 1):
            print(testSubjectList, currentTestSubjectNames)
        viewList = input("Please enter the Test Subject Number OR Social Security Number you want to edit: ")
        if viewList.isdigit() and int(viewList) <= len(currentTestSubjectList) / 5:
            viewList = int(viewList)
            viewList -= 1
            editedFinalForPrint()
        elif viewList in currentTestSubjectSSNList:
            viewList = currentTestSubjectSSNList.index(viewList)
            editedFinalForPrint()
        else:
            input("\nSorry, that is not a valid Test Subject Number or Social Security Number.\n\nPress Enter to continue...")
            os.system('cls')
    elif startScreenSelection == "5":
        input("Please make ready for the import of the file named \"Test Subjects.txt\"\nPress Enter to continue...")
        testSubjectDatabase = open("Test Subjects.txt")
        for testSubjectData in testSubjectDatabase.readlines():
            currentTestSubjectList.append(testSubjectData.rstrip("\n"))
        testSubjectDatabase.close()
        os.system('cls')
        print("SUCCESS! Added Test Subjects to the system.")
    elif startScreenSelection == "6":
        confirm = str.upper(input("Are you sure you want to overwrite all Test Subject information?\nY/N: "))
        if confirm == "Y":
            testSubjectDatabase = open("Test Subjects.txt", "w+")
            for testSubjectData in currentTestSubjectList:
                testSubjectDatabase.write(testSubjectData + "\n")
            testSubjectDatabase.close()
            os.system('cls')
            print("SUCCESS! All Test Subject information added to the database.")
        else:
            os.system('cls')
            print("Information Overwrite Declined.")
    else:
        if startScreenSelection in currentTestSubjectNames:
            viewList = currentTestSubjectNames.index(startScreenSelection)
            finalPopulateOutputForPrint()
        elif startScreenSelection in currentTestSubjectSSNList:
            viewList = currentTestSubjectSSNList.index(startScreenSelection)
            finalPopulateOutputForPrint()
        else:
            print("That is not a valid selection and there is no one on the Test Subject list who matches that criteria.")


"""        WEEK 5 - INTERACTIVE ASSIGNMENT 1
import os
import sys
os.system('cls')
os.chdir(sys.path[0])
quizAnswers = ["B", "D", "A", "A", "B", "A", "B", "A", "C", "D", "B", "C", "D", "A", "D", "C", "C", "B", "D", "A"]
studentAnswers = []
wrongAnswers = []
wrongQuestions = []
totalCorrect = 0
totalQuestions = 0
cycle = 0
quizAnswerDocs = open("answers.txt")
studentAnswers += str.upper(quizAnswerDocs.read())
quizAnswerDocs.close()
while cycle != len(studentAnswers):
    if studentAnswers[cycle] != "A" and studentAnswers[cycle] != "B" and studentAnswers[cycle] != "C" and studentAnswers[cycle] != "D":
        studentAnswers.pop(cycle)
        cycle -= 1
    cycle += 1
try:
    while totalQuestions < 20:
        chosen = studentAnswers.pop(0)
        correctAnswer = quizAnswers.pop(0)
        if correctAnswer == chosen:
            totalCorrect += 1
            totalQuestions += 1
        else:
            totalQuestions += 1
            wrongQuestions.append(totalQuestions)
            wrongAnswers.append(correctAnswer)
    print("You got " + str(totalCorrect) + "/" + str(totalQuestions) + " correct only missing " + str(totalQuestions - totalCorrect) + " questions.")
    if totalCorrect == 20:
        print("YOU PASSED WITH 100% CONGRATS!")
    elif totalCorrect >= 15:
        print("YOU PASSED! CONGRATS! Here is what you missed,")
    else:
        print("You have failed this exam, Please try again after reviewing these questions,")
    for incorrect, wrongAnswers in enumerate(wrongAnswers, 1):
        print(wrongQuestions.pop(0), wrongAnswers)
except:
    print("Not enough answers... check your answers and re-submit.")

        WEEK 4 ASSIGNMENT
# Next weeks work:
# Search Test Subject by SSN - DONE
# Edit Test Subject information - string replacement by using remove and insert? - DONE
# Looks like I'm going to be working harder than usual! - turns out it wasnt that hard, just a lot of trial and error
# Also i decided to mark everything with comments when i was done so i know what each line does and why it works

# NEXT TIME RENAME VARIABLES SO THEY ARE MORE READABLE!

import os
os.system('cls') #                     Aperature   S          C             I        E             N         C         E               # I might be a bit of a nerd...
print("Hello [Valued User], Welcome to Aperature's Scientific Collection of Informed Test Subjects and Nocturnal Conscious Ethologicals!") # One time display at startup
currentTestSubjectList = ["Brandon Davidson", "123121234", "1231231234", "username@email.com", "36000", "Greg Bront", "987657441", "9879879875", "crap@email.com", "50000", "Brad Frezno", "454545454", "7878787878", "crismail@email.com", "50"] # this is the list that gets information added and edited through use of the program

# I FIGURED OUT HOW THIS 'DEF' THING WORKS!!!
def finalPopulateOutputForPrint():
    finalOutput = list.copy(currentTestSubjectList) # copy it so I dont destroy it
    currentTestSubjectName = finalOutput.pop(viewList*5) # populate and assign the name from the list to a variable (and also remove it from the list)
    currentTestSubjectSSN = finalOutput.pop(viewList*5) # same as above, we dont have to add one because the entire list was shifted after populating the name above
    currentTestSubjectPhone = finalOutput.pop(viewList*5) # same as above
    currentTestSubjectEmail = finalOutput.pop(viewList*5) # same as above
    currentTestSubjectSalary = finalOutput.pop(viewList*5) # same as above
    currentTestSubjectSSN = currentTestSubjectSSN[0:3] + "-" + currentTestSubjectSSN[3:5] + "-" + currentTestSubjectSSN[5:] # formats the SSN with dashes
    currentTestSubjectPhone = currentTestSubjectPhone[0:3] + "-" + currentTestSubjectPhone[3:6] + "-" + currentTestSubjectPhone[6:] # formats the phone number with dashes
    lastThing = "" # this was created to clean up the bottom row of dashes so they would display evenly
    for _ in range(len(currentTestSubjectName)): # this "for loop" is for as many times as the name was long per character. 22 letters = 22 dashes
        lastThing += "-" # this is the dash that adds itself to itself over and over till the whole name is replaced with dashes for the bottom line
    input("\n--------------- " + currentTestSubjectName + " ---------------\n\nSSN: " + currentTestSubjectSSN + "\n\nPhone: " + currentTestSubjectPhone + "\n\nEmail: " + currentTestSubjectEmail + "\n\nSalary: $" + currentTestSubjectSalary + "\n\n----------------" + lastThing + "----------------\n\nPress Enter to continue...") # final revised information
    os.system('cls') # clear the screen

# Nested 'def' is the bomb diggity!
def editedFinalForPrint():
    def replaceElement():
        replacementIndex = currentTestSubjectList.index(oldInfo) # find the index of the item we pulled out of the copied list on the original list
        currentTestSubjectList.remove(oldInfo) # remove the original saved information
        currentTestSubjectList.insert(replacementIndex, newInfo) # add the replacement information
        input("You have successfully edited the Test Subjects information.\nPress Enter To continue...") # Press Enter To continue.
        os.system('cls') # clear the screen
    chooseFromEditList = list.copy(currentTestSubjectList) # copied this so i can enumerate later
    editCurrentTestSubject = []
    for _ in range(5): # this just does the thing 5 times, which is all I need
        editCurrentTestSubject.append(chooseFromEditList.pop(viewList*5)) # so I found out that you can pop and append in the same line... thats going to save me space!
    editCurrentTestSubjectALT = list.copy(editCurrentTestSubject) # gotta copy the list again else enumerate destroys the list (learned by trial and error)
    for displayEdit, editCurrentTestSubject in enumerate(editCurrentTestSubject, 1): # enumerates the values of the chosen Test Subject
        print(displayEdit, editCurrentTestSubject) # prints the list created above
    editTestSubject = input("\nPlease choose which value to edit: ") # self explanatory
    if editTestSubject == "1": # starts to edit the name
        oldInfo = editCurrentTestSubjectALT.pop(0) # pull the indexed value out of the copied list and hold it for replacement
        newInfo = str.title(input("You have chosen to edit the name of the Test Subject: " + oldInfo + "\nPlease enter the correct information: ")) # enter the new info for replacement
        replaceElement() # go to the top and do the thing then continue the script
    elif editTestSubject == "2": # starts to edit the Social Security Number
        oldInfo = editCurrentTestSubjectALT.pop(1) # pull the indexed value out of the copied list and hold it for replacement
        newInfo = input("You have chosen to edit the Social Security Number of the Test Subject: " + oldInfo + "\nPlease enter the correct information: ") # enter the new info for replacement
        replaceElement() # go to the top and do the thing then continue the script
    elif editTestSubject == "3": # starts to edit the phone number
        oldInfo = editCurrentTestSubjectALT.pop(2) # pull the indexed value out of the copied list and hold it for replacement
        newInfo = input("You have chosen to edit the phone number of the Test Subject: " + oldInfo + "\nPlease enter the correct information: ") # enter the new info for replacement
        replaceElement() # go to the top and do the thing then continue the script
    elif editTestSubject == "4": # starts to edit the email
        oldInfo = editCurrentTestSubjectALT.pop(3) # pull the indexed value out of the copied list and hold it for replacement
        newInfo = str.lower(input("You have chosen to edit the email of the Test Subject: " + oldInfo + "\nPlease enter the correct information: ")) # enter the new info for replacement
        replaceElement() # go to the top and do the thing then continue the script
    elif editTestSubject == "5": # starts to edit the salary
        oldInfo = editCurrentTestSubjectALT.pop(4) # pull the indexed value out of the copied list and hold it for replacement
        newInfo = input("You have chosen to edit the salary of the Test Subject: " + oldInfo + "\nPlease enter the correct information: ") # enter the new info for replacement
        replaceElement() # go to the top and do the thing then continue the script               
    else: # another catch all and go back to the Main Menu
        input("That is an invalid selection.\n\nPress Enter to continue...") # Press Enter To continue.
        os.system('cls') # clear the screen


while True: # And... BEGIN!!
    i = 0 # we begin at zero to check the names for the list of Test Subjects to call
    listnum = len(currentTestSubjectList) # total length of original list at the top
    currentTestSubjectNames = [] # customizable list based off next loop
    currentTestSubjectSSNList = [] # customizable list based off next loop
    while i < listnum: # this loop makes the list of names for option 2
        copylist = list.copy(currentTestSubjectList) # I have to copy the current list so I dont accidentally destroy it
        cenl = copylist.pop(i) # pulling the Test Subject name out
        cSSNl = copylist.pop(i) # pulling Social Security Number out
        currentTestSubjectNames.append(cenl) # appending it to the "current names" list right before the loop
        currentTestSubjectSSNList.append(cSSNl) # appending it to the "current SSN list" right before the loop
        i += 5 # next name on the list
    # This entire operation above could be made easier using a "for loop" but I decided against it for knowledge reasons
    print("\n------------ Test Subject Management System ------------\n\n  There are currently " + str(len(currentTestSubjectNames)) + " Test Subjects in the system.\n\n----------------------------------------------------\n")
    print("1. Add a New Test Subject")
    print("2. View All Test Subjects")
    print("3. Search an Test Subject by SSN")
    print("4. Edit Test Subject Info")
    #print("6. Import Test Subject Info from .TXT")
    #print("5. Export Test Subject Info to .TXT")
    print("\n----------------------------------------------------")
    # All these print options above are here as examples of what can be done using newline vs print
    startScreenSelection = str.title(input("\nPlease make a selection: ")) # Main Menu
    if startScreenSelection == "1": # chosen selection if statement for adding a new Test Subject
        enterNewTestSubjectName = str.title(input("Please enter the Name of the new Test Subject: ")) # new name
        currentTestSubjectList.append(enterNewTestSubjectName) # the new name is automatically added to the list and used for the following questions
        enterNewTestSubjectSSN = input("Please enter the Social Security Number for " + enterNewTestSubjectName + ": ") # new SSN for new name
        enterNewTestSubjectSSN = ''.join(letterCheck for letterCheck in enterNewTestSubjectSSN if letterCheck.isnumeric()) # removes all non-numbers
        while len(enterNewTestSubjectSSN) != 9: # checking if new SSN is valid
            enterNewTestSubjectSSN = str.lower(input("\nThat was not a valid SSN\n\nPlease enter the 9-digit Social Security Number for " + enterNewTestSubjectName + ": ")) # not valid? try again
            enterNewTestSubjectSSN = ''.join(letterCheck for letterCheck in enterNewTestSubjectSSN if letterCheck.isnumeric()) # removing all non-numbers again
        currentTestSubjectList.append(enterNewTestSubjectSSN) # adds the SSN once validated
        enterNewTestSubjectPhone = str.lower(input("Please enter the phone number for " + enterNewTestSubjectName + ": ")) # new phone
        enterNewTestSubjectPhone = ''.join(letterCheck for letterCheck in enterNewTestSubjectPhone if letterCheck.isnumeric()) # removes all non-numbers
        while len(enterNewTestSubjectPhone) != 10: # same checks as above
            enterNewTestSubjectPhone = str.lower(input("\nThat was not a valid phone number\n\nPlease enter the 10-digit phone number for " + enterNewTestSubjectName + ": ")) # not valid? try again
            enterNewTestSubjectPhone = ''.join(letterCheck for letterCheck in enterNewTestSubjectPhone if letterCheck.isnumeric()) # removing all non-numbers again
        currentTestSubjectList.append(enterNewTestSubjectPhone) # adds new phone number to the list
        enterNewTestSubjectEmail = str.lower(input("Please enter the email for " + enterNewTestSubjectName + ": ")) # new email
        currentTestSubjectList.append(enterNewTestSubjectEmail) # adds new email to the list
        enterNewTestSubjectSalary = str.lower(input("Please enter the salary for " + enterNewTestSubjectName + ": ")) # new salary
        currentTestSubjectList.append(enterNewTestSubjectSalary) # adds new salary to the list
        print("\nSuccess! You have added " + enterNewTestSubjectName + " to the database with the following information:") # displays who you added with a success
        enterNewTestSubjectSSN = enterNewTestSubjectSSN[0:3] + "-" + enterNewTestSubjectSSN[3:5] + "-" + enterNewTestSubjectSSN[5:] # formats the SSN with dashes
        enterNewTestSubjectPhone = enterNewTestSubjectPhone[0:3] + "-" + enterNewTestSubjectPhone[3:6] + "-" + enterNewTestSubjectPhone[6:] # formats the phone number with dashes
        lastThing = "" # this was created to clean up the bottom row of dashes so they would display evenly
        for _ in range(len(enterNewTestSubjectName)): # this "for loop" is for as many times as the name was long per character. 13 letters = 13 dashes
            lastThing += "-" # this is the dash that adds itself to itself over and over till the whole name is replaced with dashes for the bottom line
        print("\n--------------- " + enterNewTestSubjectName + " ---------------\n\nSSN: " + enterNewTestSubjectSSN + "\n\nPhone: " + enterNewTestSubjectPhone + "\n\nEmail: " + enterNewTestSubjectEmail + "\n\nSalary: $" + enterNewTestSubjectSalary + "\n\n----------------" + lastThing + "----------------") # final revised information
    elif startScreenSelection == "2": # chosen selection if statement for listing current Test Subjects
        for testSubjectList, currentTestSubjectNames in enumerate(currentTestSubjectNames, 1): # this is a simple listing system using enumerate
            print(testSubjectList, currentTestSubjectNames) # this prints off the current names in an ordered list       
        viewList = input("Please enter the number of the Test Subject you want to view: ") # asking what number to view
        if viewList.isdigit() and int(viewList) <= len(currentTestSubjectList) / 5: # checks to see if your choice was valid
            viewList = int(viewList) # converts the string to a integer
            viewList -= 1 # subtracts one because the list starts at zero
            finalPopulateOutputForPrint() # Go use that block of code at the top I figured out

            # I MOVED ALL OF THIS STUFF TO THE TOP SO ITS NOT SO CLUTTERED AND I CAN JUST DELETE IT
            # finalOutput = list.copy(currentTestSubjectList)
            # currentTestSubjectName = finalOutput.pop(viewList*5)
            # currentTestSubjectSSN = finalOutput.pop(viewList*5)
            # currentTestSubjectPhone = finalOutput.pop(viewList*5)
            # currentTestSubjectEmail = finalOutput.pop(viewList*5)
            # currentTestSubjectSalary = finalOutput.pop(viewList*5)
            # currentTestSubjectSSN = currentTestSubjectSSN[0:3] + "-" + currentTestSubjectSSN[3:5] + "-" + currentTestSubjectSSN[5:]
            # currentTestSubjectPhone = currentTestSubjectPhone[0:3] + "-" + currentTestSubjectPhone[3:6] + "-" + currentTestSubjectPhone[6:]
            # lastThing = ""
            # for _ in range(len(currentTestSubjectName)):
            #     lastThing += "-"
            # print("\n--------------- " + currentTestSubjectName + " ---------------\n\nSSN: " + currentTestSubjectSSN + "\n\nPhone: " + currentTestSubjectPhone + "\n\nEmail: " + currentTestSubjectEmail + "\n\nSalary: $" + currentTestSubjectSalary + "\n\n----------------" + lastThing + "----------------")

        else: # final option for the code
            print("\nSorry, that is not a valid Test Subject Number.") # if you get it wrong you return to the Main Menu
    elif startScreenSelection == "3": # chosen selection if statement for searching an Test Subject by SSN
        searchSSN = input("Please enter the Test Subject's SSN: ") # Search by SSN
        if searchSSN in currentTestSubjectSSNList: # is the SSN on the list or not?
            viewList = currentTestSubjectSSNList.index(searchSSN) # index number of the SSN
            finalPopulateOutputForPrint() # Go use that block of code at the top I figured out
        else:
            print("That SSN is not currently in the system.\nIf you would you like to add a new Test Subject please use the Main Menu.")
    elif startScreenSelection == "4": # chosen selection if statement for editing information
        for testSubjectList, currentTestSubjectNames in enumerate(currentTestSubjectNames, 1): # this is a simple listing system using enumerate
            print(testSubjectList, currentTestSubjectNames) # this prints off the current names in an ordered list       
        viewList = input("Please enter the Test Subject Number OR Social Security Number you want to edit: ") # asking what number to view
        if viewList.isdigit() and int(viewList) <= len(currentTestSubjectList) / 5: # checks to see if your choice was valid
            viewList = int(viewList) # converts the string to a integer
            viewList -= 1 # subtracts one because the list starts at zero
            editedFinalForPrint() # goto the top, do thing
        elif viewList in currentTestSubjectSSNList: # checks to see if your choice was available
            viewList = currentTestSubjectSSNList.index(viewList) # index count again
            editedFinalForPrint() # goto the top, do thing
        else: # final option for the code
            input("\nSorry, that is not a valid Test Subject Number or Social Security Number.\n\nPress Enter to continue...") # if you get it wrong you return to the Main Menu
            os.system('cls') # clear the screen
#    These lines will be available in the next version
#    elif startScreenSelection == "5": # chosen selection if statement for exporting
#        print("Exporting not availble in this version.") # Export - idek but I will learn soon
#    elif startScreenSelection == "6": # chosen selection if statement for importing
#        print("Importing not availble in this version.") # Import - idek but I will learn soon
    else: # The Catch all
        if startScreenSelection in currentTestSubjectNames:
            viewList = currentTestSubjectNames.index(startScreenSelection)
            finalPopulateOutputForPrint()
        elif startScreenSelection in currentTestSubjectSSNList:
            viewList = currentTestSubjectSSNList.index(startScreenSelection)
            finalPopulateOutputForPrint()
        else:
            print("That is not a valid selection and there is no one on the Test Subject list who matches that criteria")

 EVERYTHING BELOW IS EXTRA CODE THAT I SAVED OVER THE COUSE OF THIS CLASS

    elif startScreenSelection not in currentTestSubjectList:
        currentTestSubjectList.append(startScreenSelection)
        enterTestSubjectSSN = str.lower(input("Please enter the Social Security Number for " + startScreenSelection + ": "))
        currentTestSubjectList.append(enterTestSubjectSSN)
        enterTestSubjectPhone = str.lower(input("Please enter the phone number for " + startScreenSelection + ": "))
        currentTestSubjectList.append(enterTestSubjectPhone)
        enterTestSubjectEmail = str.lower(input("Please enter the email for " + startScreenSelection + ": "))
        currentTestSubjectList.append(enterTestSubjectEmail)
        enterTestSubjectSalary = str.lower(input("Please enter the salary for " + startScreenSelection + ": "))
        currentTestSubjectList.append(enterTestSubjectSalary)
        print("\nSuccess! You have added " + startScreenSelection + " to the database")
    else:
        viewList = currentTestSubjectList.index(startScreenSelection)
        finalOutput = list.copy(currentTestSubjectList)
        currentTestSubjectName = finalOutput.pop(viewList)
        currentTestSubjectSSN = finalOutput.pop(viewList)
        currentTestSubjectPhone = finalOutput.pop(viewList)
        currentTestSubjectEmail = finalOutput.pop(viewList)
        currentTestSubjectSalary = finalOutput.pop(viewList)
        lastThing = ""
        for _ in range(len(currentTestSubjectName)):
            lastThing += "-"
        print("\n--------------- " + currentTestSubjectName + " ---------------\n\nSSN: " + currentTestSubjectSSN + "\n\nPhone: " + currentTestSubjectPhone + "\n\nEmail: " + currentTestSubjectEmail + "\n\nSalary: $" + currentTestSubjectSalary + "\n\n----------------" + lastThing + "----------------")


        *** Week  4 - Intreractive Assignment ***
numberList = []
while len(numberList) < 20:
    newNumber = input("Please submit a number: ")
    if newNumber.isdigit():
        numberList.append(int(newNumber))
    else:
        print("\nNumbers only please\n")
print("\nYour highest number is " + str(max(numberList)) + "\nYour lowest number is " +
      str(min(numberList)) + "\nThe sum of all numbers is " + str(sum(numberList)))

# This was possibly one of the easiest things to create in python.
# All I had to do was loop 20 times, append an integer to the list and print out the 3 lines at the end.
# The only tricky part was checking for something that wasn't convertible to an integer.
# But 8 lines of code is all I needed. I feel like this is going to be good info I use for a while.

        *** THIS IS WEEK 3 ASSIGNMENT ***
import os
os.system('cls')
print("Hello, Welcome to Aperature's Scientific Collection of Informed Test Subjects and Conscious Ethologicals!")
currentTestSubjectList = []
# I decided to play with dictionaries here but I would have to rewrite my entire code to make it work... I'll do it later.
directory = {
    "Name": "Name Thing",
    "SSN": "111223333",
    "Phone": "4445556666",
    "Email": "stuff@email.com",
    "Salary": "9999999",
}
i = 0
while I == 0:
    listnum = len(currentTestSubjectList)
    currentTestSubjectNames = []
    while I < listnum:
        copylist = list.copy(currentTestSubjectList)
        cenl = copylist.pop(I)
        listnum = len(currentTestSubjectList)
        currentTestSubjectNames.append(cenl)
        I += 5
    print("\nThere are currently " + str(len(currentTestSubjectNames)) + " Test Subjects in the system.\n")
    if len(currentTestSubjectList) < 10:
        enterTestSubjectName = str.title(input("Please enter the full name of a new Test Subject: "))
    else:
        print("To quickly view a single Test Subject just type their name, otherwise")
        enterTestSubjectName = str.title(input("please enter the full name of a new Test Subject or type LIST to show a list of current Test Subjects: "))
    I = 0
    os.system('cls')
    if enterTestSubjectName == str.title("List"):
        for count, currentTestSubjectNames in enumerate(currentTestSubjectNames, 1):
            print(count, currentTestSubjectNames)
        viewList = input("Please enter the number of the Test Subject you want to view: ")
        if viewList.isdigit() and int(viewList) <= len(currentTestSubjectList) / 5:
            viewList = int(viewList)
            viewList -= 1
            finalOutput = list.copy(currentTestSubjectList)
            currentTestSubjectName = finalOutput.pop(viewList*5)
            currentTestSubjectSSN = finalOutput.pop(viewList*5)
            currentTestSubjectPhone = finalOutput.pop(viewList*5)
            currentTestSubjectEmail = finalOutput.pop(viewList*5)
            currentTestSubjectSalary = finalOutput.pop(viewList*5)
            # I found a new loop option (FOR) and how to use it, turns out there is a way to cycle through a list or range to do what I wanted here instead of 30+ lines of excess code!
            lastThing = ""
            for _ in range(len(currentTestSubjectName)):
                lastThing += "-"
            print(currentTestSubjectName + ", " + currentTestSubjectSSN + ", " + currentTestSubjectPhone + ", " + currentTestSubjectEmail + ", " + currentTestSubjectSalary)
            print("\n--------------- " + currentTestSubjectName + " ---------------\n\nSSN: " + currentTestSubjectSSN + "\n\nPhone: " + currentTestSubjectPhone + "\n\nEmail: " + currentTestSubjectEmail + "\n\nSalary: $" + currentTestSubjectSalary + "\n\n----------------" + lastThing + "----------------")
        else:
            print("\nSorry, that is not a valid Test Subject Number... Try Again.")
    elif enterTestSubjectName not in currentTestSubjectList:
        currentTestSubjectList.append(enterTestSubjectName)
        enterTestSubjectSSN = str.lower(input("Please enter the Social Security Number for " + enterTestSubjectName + ": "))
        currentTestSubjectList.append(enterTestSubjectSSN)
        enterTestSubjectPhone = str.lower(input("Please enter the phone number for " + enterTestSubjectName + ": "))
        currentTestSubjectList.append(enterTestSubjectPhone)
        enterTestSubjectEmail = str.lower(input("Please enter the email for " + enterTestSubjectName + ": "))
        currentTestSubjectList.append(enterTestSubjectEmail)
        enterTestSubjectSalary = str.lower(input("Please enter the salary for " + enterTestSubjectName + ": "))
        currentTestSubjectList.append(enterTestSubjectSalary)
        print("\nSuccess! You have added " + enterTestSubjectName + " to the database")
    else:
        viewList = currentTestSubjectList.index(enterTestSubjectName)
        finalOutput = list.copy(currentTestSubjectList)
        currentTestSubjectName = finalOutput.pop(viewList)
        currentTestSubjectSSN = finalOutput.pop(viewList)
        currentTestSubjectPhone = finalOutput.pop(viewList)
        currentTestSubjectEmail = finalOutput.pop(viewList)
        currentTestSubjectSalary = finalOutput.pop(viewList)
        lastThing = ""
        for _ in range(len(currentTestSubjectName)):
            lastThing += "-"
        print(currentTestSubjectName + ", " + currentTestSubjectSSN + ", " + currentTestSubjectPhone + ", " + currentTestSubjectEmail + ", " + currentTestSubjectSalary)
        print("\n--------------- " + currentTestSubjectName + " ---------------\n\nSSN: " + currentTestSubjectSSN + "\n\nPhone: " + currentTestSubjectPhone + "\n\nEmail: " + currentTestSubjectEmail + "\n\nSalary: $" + currentTestSubjectSalary + "\n\n----------------" + lastThing + "----------------")

# So I accidentally created this weeks objective last week so all I did was upgrade the current code to be less bulky.
# I also removed my name and info as an initial starting point so I can add 5 and see the progress being made as I add them.
# I have a feeling that I should prepare for options to add, edit and delete Test Subjects...


#       *** Week 3 - Intreractive Assignment ***

i = 0
userInput = 0
usenum = 0
yeano = 1
while I == 0:
    userInput = str(input("\nPlease enter a number greater than 1: "))
    if userInput.isnumeric():
        usenum = int(userInput)
    else:
        I = 0
    if usenum >= 2:
        askFactOrCount = input("\nYour number of " + str(userInput) +
                               " provides two options:\n1. Countdown\n2. Factorial\n\nPlease make your selection: ")
        if askFactOrCount == "1":
            count = int(userInput)
            print("\n")
            while count >= 0:
                print(count)
                count -= 1
        elif askFactOrCount == "2":
            fact = int(userInput)
            factMulti = fact
            while fact > 1:
                fact -= 1
                factMulti = factMulti * fact
            print("\nYour number was: " + str(userInput) +
                  "\nThe factorial result is: " + str(factMulti))
        else:
            print("You must make a legal selection...")
    else:
        if yeano < 5:
            print("\nTry again...")
            yeano += 1
        else:
            print("\nAre you doing this on purpose?")
            yeano = 2

# So I didnt have extra code blocks commented out this time because I actually wrote it all correctly the first time around.
# I learned that I need to write the success at the top and the failure at the bottom of the IF statements.
# A majority of this was simple math so I added an easter egg if you typed in "1" too many times at the beginning.


    
# This was the information I used for Week 3 - Discussion

import os
os.system('cls')

import time
cls = lambda: os.system('cls')
cls()
print("Hello")
time.sleep(1)
print("How are you?")
time.sleep(1)
os.system('cls')

        *** THIS IS WEEK 2 INTERACTIVE ASSIGNMENT ***       
print("Hello, Welcome to Aperature's Scientific Collection of Informed Test Subjects and Conscious Ethologicals!\n")  # Aperature's S.C.I.E.N.C.E  :D
currentTestSubjectList = ["Brandon Davidson", "001234567", "3030303030", "brandon@mail.com", "36000"]

# I think I went a little overboard on the whole thing but I learned so much it was worth it. I spent the better part of 7 hours making this it was so fun!
# This is the start of the loop. I needed to learn how to make this work and it was hard to get functioning proper.

# WARNING: ANY INFORMATION ENTERED IN THE PROGRAM WILL BE LOST UPON EXIT!

i = 0
while I == 0:
    # This is where I would add the code for a loop and populate the list of Test Subjects
    listnum = len(currentTestSubjectList)
    currentTestSubjectNames = []
    while I < listnum:
        copylist = list.copy(currentTestSubjectList)
        cenl = copylist.pop(I)
        listnum = len(currentTestSubjectList)
        currentTestSubjectNames.append(cenl)
        I += 5
# Seems to have worked out pretty well but I hope it holds up to testing. --- YUP IT DOES!!
    if len(currentTestSubjectList) < 10:
        enterTestSubjectName = str.title(input("Please enter your full name: "))
    else:
        enterTestSubjectName = str.title(input(
            "Please enter your full name or use LIST to show a list of current Test Subjects: "))
    I = 0  # This is here to reset the I = 0 from outside the while block so the loop won't end unless the program is ended
    if enterTestSubjectName == str.title("List"):
        for count, currentTestSubjectNames in enumerate(currentTestSubjectNames, 1):
            print(count, currentTestSubjectNames)
        viewList = input(
            "Please enter the number of the Test Subject you want to view: ")
        # After getting a number I would need to jump to a specific line to get the proper output. Python doesnt support this so I will have to create the entire thing in this IF block...
        if viewList.isdigit() and int(viewList) <= len(currentTestSubjectList) / 5:
            # This is where I add the index and strings to get the values for proper formatting upon exit.
            viewList = int(viewList)
            viewList -= 1
            finalOutput = list.copy(currentTestSubjectList)
            currentTestSubjectName = finalOutput.pop(viewList*5)
            finalOutput = list.copy(currentTestSubjectList)
            currentTestSubjectSSN = finalOutput.pop(viewList*5+1)
            finalOutput = list.copy(currentTestSubjectList)
            currentTestSubjectPhone = finalOutput.pop(viewList*5+2)
            finalOutput = list.copy(currentTestSubjectList)
            currentTestSubjectEmail = finalOutput.pop(viewList*5+3)
            finalOutput = list.copy(currentTestSubjectList)
            currentTestSubjectSalary = finalOutput.pop(viewList*5+4)
            # For some reason using list.pop actually removes the item I need from the list... this is really inconvenient but I cant figure out how to pull it without screwing up the list right now.
            # In the end I just decided to copy/repopulate the list each time its called so I dont lose the original info.
            # I'm still using this but I need to make it better in the next revision.
            lastThing = str.lower(currentTestSubjectName)
            lastThing = str.replace(lastThing, "q", "-")
            lastThing = str.replace(lastThing, "w", "-")
            lastThing = str.replace(lastThing, "e", "-")
            lastThing = str.replace(lastThing, "r", "-")
            lastThing = str.replace(lastThing, "t", "-")
            lastThing = str.replace(lastThing, "y", "-")
            lastThing = str.replace(lastThing, "u", "-")
            lastThing = str.replace(lastThing, "i", "-")
            lastThing = str.replace(lastThing, "o", "-")
            lastThing = str.replace(lastThing, "p", "-")
            lastThing = str.replace(lastThing, "a", "-")
            lastThing = str.replace(lastThing, "s", "-")
            lastThing = str.replace(lastThing, "d", "-")
            lastThing = str.replace(lastThing, "f", "-")
            lastThing = str.replace(lastThing, "g", "-")
            lastThing = str.replace(lastThing, "h", "-")
            lastThing = str.replace(lastThing, "j", "-")
            lastThing = str.replace(lastThing, "k", "-")
            lastThing = str.replace(lastThing, "l", "-")
            lastThing = str.replace(lastThing, "z", "-")
            lastThing = str.replace(lastThing, "x", "-")
            lastThing = str.replace(lastThing, "c", "-")
            lastThing = str.replace(lastThing, "v", "-")
            lastThing = str.replace(lastThing, "b", "-")
            lastThing = str.replace(lastThing, "n", "-")
            lastThing = str.replace(lastThing, "m", "-")
            lastThing = str.replace(lastThing, " ", "-")
            print("\n--------------- " + currentTestSubjectName + " ---------------\n\nSSN: " + currentTestSubjectSSN + "\n\nPhone: " + currentTestSubjectPhone +
                  "\n\nEmail: " + currentTestSubjectEmail + "\n\nSalary: $" + currentTestSubjectSalary + "\n\n----------------" + lastThing + "----------------")
        else:
            print("\nSorry, that is not a valid Test Subject Number... Try Again.")
            # I decided to revamp the below section to include the name of the person you are entering into the database as you are entering it.
    elif enterTestSubjectName not in currentTestSubjectList:
        currentTestSubjectList.append(enterTestSubjectName)
        enterTestSubjectSSN = str.lower(
            input("Please enter the Social Security Number for " + enterTestSubjectName + ": "))
        currentTestSubjectList.append(enterTestSubjectSSN)
        enterTestSubjectPhone = str.lower(
            input("Please enter the phone number for " + enterTestSubjectName + ": "))
        currentTestSubjectList.append(enterTestSubjectPhone)
        enterTestSubjectEmail = str.lower(
            input("Please enter the email for " + enterTestSubjectName + ": "))
        currentTestSubjectList.append(enterTestSubjectEmail)
        enterTestSubjectSalary = str.lower(
            input("Please enter the salary for " + enterTestSubjectName + ": "))
        currentTestSubjectList.append(enterTestSubjectSalary)
        print("Success! You have added " +
              enterTestSubjectName + " to the database\n")
    else:
        # This is where I add the index and strings to get the values for proper formatting upon exit.
        # I still have to add the code for enabling this --- Easy to do as you did it above already, just don't use "viewList"
        # Varibles are easy, lists are not as easy, but still... this got the job done.
        viewList = currentTestSubjectList.index(enterTestSubjectName)
        finalOutput = list.copy(currentTestSubjectList)
        currentTestSubjectName = finalOutput.pop(viewList)
        finalOutput = list.copy(currentTestSubjectList)
        currentTestSubjectSSN = finalOutput.pop(viewList+1)
        finalOutput = list.copy(currentTestSubjectList)
        currentTestSubjectPhone = finalOutput.pop(viewList+2)
        finalOutput = list.copy(currentTestSubjectList)
        currentTestSubjectEmail = finalOutput.pop(viewList+3)
        finalOutput = list.copy(currentTestSubjectList)
        currentTestSubjectSalary = finalOutput.pop(viewList+4)
        # I'm still using this but I need to make it better in the next revision.
        lastThing = str.lower(currentTestSubjectName)
        lastThing = str.replace(lastThing, "q", "-")
        lastThing = str.replace(lastThing, "w", "-")
        lastThing = str.replace(lastThing, "e", "-")
        lastThing = str.replace(lastThing, "r", "-")
        lastThing = str.replace(lastThing, "t", "-")
        lastThing = str.replace(lastThing, "y", "-")
        lastThing = str.replace(lastThing, "u", "-")
        lastThing = str.replace(lastThing, "i", "-")
        lastThing = str.replace(lastThing, "o", "-")
        lastThing = str.replace(lastThing, "p", "-")
        lastThing = str.replace(lastThing, "a", "-")
        lastThing = str.replace(lastThing, "s", "-")
        lastThing = str.replace(lastThing, "d", "-")
        lastThing = str.replace(lastThing, "f", "-")
        lastThing = str.replace(lastThing, "g", "-")
        lastThing = str.replace(lastThing, "h", "-")
        lastThing = str.replace(lastThing, "j", "-")
        lastThing = str.replace(lastThing, "k", "-")
        lastThing = str.replace(lastThing, "l", "-")
        lastThing = str.replace(lastThing, "z", "-")
        lastThing = str.replace(lastThing, "x", "-")
        lastThing = str.replace(lastThing, "c", "-")
        lastThing = str.replace(lastThing, "v", "-")
        lastThing = str.replace(lastThing, "b", "-")
        lastThing = str.replace(lastThing, "n", "-")
        lastThing = str.replace(lastThing, "m", "-")
        lastThing = str.replace(lastThing, " ", "-")

        # I am going to have to change the function of this tag to use the list and add 1 to get the next variable to print --- DONE

        print("\n--------------- " + currentTestSubjectName + " ---------------\n\nSSN: " + currentTestSubjectSSN + "\n\nPhone: " + currentTestSubjectPhone +
              "\n\nEmail: " + currentTestSubjectEmail + "\n\nSalary: $" + currentTestSubjectSalary + "\n\n----------------" + lastThing + "----------------")

# OK, I think thats everything! Sadly I forgot save/comment out the old information that wasnt needed... but overall I am pretty satisfied with the outcome.
# One last thing... I know that if the program fails in the middle of entering information the list that holds the information will be off the scale that I have set for the entire thing.
# So if I have to write this again with an actual database, I would need to find a way to prevent information from being un-entered or swear off the list thing entirely.


    
        print("Hello")
        cls()
    
    
    
        *** THIS IS WEEK 2 INTERACTIVE ASSIGNMENT ***

# I always start with the most relevant input vars at the top so I dont lose them.
firstColor = str.lower(input("\nPlease enter a Primary Color: "))
secondColor = str.lower(input("\nPlease enter a different Primary Color: "))

# This code is what I started with, to understand how the IF statements work!
# functions just fine and does what its supposed to do...
if firstColor == secondColor:
    print("You cant mix the same color...")
elif firstColor == "blue" and secondColor == "red":
    print("Final result is Purple.")
elif firstColor == "red" and secondColor == "blue":
    print("Final result is Purple.")
elif firstColor == "yellow" and secondColor == "blue":
    print("Final result is Green.")
elif firstColor == "blue" and secondColor == "yellow":
    print("Final result is Green.")
elif firstColor == "yellow" and secondColor == "red":
    print("Final result is Orange.")
elif firstColor == "red" and secondColor == "yellow":
    print("Final result is Orange.")
else:
    print("Please enter an actual color...")

# I decided to play around with lists to make the IF statement smaller...
# There wasnt really a whole lot of options to work with to make it smaller without removing the extra ELIFs
list = ["blue", "red", "yellow"]
firstIndex = int(list.index(firstColor))
secondIndex = int(list.index(secondColor))
produceColor = firstIndex + secondIndex
print(produceColor)
if firstColor == secondColor:
    print("You cant mix the same color...")
elif produceColor == 1:
    print("Final result is Purple.")
elif produceColor == 2:
    print("Final result is Green.")
elif produceColor == 3:
    print("Final result is Orange.")
else:
    print("Please enter an actual color...")
# Overall reduction of one line of code isnt good enough... I want it better!

# I decided to remove the colors from the IF and add them to their own lists instead, I am beginning to understand them better.
colorList = ["blue", "red", "yellow"]
resultList = ["Purple", "Green", "Orange"]
if firstColor == secondColor and firstColor in colorList:
    print("\nYou cant mix the same color...")
elif firstColor in colorList and secondColor in colorList:
    firstIndex = colorList.index(firstColor)
    secondIndex = colorList.index(secondColor)
    produceColor = firstIndex + secondIndex - 1
    finalEvolution = resultList.pop(produceColor)
    print("\nFinal result is " + finalEvolution)
else:
    print("\nPlease enter a primary color...")
# This one I am happy with, I imagine there is a better way to do the math but it wouldnt reduce the number of lines written.





        *** BELOW IS WEEK 1 ASSIGNMENT ***

# This part was inc"red"ibly easy to copy and paste from the older code below and straight off the assignment webpage.
testSubjectName = input("Please enter your full name: ")
testSubjectSSN = input("Please enter your Social Security Number: ")
testSubjectPhone = input("Please enter your phone number: ")
testSubjectEmail = input("Please enter your email: ")
testSubjectSalary = input("Please enter your salary: ")

# This part was added out of OCD... I wanted to top and bottom lines to be equal length no matter how long the name was that was typed in.
# ocdGotMe = len(testSubjectName)
# ughDash = "-"
# lastThing = testSubjectName[:0] + "-" + testSubjectName[ocdGotMe:] < THIS DIDNT WORK AS I THOUGHT
# lastThing = str.replace(1, -1, ocdGotMe) < I'M HAVING ISSUES UNDERSTANDING THE CONTEXT OF THIS... I'M GOING TO KEEP PLAYING WITH IT AND SEE WHAT HAPPENS.
# lastThing = str.replace(testSubjectName, testSubjectName, ughDash) < AFTER MULTIPLE ITERATIONS I DECIDED THIS WASNT GOING TO WORK EASILY
lastThing = str.lower(testSubjectName)
lastThing = str.replace(lastThing, "q", "-")
lastThing = str.replace(lastThing, "w", "-")
lastThing = str.replace(lastThing, "e", "-")
lastThing = str.replace(lastThing, "r", "-")
lastThing = str.replace(lastThing, "t", "-")
lastThing = str.replace(lastThing, "y", "-")
lastThing = str.replace(lastThing, "u", "-")
lastThing = str.replace(lastThing, "i", "-")
lastThing = str.replace(lastThing, "o", "-")
lastThing = str.replace(lastThing, "p", "-")
lastThing = str.replace(lastThing, "a", "-")
lastThing = str.replace(lastThing, "s", "-")
lastThing = str.replace(lastThing, "d", "-")
lastThing = str.replace(lastThing, "f", "-")
lastThing = str.replace(lastThing, "g", "-")
lastThing = str.replace(lastThing, "h", "-")
lastThing = str.replace(lastThing, "j", "-")
lastThing = str.replace(lastThing, "k", "-")
lastThing = str.replace(lastThing, "l", "-")
lastThing = str.replace(lastThing, "z", "-")
lastThing = str.replace(lastThing, "x", "-")
lastThing = str.replace(lastThing, "c", "-")
lastThing = str.replace(lastThing, "v", "-")
lastThing = str.replace(lastThing, "b", "-")
lastThing = str.replace(lastThing, "n", "-")
lastThing = str.replace(lastThing, "m", "-")
lastThing = str.replace(lastThing, " ", "-")

# I am not used to having to use the `+ variable +` syntax so I kept forgetting to add the +'s to make it all work properly...
print ("--------------- " + testSubjectName + " ---------------\n\nSSN: " + testSubjectSSN + "\n\nPhone: " + testSubjectPhone + "\n\nEmail: " + testSubjectEmail + "\n\nSalary: $" + testSubjectSalary + "\n\n----------------" + lastThing + "----------------")




        *** This is the initial work from WEEK 1 INTERACTIVE ASSIGNMENT ***

# === Initial imput of a number ===
# total_price_input = input("Please enter the total price of the item: ")
total_price_input = float(input("Please enter the total price of the item: "))

# === Calculations ===
# profit_margin = 0.19
# mathed_price = float(total_price_input) * float(profit_margin)
# mathed_price = float(total_price_input)*0.19
mathed_price = total_price_input*0.19

# === Output ===
# input_price = round(float(total_price_input),2)
# output_price = round(mathed_price,2)
# print ("Total Sale: $" '%.2f' % input_price)
# print ("Profit Amount: $" '%.2f' % output_price)
# print ("Total Sale: $" '%.2f' % input_price + "\nProfit Amount: $" '%.2f' % output_price)
# print ("Total Sale: $" '%.2f' % float(total_price_input) + "\nProfit Amount: $" '%.2f' % mathed_price)
print ("Total Sale: $" '%.2f' % total_price_input + "\nProfit Amount: $" '%.2f' % mathed_price)
"""