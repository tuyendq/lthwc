#include <stdio.h>
#include <string.h>

int main() {
	char full_buffer[4];
	char normal_buffer[4];
	strncpy(normal_buffer, "foo", sizeof(normal_buffer)); // [f,o,o,\0]
	strncpy(full_buffer, "four", sizeof(full_buffer)); // [f,o,u,r]
	
	printf("normal_buffer content and size:\t%s\t%d\n", normal_buffer, sizeof(normal_buffer));
	
	printf("full_buffer content and size:\t%s\t%d\n", full_buffer, sizeof(full_buffer));

	return 0;
}
