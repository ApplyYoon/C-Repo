#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    double score;
} Student;

// 구조체를 "포인터"로 전달
void printStudent(const Student *s) {
    printf("이름: %s, 나이: %d, 점수: %.1f\n",
           s->name, s->age, s->score);
}

int main(void) {
    Student s1;

    strncpy(s1.name, "Alice", sizeof(s1.name) - 1);
    s1.name[sizeof(s1.name) - 1] = '\0';
    s1.age = 18;
    s1.score = 95.5;

    printStudent(&s1);  // 주소를 넘김

    return 0;
}