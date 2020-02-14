#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main() {
	void *func_handle = dlopen("./lib4python.so", RTLD_LAZY);

	int (*randNum)(void) = dlsym(func_handle, "randNum");
	int (*addNum)(int a, int b) = dlsym(func_handle, "addNum");

	printf("%d\n", randNum() );
	printf("2+2 = %d\n", addNum(2, 2) );

	dlclose (func_handle);

	return 0;
}
