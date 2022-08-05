#ifndef DEATHDAY_H
#define DEATHDAY_H


class deathday
{
    public:
        deathday(int m, int d, int y);
        void printdate();
    private:
        int month;
        int day;
        int year;
};

#endif // DEATHDAY_H
