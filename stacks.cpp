#include <iostream>
#include <stack> // Important
using namespace std;

//Function 1: Stack1 + Stack2
//Function 2: Recherche d'un Int 

//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//------------------------------------------Functions-----------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//

stack<int> add(stack<int> s1, stack<int> s2) {
	while (!s2.empty()) {
		s1.push(s2.top()); //Adds the latest element from 2nd stack into 1st
		s2.pop();  // Remove top element from 2nd (So that we canm iterate through the list)
	}

	return s1;
}

//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------MAIN--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//

int main()
{
	//Declaration
	stack<int> s;
	s.push(4);   //Adds specified element into  list
	s.push(3); 
	s.push(2);

	s.pop();	//Deletes the most recently pushed element
	
	s.size();	//Size of the stack

	s.top();	//Gets the most recent element
	s.empty();  //Emptys the whole list


	stack<int> stk = s; //Creates a copy of specified stack

	//How to go through a stack :)
	std::cout << "Stack elements: ";
	while (!stk.empty()) {
		std::cout << stk.top() << " ";
		stk.pop();  // Remove top element
	}

	return 0;
}
