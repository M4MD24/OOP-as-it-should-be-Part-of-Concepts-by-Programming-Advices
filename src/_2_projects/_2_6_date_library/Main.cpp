#include "libraries/date/Date.h"
#include "libraries/date/Period.h"

int main() {
    Date date;
    date.print();

    Date date2 = date;
    date2.print();

    Date date3 {
        "9/6/2003",
        "/"
    };
    date3.print();

    Date date4 {
        9,
        6,
        2003,
        "|"
    };
    date4.print();

    cout << "After 1 Day: ";
    date.nextDay();
    date.print();

    short days = 10;
    cout << "After " << days << " Days: ";
    date.nextDays(
        days
    );
    date.print();

    cout << "After 1 Week: ";
    date.nextWeek();
    date.print();

    short weeks = 4;
    cout << "After " << weeks << " Weeks: ";
    date.nextWeeks(
        weeks
    );
    date.print();

    cout << "After 1 Month: ";
    date.nextMonth();
    date.print();

    short months = 4;
    cout << "After " << months << " Months: ";
    date.nextMonths(
        months
    );
    date.print();

    cout << "After 1 Year: ";
    date.nextYear();
    date.print();

    short years = 4;
    cout << "After " << years << " Years: ";
    date.nextYears(
        years
    );
    date.print();

    cout << "After 1 Decade: ";
    date.nextDecade();
    date.print();

    short decades = 4;
    cout << "After " << decades << " Decades: ";
    date.nextDecades(
        decades
    );
    date.print();

    cout << "After 1 Century: ";
    date.nextCentury();
    date.print();

    short centuries = 4;
    cout << "After " << centuries << " Centuries: ";
    date.nextCenturies(
        centuries
    );
    date.print();

    cout << "After 1 Millennium: ";
    date.nextMillennium();
    date.print();

    short millenniums = 4;
    cout << "After " << millenniums << " Millenniums: ";
    date.nextMillenniums(
        millenniums
    );
    date.print();

    millenniums = 4;
    cout << "Previous " << millenniums << " Millenniums: ";
    date.previousMillenniums(
        millenniums
    );
    date.print();

    cout << "Previous 1 Millennium: ";
    date.previousMillennium();
    date.print();

    centuries = 4;
    cout << "Previous " << centuries << " Centuries: ";
    date.previousCenturies(
        centuries
    );
    date.print();

    cout << "Previous 1 Century: ";
    date.previousCentury();
    date.print();

    decades = 4;
    cout << "Previous " << decades << " Decades: ";
    date.previousDecades(
        decades
    );
    date.print();

    cout << "Previous 1 Decade: ";
    date.previousDecade();
    date.print();

    years = 4;
    cout << "Previous " << years << " Years: ";
    date.previousYears(
        years
    );
    date.print();

    cout << "Previous 1 Year: ";
    date.previousYear();
    date.print();

    months = 4;
    cout << "Previous " << months << " Months: ";
    date.previousMonths(
        months
    );
    date.print();

    cout << "Previous 1 Month: ";
    date.previousMonth();
    date.print();

    weeks = 4;
    cout << "Previous " << weeks << " Weeks: ";
    date.previousWeeks(
        weeks
    );
    date.print();

    cout << "Previous 1 Week: ";
    date.previousWeek();
    date.print();

    days = 10;
    cout << "Previous " << days << " Days: ";
    date.previousDays(
        days
    );
    date.print();

    cout << "Previous 1 Day: ";
    date.previousDay();
    date.print();

    cout << "Is Leap Year: ";
    cout << boolalpha;
    cout << date.isLeapYear() << endl;

    cout << "Month Days: " << date.monthDays() << endl;

    cout << "Day Of Week: " << date.dayOfWeek() << endl;

    cout << "Day Of Week Name: " << date.dayOfWeekName() << endl;

    cout << "Month Name: " << date.monthName() << endl;

    cout << "Day Name: " << Date::dayName(
        7
    ) << endl;

    cout << "Total Days from Start Year to Target Date: " << date.totalDaysFromStartYearToTargetDate() << endl;

    cout << "Print Date by Days: ";
    Date::printDateByDays(
        136,
        2025
    );

    cout << date.dateComparisonText(
        {
            15,
            5,
            2025
        }
    ) << endl;

    cout << "Compare Dates: " << date.compareDates(
        {
            14,
            5,
            2025
        }
    ) << endl;

    cout << "Are Dates Equal: " << date.areDatesEqual(
        {
            16,
            5,
            2025
        }
    ) << endl;

    cout << "Is Before: " << date.isBefore(
        {
            16,
            5,
            2025
        }
    ) << endl;

    cout << "Is After: " << date.isAfter(
        {
            14,
            5,
            2025
        }
    ) << endl;

    cout << "Is Last Month in Year: " << date.isLastMonthInYear() << endl;

    cout << "Is Last Day in Month: " << date.isLastDayInMonth() << endl;

    cout << "Is Last Day in Week: " << date.isLastDayInWeek() << endl;

    cout << "Days Difference in Dates: " << date.daysDifferenceInDates(
        {
            9,
            6,
            2003
        }
    ) << endl;

    cout << "Days Until End of Week: " << date.daysUntilEndOfWeek() << endl;

    cout << "Days Until End of Month: " << date.daysUntilEndOfMonth() << endl;

    cout << "Days Until End of Year: " << date.daysUntilEndOfYear() << endl;

    cout << "Vacation Days: " << date.vacationDays(
        {
            21,
            6,
            2025
        }
    ) << endl;

    cout << "After Vacation Days: ";
    date.dateAfterVacationDays(
            1
        )
        .print();

    cout << "Count Days Between Dates: " << date.countDaysBetweenDates(
        {
            15,
            6,
            2025
        }
    ) << endl;

    cout << "Date is Valid: " << Date::dateIsValid(
        {
            29,
            2,
            2024
        }
    ) << endl;

    cout << "Convert Date Text to Date Structure: ";
    Date::convertDateTextToDateStructure(
        "9-6-2003"
    ).print();

    date.showMonthCalendar();

    date.showYearCalendar();
}