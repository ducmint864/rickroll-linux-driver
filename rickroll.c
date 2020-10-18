#include <linux/inint.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int rickroll_init(void)
{
	printk(KER_LOG "Rickroll kernel module has been started");
	return 0;
}

static void rickroll_exit(void)
{
	printk(KERN_LOG "Rickroll kernel module has been cleared");
}

module_init(rickroll_init);
module_exit(rickroll_exit);