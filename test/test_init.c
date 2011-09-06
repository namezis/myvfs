/*
 * Version: 0.1
 * Author: onesuper
 * Email: onesuperclark@gmail.com
 *
 * unit test for system call format_fs in init.c
 */

#include <include/fs.h>
#include <include/test.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	printf("test format_fs\n");
	format_fs("volume1.vfs", "123");
	return 0;
}
