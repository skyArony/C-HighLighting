
FILE *openr(char tit[])
{
        FILE *fprin = (FILE *) malloc (sizeof(FILE)*10);//��̬�����ڴ�//p������ָ����һ��Ϸ��ڴ�ĵ�ַ
        fprin=fopen(tit,"r");    //�򿪴����ļ��������ļ���ȡָ��fpr
        if(fprin==NULL)
        {
            printf("\n�޷����ļ�,��Ϊ�ļ�������,�����ļ�\n");
            system ("pause");
            exit(0);
        }
        printf("\n��򿪸�Ŀ¼����ҳ�ļ��鿴��������\n");
        return fprin;
}
FILE *openw(void)
{
        FILE *fpwin = (FILE *) malloc (sizeof(FILE)*10);//��̬�����ڴ�//p������ָ����һ��Ϸ��ڴ�ĵ�ַ
        fpwin=fopen("./Source Code.html","w");     //����д��ָ��fpwin��д��html�ļ����������򴴽�
        return fpwin;
}
FILE *opencss(void)
{
        FILE *fpcss = (FILE *) malloc (sizeof(FILE)*10);//��̬�����ڴ�//p������ָ����һ��Ϸ��ڴ�ĵ�ַ
        fpcss=fopen("./style.css","w");     //����д��ָ��fpcss��д��css�ļ����������򴴽�
        return fpcss;
}
