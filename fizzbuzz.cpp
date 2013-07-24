#include "fizzbuzz.h"
 
using namespace std;

const string FIZZ      = "fizz";
const string BUZZ      = "buzz";
const string FIZZ_BUZZ = "fizzbuzz";
const int STR_LEN_MAX  = 10;

/*
 * 工夫したことなどなんでもアピール！
 */

bool isFizz(int n)
{
    return (n % 3 == 0);
}

bool isBuzz(int n)
{
    return (n % 5 == 0);
}

const string& createStr(int n)
{
    static string strng;
    char str[STR_LEN_MAX];
    snprintf(str,STR_LEN_MAX,"%d",n);
    strng = str;
    return strng;
}

const std::string& fizzbuzz(int n){
    return isFizz(n) ? isBuzz(n) ? FIZZ_BUZZ
                                 : FIZZ
                     : isBuzz(n) ? BUZZ
                                 : createStr(n);
}



