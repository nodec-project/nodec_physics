#ifndef NODEC_PHYSICS__SERIALIZATION__COMPONENTS__STATIC_RIGID_BODY_HPP_
#define NODEC_PHYSICS__SERIALIZATION__COMPONENTS__STATIC_RIGID_BODY_HPP_

#include <nodec_physics/components/static_rigid_body.hpp>
#include <nodec_scene_serialization/serializable_component.hpp>

namespace nodec_physics {
namespace components {

class SerializableStaticRigidBody : public nodec_scene_serialization::BaseSerializableComponent {
public:
    SerializableStaticRigidBody()
        : BaseSerializableComponent(this) {}

    SerializableStaticRigidBody(const StaticRigidBody &other)
        : BaseSerializableComponent(this) {}

    operator StaticRigidBody() const noexcept {
        return StaticRigidBody{};
    }

    template<class Archive>
    void serialize(Archive &) {
    }
};

} // namespace components
} // namespace nodec_physics

NODEC_SCENE_REGISTER_SERIALIZABLE_COMPONENT(nodec_physics::components::SerializableStaticRigidBody)

#endif