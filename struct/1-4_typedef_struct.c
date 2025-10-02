#include <stdio.h>
#include <string.h>

// typedef로 별칭(alias) 만들기
typedef struct {
    char name[20];
    int age;
    double score;
} Student;

int main(void) {
    // 이제는 struct Student s; 대신 Student s; 로 가능
    Student s;

    strncpy(s.name, "Jiwon", sizeof(s.name) - 1);
    s.name[sizeof(s.name) - 1] = '\0';
    s.age = 18;
    s.score = 95.5;

    printf("이름: %s, 나이: %d, 점수: %.1f\n",
           s.name, s.age, s.score);

    return 0;
}