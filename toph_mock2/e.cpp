#include <stdio.h>
using namespace std;


int main()

{
    long long test, human;
    int h, m, tme;
    char time[4];

    scanf("%lld", &test);
    


    // while(t > 0) {
    //     scanf("%s", time);

    //     h = ((time[0]-'0')*10)+(time[1]-'0');
    //     m = ((time[2]-'0')*10)+(time[3]-'0');
    //     tme = ((h-9)*60)+m;
    //     human = ((tme/5)*8)-((tme/15)*8);

    //     printf("%ld\n", human);
    //     t--;
    // }


    for (long long i = 1; i <= test; i++)
    {
        printf(">>%d\n", test);
        scanf("%s", time);
        printf("%s\n", time);
        printf(">>%d\n", test);

        h = ((time[0]-'0')*10)+(time[1]-'0');
        m = ((time[2]-'0')*10)+(time[3]-'0');
        tme = ((h-9)*60)+m;
        human = ((tme/5)*8)-((tme/15)*8);

        printf("%lld\n", human);
        printf(">>%d\n", test);
    }


    return 0;
}
