#ifndef NODEC_PHYSICS__COLLISION_INFO_HPP_
#define NODEC_PHYSICS__COLLISION_INFO_HPP_

#include <nodec_scene/scene_entity.hpp>

namespace nodec_physics {

struct CollisionInfo {
    nodec_scene::SceneEntity self;
    nodec_scene::SceneEntity other;

    // int num_of_contacts{0};
};

} // namespace nodec_physics

#endif