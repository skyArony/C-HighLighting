#include <stdio.h>
#include <string.h>
#include <math.h>
main()
{
    int n,k=1;
    scanf("%d",&n);
    while(k<=n)
    {
        char x[50],y[50];
        int a,b,i,j,xlen,ylen,f=0,h=0;
        double m=0.0,n=0.0,z;
        scanf("%s %d %s %d",&x,&a,&y,&b);
        xlen=strlen(x);
        ylen=strlen(y);
        if(x[0]==45)
        {   f=0;
        for(int t=0;t<xlen;t++)
           {x[t]=x[t+1];}
            xlen--;
            f++;
        }
        if(y[0]==45)
        {
            h=0;
            for(int t=0;t<ylen;t++)
           {y[t]=y[t+1];}
            ylen--;
            h++;
        }
        for(i=0;i<xlen;i++)
        {
            if(x[i]>=48&&x[i]<=57)
            {
                x[i]=x[i]-48;
            }
            else if(x[i]>=65&&x[i]<=90)
            {
                x[i]=x[i]-55;
            }
            else if(x[i]>=97&&x[i]<=122)
            {
                x[i]=x[i]-61;
            }
            m=m+x[i]*pow(a,xlen-i-1);
        }

        for(i=0;i<ylen;i++)
        {
            if(y[i]>=48&&y[i]<=57)
            {
                y[i]=y[i]-48;
            }
            else if(y[i]>=65&&y[i]<=90)
            {
                y[i]=y[i]-55;
            }
            else if(y[i]>=97&&y[i]<=122)
            {
                y[i]=y[i]-61;
            }
            n=n+y[i]*pow(b,ylen-i-1);
        }
        if(h==0&&f==0)
        {
            z=m+n;
        }
        else if(h==0&&f!=0)
        {
            z=-m+n;
        }
        else if(h!=0&&f==0)
        {
            z=m-n;
        }
        else if(h!=0,f!=0)
        {
            z=-m-n;
        }
        printf("%.0lf\n",z);
        k++;
    }
}
