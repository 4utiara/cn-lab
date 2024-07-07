#include<stdio.h>
void main(){
    int bucket=0,n,out,in,bsize;
    printf("enter the bucket size");
    scanf("%d",&bsize);
     printf("enter the packet");
    scanf("%d",&n);
   
     printf("enter the out size");
    scanf("%d",&out);

    while(n!=0){
       printf("enter the in size");
    scanf("%d",&in);
    if(in<=(bsize-bucket))//bucket is for bucket status
    {
        bucket+=in;
        printf("bucket status is %d out of%d",bucket ,bsize);

    }
    else
    {
     printf("dropped packets:%d\n",in-(bsize-bucket));
         printf("bucket status is %d out of%d",bucket ,bsize);
bucket=bsize;
    }
    bucket=bucket-out;
        printf("bucket status after outgoing is %d out of%d",bucket ,bsize);
    n--;
    }


}
