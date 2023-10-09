#include <stdio.h>
#include <unistd.h>
#include <sys/type.h>

int main()
{
pid_t parent_id;
parent_id = getppid();
printf("%u\n", parent_id);
return (0);
}
    
