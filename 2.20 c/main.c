//
//  main.c
//  2.20 c
//
//  Created by 齐鹏宇 on 20/02/2025.
//

//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}



//函数指针(计算器)
//#include <stdio.h>
//
//void menu(void)
//{
//    printf("**********************\n");
//    printf("***1.add*****2.sub****\n");
//    printf("***3.mul*****4.div****\n");
//    printf("***0.exit*************\n");
//    printf("**********************\n");
//}
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//
//void cacul(int (*fun)(int, int))
//{
//    int result = 0;
//    int x = 0;
//    int y = 0;
//    printf("请输入两个数字>");
//    scanf("%d %d", &x, &y);
//    result = fun(x, y);
//    printf("结果是%d\n", result);
//}
//
//int main(void)
//{
//    int input = 0;
//    
//    do
//    {
//        
//        menu();
//        printf("请输入想要执行的运算>");
//        scanf("%d", &input);
//        switch (input) {
//            case 1:
//                cacul(Add);
//                break;
//            case 2:
//                cacul(Sub);
//                break;
//            case 3:
//                cacul(Mul);
//                break;
//            case 4:
//                cacul(Div);
//                break;
//            case 0:
//                printf("退出计算器");
//                break;
//            default:
//                printf("输入数字错误\n");
//                break;
//        }
//    }while(input);
//    return 0;
//}


//函数指针数组
//#include <stdio.h>
//
//void menu(void)
//{
//    printf("**********************\n");
//    printf("***1.add*****2.sub****\n");
//    printf("***3.mul*****4.div****\n");
//    printf("***0.exit*************\n");
//    printf("**********************\n");
//}
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//
//int main(void)
//{
//    int input = 0;
//    do {
//        menu();
//        printf("请输入想要执行的运算>");
//        scanf("%d", &input);
//        int x = 0;
//        int y = 0;
//        int result = 0;
//        
//        int (*funarr[5])(int, int) = {0, Add, Sub, Mul, Div};
//        if (input ==0) {
//            printf("退出计算器\n");
//        }else if (input >0 && input <= 4){
//            printf("请输入两个数字>");
//            scanf("%d %d", &x, &y);
//            result = funarr[input](x, y);
//            printf("结果是%d\n", result);
//        }else{
//            printf("输入错误\n");
//        }
//        
//    } while (input);
//
//    return 0;
//}


//冒泡算法
//#include <stdio.h>
//int bubble_sort(int arr[], int sz)
//{
//    int flag = 1;
//    for (int i = 0; i < sz - 1; i++) {
//        for (int j = 0; j < sz - 1 - i; j++) {
//            if (arr[j] > arr[j +1]) {
//                int tmp = arr[j];
//                arr[j] =  arr[j+1];
//                arr[j+1] = tmp;
//                flag = 0;
//            }
//        }
//        if (flag == 1) {
//            break;
//        }
//    }
//    for (int i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    
//    return 0;
//}
//int main(void)
//{
//    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    bubble_sort(arr, sz);
//    return 0;
//}


//qsort用法
//#include <stdio.h>
//#include <stdlib.h>
//
//int match_int(const void* e1, const void* e2)
//{
//    return (*(int*)e1 - *(int*)e2);
//}
//
//int main(void)
//{
//    int arr[10] = {1,0,2,3,4,6,6,7,9,8};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    qsort(arr,sz,sizeof(arr[0]),match_int);
//    for (int i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//qsort比较结构体
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Stu{
//    char name[20];
//    int age;
//};
//
//int cmp_stu_name(const void* e1,const void* e2)
//{
//    return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//int main(void)
//{
//    struct Stu s[] = {{"zhangsan", 15},{"lisi", 20},{"wangwu",35}};
//    int sz = sizeof(s)/sizeof(s[0]);
//    qsort(s, sz, sizeof(s[0]), cmp_stu_name);
//
//    return 0;
//}




