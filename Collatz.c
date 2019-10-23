#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
//Deniz FIRAT 1611012074 1.ogretim b subesi
int main()
{
	int n=0;
	int a=0;
	pid_t pid;

		do
		{
			printf("Pozitif bir sayi giriniz.\n"); 
  			scanf("%d", &a);	
		}while (a <= 0);

		pid = fork();

		if (pid == 0)
		{
			printf("Cocuk gorev calisiyor.\n");
			printf("%d\n",a);
			while (a!=1)
			{
				if (a%2 == 0)
				{
					a = a/2;
				}
				else if (a%2 == 1)
				{
					a = 3 * (a) + 1;
				}	
			
				printf("%d\n",a);
			}
		
			printf("Cocuk gorev tamamlandi.\n");
		}
		else
		{
			printf("Ana gorev cocuk gorevi bekliyor...\n");
			wait();
			printf("Ana gorev tamamlandi.\n");
		}
	return 0; 
}
