/*Checks the type of a given number wither
it is odd or even using bitwise operations.
*/



#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<float.h>

int spaceScanner(char *str) {
    int spaces = 0;
    for(int i = 0; *(str+i)!='\0'; i++) {
        if(*(str +i) == ' ') {
            spaces ++;
        }
    }
    printf("%d\n",spaces);
    return spaces;
}

void styleCorrect(char*str) {
    char *buffer;
    int spaces = spaceScanner(str);
    printf("%d\n",spaces);
    int spaceCounter = 0;
    	for(int i = 0;*(str + i)!='\0';i++) {
            if(i != 0 && *(str+i) == ' '&&spaceCounter<2) {
                for(int j = i;; j++) {
                    if(*(str+j+1) == '\0') {
                        break;

                    } else {
                        buffer = (str + j+1);
                    }
                    *buffer = *buffer + *(str+j);
                    *(str + j) = *buffer - *(str + j);
                    *buffer = *buffer - *(str + j) - *buffer;
                }
           }
       }
    }

	
    

void reverseOrder(char*str) {
    char *ptr1;
    ptr1 = str;
    int flag = 1;
    char size;
    int i=0;

    while(*(str +i) != '\0') {
        if((*(str+i) >= 65 && *(str+i) <= 90) && i||*(str+i)==' ') {

            size = ((str+i)-ptr1)/2;

            for(int j = 0; j < size; j++) {
                *(str+i-j-1) = *(str+i-j-1) + *(ptr1+j);
                *(ptr1+j) = *(str+i-j-1) - *(ptr1+j);
                *(str+i-j-1) = *(str+i-j-1) - *(ptr1+j);
            }
            ptr1 = str + i;
        }
        if(flag == 0) {
            break;
        }
        i++;
    }
}
int main(void)
{int size =0;
    char name[] = {"Luai Mahmoud Ghannam"};
    for(int i=0;name[i] != '\0';i++){
    size ++;
    } 
    printf("%d\n",size);
    printf("%s\n",name);
    styleCorrect(name);
    size = 0;
    for(int i=0;name[i] != '\0';i++){
    size ++;
    }
    printf("%d\n",size);
    printf("%s\n",name);
    reverseOrder(name);
    printf("%s\n",name);
    return 0;
}
