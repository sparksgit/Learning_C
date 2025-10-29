#include <unistd.h>

int main(void) {
	char *hello = "Hello from C\n";
	write(1, hello, 13);
	return 0;
}
