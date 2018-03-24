#define numkey 49
#define numcyc 24
FILE *fpr;
FILE *fpw;
FILE *fpcs;
int ch=0,cmp=0,inof=0;
char title[30];//
char take[600];//
char prog[500];   //
char *site,note[]="*/";
int a=1,c=0,d=0,   i=0,    e=0,len,lenprog;
char *keyword[numkey]={"asm","auto","char","bool","catch","class","delete","const","cdecl","double","enum","extern","float","far","huge","near","interrupt","int","long","pascal","register","short","signed","static","signed","struct","typedef","union","unsigned","void","volatile","sprintf","puts","gets","scanf","printf","fputs","fputc","fgets","fgetc","memset","strlen","sizeof","strstr","fclose","FILE","malloc","fopen","system"};
char *cycword[numcyc]={"if","else","do","while","for","break","continue","default","goto","case","switch","#define","#error","#include","#elif","#if","#else","#endif","#ifdef","#ifndef","#undef","#line","#pragma","return"};
char *mai[1]={"main"};
//
char htmlformat[]="<!DOCTYPE html><html lang='en'><head><meta charset='ANSI'><meta name='author' content='2015551509'><title>Syntax highlighting </title><link rel='stylesheet' type='text/css' href='./style.css'></head><body><pre><h class='key'>Source Code</h><br><br>";  //html
char css[]="*{color: white;background-color: #272822;font-size: 20px;font-family: 'Î¢ÈíÑÅºÚ';}.kuo{color: white;}.cyc{color: #f92672;}.str{color: #e6db74;}.fun{color: #a6e22e;}.key{color: #66d9ef;}.form{color: #ae81ff;}.not{color: #75715e;}";       //css
char last[]="</pre></body></html>";   //html
char lt[]="&lt",gt[]="&gt",cyc[]="<h class='cyc'>",str[]="<h class='str'>",fun[]="<h class='fun'>",key[]="<h class='key'>",form[]="<h class='form'>",fin[]="</h>",kuohead[]="<h class='kuo'>",noti[]="<h class='not'>";
