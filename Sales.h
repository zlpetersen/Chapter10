#pragma once
namespace SALES
{
    // Quarters
    const int QRTS = 4;

    class Sales
    {
    private:
        double sales[QRTS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[], int n);
        void setSales();
        void showSales() const;
        void calcSales();
    };
}
