#include <stdio.h>
#include <stdlib.h>

int max(const void *a, const void *b) {
    printf("jestem tu\n");
    char* av=*(char**)a;
    //printf("%s\n",av);
    char* bv=*(char**)b;
    //printf("%s\n",bv);
    int al=0;
    for(int i=0; av[i]!='\0'; i++){
        if(av[i]=='a'||av[i]=='e'||av[i]=='i'||av[i]=='o'||av[i]=='u'){
            al++;
        }
    }
    int bl=0;
    for(int i=0; bv[i]!='\0'; i++){
        if(bv[i]=='a'||bv[i]=='e'||bv[i]=='i'||bv[i]=='o'||bv[i]=='u'){
            bl++;
        }
    }
    if(al > bl) return -1;
    else if(al == bl) return 0;
    else return 1;
}
int main(){
    //char n1[]="anna";
    //char n2[]="aeio";
    char *tab[]={"ana","aaii","abb", "aaabb", "alamakota"};
    //max(&tab[0], &tab[1]);
    qsort(tab,5,sizeof(char*),max);
    for(int i=0; i<5; i++){
        printf("%s\n", tab[i]);
    }
    return 0;
}
