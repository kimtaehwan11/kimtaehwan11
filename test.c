#include<stdio.h>

#include<stdlib.h>

FILE * fin;
FILE * fout;

long long sum_numbers(int a, int b){
    long long result = 0;
    for(int i=a; i<b+1; i++){
        result += i;
    }
    return result;
}

int main(int argc, char* argv[]){
    fin = fopen(argv[1], "r");
    fout = fopen(argv[2], "w");
    int a, b;
    long long sum;

    while (fscanf(fin, "%d %d", &a, &b) != EOF){
        sum = sum_numbers(a, b);
        fprintf(fout, "sum by %d to %d is %lld\n", a, b, sum);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}