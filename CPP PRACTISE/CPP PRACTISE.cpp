// CPP PRACTISE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

int totalSum;

std::string countString(std::string incomingSentence)
{
    auto start = std::chrono::steady_clock::now();

    //test string = paste in console = >> "ThiS is String with Upper and lower case Letters"

    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    std::transform(incomingSentence.begin(), incomingSentence.end(), incomingSentence.begin(), ::tolower);

    for (int i = 0; i < sizeof(alphabet); i++)
    {
        int j = 0;

        if (incomingSentence.find(alphabet[i]) != std::string::npos)
        {
            for (int x = 0; x < incomingSentence.size(); x++)
            {
                if (incomingSentence[x] == alphabet[i])
                {
                    j++;
                }
            }
        }

        if (j != 0)
        {
            std::cout << " checking " << alphabet[i] << " repeated " << j << " times in the sentence" << std::endl;
        }
    }

    auto end = std::chrono::steady_clock::now();

    // Store the time difference between start and end
    auto diff = end - start;
    std::cout << std::chrono::duration <double, std::milli>(diff).count() << " ms" << std::endl;

    return incomingSentence;
}

int sum_of(int incomingInt) //if i put 10 in incomingInt it should return 55
{
    int finalSum = 0;

    for (int i = 1; i <= incomingInt; i++)
    {
        finalSum += i;
    }

    return finalSum;
}



int main()
{
    int x;
    std::cout << "Type a number: "; // Type a number and press enter
    std::cin >> x; // Get user input from the keyboard
    std::cout << "Your sum_of " << x << " is: " << sum_of(x) << "\n"; // Display the input value

    std::cout << "\n \n \n";

    std::cin.ignore();

    std::string sentence;
    std::cout << "Type a sentence string: "; // Type a sentence and press enter
    std::getline(std::cin, sentence);// Get user input from the keyboard
    std::cout << "Your sentence is " << sentence << " the table is: \n";
    std::cout << countString(sentence); // Display the input value

    std::cout << std::endl << sentence.length() << " << sentence length (counts spaces)";

    std::cout << "\n \n \n";
    return 0;
}











//int main()
//{
    /*
    int j = 3;
    int i = 16;
    int k = 0;

    while (i > 2)
    {
        k = (j + 1) * 3;    //12    /15 /18 /21/24/27/30
        j++;                //4     /5  /6  /7 /8 /9 /10
        i -= 2;             //14    /12 /10 /8 /6 /4 /2
    }

    std::cout << k << "+" << j << "+" << i << "\n";
    */

    //===================================================================================================

    /*
    Optional: Write a program to find the sum of even numbers and the product of odd numbers in a vector.

    For example:

    Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

    Then the program should output:

    Sum of even numbers is 12
    Product of odd numbers is 27
    */

    /*
    std::vector<int> numbers = { 2, 4, 3, 6, 1, 9 };
    std::vector<int> evenNums;
    std::vector<int> oddNums;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenNums.push_back(numbers[i]);
        }
        else
        {
            oddNums.push_back(numbers[i]);
        }
    }

    for (int i = 0; i < evenNums.size(); i++)
    {
        std::cout<< "The even numbers are " << evenNums[i] << "\n";
    }

    for (int i = 0; i < oddNums.size(); i++)
    {
        std::cout << "The odd numbers are " << oddNums[i] << "\n";
    }
    int sumOfEvenNums = 0;
    for (int i = 0; i < evenNums.size(); i++)
    {
        sumOfEvenNums = sumOfEvenNums + evenNums[i];
    }
    int prodOfOddNums = 1;
    for (int i = 0; i < oddNums.size(); i++)
    {
        prodOfOddNums = prodOfOddNums * oddNums[i];
    }

    std::cout << "The sum of all the even numbers is " << sumOfEvenNums << "\n";
    std::cout << "The product of all the odd numbers is " << prodOfOddNums << "\n";

    std::cout << "ez 8)";
    */

    //=========================================================================================================
    
    /*
    /*
        Optional: Let’s try a challenging problem that will put all your brain cells to the test.

        Write a leap_year.cpp program that:

        Takes a year as input.
        Checks to see if the year is a four-digit number.
        Displays whether or not the year falls on a leap year.
        There are 3 criteria that must be taken into account to identify a leap year:

        If the year can be evenly divided by 4 then it is a leap year, however…
        If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
        If that year is evenly divisible by 400, then it is a leap year.
        Take some time to research and brainstorm before starting to write the code!
    */
    /*
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    if (year >= 1000 && year <= 9999)
    {
        std::cout << "This is a valid 4-Digit Year\n";
        /*if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            // leap year
            std::cout << year;
            std::cout << " falls on a leap year.\n";
        }
        */
        /*
        if (year % 4 == 0)
        {
            // leap year
            std::cout << year;
            std::cout << " falls on a leap year.\n";
        }
        else if(year % 100 == 0 && year % 400 != 0)
        {
            //not a leap year
            std::cout << year;
            std::cout << " is not a leap year.\n";
        }        
        */
        /*
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            std::cout << year;
            std::cout << " falls on a leap year.\n";
        }
        else 
        {
            std::cout << year;
            std::cout << " is not a leap year.\n";
        }
    }
    else
    {
        std::cout << "This is a not a 4-Digit Year/Invalid Entry";
    }
    */

     //=============================================================================================

    /*
    double earthWeight;
    int planetNumber;

    std::cout << "Enter your weight on earth: \n";
    std::cin >> earthWeight;

    std::cout << "Enter # of the planet you wish to fight on: \n";
    std::cin >> planetNumber;

    switch (planetNumber)
    {
    case 1:
        std::cout << "Your weight on Mercury will be : " << earthWeight * 0.38 << "\n";
        break;
    case 2:
        std::cout << "Your weight on Venus will be : " << earthWeight * 0.91 << "\n";
        break;
    case 3:
        std::cout << "Your weight on Mars will be : " << earthWeight * 0.38 << "\n";
        break;
    case 4:
        std::cout << "Your weight on Jupiter will be : " << earthWeight * 2.34 << "\n";
        break;
    case 5:
        std::cout << "Your weight on Saturn will be : " << earthWeight * 1.06 << "\n";
        break;
    case 6:
        std::cout << "Your weight on Uranus will be : " << earthWeight * 0.92 << "\n";
        break;
    case 7:
        std::cout << "Your weight on Neptune will be : " << earthWeight * 1.19 << "\n";
        break;
    default:
        std::cout << "The planet number you have entered is not included in the database. \n";
        break;
    }
    */

//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
