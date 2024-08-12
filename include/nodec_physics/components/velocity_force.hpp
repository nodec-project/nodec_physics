#ifndef NODEC_PHYSICS__COMPONENTS__VELOCITY_FORCE_HPP_
#define NODEC_PHYSICS__COMPONENTS__VELOCITY_FORCE_HPP_

#include <nodec/vector3.hpp>

namespace nodec_physics {
namespace components {

/**
 * @brief The VelocityForce component applies the velocity force to the attached entity.
 *
 * Apply the velocity change instantly with a single function call. In contrast
 * to ImpulseForce, VelocityChange will change the velocity of every
 * rigid body the same way regardless of differences in mass. This mode is useful
 * for something like a fleet of differently-sized space ships that you want to
 * control without accounting for differences in mass. In this mode, the unit of
 * the force parameter is applied to the rigid body as distance/time.
 *
 */
struct VelocityForce {
    nodec::Vector3f value;
};

} // namespace components
} // namespace nodec_physics

#endif