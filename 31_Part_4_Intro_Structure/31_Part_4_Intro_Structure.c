	#include <stdio.h>
	
	struct Details{
		char name[30];
		float mob;
		float sal;
	};
	
	void main()
	{
		struct Details d={"Rajpoot Himanshu", 8804024441, 500000
		};
		printf("Structure Size : %d \n\n", sizeof(d));
		printf("Student Name : %s \n", d.name);
		printf("Student Mobile Number : %f \n", d.mob);
		printf("Student Salary : %f \n", d.sal);

	};
