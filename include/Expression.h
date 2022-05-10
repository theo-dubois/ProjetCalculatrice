#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <iostream>

using namespace std;

class Expression
{
    public:
        Expression();
        virtual ~Expression();
        virtual void afficher(ostream os)=0;
        virtual void afficherNPI(ostream os)=0;
        virtual float calculer()=0;

    protected:

    private:
};

#endif // EXPRESSION_H
