/*
	Q.  What is Local or Global Structures..? What type of structures we should declair it as a Local or Global..?
  Ans:- The structure definition is common for all is called a (Global) and the structure definition is specific to a variable is called (Local) Structure variable.
  
  															OR
  															
  		The Declaration of a variable inside a particular function is called "Local-Structure" or Outside to all the function is called "Global-Structure"...												
	
*/

// Example of Local-Structure...

	#include <stdio.h>
	
	main()
	{
		struct LOCAL{
			int a,b;
		};
		// for memory allocation what we do is :- Access the structure... for ex:-
		
		struct LOCAL l;
		// here (l) is the name, you can give any name whatever you want for your varibale...
	};
	
	// Suppose we take one more (method / Function) and try to call the same memory allocation process then, what will happen..?
	
	check()
	{
		struct LOCAL l;
	}
	
	

