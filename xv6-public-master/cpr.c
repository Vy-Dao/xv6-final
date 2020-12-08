#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char const *argv[])
{
    int priority, pid;

    if (argc < 3)
    {
        printf(2, "Usage pid priority\n");
        exit();
    }

    pid = atoi (argv[1]);
    priority = atoi(argv[2]);

    if (priority < 0 || priority > 50){
        printf(2, "Invalid priroity (0-50");
        exit();
    }
    
    printf(1, " pid=%d, pr=%d\n",pid,priority);
    chpr(pid, priority);
    exit();
}
