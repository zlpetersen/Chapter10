#include "Sales.h"

#include <iostream>

namespace SALES
{
    Sales::Sales()
    {
        for (int i = 0; i < QRTS; i++)
            sales[i] = 0;
        average = 0;
        min = 0;
        max = 0;
    }

    
    Sales::Sales(const double ar[], int n)
    {
        int len = QRTS >= n ? n : QRTS;
        for (int i = 0; i < len; i++)
            sales[i] = ar[i];
        if (len < QRTS)
            for (int f = len; f < QRTS; f++)
                sales[f] = 0;
        calcSales();
    }


    void Sales::setSales()
    {
        for (int i = 0; i < QRTS; i++)
        {
            std::cout << "Quarter " << i + 1 << " sales: ";
            while (!(std::cin >> sales[i]))
                std::cout << "Please enter a valid number\nQuarter " << i + 1 << " sales: ";
        }
        calcSales();
    }


    void Sales::showSales() const
    {
        std::cout << "Sales:\n";
        for (int f = 0; f < QRTS; f++)
            std::cout << "Quarter " << f + 1 << ": " << sales[f] << "\n";
        std::cout << "Average: " << average << "\n";
        std::cout << "Minimum: " << min << "\n";
        std::cout << "Maximum: " << max << "\n";
    }
    

    void Sales::calcSales()
    {
        double max = 0;
        for (auto x : sales)
            max = x > max ? x : max;
        this->max = max;
        double min = max;
        for (auto f : sales)
            min = f < min ? f : min;
        this->min = min;
        double average{};
        for (auto g : sales)
            average += g;
        average /= QRTS;
        this->average = average;
    }
}
