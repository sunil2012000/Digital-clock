#include <stdio.h>

int main(int argc, char **argv)
{
	int h=0,m=0,s=0,i;
	printf("Set time in HH:MM:SS format : ");
	scanf("%d:%d:%d",&h,&m,&s);
	start:
	for( ; h<24 ; ++h )
	{
		for( ; m<60 ; ++m )
		{
			for( ; s<60 ; ++s)
			{
				system("cls");
				if( h<10 )
					printf("0%d:",h);
				else
					printf("%d:",h);
					
				if( m<10 )
					printf("0%d:",m);
				else
					printf("%d:",m);
					
				if( s<10 )
					printf("0%d ",s);
				else
					printf("%d ",s);
					
				if( h<12 )
					printf("AM\n");
				else
					printf("PM\n");
					
				for( i=0;i<800000000;i++);
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
	return 0;
}
