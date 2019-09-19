#define GPFCON (*(volatile unsigned long *)0x56000050)
#define GPFDAT (*(volatile unsigned long *)0x56000054)
int main()
{

        
        while(1){
        GPFCON = GPFCON & 0xFFFFFF3F;
        GPFCON = GPFCON | 0x00000040;
        GPFDAT = GPFDAT & 0xFFFFFFF7;
        for(int i=0;i<10000;i++){}
        GPFDAT = GPFDAT | 0x00000008;
        
        GPFCON = GPFCON & 0xFFFFFBFF;
        GPFCON = GPFCON | 0x00000100;
        GPFDAT = GPFDAT & 0xFFFFFFEF;
        for(int i=0;i<10000;i++){}
        GPFDAT = GPFDAT | 0x00000010;
        
        GPFCON = GPFCON & 0xFFFFF3FF;
        GPFCON = GPFCON | 0x00000400;
        GPFDAT = GPFDAT & 0xFFFFFFDF;
        for(int i=0;i<10000;i++){}
        GPFDAT = GPFDAT | 0x00000020;

        GPFCON = GPFCON & 0xFFFFBFFF;
        GPFCON = GPFCON | 0x00001000;
        GPFDAT = GPFDAT & 0xFFFFFFBF;
        for(int i=0;i<10000;i++){}
        GPFDAT = GPFDAT | 0x00000040;
        }
	return 0;
}
