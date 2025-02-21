//
//  string.c
//  2.20 c
//
//  Created by 齐鹏宇 on 21/02/2025.
//

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//模拟实现strlen
//unsigned int my_strlen(const char* str){
//    int count = 0;
//    while(*str != '\0'){
//        str++;
//        count++;
//    }
//    return count;
//}
//int main(void){
//    char arr[] = "abcdef";
//    int len = my_strlen(arr);
//    printf("%d\n",len);
//    return 0;
//}

//模拟实现strcpy
//char* my_strcpy(char* des,const char* sou){
//    assert(des && sou);
//    char* ret = des;
//    while(*des++ = *sou++);
//    return ret;
//}
//
//int main(void){
//    char arr[] = "abcdef";
//    char arr2[] = {0};
//    my_strcpy(arr2, arr);
//    printf("%s\n",arr2);
//    return 0;
//}

//模拟实现strcat
//char* my_strcat(char* des,char* sou){
//    assert(des && sou);
//    char* ret = des;
//    while (*des != '\0') {
//        des++;
//    }
//    while (*des++ = *sou++);
//    return ret;
//}
//
//int main(void){
//    char arr[20] = "abcdef";
//    char arr2[] = " I say";
//    my_strcat(arr, arr2);
//    printf("%s\n", arr);
//    return 0;
//}
