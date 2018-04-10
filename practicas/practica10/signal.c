#include <stdio.h>
#include <signal.h>

void receivesSignal(int sig)
{
	printf("Hola mundo\n");
	printf("Recibi señal\n");
}

int main(int argc, char const *argv[])
{
	signal(SIGUSR1,receivesSignal);
	while(1)
	{
		
	}
	return 0;
}