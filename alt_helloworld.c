// A Hello World program with arguments on cli
// typer ./alt_helloworld <yourname> to run programs
#include <stdio.h>

int main (int argc, char* argv[])
{
    printf("Hello %s. Have a awesome day!\n",argv[1]);
    return 0;
}
