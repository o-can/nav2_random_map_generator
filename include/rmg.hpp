#ifndef rmg_hpp
#define rmg_hpp
#include <opencv2/opencv.hpp>
#include "map.hpp"

using namespace cv;

class RMG {
    private:
        int obstacle_number;
        int robot_size;
        int pixel_value;
        int thickness;
        int shift;
        LineTypes lineType;
        bool show_map;
        int max_obstacle_radius;
        int min_obstacle_radius;

    public:
        RMG();
        void generateMap();
        bool checkArea(Map orig, Map temp, Map obs);
        int randomNumberGenerator(int min, int max);
};

#endif // map_hpp