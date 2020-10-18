#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int rickroll_init(void)
{
	printk(KERN_INFO "Rickroll kernel module has been started");
	return 0;
}

static void rickroll_exit(void)
{
	printk(KERN_INFO "Rickroll kernel module has been cleared");
	return;
}

module_init(rickroll_init);
module_exit(rickroll_exit);