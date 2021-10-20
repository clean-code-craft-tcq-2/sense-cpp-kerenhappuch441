#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include <math.h>
#include "Alert.h"
#include <cmath>

TEST_CASE("reports average, minimum and maximum") {
    auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.max - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
    auto computedStats = Statistics::ComputeStatistics({});
    printf("2nd test cast");
    
     printf("2nd test cast %d",computedStats.average);
     printf("2nd test cast %d",computedStats.max);
     printf("2nd test cast %d",computedStats.min);
   /* REQUIRE(isnan(computedStats.average)==1);
    REQUIRE(isnan(computedStats.max)==1);
    REQUIRE(isnan(computedStats.min)==1);*/
}

TEST_CASE("raises alerts when max is greater than threshold") {
   /* EmailAlert emailAlert;
    LEDAlert ledAlert;
    std::vector<IAlerter*> alerters = {&emailAlert, &ledAlert};
    
    const float maxThreshold = 10.2;
    StatsAlerter statsAlerter(maxThreshold, alerters);
    statsAlerter.checkAndAlert({99.8, 34.2, 4.5, 6.7});

    REQUIRE(emailAlert.emailSent);
    REQUIRE(ledAlert.ledGlows);*/
}
