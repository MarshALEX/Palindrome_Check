/***********************************
 * **Author: Alexandria Marsh
 * **Date: January 30, 2015
 * **Description: This program asks the to input a word
 * **              then checks to see if the word is a palindrome.
 * ******************************/

#include<iostream>
#include<string>

bool checkPal(std::string);

int main()
{
	std::string input;

	//ask user for word	
	std::cout<<"Enter your word: "<<std::endl;
	std::cin>> input;
	
	//call checkPal function
	if(checkPal(input))
	{
	    std::cout<<"Your word is a palindrome."<<std::endl;
	}
	else
	{
	    std::cout<<"Sorry, your word is not a palindrome."<<std::endl;
	}		


	return 0;
}


/**************************************
 		checkPal

 * **Description:This function takes a string from main
 * **      and tests to see if it is a palidrome.  The function
 * **      returns true if the word is a palidrome and false if the word
 * **      is not a palidrome. 
 * **
 * **Paramters: This function uses the value of the string the user
 * **      inputs (input) and here is used as str.  
 * **
 ************************************/
bool checkPal(std::string str)
  {
	for(int i=0; i<str.length(); i++)
	  {
		//if the first letter and last letter are
		//the same, the loop moves to second letter
		//and second to last letter, ect. 
		if(str.at(i)!=str.at((str.length()-i)-1))
		  {
			return false;	
		   }
		else{
			return true;	
		    }
	  }
  }
