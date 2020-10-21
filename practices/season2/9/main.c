#include <stdio.h>

int main()
{
    const int pen=150, a4_paper=50;
    int pen_price, a4_paper_price;
    float inflation_rate, inflation_rate_percent, pen_cost, a4_paper_cost, total;
    printf("Enter price of pen: ");
    scanf("%d", &pen_price);
    printf("Enter price of A4 paper: ");
    scanf("%d", &a4_paper_price);
    printf("Enter inflation rate: ");
    scanf("%f", &inflation_rate);
    inflation_rate_percent = inflation_rate / 100;
    pen_cost = pen_price * pen * inflation_rate_percent;
    a4_paper_cost = a4_paper_price * a4_paper * inflation_rate_percent;
    printf("\nPen cost : %.3f\n", pen_cost);
    printf("A4 paper cost : %.3f", a4_paper_cost);
    total = pen_cost + a4_paper_cost;
    printf("\n__________________________\nTotal cost : %.3f", total);
}
