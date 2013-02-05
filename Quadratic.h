#ifndef QUADRATIC_H
#define QUADRATIC_H


class quadratic
{
    public:
        quadratic();
        virtual ~quadratic();

    int assigncoefficient();
    void valuex(int x);
    float solveroot (float a);
    void solveextremum ();


    protected:
    private:
       int A,B,C;
};

#endif // QUADRATIC_H
