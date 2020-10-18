#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Hcamal");

static int my_init(void) {
	return 0;
}

static void my_exit(void) {
	return;
}

module_init(my_init);
module_exit(my_exit);