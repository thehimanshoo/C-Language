/* 															STRUCTURES 

	Q.  What is Structure...? Why we are using Structures...?
	
  Ans:-	Structure is a user-defined data-types, like...We have primitive data-types like..int,char,float etc.. Using Structures we can define a 
  		data-types which holds more than one element of different types.. By using structures we can develope data-types...
  		
  	Q.  Why they introduce the concept of Structure...?	
  Ans:- Because in "Array" we can store 'n' numbers of elements, but they were of same type.. means if we are storing the (int) data-type element then
  		we can store only integer at a time, if we are storing the (char) data-type element then we can store only character data-type only, and if we are
  		storing (float) data-type then we can store float data-type only.. but in this concept of (Structure) we can store different data-types at a time,
  		means we can store all like..int,char,float etc.. all premitive data-types at a single time... That is the beauty of structures concept...
  		
  															 Syntax :-


		// "struct" is a keyword we must use to define the structure, followed by the <Identity> ( means 'name' ) of the structure, any name you can give...
			after giving name "Number of elements and their data-types" , for example :-
			
			==>>  struct <Identity>
			{
				data-type ele1;
				data-type ele2;
				data-type ele3;
			};
			
			** Note:- Every Structures should ends with (;)...
			
			   these are the syntax... of the structure, now see the example of the same...
	*/
	
	// Suppose you are taking (employee) as an <Identity> of the structure...
	
	
		struct Employee{
			int eno;
			char ename[30];
			float esal;
		};	
		
// Variable declaration and how it gets memory allocation...? How to write it in a program... Ex:-
// In the given example (e) is the pointer variable , it is holding the base address and it always use to indicate the element address where element get stored..

		

			// When structures will get memory allocation... This we need to do...
			struct emp e;

		
	// After allocation we can access the element through (Accessor) means through (.) operator... for ex:- 
	
		e.eno;
		e.ename;
		e.esal;	
	
	// We took (e) because it is an internal pointer variable, and it holds the base address... if we have taken any other variable then here we can call it
	// by adding (.) in that varibale name...
	
	
	
	
