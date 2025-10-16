#include <stdio.h>
int main() {
    int pass[10], fail[10];
    int i=0, mark;
    int passCount=0, failCount=0;
    int passSum=0, failSum=0;
    printf("Enter marks for up to 10 students (-1 to stop):\n");
    while (i<10) {
        scanf("%d", &mark);
        if (mark==-1) {
            break;
        }
        if (mark>=5 && mark<=10) {
            pass[passCount++]=mark;
            passSum+=mark;
        } else if (mark>=0 && mark<5) {
            fail[failCount++]=mark;
            failSum+=mark;
        }
        i++;
    }
    if (passCount>0)
    printf("Average passed marks: %.2f\n", (float)passSum/passCount);
    if (failCount>0)
    printf("Average failed marks: %.2f\n", (float)failSum / failCount);
    return 0;
}