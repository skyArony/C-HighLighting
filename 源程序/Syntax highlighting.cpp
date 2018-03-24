#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global var.h"
#include "openfile.h"

int main()
{
    again:printf("请输入所需打开的cpp的文件路径及名字:");
    gets(title);
    fpw=openw();
    fpcs=opencss();
    fpr=openr(title);
    fputs(htmlformat,fpw);
    fputs(css,fpcs);
    memset(prog,'\0',sizeof(prog));
    while(!feof(fpr))
    {
    	memset(take,' ',sizeof(take));
        fgets(take,501,fpr);  //读取cpp的一行
        len=strlen(take);
        if(len==1||len==0)    //单个字符或无字符直接输入.html
        {
        	fputs(take,fpw);
         	continue;         //然后读入下一行
        }
        if(len>=502)
        {
        	continue;       //解决最后一行异常的问题
        }
        for(i=0;i<=len-1;i++)
        {
            if(c==2)      //解析注释内的内容
            {
                site=strstr(take,note);
                if(site==NULL)
                {
                	fputs(take,fpw);
                    break;
                }
                else
                {
                    while(!(take[i]=='*'&&take[i+1]=='/'))
                	{
                		if(take[i]=='\n')
                		{
	                		fputc('\n',fpw);
	                		break;
	                	}
                		fputc(take[i],fpw);
                		i++;
                	}
                	fputs(note,fpw);
                	fputs(fin,fpw);
                	fputc('\n',fpw);
                	c=0;
                	break;
                }
            }
            if(take[i]=='/'&&take[i+1]=='/'&&a&&c==0)     //单行注释开始，标记c=2
            {
                c=2;
                fputs(noti,fpw);
                while(take[i]!='\n')
                {
                	fputc(take[i],fpw);
                	i++;
                }
                fputs(fin,fpw);
                fputc('\n',fpw);
                i=0,c=0;
                break;
            }
            if(take[i]=='/'&&take[i+1]=='*'&&a&&c==0)     //多行注释开始
            {
                c=2;
                fputs(noti,fpw);
                while(!(take[i]=='*'&&take[i+1]=='/'))
                {
                	if(take[i]=='\n')
                	{
	                	fputc('\n',fpw);
	                	goto ko;
	                }
                	fputc(take[i],fpw);
                	i++;
                }
                fputs(note,fpw);
                fputs(fin,fpw);
                fputc('\n',fpw);
                c=0;
                break;
            }
            if(c==0)      //非注释内容的解析
            {
                if(take[i]==' '||take[i]==','||take[i]==';'||take[i]=='('||take[i]=='\n'||take[i]=='\''||take[i]=='\"'||(take[i]>=48&&take[i]<=57)||take[i]=='\t'||take[i]=='='||take[i]=='+'||take[i]=='-'||take[i]=='*'||take[i]=='/'||take[i]=='?'||take[i]==':'||take[i]=='!')
                {
                	if(ch==0&&take[i]=='\"')    //为双引号内的内容打上html标签
                	{
	                	prog[ch]=take[i];
                 		ch++;
                  		i++;
                    	while(take[i]!='\"')
                    	{
                    		prog[ch]=take[i];
                 			ch++;
                  			i++;
                    	}
                    	prog[ch]=take[i];
               			ch++;
               			i++;
               			ch++;
	                }
	                if(ch==0&&take[i]=='\'')      //为单引号内的内容打上html标签
                	{
	                	prog[ch]=take[i];
                 		ch++;
                  		i++;
                    	while(take[i]!='\'')
                    	{
                    		prog[ch]=take[i];
                 			ch++;
                  			i++;
                    	}
                    	prog[ch]=take[i];
               			ch++;
               			i++;
               			ch++;
	                }
	                if(ch==0&&(take[i]>=48&&take[i]<=57))   //为数字打上标签
                	{
	                	while(take[i]>=48&&take[i]<=57)
                    	{
                    		prog[ch]=take[i];
                 			ch++;
                  			i++;
                    	}
	                }
                    else if(ch==0)
                    {
                        fputc(take[i],fpw);
                        continue;
                    }
                    prog[ch]='\0';
                    //特殊字符处理
               abc: if(ch>0)
                    {
                    	lenprog=strlen(prog);
                    	if(prog[0]=='\"'&&prog[lenprog-1]=='\"')
                    	{
	                    	fputs(str,fpw);
                            fputs(prog,fpw);
                            fputs(fin,fpw);
                            ch=0;
                            memset(prog,'\0',sizeof(prog));
	                    }
	                    if(prog[0]=='\''&&prog[lenprog-1]=='\'')
                    	{
	                    	fputs(str,fpw);
                            fputs(prog,fpw);
                            fputs(fin,fpw);
                            ch=0;
                            memset(prog,'\0',sizeof(prog));
	                    }
	                    if(prog[0]>=48&&prog[0]<=57)
                    	{
	                    	fputs(form,fpw);
                            fputs(prog,fpw);
                            fputs(fin,fpw);
                            ch=0;
                            memset(prog,'\0',sizeof(prog));
	                    }
                        if(prog[0]==40)
                        {
                            fputs(kuohead,fpw);
                            fputs(prog,fpw);
                            fputs(fin,fpw);
                            ch=0;
                            memset(prog,'\0',sizeof(prog));
                        }
                        if(prog[0]==38&&e==1)
                        {
                        	fputs(str,fpw);
                            fputs(prog,fpw);
                            fputs(fin,fpw);
                            ch=0,e=0;
                            memset(prog,'\0',sizeof(prog));
                        }
                        int cmp=0;
                        for(cmp=0;cmp<numkey;cmp++)
                        {
                            if(strcmp(prog,keyword[cmp])==0)
                            {
                                fputs(key,fpw);
                                fputs(prog,fpw);
                                fputs(fin,fpw);
                                ch=0;
                                memset(prog,'\0',sizeof(prog));
                                break;
                            }

                        }
                        for(cmp=0;cmp<numcyc;cmp++)
                        {
                            if(strcmp(prog,cycword[cmp])==0)
                            {
                                fputs(cyc,fpw);
                                fputs(prog,fpw);
                                fputs(fin,fpw);
                                ch=0;
                                memset(prog,'\0',sizeof(prog));
                                break;
                            }

                        }
                        for(cmp=0;cmp<=0;cmp++)
                        {
                            if(strcmp(prog,mai[cmp])==0)
                            {
                                fputs(fun,fpw);
                                fputs(prog,fpw);
                                fputs(fin,fpw);
                                ch=0;
                                memset(prog,'\0',sizeof(prog));
                                break;
                            }
                        }
						fputs(prog,fpw);
                        ch=0;
                        memset(prog,'\0',sizeof(prog));
                        if(take[i]=='\"')
                        {
                        	prog[ch]=take[i];
                 			ch++;
                  			i++;
                    		while(take[i]!='\"')
                    		{
                    			prog[ch]=take[i];
                 				ch++;
                  				i++;
                    		}
                   			prog[ch]=take[i];
 							ch++;
               				i++;
               				ch++;
					        goto abc;
                   		}
                   		if(take[i]=='\'')
                        {
                        	prog[ch]=take[i];
                 			ch++;
                  			i++;
                    		while(take[i]!='\'')
                    		{
                    			prog[ch]=take[i];
                 				ch++;
                  				i++;
                    		}
                   			prog[ch]=take[i];
 							ch++;
               				i++;
               				ch++;
					        goto abc;
                   		}
                   		if(take[i]>=48&&take[i]<=57)
                        {
                    		while(take[i]>=48&&take[i]<=57)
                    		{
                    			prog[ch]=take[i];
                 				ch++;
                  				i++;
                    		}
					        goto abc;
                   		}
                    }
                    if(take[i]!='('&&take[i]!='\''&&take[i]!='\"')
                    {
                    	fputc(take[i],fpw);
                    	continue;
                    }
           // 特殊字符处理
                }
                if(take[i]=='<'&&d==0&&take[0]=='#')
                {
                	d=1;
               		prog[ch]=38,prog[++ch]='l',prog[++ch]='t';
                	ch++;

                }
                if(take[i]=='>'&&d==1&&take[0]=='#')
                {
                	d=0;
                	prog[ch]='&',prog[++ch]='g',prog[++ch]='t';
                	ch++;
                	e=1;
                }
                if(take[i]==40)
                {
                    do
                    {
                        prog[ch]=take[i];
                        ch++;
                        i++;
                    }
                    while(take[i]!=41);
                }
                if(take[i]!=' '&&take[i]!=','&&take[i]!=';'&&take[i]!='<'&&take[i]!='>')
                {
                    prog[ch]=take[i];
                    ch++;
                }
            }
            kk: ;
        }
        ko: ;
    }
    fputs(last,fpw);
    fclose(fpw);
    fclose(fpcs);
    fclose(fpr);
    printf("\n再来一发？\n确认请按“1”，结束请按“0”：");
    int end;
    scanf("%d",&end);
    if(end==0)
    {
        return 0;
    }
    else if(end==1)
    {
        system("cls");
        getchar();
        goto again;
    }
    else
    {
        printf("输入错误，请重新输入:");
    }
    return 0;
}

//在C-Free5.0上完美运行成功
