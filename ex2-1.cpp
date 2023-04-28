#include <iostream>
using namespace std;

int main()
{
    printf("characters: %c %c \n",'a' 65);
    printf("characters: %5c %5c \n",'a','b' );
    printf("decimals:%d %ld\n",1977,650000L);
    printf("preceding with blanks:%10d \n",1977);
    printf("preceding with zeros:%010d \n",1977);
    printf("some different radices:%d %x %o %#x %#o \n",100,100,100,100,100);
    
    return 0;
}
