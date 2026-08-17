int main()
{
    int A=942,B=344,C=810,D=-751;
    B=B+1000-800;A=A-1000+400;C=C+800-600;D=D+600-400;
    A=A+C;C=A-C;A=A-C;B=B+D;D=B-D;B=B-D;
    A=A-700;D=D+700-900;B=B+900;
    B=B+A;A=B-A;B=B-A;
    A=A-30;B=B+30;

    return 0;
}