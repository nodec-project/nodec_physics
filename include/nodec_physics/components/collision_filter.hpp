#ifndef NODEC_PHYSICS__COMPONENTS__COLLISION_FILTER_HPP_
#define NODEC_PHYSICS__COMPONENTS__COLLISION_FILTER_HPP_

#include <cstdint>

namespace nodec_physics {
namespace components {

struct CollisionFilter {
    std::uint32_t group{0x01};
    std::uint32_t mask{0xFFFFFFFF};
};

} // namespace components
} // namespace nodec_physics

#endif