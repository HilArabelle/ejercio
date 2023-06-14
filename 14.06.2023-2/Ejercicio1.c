#include <stdio.h>	
int func (void){
	puts("Primera funcion");
	return 0;
}
void func1(void){
	puts("Segunda funcion");
	return;
}
int func2(){
	puts("Tercera funcion");
	return 0;
}
int main()
{
	func();
	func1();
	func2();
	return 0;
}

