#ifndef NODEC_PHYSICS__SYSTEMS__PHYSICS_SYSTEM_HPP_
#define NODEC_PHYSICS__SYSTEMS__PHYSICS_SYSTEM_HPP_

#include <cstdint>

#include <nodec/macros.hpp>
#include <nodec/optional.hpp>
#include <nodec/signals/signal.hpp>
#include <nodec/vector3.hpp>
#include <nodec_scene/scene_entity.hpp>

#include "../ray_cast_hit.hpp"
#include "../collision_info.hpp"

namespace nodec_physics {

namespace systems {

class PhysicsSystem {
public:
    PhysicsSystem() {}

    virtual ~PhysicsSystem() {}

    /**
     * @brief Casts a ray from the given start point to the end point and returns the first object hit by the ray.
     *
     * @param ray_start The starting point of the ray.
     * @param ray_end The ending point of the ray.
     * @param collision_filter_group The collision group of the ray. Used for collision filtering.
     * @param collision_filter_mask The collision mask of the ray. Only collides with objects whose group matches this mask.
     * @return nodec::optional<RayCastHit> The first object hit by the ray, if any.
     */
    virtual nodec::optional<RayCastHit> ray_cast(
        const nodec::Vector3f &ray_start,
        const nodec::Vector3f &ray_end,
        std::uint32_t collision_filter_group = 0xFFFFFFFF,
        std::uint32_t collision_filter_mask = 0xFFFFFFFF) = 0;

    virtual void contact_test(nodec_scene::SceneEntity entity, std::function<void(CollisionInfo &)> callback) = 0;

    // void set_gravity(const nodec::Vector3f &gravity);

    // nodec::Vector3f gravity();

private:
    NODEC_DISABLE_COPY(PhysicsSystem)
};

} // namespace systems
} // namespace nodec_physics
#endif