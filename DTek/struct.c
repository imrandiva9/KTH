#include <stdio.h>

struct Person {
	char *name;
	int age;
};

// could have used typedef instead.

int main() 
{
	struct Person p;

	p.name= "artem";
	p.age=19;

	printf("%d",p.age);
	return 0;
}
