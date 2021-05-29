////1.程序填空题
////
////给定程序中，函数fun的功能是 : 将形参n中，各位上为偶数的数取出，并按原来从高位到低位相反的顺序组成一个新的数，并作为函数值返回。
////
////例如，输入一个整数 : 27638496， 函数返回值为 : 64862。
////
////请在程序的下划线处填入正确的内容并把下划线删除，使程序得出正确的结果。
////
////注意 : 源程序存放在考生文件夹下的BLANK1.C中。
////
////不得增行或删行，也不得更改程序的结构!
//
//#include  <stdio.h>
//
//unsigned long fun(unsigned long  n)
//
//{
//    unsigned long  x = 0;    int  t;
//
//    while (n)
//
//    {
//        t = n % 10;                                          //对数进行分离通常采用的算法就是先余再除10，分离各个位数
//
//        /**********found**********/
//
//        if (t % 2 == 0)
//
//            /**********found**********/
//
//            x = x*10 + t;                                      //由于分离后还要统计偶数所以对分离后进行判断在进行下一步操作
//                                                                //接下来就是存放 对几个数合并通常采用x=x*10+c算法来进行操作
//
//        /**********found**********/
//
//        n = n/10;
//
//    }
//
//    return  x;
//
//}
//
//main()
//
//{
//    unsigned long  n = -1;
//
//    while (n > 99999999 || n < 0)
//
//    {
//        printf("Please input(0<n<100000000): ");  scanf_s("%ld", &n);
//    }
//
//    printf("\nThe result is: %ld\n", fun(n));
//
//    getchar();
//
//}

//2.程序改错题

//给定程序modi1.c中，函数fun的功能是:从N个字符串中找出最长的那个串，并将其地址作为函数值返
//
//回。各字符串在主函数中输入，并放入一个字符串数组中。
//
//请改正程序中的错误，使它能得出正确结果。
//
//注意 : 不要改动main函数，不得增行或删行，也不得更改程序的结构!

//#include <stdio.h>
//
//#include <string.h>
//
//#define    N   5
//
//#define    M   81
//
///**********found**********/
//
//char *fun(char(*sq)[M])
//
//{
//    int  i;     char* sp;
//
//    sp = sq[0];
//
//    for (i = 0; i < N; i++)
//
//        if (strlen(sp) < strlen(sq[i]))
//
//            sp = sq[i];
//
//    /**********found**********/
//
//    return  sp;
//
//}
//
//main()
//
//{
//    char   str[N][M], * longest;    int   i;
//
//    printf("Enter %d lines :\n", N);
//
//    for (i = 0; i < N; i++) gets(str[i]);
//
//    printf("\nThe N string  :\n", N);
//
//    for (i = 0; i < N; i++) puts(str[i]);
//
//    longest = fun(str);
//
//    printf("\nThe longest string :\n"); puts(longest);
//
//    getchar();
//
//}


//3.程序设计题
//
//编写函数fun，它的功能是计算下列级数和，和值由函数值返回。
//
//
//
//例如，当n = 10， x = 0.3时，函数值为1.349859。
//
//注意 : 部分源程序存在文件prog1.c中。
//
//请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。

#include <stdio.h>

#include <math.h>

double fun(double x, int  n)

{
    int i;
    double sum = 1, m = 1;;
    for (i = 1; i <= n; i++)
    {
        m *= i;                                             //计算  n!

        sum += (pow(x, i) / m);                          //根据题目给出的数学函数判断出可以使用pow(x,y)函数.-----》x的n次方
    }
    return sum;


}

main()

{
    void NONO();

    printf("%f\n", fun(0.3, 10));

    //NONO();

    getchar();

}

//void NONO()
//
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//
//    FILE* fp, * wf;
//
//    int i, n;
//
//    double s, x;
//
//    fp = fopen("..\\..\\in.dat", "r");
//
//    wf = fopen("..\\..\\out.dat", "w");
//
//    for (i = 0; i < 10; i++) {
//
//        fscanf(fp, "%lf,%d", &x, &n);
//
//        s = fun(x, n);
//
//        fprintf(wf, "%f\n", s);
//
//    }
//
//    fclose(fp);
//
//    fclose(wf);
//
//}

