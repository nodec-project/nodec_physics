#ifndef NODEC_PHYSICS__COMPONENTS__CENTRAL_FORCE_HPP_
#define NODEC_PHYSICS__COMPONENTS__CENTRAL_FORCE_HPP_

#include <nodec/vector3.hpp>

namespace nodec_physics {

namespace components {

/**
 * @brief The CentralForce component applies the central force to the attached entity.
 * 
 * The unit of the force parameter is applied to the entity as mass * distance / time^2 (F=ma).
 */
struct CentralForce {
    nodec::Vector3f force;
};

} // namespace components
} // namespace nodec_physics

#endif