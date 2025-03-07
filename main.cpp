#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
  int
  bool
  float
  double
  void
  char
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int cups = 25;
    int count = 12;
    int totalNumberOfMonkeys = 37;
    bool isThatTooManyMonkeys = true;
    bool callAuthorities = false;
    bool isCupHalfFull = false;
    float pie = 3.14f;
    float tempInDegrees = 15.5f;
    float avgNumberOfChildren = 2.5f;
    double bigPie = 3.14159;
    double numberOfWheels = 4.0;
    double numberOfLegs = 3.5;
    char yesOrNo = 'y';
    char thisVarIsA = 'A';
    char letterForRespects = 'F';
    
    ignoreUnused(number, cups, count, totalNumberOfMonkeys, isThatTooManyMonkeys, callAuthorities, isCupHalfFull, pie, tempInDegrees, avgNumberOfChildren, bigPie, numberOfWheels, numberOfLegs, yesOrNo, thisVarIsA, letterForRespects); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int howManyBirdGroups(int numOfBirds, int sizeOfGroup = 100)
{
    ignoreUnused(numOfBirds, sizeOfGroup);
    return {};
}
/*
 2)
 */
bool isThisALetter(char userLetter)
{
    ignoreUnused(userLetter);
    return {};
}
/*
 3)
 */
char isItAOrB (char letter = 'a')
{
    ignoreUnused(letter);
    return {};
}
/*
 4)
 */
int averageOfThreeNums(int num1 = 1, int num2 = 1, int num3 = 1)
{
    ignoreUnused(num1, num2, num3);
    return {};
}
/*
 5)
 */
int getSurfaceAreaOfSquare(int width = 1, int length = 1)
{
    ignoreUnused(width, length);
    return {};
}
/*
 6)
 */
bool isThisACoolFunction(char yesOrNo)
{
    ignoreUnused(yesOrNo);
    return {};
}
/*
 7)
 */
float getVolumeOfSpeakers(float volume = 0.0f)
{
    ignoreUnused(volume);
    return {};
}
/*
 8)
 */
bool willItBlend(double weightOfObject, double areaOfObject)
{
    ignoreUnused(weightOfObject, areaOfObject);
    return {};
}
/*
 9)
 */
char whichKindOfMandolin(int numOfStrings, int numOfBlades)
{
    ignoreUnused(numOfStrings, numOfBlades);
    return {};
}
/*
 10)
 */
int numOfPaperBoxes(int numOfSheets, int sheetsInReam, int reamsInBox)
{
    ignoreUnused(numOfSheets, sheetsInReam, reamsInBox);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto birdWatchingStops = howManyBirdGroups(10000, 10);
    //2)
    auto checkUserChar = isThisALetter('q');
    //3)
    auto checkAOrB = isItAOrB('B');
    //4)
    auto avgDaysWorkedPerWeek = averageOfThreeNums(3, 4, 7);
    //5)
    auto areaOfFrame = getSurfaceAreaOfSquare(12, 15);
    //6)
    auto confirmFuncCoolness = isThisACoolFunction('y');
    //7)
    auto howLoudIsIt = getVolumeOfSpeakers(15.0f);
    //8)
    auto didPhoneBlend = willItBlend(400.0, 25.65);
    //9)
    auto theLoar = whichKindOfMandolin(8, 0);
    //10)
    auto boxesOfPaperToOrder = numOfPaperBoxes(10000, 500, 8);
    
    ignoreUnused(carRented, birdWatchingStops, checkUserChar, checkAOrB, avgDaysWorkedPerWeek, areaOfFrame, confirmFuncCoolness, howLoudIsIt, didPhoneBlend, theLoar, boxesOfPaperToOrder);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
