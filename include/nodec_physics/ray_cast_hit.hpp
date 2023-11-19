#ifndef NODEC_PHYSICS__RAY_CAST_HIT_HPP_
#define NODEC_PHYSICS__RAY_CAST_HIT_HPP_

#include <nodec/vector3.hpp>
#include <nodec_scene/scene_entity.hpp>

namespace nodec_physics {

struct RayCastHit {
    nodec_scene::SceneEntity entity;
    nodec::Vector3f point;
    nodec::Vector3f normal;
};

} // namespace nodec_physics

#endif