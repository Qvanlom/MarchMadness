#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int rand_lim(int limit);
void printBracket(int *b, int region);
void printFinalFour(int *f, char *r);

int main(){
    int b[15];
    int finalFour[7];
    double percent, qPercent, chance1, chance2;
    int p;

    srand(time(0));//seed
    rand();//clear
    //printf("%0.2lf\n", percent);
    for(int i = 0; i < 4; i++){
        //FIRST ROUND
        //1 16
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(percent > 0.69){
            b[0] = 1;
        }
        else{
            b[0] = 16;
        }
        //8 9
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(percent > 50.69){
            b[1] = 8;
        }
        else{
            b[1] = 9;
        }
        //5 12
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(percent > 35.4){
            b[2] = 5;
        }
        else{
            b[2] = 12;
        }
        //4 13
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(percent > 21.5){
            b[3] = 4;
        }
        else{
            b[3] = 13;
        }
        //6 11
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(percent > 37.5){
            b[4] = 6;
        }
        else{
            b[4] = 11;
        }
        //3 14
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(percent > 15.3){
            b[5] = 3;
        }
        else{
            b[5] = 14;
        }
        //7 10
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(percent > 39.5){
            b[6] = 7;
        }
        else{
            b[6] = 10;
        }
        //2 15
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(percent > 6.3){
            b[7] = 2;
        }
        else{
            b[7] = 15;
        }

        //SECOND ROUND
        p = rand_lim(10000);
        percent = (double)p / 100;
        //1 8
        if(b[0] == 1 && b[1] == 8){
            if(percent > 14){
                b[8] = 1;
            }
            else{
                b[8] = 8;
            }
        }
        //1 9
        else if(b[0] == 1 && b[1] == 9){
            if(percent > 6){
                b[8] = 1;
            }
            else{
                b[8] = 9;
            }
        }
        //16 8
        else if(b[0] == 16 && b[1] == 8){
            if(percent > 0.2){
                b[8] = 8;
            }
            else{
                b[8] = 16;
            }
        }
        //16 9
        else if(b[0] == 16 && b[1] == 9){
            if(percent > 0.16){
                b[8] = 9;
            }
            else{
                b[8] = 16;
            }
        }

        p = rand_lim(10000);
        percent = (double)p / 100;
        //5 4
        if(b[2] == 5 && b[3] == 4){
            if(percent > 44){
                b[9] = 4;
            }
            else{
                b[9] = 5;
            }
        }
        //5 13
        else if(b[2] == 5 && b[3] == 13){
            if(percent > 3){
                b[9] = 5;
            }
            else{
                b[9] = 13;
            }
        }
        //4 12
        else if(b[2] == 12 && b[3] == 4){
            if(percent > 13){
                b[9] = 4;
            }
            else{
                b[9] = 12;
            }
        }
        //13 12
        else if(b[2] == 12 && b[3] == 13){
            if(percent > 25){
                b[9] = 12;
            }
            else{
                b[9] = 13;
            }
        }

        p = rand_lim(10000);
        percent = (double)p / 100;
        //6 3
        if(b[4] == 6 && b[5] == 3){
            if(percent > 29){
                b[10] = 3;
            }
            else{
                b[10] = 6;
            }
        }
        //6 14
        else if(b[4] == 6 && b[5] == 14){
            if(percent > 2){
                b[10] = 6;
            }
            else{
                b[10] = 14;
            }
        }
        //11 3
        else if(b[4] == 11 && b[5] == 3){
            if(percent > 18){
                b[10] = 3;
            }
            else{
                b[10] = 11;
            }
        }
        //11 14
        else if(b[4] == 11 && b[5] == 14){
            if(percent > 5){
                b[10] = 11;
            }
            else{
                b[10] = 14;
            }
        }

        p = rand_lim(10000);
        percent = (double)p / 100;
        //7 2
        if(b[6] == 7 && b[7] == 2){
            if(percent > 26){
                b[11] = 2;
            }
            else{
                b[11] = 7;
            }
        }
        //7 15
        else if(b[6] == 7 && b[7] == 15){
            if(percent > 2){
                b[11] = 7;
            }
            else{
                b[11] = 15;
            }
        }
        //10 2
        else if(b[6] == 10 && b[7] == 2){
            if(percent > 18){
                b[11] = 2;
            }
            else{
                b[11] = 10;
            }
        }
        //10 15
        else if(b[6] == 10 && b[7] == 15){
            if(percent > 0.5){
                b[11] = 10;
            }
            else{
                b[11] = 15;
            }
        }

        //ROUND 3 and 4
        //b12
        chance1 = (0.4444 * (b[8]-1) * (b[8]-1)) - (13.33 * (b[8]-1)) + 100.0;
        chance2 = (0.4444 * (b[9]-1) * (b[9]-1)) - (13.33 * (b[9]-1)) + 100.0;
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(chance1 > chance2){
            qPercent = (chance2 / (chance1 + chance2)) * 100;
            if(percent > qPercent){
                b[12] = b[8];
            }
            else{
                b[12] = b[9];
            }
        }
        else{
            qPercent = chance1 / (chance1 + chance2) * 100;
            if(percent > qPercent){
                b[12] = b[9];
            }
            else{
                b[12] = b[8];
            }
        }

        //b13
        chance1 = (0.4444 * (b[10]-1) * (b[10]-1)) - (13.33 * (b[10]-1)) + 100.0;
        chance2 = (0.4444 * (b[11]-1) * (b[11]-1)) - (13.33 * (b[11]-1)) + 100.0;
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(chance1 > chance2){
            qPercent = chance2 / (chance1 + chance2) * 100;
            if(percent > qPercent){
                b[13] = b[10];
            }
            else{
                b[13] = b[11];
            }
        }
        else{
            qPercent = chance1 / (chance1 + chance2) * 100;
            if(percent > qPercent){
                b[13] = b[11];
            }
            else{
                b[13] = b[10];
            }
        }

        //b14
        chance1 = (0.4444 * (b[12]-1) * (b[12]-1)) - (13.33 * (b[12]-1)) + 100.0;
        chance2 = (0.4444 * (b[13]-1) * (b[13]-1)) - (13.33 * (b[13]-1)) + 100.0;
        p = rand_lim(10000);
        percent = (double)p / 100;
        if(chance1 > chance2){
            qPercent = chance2 / (chance1 + chance2) * 100;
            if(percent > qPercent){
                b[14] = b[12];
            }
            else{
                b[14] = b[13];
            }
        }
        else{
            qPercent = chance1 / (chance1 + chance2) * 100;
            if(percent > qPercent){
                b[14] = b[13];
            }
            else{
                b[14] = b[12];
            }
        }
        finalFour[i] = b[14];
        printBracket(b, i);
    }

    //FINAL FOUR
    char regionTracker[3];
    //f4
    chance1 = (0.4444 * (finalFour[0]-1) * (finalFour[0]-1)) - (13.33 * (finalFour[0]-1)) + 100.0;
    chance2 = (0.4444 * (finalFour[1]-1) * (finalFour[1]-1)) - (13.33 * (finalFour[1]-1)) + 100.0;
    p = rand_lim(10000);
    percent = (double)p / 100;
    if(chance1 > chance2){
        qPercent = chance2 / (chance1 + chance2) * 100;
        if(percent > qPercent){
            finalFour[4] = finalFour[0];
            regionTracker[0] = 'w';
        }
        else{
            finalFour[4] = finalFour[1];
            regionTracker[0] = 'e';
        }
    }
    else{
        qPercent = chance1 / (chance1 + chance2) * 100;
        if(percent > qPercent){
            finalFour[4] = finalFour[1];
            regionTracker[0] = 'e';
        }
        else{
            finalFour[4] = finalFour[0];
            regionTracker[0] = 'w';
        }
    }

    //f5
    chance1 = (0.4444 * (finalFour[2]-1) * (finalFour[2]-1)) - (13.33 * (finalFour[2]-1)) + 100.0;
    chance2 = (0.4444 * (finalFour[3]-1) * (finalFour[3]-1)) - (13.33 * (finalFour[3]-1)) + 100.0;
    p = rand_lim(10000);
    percent = (double)p / 100;
    if(chance1 > chance2){
        qPercent = chance2 / (chance1 + chance2) * 100;
        if(percent > qPercent){
            finalFour[5] = finalFour[2];
            regionTracker[1] = 's';
        }
        else{
            finalFour[5] = finalFour[3];
            regionTracker[1] = 'm';
        }
    }
    else{
        qPercent = chance1 / (chance1 + chance2) * 100;
        if(percent > qPercent){
            finalFour[5] = finalFour[3];
            regionTracker[1] = 'm';
        }
        else{
            finalFour[5] = finalFour[2];
            regionTracker[1] = 's';
        }
    }

    //f6
    chance1 = (0.4444 * (finalFour[4]-1) * (finalFour[4]-1)) - (13.33 * (finalFour[4]-1)) + 100.0;
    chance2 = (0.4444 * (finalFour[5]-1) * (finalFour[5]-1)) - (13.33 * (finalFour[5]-1)) + 100.0;
    p = rand_lim(10000);
    percent = (double)p / 100;
    if(chance1 > chance2){
        qPercent = chance2 / (chance1 + chance2) * 100;
        if(percent > qPercent){
            finalFour[6] = finalFour[4];
            regionTracker[2] = regionTracker[0];
        }
        else{
            finalFour[6] = finalFour[5];
            regionTracker[2] = regionTracker[1];
        }
    }
    else{
        qPercent = chance1 / (chance1 + chance2) * 100;
        if(percent > qPercent){
            finalFour[6] = finalFour[5];
            regionTracker[2] = regionTracker[1];
        }
        else{
            finalFour[6] = finalFour[4];
            regionTracker[2] = regionTracker[0];
        }
    }

    printFinalFour(finalFour, regionTracker);
    return 0;
}

//return a random num between 0 and limit inclusive
int rand_lim(int limit) {
    int divisor = RAND_MAX/(limit+1);
    int retval;

    do { 
        retval = rand() / divisor;
    } while (retval > limit);

    return retval;
}

void printBracket(int *b, int region){
    if(region == 0)
        printf("WEST\n");
    else if(region == 1)
        printf("EAST\n");
    else if(region == 2)
        printf("SOUTH\n");
    else if(region == 3)
        printf("MIDWEST\n");

    printf("___%d___\n", b[0]);
    printf("          ___%d___\n", b[8]);
    printf("___%d___\n", b[1]);
    printf("                    ___%d___\n", b[12]);
    printf("___%d___\n", b[2]);
    printf("          ___%d___\n", b[9]);
    printf("___%d___\n", b[3]);
    printf("                              ___%d___\n", b[14]);
    printf("___%d___\n", b[4]);
    printf("          ___%d___\n", b[10]);
    printf("___%d___\n", b[5]);
    printf("                    ___%d___\n", b[13]);
    printf("___%d___\n", b[6]);
    printf("          ___%d___\n", b[11]);
    printf("___%d___\n", b[7]);

    printf("\n");
}

void printFinalFour(int *f, char *r){
    printf("FINAL FOUR\n");
    printf("___%d%c___                       ___%d%c___\n", f[0], 'w', f[2], 's');
    printf("          ___%d%c___   ___%d%c___\n", f[4], r[0], f[5], r[1]);
    printf("___%d%c___                       ___%d%c___\n", f[1], 'e', f[3], 'm');
    printf("               Champion\n");
    printf("               ___%d%c___\n", f[6], r[2]);
}
