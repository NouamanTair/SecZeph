#include <zephyr/kernel.h>

int main(void)
{
  printk("Hello World from the \"%s\" board\r\n", CONFIG_BOARD);

  return 0;
}
