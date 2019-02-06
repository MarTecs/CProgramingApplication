#include <stdio.h>
#include "common.h"

/*
// @TODO: 课程信息
typedef struct CourseInformation
{
    int cou_id;                     //课程编号
    string cou_name;                //课程名称
} *CourseInf;

// @TODO: 学生成绩记录
typedef struct Grade
{
    int stu_id;                     //学生学号
    int cou_id;                     //课程编号
    double stu_grade;               //学生对应课程的成绩
} *StuGrade;
*/

// @TODO: 学生信息
typedef struct  StudentInformation
{
    /* data */
    int stu_id;                     //学生学号
    string stu_name;                //学生姓名
    char stu_sex;                   //学生性别
    unsigned int stu_age;           //学生年龄
    
} *StudentInf;
