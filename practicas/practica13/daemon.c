#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
    int pid;

    pid = fork();
    if(pid == 0)
    {
        pid == fork();

        if(pid == 0) 
        {
            fclose(stdin);
            fclose(stdout);
            fclose(stderr);

            umask(0);
            chdir("/tmp");
            while(1)
            {

            }
        }
        wait();
    }

    return 0;
}