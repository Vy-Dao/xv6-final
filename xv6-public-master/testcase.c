#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
    for(int i =0; i < 5; i++){
      hello ("CSIS 430's Xv6 Lab Session");
      hello ("Calling hello() with an argument\n");
    }
    exit();
}
