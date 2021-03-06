/*
 * Version: 0.1
 * Author: onesuper
 * Email: onesuperclark@gmail.com
 *
 * unit test for system call mkdir
 */

#include <include/fs.h>
#include <include/test.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	mount("volume2.vfs");
	ls();
	mkdir("efg");
	ls();
	umount();
	return 0;
}
