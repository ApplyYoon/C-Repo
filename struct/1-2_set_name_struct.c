#include <stdio.h>
#include <string.h>  // strncpy 사용을 위해 필요

struct Student {
    char name[20];
    int age;
    double score;
};

int main() {
    struct Student s;

    // 안전하게 문자열 복사
    strncpy(s.name, "Jiwon", sizeof(s.name) - 1);
    s.name[sizeof(s.name) - 1] = '\0'; // 항상 문자열 끝에 '\0' 보장

    s.age = 18;
    s.score = 95.5;

    printf("이름: %s, 나이: %d, 점수: %.1f\n", s.name, s.age, s.score);

    return 0;
}