// Write a program that calls `fork()` and then calls some form of `exec()`
// to run the program `/bin/ls`. Try a few variants of `exec()`, such as
// `execl()`, `execle()`, `execv()`, and others. Why do you think there
// are so many variants of the same basic call?

// I found this resource to better understand exec()
// https://stackoverflow.com/questions/5769734/what-are-the-different-versions-of-exec-used-for-in-c-and-c

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
    char *args[] = {"bin/ls", NULL};
    fork();
    execv(args[0], args);

    return 0;
}
