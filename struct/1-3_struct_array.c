#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    double score;
};

int main() {
    struct Student students[3];
    char buf[100];

    for (int i = 0; i < 3; i++){
        printf("학생 %d 이름: ", i + 1 );
        if (fgets(buf, sizeof(buf), stdin) == NULL) {
            fprintf(stderr, "입력 오류\n");
            return 1;
        }
        /* fgets는 개행문자까지 읽어오므로 제거 */
        buf[strcspn(buf, "\n")] = '\0';

        /* 안전 복사 */
        strncpy(students[i].name, buf, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';
        
        /* 나이 입력(정수) */
        printf("학생 %d 나이: ", i + 1);
        if (scanf("%d", &students[i].age) != 1){
            fprintf(stderr, "나이 입력 오류\n");
            return 1;
        }

        /* 점수 입력(실수) */
        printf("학생 %d 점수: ", i + 1);
        if (scanf("%lf", &students[i].score) != 1){
            fprintf(stderr, "점수 입력 오류\n");
            return 1;
        }

        /* scanf 후 남아 있는 개행 처리: 다음 fgets 전에 버퍼 지우기 */
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { /* 비우기 */ }
        putchar('\n'); /* 입력 구분용 여백 출력(선택 사항) */
    }   

    /* 평균 계산 및 출력 */
    double sum = 0.0;
    for (int i = 0; i < 3; i++){
        printf("=== 학생 %d ===\n", i + 1);
        printf("이름: %s\n", students[i].name);
        printf("나이: %d\n", students[i].age);
        printf("점수: %.1f\n", students[i].score);
        sum += students[i].score;
    }

    printf("\n평균 점수: %.2f\n", sum / 3.0);
}