#include <unistd.h>
int main(void)
{

  printf("bash address: 0x%lx\n", getenv("SHELL"));
 return 0;
}
