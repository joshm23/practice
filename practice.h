//
// Created by merlin on 1/4/2022.
//
#ifndef PROJECT2_PRACTICE_H
#define PROJECT2_PRACTICE_H
// simple conditional
typedef enum customer_type{teacher, student} customer_type;
double sheet_music_cost(double purchase, enum customer_type
customer);
//chapter 4 question 6
typedef enum quadrant{I, II, III, IV} quadrant;
enum quadrant ch4_question6(double x, double y);
//chapter 4 question 7
int leap(int year);
int day_number(int month, int day, int year);
//chapter 4 question 8
typedef enum pollutant_type{carbon_monoxide, hydrocarbons,
    nitrogen_oxides, nonmethane_hydrocarbons} pollutant_type;
typedef enum pollutant_level_type{legal, illegal}
        pollutant_level_type;
enum pollutant_level_type emissions(enum pollutant_type p,
                                    double grams_per_mile, int odometer);
int quiz_score(int quizzes[], int number_of_quizzes);
int drop_the_low_score(int quizzes[], int
number_of_quizzes);
//
//// Chapter 5 question 5
int gcd(int n1, int n2);
// Chapter 5 question 14
int years_to_decay(double starting_amount, double target);
#endif //PROJECT2_PRACTICE_H



Total=(#ofsheets) * cost_per_sheet x 1.05
totalcost=purchase * (1-discount) * (1.05)
double sheet_music_cost (double purchase, customer_type, customer)
double totalcost, discount
if (customer_type = student)
{
discount = 0
}
{
if (purchase>100)
{
discount=0.12
}
{
else
discount=0.10
}
}
total_cost = purchase * (1-discount) * (1.05)
return total_cost
}