#include <stdio.h>
#include <string.h>
main()
{
    int n,k=1,a,b,exchange;
    scanf("%d",&n);
    while(k<=n)
    {
        int len=0;
        char no[100];
        scanf("%s",no);
        len=strlen(no);
        a=(len-2)/2;
        b=(len+1)/2;
        while(a>=0&&b<=len-1)
        {
            if((no[a]>=65&&no[a]<=90||no[a]>=97&&no[a]<=122)&&(no[b]>=65&&no[b]<=90||no[b]>=97&&no[b]<=122))
            {
                 if (no[a]>no[b])
                {
                    no[a]=no[a]-32;
                }
                if(no[a]<no[b])
                {
                    no[b]=no[b]-32;
                }
            }
            if(no[a]==no[b])
            {
                a--,b++;
            }
            else{printf("NO\n");
                goto kk;}
        }
       printf("YES\n");
       kk: k++;
    }
}
