#ifndef NODEC_PHYSICS__COMPONENTS__IMPULSE_FORCE_HPP_
#define NODEC_PHYSICS__COMPONENTS__IMPULSE_FORCE_HPP_

#include <nodec/vector3.hpp>

namespace nodec_physics {
namespace components {

/**
 * @brief The ImpulseForce component applies the impulse force to the attached entity.
 *
 * Apply the impulse force instantly with a single function call. This mode
 * depends on the mass of rigid body so more force must be applied to push or
 * twist higher-mass objects the same amount as lower-mass objects. This mode is
 * useful for applying forces that happen instantly, such as forces from
 * explosions or collisions. In this mode, the unit of the force parameter is
 * applied to the rigid body as mass*distance/time.
 */
struct ImpulseForce {
    nodec::Vector3f value;
};

} // namespace components
} // namespace nodec_physics

#endif