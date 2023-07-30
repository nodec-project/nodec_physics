#ifndef NODEC_PHYSICS__COMPONENTS__RIGID_BODY_HPP_
#define NODEC_PHYSICS__COMPONENTS__RIGID_BODY_HPP_

#include <nodec/flags.hpp>
#include <nodec/vector3.hpp>

namespace nodec_physics {

namespace components {

enum class RigidBodyConstraints {
    None = 0x00,
    FreezePositionX = 0x01,
    FreezePositionY = 0x01 << 1,
    FreezePositionZ = 0x01 << 2,
    FreezeRotationX = 0x01 << 3,
    FreezeRotationY = 0x01 << 4,
    FreezeRotationZ = 0x01 << 5,
    _nodec_flags_enable
};

struct RigidBody {
    // motion_type: static, dynamic

    float mass{0.0f};

    nodec::Flags<RigidBodyConstraints> constraints;

    nodec::Vector3f linear_velocity;
    nodec::Vector3f angular_velocity;
};

} // namespace components
} // namespace nodec_physics

#endif