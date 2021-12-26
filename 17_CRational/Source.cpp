#include <iostream>
class CRational
{
private:
    int znamenatel;//znamenatel
    int chislitel;// chislitel
    bool inf;
    int NOD(int x, int y)
    {
        if (y == 0) return x;
        return NOD(y, x % y);
    }
    void reduce()
    {
        int nod = NOD(chislitel, znamenatel);
        chislitel = chislitel / nod;
        znamenatel = znamenatel / nod;
    }
public:
    CRational(int ch, int zn)
    {
        if (zn != 0)
        {
            znamenatel = zn;
            chislitel = ch;
            inf = false;
            reduce();
        }
        else
        {
            znamenatel = 1;
            chislitel = 1;
            inf = true;
        }
    }

    CRational& sum(CRational one, CRational two)
    {
        if ((!one.inf) && (!two.inf))
        {
            chislitel = one.chislitel * two.znamenatel + (two.chislitel) * (one.znamenatel);
            znamenatel = one.znamenatel * two.znamenatel;
        }
        reduce();
        return *this;
    }

    CRational& multiply( CRational one, CRational two )
    {
        if ((!one.inf) && (!two.inf))
        {
            chislitel = one.chislitel * two.chislitel;
            znamenatel = one.znamenatel * two.znamenatel;
        }
        reduce();
        return *this;
    }

    CRational& info()
    {
        if (!inf)
        {
            if (znamenatel <= chislitel)
            {
                int tmp = chislitel;
                int count = 0;
                while (tmp >= znamenatel)
                {
                    tmp -= znamenatel;
                    count += 1;
                }
                if(tmp!=0)
                    std::cout << count << " " << tmp << "/" << znamenatel << std::endl;
                else
                    std::cout << count  << std::endl;

            }
            else
            {
                std::cout << chislitel << "/" << znamenatel << std::endl;
            }
        }
        else
        {
            std::cout <<"Chisla ne suchestvyet" << std::endl;
        }
        return *this;
    }
};

int main()
{
    CRational number(10, 10);
    CRational chislo(10, 10);
    CRational tree(1, 1);
    chislo.info();
    number.info();
    tree.sum(number,chislo);
    tree.info();
    tree.multiply(number, chislo);
    tree.info();

};

