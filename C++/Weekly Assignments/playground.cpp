/*

#include <iostream>
using namespace std;

int main() {
    int userNum;
    int userNum2;
    cout << "Enter integer: " << endl;
    cin  >> userNum;
    cout << "You entered: " << userNum << endl;
    cout << userNum << " squared is " << userNum * userNum << endl;
    cout << "And " << userNum << " cubed is " << userNum * userNum * userNum << "!!" << endl;
    cout << "Enter another integer: " << endl;
    cin  >> userNum2;
    cout << userNum << " + " << userNum2 << " is " << userNum + userNum2 << endl;
    cout << userNum << " * " << userNum2 << " is " << userNum * userNum2 << endl;
    return 0;
}

// < OUTPUT >

Enter integer:
You entered: 4
4 squared is 16
And 4 cubed is 64!!
Enter another integer:
4 + 5 is 9
4 * 5 is 20

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

cout << "   *\n  ***\n *****\n*******\n  ***\n\n\n/\   /\\n  o o\n =   =\n  ---\n\n" << endl;
   *
  ***
 *****
*******
  ***

/\   /\
  o o
 =   =
  ---

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <string>      // Supports use of "string" data type
using namespace std;

int main() {
    int    userInt;
    double userDouble;
    char   userChar;
    string userString;
    cout << "Enter integer:" << endl;
    cin  >> userInt;
    cout << "Enter double:" << endl;
    cin  >> userDouble;
    cout << "Enter character:" << endl;
    cin  >> userChar;
    cout << "Enter string:" << endl;
    cin  >> userString;
    cout << userInt << " " << userDouble << " " << userChar << " " << userString << endl;
    cout << userString << " " << userChar << " " << userDouble << " " << userInt << endl;
    cout << userDouble << " cast to an integer is " << int (userDouble) << endl;
   return 0;
}

// < OUTPUT >

Enter integer:
Enter double:
Enter character:
Enter string:
99 3.77 z Howdy
Howdy z 3.77 99
3.77 cast to an integer is 3

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
using namespace std;

int main() {
    double wallHeight;
    double wallWidth;
    double wallArea;
    cout << "Enter wall height (feet):" << endl;
    cin  >> wallHeight;
    cout << "Enter wall width (feet):" << endl;
    cin  >> wallWidth;
    wallArea = wallHeight * wallWidth;
    cout << "Wall area: " << wallArea << " square feet" << endl;
    cout << "Paint needed: " << wallArea / 350 << " gallons" << endl;
    cout << "Cans needed: " << ceil(wallArea / 350) << " can(s)" << endl;
    return 0;
}

// < OUTPUT >

Enter wall height (feet):
Enter wall width (feet):
Wall area: 180 square feet
Paint needed: 0.514286 gallons
Cans needed: 1 can(s)

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main() {
    int currentYear;
    int birthInput;
    cout << "Happy Birthday." << endl;
    cout << "Enter current year:" << endl;
    cin  >> currentYear;
    cout << "Enter birth year:" << endl;
    cin  >> birthInput;
    cout << int (currentYear - birthInput) << endl;
    return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <string>
using namespace std;

int main() {
  string userInput;
  cout << "Input an abbreviation:" << endl;
  cin >> userInput;
  if (userInput == "LOL")
  {
    cout << "laughing out loud" << endl;
  }
  else if (userInput == "IDK")
  {
    cout << "I don't know" << endl;
  }
  else if (userInput == "BFF")
  {
    cout << "best friends forever" << endl;
  }
  else if (userInput == "IMHO")
  {
    cout << "in my humble opinion" << endl;
  }
  else if (userInput == "TMI")
  {
    cout << "too much information" << endl;
  }
  else
  {
    cout << "Unknown" << endl;
  }
  return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <string>
using namespace std;

int main() {
  string userInput;
  string abbreviationBFF = "BFF";
  string abbreviationIDK = "IDK";
  string abbreviationJK = "JK";
  string abbreviationTMI = "TMI";
  string abbreviationTTYL = "TTYL";
  cout << "Enter text:" << endl;
  getline(cin, userInput);
  cout << "You entered: " << userInput << endl;
  size_t foundBFF = userInput.find(abbreviationBFF);
  size_t foundIDK = userInput.find(abbreviationIDK);
  size_t foundJK = userInput.find(abbreviationJK);
  size_t foundTMI = userInput.find(abbreviationTMI);
  size_t foundTTYL = userInput.find(abbreviationTTYL);
  if (foundBFF != string::npos){cout <<  "BFF: best friend forever" << endl;}
  if (foundIDK != string::npos){cout <<  "IDK: I don't know" << endl;}
  if (foundJK != string::npos){cout <<   "JK: just kidding" << endl;}
  if (foundTMI != string::npos){cout <<  "TMI: too much information" << endl;}
  if (foundTTYL != string::npos){cout << "TTYL: talk to you later" << endl;}
  return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <string>
using namespace std;

int main() {
  string userInput;
  string abbreviationBFF = "BFF";
  string abbreviationIDK = "IDK";
  string abbreviationJK = "JK";
  string abbreviationTMI = "TMI";
  string abbreviationTTYL = "TTYL";
  string replacementBFF = "best friend forever";
  string replacementIDK = "I don't know";
  string replacementJK = "just kidding";
  string replacementTMI = "too much information";
  string replacementTTYL = "talk to you later";
  cout << "Enter text:" << endl;
  getline(cin, userInput);
  cout << "You entered: " << userInput << endl;
  string changedInput = userInput;
  size_t foundBFF = changedInput.find(abbreviationBFF);
  if (foundBFF >= userInput.length())
    changedInput.replace(foundBFF, abbreviationBFF.length(), replacementBFF);
  size_t foundIDK = changedInput.find(abbreviationIDK);
  if (foundIDK >= userInput.length())
    changedInput.replace(foundIDK, abbreviationIDK.length(), replacementIDK);
  size_t foundJK = changedInput.find(abbreviationJK);
  if (foundJK >= userInput.length())
    changedInput.replace(foundJK, abbreviationJK.length(), replacementJK);
  size_t foundTMI = changedInput.find(abbreviationTMI);
  if (foundTMI >= userInput.length())
    changedInput.replace(foundTMI, abbreviationTMI.length(), replacementTMI);
  size_t foundTTYL = changedInput.find(abbreviationTTYL);
  if (foundTTYL >= userInput.length())
    changedInput.replace(foundTTYL, abbreviationTTYL.length(), replacementTTYL);
  cout << "Expanded: " << changedInput << endl;
  return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <string>
using namespace std;

int main() {
  string triangleChar;
  int triangleHeight;
  string insertSpace = " ";
  int adjustmentHeight = 0;
  string triangleWrite = "";
  cout << "Enter a character:" << endl;
  cin >> triangleChar;
  cout << "Enter triangle height:" << endl;
  cin >> triangleHeight;
  cout << endl;
  triangleChar.append(insertSpace);
  while (triangleHeight > 0) {
    adjustmentHeight++;
    triangleWrite.append(triangleChar);
    cout << triangleWrite << endl;
    triangleHeight--;
  }
  return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <string>
using namespace std;

int main() {
  int arrowBaseHeight;
  int arrowBaseWidth;
  int arrowHeadWidth;
  string arrowBaseWidthMaterial = "";
  string arrowMaterial = "*";
  cout << "Enter arrow base height:" << endl;
  cin >> arrowBaseHeight;
  cout << "Enter arrow base width:" << endl;
  cin >> arrowBaseWidth;
  cout << "Enter arrow head width:" << endl;
  cin >> arrowHeadWidth;
  while (arrowHeadWidth <= arrowBaseWidth) {
    cout << "Enter arrow head width:" << endl;
    cin >> arrowHeadWidth;
  }
  cout << endl;
  while (arrowBaseWidth > 0) {
    arrowBaseWidthMaterial.append(arrowMaterial);
    arrowBaseWidth--;
  }

  while (arrowBaseHeight > 0) {
    cout << arrowBaseWidthMaterial << endl;
    arrowBaseHeight--;
  }

  while (arrowHeadWidth > 0) {
    string arrowHeadMaterial = "";
    int arrowHeadWidthBuild = arrowHeadWidth;
      while (arrowHeadWidthBuild > 0) {
        arrowHeadMaterial.append(arrowMaterial);
        arrowHeadWidthBuild--;
      }
    cout << arrowHeadMaterial << endl;
    arrowHeadWidth--;
  }

  return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<double> weightList = {};
  double weightInput, weightBase = 0;
  int participantNumber = 1;
  while (participantNumber <= 5) {
      cout << "Enter weight " << participantNumber << ":" << endl;
      cin >> weightInput;
      weightList.push_back(weightInput);
      weightBase = weightBase + weightInput;
      participantNumber ++;
  }

  cout << "You entered: ";
  for (auto itr=weightList.begin(); itr!=weightList.end();++itr)
    cout << *itr << " ";
  sort(weightList.begin(), weightList.end());
  cout << "\n\nTotal weight: " << weightBase << endl;
  cout << "Average weight: " << weightBase / 5 << endl;
  cout << "Max weight: " << weightList.back() << endl;
  return 0;
};

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void clearscreen(){
   cout << flush;
   system("clear");
   cout << flush;
   };

int main() {
  char menuSelection;
  vector<int> playerJerseyNumber, playerRating;
  int playerJerseyNumberInput, playerRatingInput, i=1, editPlayer, editRating;
  while (i<=5){
    cout << "Enter player " << playerJerseyNumber.size() + 1 << "'s jersey number:" << endl;
    cin >> playerJerseyNumberInput;
    playerJerseyNumber.push_back(playerJerseyNumberInput);
    cout << "Enter player " << playerRating.size() + 1 << "'s rating:" << endl;
    cin >> playerRatingInput;
    playerRating.push_back(playerRatingInput);
    cout << endl;
    i++;
  }
  cout << "ROSTER" << endl;
  for (int listIndex = 0; listIndex < playerJerseyNumber.size(); listIndex++){
    cout << "Player " << listIndex+1 << " -- Jersey number: " << playerJerseyNumber.at(listIndex) << ", Rating: " << playerRating.at(listIndex) << endl;
  }
  i=1;
  while (i>0){
    cout << "\nMENU\na - Add player\nd - Remove player\nu - Update player rating\nr - Output players above a rating\no - Output roster\nq - Quit\n\nChoose an option:" << endl;
    cin >> menuSelection;
    if (menuSelection == *"a") {
      cout << "Enter another player's jersey number:" << endl;
      cin >> playerJerseyNumberInput;
      playerJerseyNumber.push_back(playerJerseyNumberInput);
      cout << "Enter another player's rating:" << endl;
      cin >> playerRatingInput;
      playerRating.push_back(playerRatingInput);
    }
    else if (menuSelection == *"d"){
      cout << "Enter a jersey number:" << endl;
      cin >> editPlayer;
      auto jerseyIndex = find(playerJerseyNumber.begin(), playerJerseyNumber.end(), editPlayer);
      playerJerseyNumber.erase(jerseyIndex);
      playerRating.erase(playerRating.begin()+(jerseyIndex - playerJerseyNumber.begin()));
    }
    else if (menuSelection == *"u"){
      cout << "Enter a jersey number:" << endl;
      cin >> editPlayer;
      auto jerseyIndex = find(playerJerseyNumber.begin(), playerJerseyNumber.end(), editPlayer);
      cout << "Enter a new rating for player:" << endl;
      cin >> editRating;
      playerRating.at(jerseyIndex - playerJerseyNumber.begin()) = editRating;
    }
    else if (menuSelection == *"r"){
      cout << "Enter a rating:" << endl;
      cin >> editPlayer;
      cout << "ABOVE " << editPlayer << endl;
      for (int listIndex = 0; listIndex < playerRating.size(); listIndex++)
      {
        if (playerRating[listIndex] > editPlayer)
        {
          cout << "Player " << listIndex+1 << " -- Jersey number: " << playerJerseyNumber.at(listIndex) << ", Rating: " << playerRating.at(listIndex) << endl;
        }
      }
    }
    else if (menuSelection == *"o"){
      clearscreen();
      cout << "ROSTER" << endl;
      for (int listIndex = 0; listIndex < playerJerseyNumber.size(); listIndex++){
        cout << "Player " << listIndex+1 << " -- Jersey number: " << playerJerseyNumber.at(listIndex) << ", Rating: " << playerRating.at(listIndex) << endl;
        }
    }
    else {
      i=0;
    }
  }
  return 0;
};

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>
using namespace std;

int GetNumOfCharacters(string UIV){
  return UIV.length();
};

string OutputWithoutWhitespace(string UIV){
  UIV.erase(remove_if(UIV.begin(),UIV.end(),[](unsigned char x){return std::isspace(x);}),UIV.end());
  return UIV;
};

int main() {
  string inputText;
  cout << "Enter a sentence or phrase:" << endl;
  getline(cin, inputText);
  cout << "\nYou entered: " << inputText << endl;
  cout << "\nNumber of characters: " << GetNumOfCharacters(inputText) << endl;
  cout << "String with no whitespace: " << OutputWithoutWhitespace(inputText) << endl;
  return 0;
};

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int GetNumOfNonWSCharacters(string &inputText)
{
  int count = 0;
  int length = inputText.length();
  for (int i = 0; i < length; i++)
  {
    int c = inputText[i];
    if (isspace(c))
      count++;
  }
  int finalLetterCount = length - count;
  cout << "Number of non-whitespace characters: " << finalLetterCount << endl;
  return finalLetterCount;
}

int GetNumOfWords(string inputText)
{
  auto bothAreSpaces = [](char lhs, char rhs)
  { return (lhs == rhs) && (lhs == ' '); };
  char c = ' ';
  string::iterator new_end = unique(inputText.begin(), inputText.end(), bothAreSpaces);
  inputText.erase(new_end, inputText.end());
  size_t count = 0;
  for (char i : inputText)
  {
    if (i == c)
    {
      count++;
    }
  }
  cout << "Number of words: " << count + 1 << endl;
  return count + 1;
}

int FindText(string inputText, string findAll)
{
  int found = 0;
  size_t start = 0;
  while ((start = inputText.find(findAll, start)) != string::npos)
  {
    found++;
    start += findAll.length();
  }
  cout << "\"" << findAll << "\" instances: " << found << endl;
  return found;
}

//  int FindText(string inputText, string findAll) {
//      int count = 0;
//      size_t found = 0;
//      do { 
//          found = findAll.find(inputText, found);
//          if( found != string::npos ) {
//            count++;
//            found++;
//          }
//      } while( found != string::npos );
//      cout << "\"" << findAll << "\" instances: " << count << endl;
//      return count;
//  }

void ReplaceExclamation(string inputText)
{
  replace(inputText.begin(), inputText.end(), '!', '.');
  cout << "Edited text: " << inputText << endl;
  return;
}

void ShortenSpace(string inputText)
{
  auto bothAreSpaces = [](char lhs, char rhs)
  { return (lhs == rhs) && (lhs == ' '); };
  string::iterator new_end = unique(inputText.begin(), inputText.end(), bothAreSpaces);
  inputText.erase(new_end, inputText.end());
  cout << "Edited text: " << inputText << endl;
  return;
}

string PrintMenu(string inputText)
{
  string findAll;
  char printMenuInput;
  int go = 1;
  while (go == 1)
  {
    cout << "\nMENU\nc - Number of non-whitespace characters\nw - Number of words\nf - Find text\nr - Replace all !'s\ns - Shorten spaces\nq - Quit\n\nChoose an option:" << endl;
    cin >> printMenuInput;
    if (printMenuInput == *"c")
    {
      GetNumOfNonWSCharacters(inputText);
    }
    else if (printMenuInput == *"w")
    {
      GetNumOfWords(inputText);
    }
    else if (printMenuInput == 'f')
    {
      cout << "Enter a word or phrase to be found:" << endl;
      cin.ignore();
      getline(cin, findAll);
      FindText(inputText, findAll);
    }
    else if (printMenuInput == *"r")
    {
      inputText = ReplaceExclamation(inputText);
    }
    else if (printMenuInput == *"s")
    {
      inputText = ShortenSpace(inputText);
    }
    else
    {
      go = 0;
      break;
    }
  }
  return inputText;
}

int main()
{
  string inputText;
  cout << "Enter a sample text:" << endl;
  getline(cin, inputText);
  cout << "\nYou entered: " << inputText << endl;
  PrintMenu(inputText);
  return 0;
};

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
^^ MY ATTEMPT ABOVE ^^ ======= prof sent me the fucking answer below...
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include <iostream>
#include <string>
using namespace std;

int GetNumOfNonWSCharacters(const string usrStr){
  int count = 0, i;
  for (i = 0; i < usrStr.size(); ++i){
    if (usrStr.at(i) != ' ' && usrStr.at(i) != '\t'){
      ++count;
    }
  }
  return count;
}

int GetNumOfWords(const string usrStr)
{
  int count = 0, i;
  for (i = 1; i < usrStr.size(); ++i){
    if (isspace(usrStr.at(i)) && !isspace(usrStr.at(i - 1))){
      ++count;
    }
  }

// if ((usrStr.at(usrStr.size() - 1) == '.' ||
//   usrStr.at(usrStr.size() - 1) == '!' ||
//   usrStr.at(usrStr.size() - 1) == '?') &&
//   usrStr.at(usrStr.size() - 2) != ' ') {
//   ++count;
// }

  if (!isspace(usrStr.at(usrStr.size() - 1))){
    ++count;
  }
  return count;
}

int FindText(const string toFind, string usrStr){
  int count = 0, where;
  while (usrStr.find(toFind) != string::npos){
    count++;
    where = usrStr.find(toFind);
    usrStr = usrStr.substr(where + toFind.size());
  }
  return count;
}

void ReplaceExclamation(string &usrStr){
  int i;
  for (i = 0; i < usrStr.size(); ++i){
    if (usrStr.at(i) == '!'){
      usrStr.at(i) = '.';
    }
  }
}

void ShortenSpace(string &usrStr){
  int i;
  string tmp;
  for (i = 1; i < usrStr.size(); ++i){
    if (!(isspace(usrStr.at(i)) && isspace(usrStr.at(i - 1)))){
      tmp = tmp + usrStr.at(i - 1);
    }
    if (i == usrStr.size() - 1){
      tmp = tmp + usrStr.at(i);
    }
  }
  usrStr = tmp;
  return;
}

char PrintMenu(string &usrStr){
  char menuOp;
  string toFind;
  int numFinds;
  cout << "MENU" << endl;
  cout << "c - Number of non-whitespace characters" << endl;
  cout << "w - Number of words" << endl;
  cout << "f - Find text" << endl;
  cout << "r - Replace all !\'s" << endl;
  cout << "s - Shorten spaces" << endl;
  cout << "q - Quit" << endl << endl;
  menuOp = ' ';
  while (menuOp != 'c' && menuOp != 'w' && menuOp != 'f' && menuOp != 'r' && menuOp != 's' && menuOp != 'o' && menuOp != 'q'){
    cout << "Choose an option:" << endl;
    cin >> menuOp;
  }

  if (menuOp == 'c'){
    cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(usrStr) << endl << endl;
    menuOp = ' ';
  } else if (menuOp == 'w') {
    cout << "Number of words: " << GetNumOfWords(usrStr) << endl << endl;
    menuOp = ' ';
  } else if (menuOp == 'f') {
    cin.ignore();
    cout << "Enter a word or phrase to be found:" << endl;
    getline(cin, toFind);
    numFinds = FindText(toFind, usrStr);
    cout << "\"" << toFind << "\"" << " instances: " << numFinds << endl << endl;
    menuOp = ' ';
  } else if (menuOp == 'r') {
    ReplaceExclamation(usrStr);
    cout << "Edited text: " << usrStr << endl << endl;
    menuOp = ' ';
  } else if (menuOp == 's') {
    ShortenSpace(usrStr);
    cout << "Edited text: " << usrStr << endl << endl;
    menuOp = ' ';
  }
  return menuOp;
}

int main(){
  string userString;
  char menuChoice;
  cout << "Enter a sample text:" << endl;
  getline(cin, userString);
  cout << endl;
  cout << "You entered: " << userString << endl << endl;
  while (menuChoice != 'q'){
    menuChoice = PrintMenu(userString);
  }
  return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

*/

#include <iostream>
using namespace std;

int main() {

  return 0;
};