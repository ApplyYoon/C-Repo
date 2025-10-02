#include <stdio.h>
#include <string.h>

// Define Struct
struct Student {
        char name[20];
        int age;
        double score;
    };
    // 위와 같이 정의(선언)하면 struct Student라는 새로운 자료형이 생긴다.
    // name, age, score는 "맴버 변수"라고 부른다.

int main() {
    // 구조체 변수 선언
    struct Student s;

    // 멤버에 값 넣기
    s.age = 18;
    s.score = 95.5;

    // 출력
    printf("나이: %d, 점수: %.1f\n", s.age, s.score);

    return 0;
}