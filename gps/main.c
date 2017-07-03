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
    
    char num1[63];
    char num2[70];
    char date[7];
    char time[7];
    char eastlongitude[10];
    char northlat[9];
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
                fscanf(fp1,"%s%s",num1,num2);
                printf("%s\n%s\n",num1,num2);
                for(i=0; i<2; i++)
                date[i]=num1[i+55];
                date[2]='\0';
                fprintf(fp2,"20%s年",date);
                
                for(i=0; i<2; i++)
                date[i]=num1[i+51];
                date[2]='\0';
                fprintf(fp2,"%s月",date);
                
                for(i=0; i<2; i++)
                    date[i]=num1[i+53];
                date[2]='\0';
                fprintf(fp2,"%s日,",date);
            }
            {
                
                for(i=0; i<2; i++)
                time[i]=num1[i+7];
                math1=10*(time[0]-'0');
                math2=1*(time[1]-'0');
                math=math1+math2+8;
                fprintf(fp2,"%d小时",math);
                
                for(i=0; i<2; i++)
                time[i]=num1[i+9];
                math1=10*(time[0]-'0');
                math2=1*(time[1]-'0');
                math=math1+math2;
                time[2]='\0';
                fprintf(fp2,"%d分",math);
                
                for(i=0; i<2;i++)
                time[i]=num1[i+11];
                math1=10*(time[0]-'0');
                math2=1*(time[1]-'0');
                math=math1+math2;
                time[2]='\0';
                fprintf(fp2,"%d秒, ",math);
            }
            
            for(i=0; i<2; i++)
            northlat[i]=num1[i+16];
            northlat[2]='\0';
            fprintf(fp2,"%s.",northlat);
            for(i=0; i<6; i++)
            northlat[i]=num1[i+18];
            northlat[6]='\0';
            fprintf(fp2,"%s, ",northlat);
            
            
            for(i=0; i<3; i++)
            eastlongitude[i]=num1[i+27];
            eastlongitude[3]='\0';
            fprintf(fp2,"%s.",eastlongitude);
            for(i=0; i<9; i++)
            eastlongitude[i]=num1[i+30];
            eastlongitude[6]='\0';
            fprintf(fp2,"%s, ",eastlongitude);
            
            
            for(i=0; i<4; i++)
            high[i]=num1[i+43];
            high[4]='\0';
            fprintf(fp2,"%sm\n",high);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
