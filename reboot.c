#include <unistd.h>
#include <sys/reboot.h>

int main () {
int i;

		sync();
		    setuid(0);
			  reboot(RB_AUTOBOOT);
			    return(0);
}

