#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdint.h>

//extern long long int sum(long long int a1, long long int a2, long long int* a3);
//
//int main()
//{
//	long long int a1, a2, a3, ans;
//	a1 = 512;
//	a2 = 1024;
//	a3 = 5;
//	ans = sum(a1, a2, &a3);
//	printf("%lld + %lld = %lld \n", a1, a2, ans);
//	printf("new A3 value is %lld", a3);
//	return 0;
//}

extern void testFun(uint8_t* x);

int main(){
    uint8_t x;
    scanf_s("%hhu", &x);

    printf("Before: %hhu\n", x);
    testFun(&x);
    printf("After: %hhu", x);

    return 0;
}