/**
 * Copyright (c) 2022 Aneesh Chodisetty, Bhargav Kumar Soothram, Joseph Pranadheer Reddy Katakam
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software
 * is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 * @file planner.hpp
 * @author Aneesh Chodisetty (aneeshc@umd.edu)
 * @author Bhargav Kumar Soothram (bsoothra@umd.edu)
 * @author Joseph Pranadheer Reddy Katakam (jkatak@umd.edu)
 * @brief Header file for planner.cpp
 * @version 0.1
 * @date 2022-11-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef INCLUDE_PLANNER_HPP_
#define INCLUDE_PLANNER_HPP_

#include <memory>

// #include "geometry_msgs/msg/transform_stamped.hpp"
// #include "rclcpp/rclcpp.hpp"
// #include "tf2/LinearMath/Quaternion.h"
// #include "tf2_ros/static_transform_broadcaster.h"


class Planner {
    public:
    Planner();
    ~Planner();
    /**
     * @brief Populates locations_ after reading the incoming data from an node
     * 
     */
    void readFrame() {}
    /**
     * @brief Populates transforms_ after computing the new goal using boids' algorithm
     * 
     */
    void setNewPlan() {}

    /**
     * @brief Broadcasts transforms_
     * 
     */
    std::array<int, 20> broadcastNewPlan() {}

    private:
    std::array<int, 20> locations_;
    std::array<int, 20> transforms_;
};

#endif