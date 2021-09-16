#include <stdio.h>
#include <string.h>
#define MAX 30

//void test1(int arr[])
//{
//    printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//    printf("%d\n", sizeof(ch));
//}
//
//int main()
//
//{
//    int arr[10] = {0};
//    char ch[10] = {0};
//    printf("%d\n",sizeof(arr));
//    printf("%d\n", sizeof(ch));
//    test1(arr);
//    test2(ch);
//    return 0;
//}


//int main()
//{
//    int num = 0;
//    int count = 0;
//    scanf("%d",&num);
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if(1 == ((num >> i) & 1))
//            count++;
//    }

//    while (num)
//    {
//        if(num % 2 == 1)
//            count++;
//        num = num / 2;
//    }

//int main()
//{
//    int i = 0,a = 1,b = 2,c = 3,d = 4;
//    i = a++ && ++b && d++;
//    printf("a = %d\n b = %d\n c = %d\n d = %d\n",a,b,c,d);
//    return 0;
//}

//  struct stu
//        {
//    char name[20];
//    int age;
//    char id[20];
//        };
//
//
//
//int main()
//{
//    int a = 10;
//    struct stu s1 = {"张三",20,"223123123123"};
//    struct stu* ps = &s1;
//    printf("%s\n",ps->name);
//    printf("%d",(*ps).id);
//    printf("%s\n",s1.name);
//    printf("%d\n",s1.age);
//    printf("%s\n",s1.id);
//
//    return 0;
//}

//int my_strlen(char* arr)
//{
//    char* start = arr;
//    char* end = arr;
//    while (*end != '\0')
//    {
//        end++;
//    }
//    return end - start;
//
//}
//
//int main()
//{
//    char arr[]= "asdasgasgaga";
//    int len = my_strlen(arr);
//    printf("%d\n",len);
//    return 0;
//}


//int main()
//{
//    int arr[10] = {0};
//    int  a = 10;
//    int* pa = &a;
//    int** ppa = &pa;        //二级指针
//    int*** pppa = &ppa;
//    ***pppa = 20;
//
//    printf("%d\n", );
//
//    return 0;
//}

//int main()
//{
//    int a,b,c;
//    a = 10;
//    b = 20;
//    c = 30;
//    int* arr[] = {&a,&b,&c};
//    int i = 0;
//    for (i = 0;i < 3;i++)
//    {
//        printf("%p \n",*(arr[i]));
//    }
//    return 0;
//}

//int main()
//{
//    int arr1[] = {1,3,5,7,9};
//    int arr2[] = {2,4,6,8,0};
//    int tmp = 0;
//    int i = 0;
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    for (i = 0; i < sz; i++)
//    {
//        tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//}

//int main()
//{
//    int arr[] = {1,2,3,4,5};
//    short *p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 5;
//    }
//    for (i = 0;i < 5; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;SSS
//}

//int count_bit_one(int a)
//{
//    int count = 0;
//    int i = 0;
//    for (i = 0;i< 32;i++)
//    {
//        if(((a >> i) & 1) == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//
//
//
//int main()
//{
//    int a = 0;
//    scanf("%d",&a);
//    int count = count_bit_one(a);
//    printf("%d",count);
//
//
//    return 0;
//}
//int count_bit_one(int n)
//{
//    int count = 0;
//    while(n)
//    {
//        n = n&(n-1);
//        count++;
//    }
//    return count;
//}
//
//
//
//int main()
//{
//    int a = 0;
//        scanf("%d",&a);
//        int count = count_bit_one(a);
//        printf("%d",count);
//
//
//        return 0;
//
//}

typedef struct stu
        {
    char name[20];
    short age;
    char numbuder[12];
    char sex[5];

        }add;

int main()
{
    add s = {"Frank",24,"8888888"};
    add* ap = &s;

    printf("%d",ap->age);
    return 0;
}




git branch --set-upstream dev origin/dev

















