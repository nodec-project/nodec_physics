#ifndef NODEC_PHYSICS__COMPONENTS__CENTRAL_FORCE_HPP_
#define NODEC_PHYSICS__COMPONENTS__CENTRAL_FORCE_HPP_

#include <nodec/vector3.hpp>

namespace nodec_physics {

namespace components {

/**
 * @brief The CentralForce component applies the central force to the attached
 * entity.
 *
 * Apply the force in each FixedUpdate over a duration of time. This mode
 * depends on the mass of rigid body so more force must be applied to push or
 * twist higher-mass objects the same amount as lower-mass objects. This mode is
 * useful for setting up realistic physics where it takes more force to move
 * heavier objects. In this mode, the unit of the force parameter is applied to
 * the rigid body as mass*distance/time^2 (F=ma).
 */
struct CentralForce {
    nodec::Vector3f value;
};

} // namespace components
} // namespace nodec_physics

#endif