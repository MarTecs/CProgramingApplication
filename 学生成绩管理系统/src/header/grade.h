#include <stdio.h>
#include "common.h"

// @TODO: 学生成绩记录
typedef struct Grade
{
    int stu_id;                     //学生学号
    int cou_id;                     //课程编号
    double stu_grade;               //学生对应课程的成绩
} *StuGrade;