	#include <stdio.h>
	
	// (Struct Emp) is the data-type, it is nacessary to pass (2 Words) for the data-types, for (user-defined) data-types not for (Primitive) one...
	
	struct Emp{
		int eno;
		char ename[20];
		float esal;
	};
	
	main()
	{
		// Here (Struct Emp) is the data-type and (e) is the variable...
		// To print the (Structure) you can pass 'both' (data-type / variable) in the (sizeof) function to see the output which it contains...
		
		struct Emp e;
		printf("Size of Emp : %d \n", sizeof(e));
		printf("Size of Emp : %d \n", sizeof(struct Emp));	
	};
