/* File Name: activity.h
 * Description: Header file for the Activity struct.
 * Contains the implementation of the struct and the
 * prototype for the << operator function.
 */

#pragma once

#include <string>
#include <ostream>

/* A type representing an activity. It contains two properties of an activity,
 * its name (string) and the amount of time it takes to complete in minutes (int),
 * that are relevant to the problem. These fields will need to be accessed
 * to implement the solutions.
 */
struct Activity {
    std::string name;
    int time;

    /* Relational operators that allow two activities to be compared so that
     * activties can be stored in a Set.
    */
    bool operator<(const Activity& rhs) const {
        return time < rhs.time;
    }

    bool operator==(const Activity& rhs) const {
        return (name == rhs.name && time == rhs.time);
    }
};

/* Write an Activity to a stream. */
std::ostream& operator<< (std::ostream& out, const Activity& activity);
