/* File Name: activity.cpp
 * Description: Contains the implementation
 * of the << operator function for the Activity struct.
 */

#include "activity.h"
#include <iostream>

/* Prints an Activity to a stream. The output format is
 *
 * <name>, <time> min
 */
std::ostream& operator<<(std::ostream& out, const Activity& activity) {
    out << activity.name << ", " << activity.time << " min";
    return out;
}
