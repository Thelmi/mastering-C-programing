// Intro to pointers 
// ***************************

// #include <stdio.h>
// int main()
// {
// int a = 50;
// int *p = &a;

// printf("p: %p\n", p);	//address of variable a;
// printf("a: %d\n", a);   // value of variable a;
// printf("&a: %p\n", &a); // address of variable a;
// printf("&p: %p\n", &p);	// address of the pointer;
// printf("*p: %d\n", *p);	// value of *p;
// *p = 8;        // change value of a using the pointer (Dereferencing)
// printf("*p: %d\n", *p);
// printf("a: %d\n", a);

// char c = 'a';
// char *p = &c;
// printf("%c\n",c);
// printf("%c\n",*p);

// }

// how to change p to point at b
// *******************************

// int main()
// {
// 	int a;
// 	int *p;

// 	a = 10;
// 	p = &a;

// 	printf("address: %p\n",&a);
// 	printf("address: %p\n",p);
// 	printf("value: %d\n", *p);

	
// 	int b = 20;
// 	*p = b; 
// // Only value changed not the address.. pointer still points at a

// 	printf("address: %p\n",p);
// 	printf("value: %d\n", *p);
// // to point the pointer at b 
// 	p = &b;
// 	printf("address: %p\n",p);
// 	printf("value: %d\n", *p);
// }

// pointer arithmetic

// int main()
// {
// 	int a = 10; 
// 	int *p = &a;

// 	// difference is 4 because size of int is 4
// 	printf("%d\n", p);
// 	printf("%d\n", p+1);
// 	// difference is 8 from p and p+2
// 	printf("%d\n", p+2);
// 	// if you want to print the value at that address
// 	printf("value: %d\n", *(p+1));
// }

//Pointer types 
// ********************
// int main() 
// {
// 	int a = 1025; 
// 	int *p = &a;

// 	printf("Size of int %lu\n",sizeof(int));	//sizeof int is 4 bytes
// 	printf("address = %d, value: %d\n",p, *p);	
// 	printf("address = %d, value: %d\n",p + 1, *(p + 1)); // after 4 bytes && ofc garbsh value

// 	char *p0; //character pointer

// 	p0 = (char*)p; //type casting

// 	printf("Size of int %lu\n",sizeof(char));	//sizeof char is 1 byte
// 	printf("address = %d, value: %d\n",p0, *p0); // first byte
// 	printf("address = %d, value: %d\n",p0 + 1, * (p0 + 1)); // second byte
// }

// Void Pointer - Generic pointer
// *********************************

// int main()
// {
// 	int a = 1025; 
// 	int *p = &a;

// 	p = &a;

// 	void *p0; //it can be type casted to any pointer and works with all type of pointers
// 	p0 = p;

// 	printf("Address = %d", p0); // no compilation error;
// 	printf("Address = %d", *p0); // compilation error (cant derefrence void pointer);
// 	printf("Address = %d", p0 + 1); // compilation error (cant do pointer arthmetic);

// }

// pointer to pointer
// **********************
