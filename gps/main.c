//
//  main.c
//  gps
//
//  Created by 20161104586 on 17/6/26.
//  Copyright © 2017年 马德辉. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    
    char lat[9];
    char mat[63];
    char date[7];
    char num[70];
    char time[7];
    char longitude[10];
    char high[5];
    int i,math,math1,math2;
    FILE *fp1,*fp2;
    fp1=fopen("//Users//a20161104586//Desktop//gps//gps//GPS170510.log","r");
    fp2=fopen("//Users//a20161104586//Desktop//gps//gps.csv","w+");
    if(fp1==NULL)
        printf("打开文件错误");
    else
        fprintf(fp2,"日期 ,北京时间 , 北纬 ,东经  ,海拔\n");
    
    while(!feof(fp1))
    {
        {
            {
                fscanf(fp1,"%s%s",mat,num);
                printf("%s\n%s\n",mat,num);
                for(i=0; i<2; i++)
                date[i]=mat[i+55];
                date[2]='\0';
                fprintf(fp2,"20%s年",date);
                
                for(i=0; i<2; i++)
                date[i]=mat[i+51];
                date[2]='\0';
                fprintf(fp2,"%s月",date);
                
                for(i=0; i<2; i++)
                    date[i]=mat[i+53];
                date[2]='\0';
                fprintf(fp2,"%s日,",date);
            }
<<<<<<< Updated upstream
            else
                break;
    }
    for(i=j=0;j<2;j++,i++)
        hour[j]=ch[0][i];
    for(j=0;j<2;j++,i++)
        min[j]=ch[0][i];
    for(j=0;j<5;j++,i++)
        sec[j]=ch[0][i];
    for(i=j=0;j<2;j++,i++)
        date[j]=ch[8][i];
    for(j=0;j<2;j++,i++)
        month[j]=ch[8][i];
    for(j=0;j<2;j++,i++)
        year[j]=ch[8][i];
    for(i=j=0;j<2;i++,j++)
        wdu[j]=ch[2][i];
    for(j=0;j<8;j++,i++)
        wfen[j]=ch[2][i];
    for(i=j=0;j<2;j++,i++)
        jdu[j]=ch[4][i];
    for(j=0;j<8;i++,j++)
        jfen[j]=ch[4][i];
    for(i=j=0;j<8;i++,j++)
        nanbei[j]=ch[3][i];
    for(i=j=0;j<8;i++,j++)
        dongxi[j]=ch[5][i];
    if((int)(ch[1][0])=='A')
        strcpy(dingwei,"use");
    else if((int)(ch[1][0])=='V')
        strcpy(dingwei,"useless");
    for(i=j=0;j<8;i++,j++)
        suli[j]=ch[6][i];
    for(i=j=0;j<8;i++,j++)
        hangxiang[j]=ch[7][i];
    for(i=j=0;j<8;i++,j++)
        cipian[j]=ch[9][i];
    for(i=j=0;j<8;i++,j++)
        fangxiang[j]=ch[10][i];
    for(i=j=0;j<8;i++,j++)
        mode[j]=ch[11][i];
    fp1=fopen("//Users//a20161104586//Desktop//GPS//fp1.txt","a+");
    fprintf(fp1,"\n日期:%s-%s-%s\n时间:%s时%s分%s秒\n定位情况:%s\n纬度:%s %s度%s\n经度:%s %s度%s\n地面速率:%s\n地面航向%s\n磁偏角:%s\n磁偏角方向:%s\nmode模式:%s\n",year,month,date,hour,min,sec,dingwei,nanbei,wdu,wfen,dongxi,jdu,jfen,suli,hangxiang,cipian,fangxiang,mode);
    fclose(fp1);
    printf("\n日期:%s-%s-%s\n时间:%s时%s分%s秒\n定位情况:%s\n纬度:%s %s度%s\n经度:%s %s度%s\n地面速率:%s\n地面航向%s\n磁偏角:%s\n磁偏角方向:%s\nmode模式:%s\n",year,month,date,hour,min,sec,dingwei,nanbei,wdu,wfen,dongxi,jdu,jfen,suli,hangxiang,cipian,fangxiang,mode);
}

void GPGGA(int n)
{
    int i,j,k;
    char *p=GPSDATA;
    char ch[14][14];
    char chhour[5];              /*定义小时*/
    char chmin[5];               /*定义分钟*/
    char chsec[8];               /*定义秒钟*/
    char wdu[10],wfen[10];      /*定义纬度和分*/
    char jdu[10],jfen[10];      /*定义经度和分*/
    char dingwei[14];           /*质量因子 1=实时GPS,2=差分GPS*/
    char weixingsu[8];        /*可使用卫星数*/
    char suiping[8];           /*水平精度因子*/
    char tianxian[10];          /*天线高程*/
    char haiba[10];             /*大地椭球面相对海平面的高度*/
    char gpsage[8];            /*差分GPS年龄，实时GPS无*/
    char gpsnumber[8];         /*差分基准站号*/
    char dongxi[10],nanbei[10]; /*定义东西经度，南北纬*/
    for(k=0;k<14;k++)
    {
        for(n=n+1,j=0;n<500;n++)
        {
            if(GPSDATA[n]!=',')
=======
>>>>>>> Stashed changes
            {
                
                for(i=0; i<2; i++)
                time[i]=mat[i+7];
                math1=10*(time[0]-'0');
                math2=1*(time[1]-'0');
                math=math1+math2+8;
                fprintf(fp2,"%d小时",math);
                
                for(i=0; i<2; i++)
                time[i]=mat[i+9];
                math1=10*(time[0]-'0');
                math2=1*(time[1]-'0');
                math=math1+math2;
                time[2]='\0';
                fprintf(fp2,"%d分",math);
                
                for(i=0; i<2;i++)
                time[i]=mat[i+11];
                math1=10*(time[0]-'0');
                math2=1*(time[1]-'0');
                math=math1+math2;
                time[2]='\0';
                fprintf(fp2,"%d秒, ",math);
            }
            
            for(i=0; i<2; i++)
            lat[i]=mat[i+16];
            lat[2]='\0';
            fprintf(fp2,"%s.",lat);
            for(i=0; i<6; i++)
            lat[i]=mat[i+18];
            lat[6]='\0';
            fprintf(fp2,"%s, ",lat);
            
            
            for(i=0; i<3; i++)
            longitude[i]=mat[i+27];
            longitude[3]='\0';
            fprintf(fp2,"%s.",longitude);
            for(i=0; i<9; i++)
            longitude[i]=mat[i+30];
            longitude[6]='\0';
            fprintf(fp2,"%s, ",longitude);
            
            
            for(i=0; i<4; i++)
            high[i]=num[i+43];
            high[4]='\0';
            fprintf(fp2,"%sm\n",high);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
