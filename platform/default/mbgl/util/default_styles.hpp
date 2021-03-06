#pragma once

#include <vector>
#include <string>

namespace mbgl {
namespace util {
namespace default_styles {

struct DefaultStyle {
    const char* url;
    const char* name;
    const unsigned currentVersion;
};

extern const DefaultStyle streets;
extern const DefaultStyle outdoors;
extern const DefaultStyle light;
extern const DefaultStyle dark;
extern const DefaultStyle satellite;
extern const DefaultStyle satelliteStreets;
extern const DefaultStyle trafficDay;
extern const DefaultStyle trafficNight;

const DefaultStyle orderedStyles[] = {
    streets, outdoors, light, dark, satellite, satelliteStreets,
    trafficDay, trafficNight,
};
const size_t numOrderedStyles = sizeof(orderedStyles) / sizeof(DefaultStyle);

} // end namespace default_styles
} // end namespace util
} // end namespace mbgl
