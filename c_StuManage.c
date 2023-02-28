#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stud_n 30
#define course_n 6
void ReadScore(int score[stud_n][course_n],long num[],int n,int m,char name[stud_n][20])
{
    int i,j;
    printf("Input student's ID ,name and score:\n");
    for(i=0;i<n;i++)
    {
        scanf("%ld",&num[i]);
        scanf("%s",name[i]);
        for(j=0;j<m;j++)
        {
            scanf("%d",&score[i][j]);
        }
    }
}
void AverforCourse(int score[][course_n],int sum[],float aver[],int n,int m)
{
    int i,j;
    for(j=0;j<m;j++)
    {
        sum[j]=0;
        for(i=0;i<n;i++)
        {
            sum[j]=sum[j]+score[i][j];
        }
        aver[j]=(float)sum[j]/n;
    }
}
void AverforStud(int score[][course_n],int sum[],float aver[],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        sum[i]=0;
        for(j=0;j<m;j++)
        {
            sum[i]=sum[i]+score[i][j];
        }
        aver[i]=(float)sum[i]/m;
    }
}
void Descending(char name[stud_n][20],int sum[],int n,int score[][course_n],int m,long num[])
{
    int i,j,h;
    char t2[20];
    int t1[m];
    long int t;
    for(i=0;i<n;i++)
    {
        sum[i]=0;
        for(j=0;j<m;j++)
        {
            sum[i]=sum[i]+score[i][j];
        }
    }
    for(i=0;i<n-1;i++)
    {
         for(j=i+1;j<n;j++)
         {
            if(sum[j]>sum[i])
            {
                strcpy(t2,name[j]);
                strcpy(name[j],name[i]);
                strcpy(name[i],t2);
                t=num[j];
                num[j]=num[i];
                num[i]=t;
                for(h=0; h<m; h++)
                {
                    t1[h]=score[j][h];
                }
                for(h=0; h<m; h++)
                {
                    score[j][h]=score[i][h];
                }
                for(h=0; h<m; h++)
                {
                    score[i][h]=t1[h];
                }
             }
         }

    }
    for(i=0;i<n;i++)
    {
        printf("%ld",num[i]);
        printf("%s",name[i]);
        for(j=0;j<m;j++)
        {
            printf("%d ",score[i][j]);
        }
        printf("\n");
    }
}
void Ascending(char name[stud_n][20],int sum[],int n,int score[][course_n],int m,long num[])
{
    int i,j,h;
    char t2[20];
    int t1[m];
    long int t;
    for(i=0;i<n;i++)
    {
        sum[i]=0;
        for(j=0;j<m;j++)
        {
            sum[i]=sum[i]+score[i][j];
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(sum[i]>sum[j])
            {
                strcpy(t2,name[j]);
                strcpy(name[j],name[i]);
                strcpy(name[i],t2);
                t=num[j];
                num[j]=num[i];
                num[i]=t;
                for(h=0; h<m; h++)
                {
                    t1[h]=score[j][h];
                }
                for(h=0; h<m; h++)
                {
                    score[j][h]=score[i][h];
                }
                for(h=0; h<m; h++)
                {
                    score[i][h]=t1[h];
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%ld",num[i]);
        printf("%s",name[i]);
        for(j=0;j<m;j++)
        {
            printf("%d ",score[i][j]);
        }
        printf("\n");
    }
}
void Ascendingnum(long num[],int score[][course_n],int n,int m,char name[stud_n][20])
{
    int i,j,h,t;
    int t1[m];
    char t2[20];
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(num[i]>num[j])

            {
                strcpy(t2,name[j]);
                strcpy(name[j],name[i]);
                strcpy(name[i],t2);
                t=num[j];
                num[j]=num[i];
                num[i]=t;
                for(h=0; h<m; h++)
                {
                    t1[h]=score[j][h];
                }
                for(h=0; h<m; h++)
                {
                    score[j][h]=score[i][h];
                }
                for(h=0; h<m; h++)
                {
                    score[i][h]=t1[h];
                }
            }
        }
    }
    printf("ascendingnumber:");
    for(int i=0;i<n;i++)
    {
        printf("\n");
        printf("%ld",num[i]);
        printf("%s",name[i]);
        for(int j=0;j<m;j++)
        {
            printf("%d ",score[i][j]);
        }
    }
    printf("\n");
}
void dictionaryname(char name[stud_n][20],int n,int score[][course_n],int m,long num[])
{
    int i,j,h,t;
    int t1[m];
    char t2[20];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[j],name[i])<0)
            {
                strcpy(t2,name[j]);
                strcpy(name[j],name[i]);
                strcpy(name[i],t2);
                t=num[j];
                num[j]=num[i];
                num[i]=t;
                for(h=0; h<m; h++)
                {
                    t1[h]=score[j][h];
                }
                for(h=0; h<m; h++)
                {
                    score[j][h]=score[i][h];
                }
                for(h=0; h<m; h++)
                {
                    score[i][h]=t1[h];
                }
            }
        }
    }
    printf("dictionaryname:");
    for(int i=0; i<n; i++)
    {
        printf("\n");
        printf("%ld",num[i]);
        printf("%s",name[i]);
        for(int j=0; j<m; j++)
        {
            printf("%d ",score[i][j]);
        }
    }
    printf("\n");
}
int Linsearch(long num[],long a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(num[i]==a)
            return i;
    }
    return -1;
}
int Namesearch(char name[stud_n][20],char s[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(s,name[i])==0)
            return i;
    }
    return -1;
}
void cate(int score[][course_n],int m,int n)
{
    int A,B,C,D,E;
    int i,j;
    for(i=0;i<m;i++)
    {
        A=0;
        B=0;
        C=0;
        D=0;
        E=0;
        for(j=0;j<n;j++)
        {
            if(score[j][i]>=90)
                A=A+1;
            else if(score[j][i]>=80)
                B=B+1;
            else if(score[j][i]>=70)
                C=C+1;
            else if(score[j][i]>=60)
                D=D+1;
            else
                E=E+1;
        }
        printf("�ȼ������� ���� �е� ���� ������\n");
        printf("%d %d %d %d %d\n",A,B,C,D,E);
        printf("%f %f %f %f %f\n",A*1.0/n,B*1.0/n,C*1.0/n,D*1.0/n,E*1.0/n);
    }
}
void print(long num[],char name[stud_n][20],int score[][course_n],int sumc[],float averc[],int n,int m)
{
    int i,j;
    for(j=0;j<m;j++)
    {
        sumc[j]=0;
        for(i=0;i<n;i++)
        {
            sumc[j]=sumc[j]+score[i][j];
        }
        averc[j]=(float)sumc[j]/n;
    }
    for(i=0;i<n;i++)
    {
        printf("%ld",num[i]);
        printf("%s",name[i]);
        for(j=0;j<m;j++)
        {
            printf("%d ",score[i][j]);
        }
        printf("\n");
    }
    printf("SumofCourse");
    for(j=0;j<m;j++)
    {
        printf("%d ",sumc[j]);
    }
    printf("AverofCourse");
    for(j=0;j<m;j++)
    {
        printf("%f ",averc[j]);
    }
    printf("\n");
}
void writetofile(long num[],char name[stud_n][20],int score[][course_n],int n,int m)
{
    FILE *fp;
    int i,j;
    if((fp=fopen("score.txt","w"))==NULL)
    {
        printf("Failure to open score.txt!\n");
        exit(0);
    }
    fprintf(fp,"%d\t%d\n",n,m);
    for(i=0;i<n;i++)
    {
        fprintf(fp,"%ld %s",num[i],name[i]);
        for(j=0;j<m;j++)
        {
            fprintf(fp,"%d ",score[i][j]);
        }
    }
    fclose(fp);
}
int main()
{
    printf("1.Input record\n");/*¼��ÿ��ѧ��ѧ�š����������Ƴɼ�*/
    printf("2.Caculate total and average score of every course\n");/*����ÿ�ſγ̵��ֺܷ�ƽ����*/
    printf("3.Caculate total and average score of every student\n");/*����ÿ��ѧ�����ֺܷ�ƽ����*/
    printf("4.Sort in descending order by total score of every student\n");/*��ÿ��ѧ�����ִܷӸߵ����ų����α�*/
    printf("5.Sort in ascending order by total score of every student\n");/*��ÿ��ѧ�����ִܷӵ͵����ų����α�*/
    printf("6.Sort in ascending order by number\n");/*��ѧ�Ŵ�С�����ų��ɼ���*/
    printf("7.Sort in dictionary order by name\n");/*���������ֵ�˳���ų��ɼ���*/
    printf("8.Search by number\n");/*��ѧ�Ų�ѯѧ�����������Գɼ�*/
    printf("9.Search by name\n");/*��������ѯѧ�����������Գɼ�*/
    printf("10.Statistic analysis for every course\n");/*������90-100������80-89���е�70-79������60-69��������0-59����ÿ��ѧ��ͳ��ÿ����������Ͱٷֱ�*/
    printf("11.List record\n");/*���ÿ��ѧ����ѧ�š����������ƿ��Գɼ���ÿ�ſγ̵��ֺܷ�ƽ����*/
    printf("12.Write to a file\n");/*��ÿ��ѧ���ļ�¼��Ϣд���ļ�*/
    printf("13.Read from a file\n");/*���ļ��ж���ÿ��ѧ���ļ�¼��Ϣ����ʾ*/
    printf("0.Exit\n");

    while(1)
    {
        int n,m,choise;
        long num[stud_n];
        char name[stud_n][20],s[20];
        int score[stud_n][course_n],sumc[course_n],sums[stud_n];
        float avers[stud_n],averc[course_n];
        int pos,pos2;
        long x;
        printf("\ninput the total number of the students:");
        scanf("%d",&n);
        printf("\ninput the total number of the subjects:");
        scanf("%d",&m);
        choise=0;
        printf("Please enter your choise:\n");
        scanf("%d",&choise);
        switch(choise)
        {
        case 1:
            ReadScore(score,num,n,m,name);/*����ѧ����Ϣ*/
            break;
        case 2:
            AverforCourse(score,sumc,averc,n,m);
            printf("                 ��ѧ      ����      Ӣ��      ��ѧ\n");
            printf("SumofCourse:");
            for(int i=0;i<m;i++)
            {
                printf("%8d ",sumc[i]);
            }
            printf("\n");
            printf("AverforCourse:");
            for(int j=0;j<m;j++)
            {
                printf("%f ",averc[j]);
            }
            break;
        case 3:
            AverforStud(score,sums,avers,n,m);
            printf("SumofStudent:");
            for(int i=0;i<n;i++)
            {
                printf("%ld",num[i]);
                printf("%s",name[i]);
                printf("%d ",sums[i]);
            }
            printf("\n");
            printf("AverforStudent:");
            for(int j=0;j<n;j++)
            {
                printf("%ld",num[j]);
                printf("%s",name[j]);
                printf("%f ",avers[j]);
            }
            break;
        case 4:
            Descending(name,sums,n,score,m,num);
            break;
        case 5:
            Ascending(name,sums,n,score,m,num);
            break;
        case 6:
            Ascendingnum(num,score,n,m,name);
            break;
        case 7:
            dictionaryname(name,n,score,m,num);
            break;
        case 8:
            printf("Input the searching ID:");
            scanf("%ld",&x);
            pos=Linsearch(num,x,n);/*���ظ�ѧ�ŵ��Ǹ��±�*/
            if(pos!=-1)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d ",score[pos][j]);
                }
            }
            else
                printf("NOT FOUND!\n");
                break;
        case 9:
            printf("Input the searching NAME:");
            scanf("%s",s);
            pos2=Namesearch(name,s,n);/*���ظ����ֵ��±�*/
            if(pos2!=-1)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d ",score[pos2][j]);
                }
            }
            else
                printf("NOT FOUND!\n");
            break;
        case 10:
            cate(score,m,n);
            break;
        case 11:
            print(num,name,score,sumc,averc,n,m);
            break;
        case 12:
            writetofile(num,name,score,n,m);
            break;
        case 13:
            AverforCourse(score,sumc,averc,n,m);
            FILE *fp;
            char ch;
            if((fp=fopen("score.txt","rb"))==NULL)
            {
                printf("Failure to open score.txt!\n");
            }
            while((ch=fgetc(fp))!=EOF)
            {
                putchar(ch);
            }
            fclose(fp);
            break;
        case 0:
            exit(0);
            break;
        }
    }
    return 0;
}
