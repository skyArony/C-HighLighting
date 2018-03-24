
FILE *openr(char tit[])
{
        FILE *fprin = (FILE *) malloc (sizeof(FILE)*10);//动态申请内存//p在这里指向了一块合法内存的地址
        fprin=fopen(tit,"r");    //打开代码文件，设置文件读取指针fpr
        if(fprin==NULL)
        {
            printf("\n无法打开文件,因为文件不存在,请检查文件\n");
            system ("pause");
            exit(0);
        }
        printf("\n请打开根目录下网页文件查看高亮代码\n");
        return fprin;
}
FILE *openw(void)
{
        FILE *fpwin = (FILE *) malloc (sizeof(FILE)*10);//动态申请内存//p在这里指向了一块合法内存的地址
        fpwin=fopen("./Source Code.html","w");     //设置写入指针fpwin，写入html文件，不存在则创建
        return fpwin;
}
FILE *opencss(void)
{
        FILE *fpcss = (FILE *) malloc (sizeof(FILE)*10);//动态申请内存//p在这里指向了一块合法内存的地址
        fpcss=fopen("./style.css","w");     //设置写入指针fpcss，写入css文件，不存在则创建
        return fpcss;
}
