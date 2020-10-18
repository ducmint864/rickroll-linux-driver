#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Hcamal");

int hello_init(void) {
	printk(KERN_INFO "Hello World Linux kernel");
	return 0;
}

int hello_exit(void) {
	printk(KERN_INFO "Goodbye World Linux Kernel");
}

module_init(hello_init);
module_exit(hello_exit);