#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
---------------------------------------
PART 1 — Variables and Arithmetic
---------------------------------------
*/

int addNumbers(int a, int b)
{
   return a+b;

}



/*
---------------------------------------
PART 2 — Loops
---------------------------------------
*/

int sumUpToN(int n)
{
 int sum=0;
 for(int i=1,i=<n,i++);
 sum+=i;

 
}
 return sum;


/*
---------------------------------------
PART 3 — Vectors
---------------------------------------
*/

int findMaximum(vector<int> numbers)
{
    int maxValue=number[0];
    for(int i =1; i<number.size();i++){
        if(numbers[i]>maxValue);
    }
}
return maxVlaue;


/*
---------------------------------------
PART 4 — Strings
---------------------------------------
*/

string reverseString(string text)
{
    string reversed="";
    for(int i =text.lenght() - 1; >=0;i--){
        reversed += text[i];
    }
}
return reversed;


/*
---------------------------------------
PART 5 — Simple Class
---------------------------------------
*/

class Student
{
private:
    string name;
    int grade;

public:

    student( string n , int g){
        name=n;
        grade=g;
    }
  void   printInfo(){
    cout<<" name:"<<name<<endl;
    cout<<"grade:"<<grade<<endl;
}



};



/*
---------------------------------------
MAIN FUNCTION
---------------------------------------
*/

int main()
{
    cout << "C++ Review Lab\n";

    /*
    PART 1 TEST
    */

    cout << "Sum of 4 + 5 = "
         << addNumbers(4,5)
         << endl;

    /*
    PART 2 TEST
    */

    cout << "Sum up to 10 = "
         << sumUpToN(10)
         << endl;


    /*
    PART 3 TEST
    */

    vector<int> numbers = {3,7,2,9,5};

    cout << "Maximum value = "
         << findMaximum(numbers)
         << endl;


    /*
    PART 4 TEST
    */

    cout << "Reverse of hello = "
         << reverseString("hello")
         << endl;


    /*
    PART 5 TEST
    */

    Student s("Alice", 90);

    s.printInfo();


    return 0;
}#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
---------------------------------------
PART 1 — Variables and Arithmetic
---------------------------------------
*/

int addNumbers(int a, int b)
{
    // TODO
    // Return the sum of a and b

}



/*
---------------------------------------
PART 2 — Loops
---------------------------------------
*/

int sumUpToN(int n)
{
    // TODO
    // Using a loop calculate the sum
    // 1 + 2 + 3 + ... + n
}



/*
---------------------------------------
PART 3 — Vectors
---------------------------------------
*/

int findMaximum(vector<int> numbers)
{
    // TODO
    // Return the largest number in the vector
}



/*
---------------------------------------
PART 4 — Strings
---------------------------------------
*/

string reverseString(string text)
{
    // TODO
    // Return the reversed version of the string
}



/*
---------------------------------------
PART 5 — Simple Class
---------------------------------------
*/

class Student
{
private:
    string name;
    int grade;

public:

    // TODO
    // Create a constructor that receives
    // name and grade


    // TODO
    // Create a function printInfo()
    // that prints:
    // Name: <name>
    // Grade: <grade>

};



/*
---------------------------------------
MAIN FUNCTION
---------------------------------------
*/

int main()
{
    cout << "C++ Review Lab\n";

    /*
    PART 1 TEST
    */

    cout << "Sum of 4 + 5 = "
         << addNumbers(4,5)
         << endl;

    /*
    PART 2 TEST
    */

    cout << "Sum up to 10 = "
         << sumUpToN(10)
         << endl;


    /*
    PART 3 TEST
    */

    vector<int> numbers = {3,7,2,9,5};

    cout << "Maximum value = "
         << findMaximum(numbers)
         << endl;


    /*
    PART 4 TEST
    */

    cout << "Reverse of hello = "
         << reverseString("hello")
         << endl;


    /*
    PART 5 TEST
    */

    Student s("Alice", 90);

    s.printInfo();


    return 0;

}
