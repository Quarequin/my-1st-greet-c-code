// gogreet.c
// the 'hello, world!' jumpscare!
// by QUAREQUIN
/*
      mm mm      
      MM MM      
      qM ""      
 MMMM .'V'.dMMMM 
 mmmmmp'.'q mmmm 
 """"' '"b. """" 
      MM MM      
      MM MM      
*/
#include <stdio.h>

void greet(char* name) {
	char msg[20] = "Hello, ";
	unsigned int msglen0 = 0;
	unsigned int findagain = 0;
	unsigned int i = 0;
	if (!!name) {
		if (!msg[i]) { goto end_greet_try_name_sped; }
		i++;
		if (!msg[i]) { goto end_greet_try_name_sped; }
		again_greet_try_name_sped:
		if (!!msg[i]) { i = i << 1; goto again_greet_try_name_sped; }
		i = i >> 1;
		end_greet_try_name_sped:
		again_greet_check_name:
		if (!!msg[i]) { i++; goto again_greet_check_name; }
		again_greet_check_name_last:
		if (!!name[msglen0]) { msglen0++; goto again_greet_check_name_last; }
		msglen0++;
		if (msglen0 + i + 1 > 19) {
			i = 0;
			name = "Goodbye, ";
			again_greet_warn_print:
			if (!!name[i] || !!msg[i]) {
				msg[i] = name[i]; i++;
				goto again_greet_warn_print;
			}
			name = NULL;
		}
	}
	if (!name) name = "World";
	msglen0 = 0;
	greet_try_find:
	i = 0;
	if (!msg[i]) { goto end_greet_try_sped; }
	i++;
	if (!msg[i]) { goto end_greet_try_sped; }
	again_greet_try_sped:
	if (!!msg[i]) { i = i << 1; goto again_greet_try_sped; }
	i = i >> 1;
	end_greet_try_sped:
	again_greet_almost_find:
	if (!!msg[i]) {
		msglen0 = i; i++;
		goto again_greet_almost_find;
	}
	msglen0++;
	if (findagain > 0) { name = "!"; }
	i = 0;
	again_greet_try_join:
	if (!!name[i]) {
		msg[msglen0 + i] = name[i]; i++;
		goto again_greet_try_join;
	}
	findagain++;
	if (findagain < 2) { goto greet_try_find; }
	i = 0;
	again_greet_try_print:
	if (!!msg[i]) {
		putchar(msg[i]);
		i++;
		goto again_greet_try_print;
	}
	putchar('\n');
	name = NULL;
}

int main() {
	greet("Quarequin");
	greet(NULL);
	greet("Solar System");
	return 0;
}
