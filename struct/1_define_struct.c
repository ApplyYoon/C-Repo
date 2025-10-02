#include <stdio.h>

int main(){
    struct Student {
        char name[20];
        int age;
        double score;
    };
    // 위와 같이 정의(선언)하면 struct Student라는 새로운 자료형이 생긴다.
    // name, age, score는 "맴버 변수"라고 부른다.
    return 0;
}