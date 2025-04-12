/*
    ```结构体```
    ```简单的学生信息管理系统```
*/

#include <iostream>
#include <string>
#include <vector>

#define cout std::cout
#define endl std::endl

///结构体的定义
struct Student
{
    int id;
    std::string name;
    float grade;

    Student(int StudentId, std::string StudentName, float StudentGrade): 
        id(StudentId), name(StudentName), grade(StudentGrade) {}
};

void add(std::vector<Student>& students,int id,std::string name,float grade)
{
    Student student(id, name, grade);
    students.push_back(student);
}

Student findstudent(const std::vector<Student>& students,int id)
{
    for(const auto& student : students)
    {
        if(student.id == id)
        {
            return student;
        }
    }

    return Student(-1, "Not Found", -1); // 返回一个默认的学生对象表示未找到
}

int main(){
    ///学生信息管理系统
    ///记录学生id、姓名和成绩
    ///通过id查找学生信息
    std::vector<Student> students;

    cout<<"########欢迎使用学生信息管理系统v1.0########"<<endl;
    cout<<"########添加学生信息请输入：1        ########"<<endl;
    cout<<"########查找学生信息请输入：2        ########"<<endl;
    cout<<"########退出系统请输入：0        ########"<<endl;
    cout<<"########";
    while(true)
    {
        
        int choice;
        std::cin>>choice;
        if(choice==0)
        {
            cout<<"########感谢使用学生信息管理系统v1.0########"<<endl;
            cout<<"########退出系统成功！       ########"<<endl;
            break;
        }
        else if(choice==1)
        {
            int id;
            std::string name;
            float grade;
            cout<<"########请输入学生id:";
            std::cin>>id;
            cout<<"########请输入学生姓名:";
            std::cin>>name;
            cout<<"########请输入学生成绩:";
            std::cin>>grade;

            add(students,id,name,grade);
            cout<<"########添加学生信息成功！       ########"<<endl;
            cout<<endl;
        }
        else if(choice==2)
        {
            int id;
            cout<<"########请输入学生id:";
            std::cin>>id;
            Student student = findstudent(students,id);

            cout<<"########学生id:"<<student.id<<"      ########"<<endl;
            cout<<"########学生姓名:"<<student.name<<"      ########"<<endl;
            cout<<"########学生成绩:"<<student.grade<<"      ########"<<endl;
            cout<<endl;
        }
        else
        {
            cout<<"########非法输入！        ########"<<endl;
            cout<<endl;
        }

        cout<<"########请继续操作!      ########"<<endl;
        cout<<"########";
    }

    return 0;
}