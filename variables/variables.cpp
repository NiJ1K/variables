//#include <iostream>
//
//int main() {
//    double distance, speed;
//    std::cout << "Enter the distance in kilometers: ";
//    std::cin >> distance;
//    std::cout << "Enter the speed in meters per second: ";
//    std::cin >> speed;
//    double distanceMeters = distance * 1000;
//    double timeSeconds = distanceMeters / speed;
//    int hours = timeSeconds / 3600;
//    int minutes = (timeSeconds - (hours * 3600)) / 60;
//    int seconds = timeSeconds - (hours * 3600) - (minutes * 60);
//
//    std::cout << "Time taken: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//int main() {
//    double num1, num2;
//    std::cout << "Enter the first decimal number: ";
//    std::cin >> num1;
//    std::cout << "Enter the second decimal number: ";
//    std::cin >> num2;
//
//    int intSum = static_cast<int>(num1) + static_cast<int>(num2);
//    double fracSum = std::fmod(num1, 1.0) + std::fmod(num2, 1.0);
//
//    std::cout << "Sum of integer parts: " << intSum << std::endl;
//    std::cout << "Sum of fractional parts: " << fracSum << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    double amount;
//    std::cout << "Enter the amount in hryvnias: ";
//    std::cin >> amount;
//
//    int hryvnia = static_cast<int>(amount);
//    int kopeck = static_cast<int>((amount - hryvnia) * 100);
//
//    std::cout << "Amount entered: " << hryvnia << " hryvnia(s) " << kopeck << " kopeck(s)" << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int totalSeconds;
//    std::cout << "Enter the time in seconds: ";
//    std::cin >> totalSeconds;
//
//    int days = totalSeconds / (24 * 60 * 60);
//    int hours = (totalSeconds % (24 * 60 * 60)) / (60 * 60);
//    int minutes = (totalSeconds % (60 * 60)) / 60;
//    int seconds = totalSeconds % 60;
//
//    std::cout << "Time entered: " << days << " day(s), " << hours << " hour(s), "
//        << minutes << " minute(s), " << seconds << " second(s)" << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    double distance, time;
//    std::cout << "Enter the distance to the airport (in kilometers): ";
//    std::cin >> distance;
//    std::cout << "Enter the time required to travel (in minutes): ";
//    std::cin >> time;
//    double timeHours = time / 60.0;
//    double speed = distance / timeHours;
//
//    std::cout << "Required speed: " << speed << " km/h" << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int startHours, startMinutes, startSeconds;
//    int endHours, endMinutes, endSeconds;
//    const double ratePerMinute = 0.15;
//
//    std::cout << "Enter the start time of the phone call:" << std::endl;
//    std::cout << "Hours: ";
//    std::cin >> startHours;
//    std::cout << "Minutes: ";
//    std::cin >> startMinutes;
//    std::cout << "Seconds: ";
//    std::cin >> startSeconds;
//
//    std::cout << "Enter the end time of the phone call:" << std::endl;
//    std::cout << "Hours: ";
//    std::cin >> endHours;
//    std::cout << "Minutes: ";
//    std::cin >> endMinutes;
//    std::cout << "Seconds: ";
//    std::cin >> endSeconds;
//    int startTimeSeconds = startHours * 3600 + startMinutes * 60 + startSeconds;
//    int endTimeSeconds = endHours * 3600 + endMinutes * 60 + endSeconds;
//    int callDurationSeconds = endTimeSeconds - startTimeSeconds;
//    double callCost = (static_cast<double>(callDurationSeconds) / 60) * ratePerMinute;
//
//    std::cout << "Call duration: " << callDurationSeconds << " seconds" << std::endl;
//    std::cout << "Call cost: " << callCost << " hryvnias" << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int secondsElapsed;
//    const int secondsPerHour = 3600;
//    const int workdayHours = 8;
//
//    std::cout << "Enter the time in seconds elapsed since the start of the workday: ";
//    std::cin >> secondsElapsed;
//
//    int remainingSeconds = (workdayHours * secondsPerHour) - secondsElapsed;
//    int remainingHours = remainingSeconds / secondsPerHour;
//
//    std::cout << "You have " << remainingHours << " whole hours left to sit at work." << std::endl;
//
//    return 0;
//}

#include <iostream>

int main() {
    double laptopCost;
    int laptopQuantity;
    double discountPercentage;

    std::cout << "Enter the cost of one laptop: ";
    std::cin >> laptopCost;

    std::cout << "Enter the quantity of laptops: ";
    std::cin >> laptopQuantity;

    std::cout << "Enter the discount percentage: ";
    std::cin >> discountPercentage;
    double totalCostBeforeDiscount = laptopCost * laptopQuantity;
    double discountAmount = totalCostBeforeDiscount * (discountPercentage / 100);
    double totalOrderAmount = totalCostBeforeDiscount - discountAmount;

    std::cout << "Total order amount: " << totalOrderAmount << std::endl;

    return 0;
}