// #include <stdio.h>
// #include<string.h>
// int main()
// {

//     int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     for (int i = 0; i < 12; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//    char str[1000] = {"January","February","March","April","May","June","July","Augest","September","Octobar","November","December"} ;
//     for (int i = 0; i < 12; i++)
//     {
//         if (arr[0] == 1)
//         {
//             printf("%s", str[0]);
//         }
//     }
//     return 0;
// }




#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("January\n"); break;
        case 2:printf("February\n"); break;
        case 3:printf("March\n"); break;
        case 4:printf("April\n");break;
        case 5:printf("May\n"); break;
        case 6:printf("JuneJune\n"); break;
        case 7:printf("July\n"); break;
        case 8:printf("Augest\n"); break;
        case 9:printf("September\n"); break;
        case 10:printf("Octobar\n"); break;
        case 11:printf("November\n"); break;
        case 12:printf("December\n"); break;
        
    }
     
    return 0;
}