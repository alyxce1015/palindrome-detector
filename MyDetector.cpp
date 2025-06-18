

/**
 * TODO: Complete these class definitions
 */


/// Starter includes (yw)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"


//
namespace CPSC131::PalindromeDetector
{
	/// Your welcome
	MyDetector::MyDetector() {}
	
	//
	/* 
		 * name: Alyx Cui Edio
		 * CWID: 885822205
		 * Email: acui@csu.fullerton.edu
		 * */
	bool MyDetector::isPalindrome(std::string s)
	{
		//	TODO: Your code here
	
		CPSC131::MyStack<char> st;
		CPSC131::MyQueue<char> qu;
		
		// process of changing each character in string to lowercase so its same
		for (char character : s)
		{
			// this skips non alpha characters
			if (std::isalnum(character))
			{
				// changing to lower then pushing to stack and queue
				char lower = std::tolower(character);			
				st.push(lower);
				qu.enqueue(lower);
			}
		}
		
		// comparison of each character
		while (!st.empty() && !qu.empty())
		{
				if (st.top() != qu.front())
				{
					return false;
				}
			// continue to pop til its empty or detects non palindrom
			st.pop();
			qu.dequeue();
		}
		// meow palindrome!!
		return true;
		
	}
}






