#ifndef NODEC_PHYSICS__SERIALIZATION__COMPONENTS__RIGID_BODY_HPP_
#define NODEC_PHYSICS__SERIALIZATION__COMPONENTS__RIGID_BODY_HPP_

#include <nodec/serialization/flags.hpp>

#include <nodec_physics/components/rigid_body.hpp>
#include <nodec_scene_serialization/serializable_component.hpp>

namespace nodec_physics {
namespace components {

class SerializableRigidBody : public nodec_scene_serialization::BaseSerializableComponent {
public:
    SerializableRigidBody()
        : BaseSerializableComponent(this) {}

    SerializableRigidBody(const RigidBody &other)
        : BaseSerializableComponent(this),
          body_type(other.body_type),
          mass(other.mass),
          constraints(other.constraints) {}

    operator RigidBody() const noexcept {
        RigidBody value;
        value.body_type = body_type;
        value.mass = mass;
        value.constraints = constraints;
        return value;
    }

    RigidBody::BodyType body_type{RigidBody::BodyType::Dynamic};
    float mass{1.0f};
    nodec::Flags<RigidBodyConstraints> constraints;

    template<class Archive>
    void serialize(Archive &archive) {
        archive(cereal::make_nvp("body_type", body_type));
        archive(cereal::make_nvp("mass", mass));
        archive(cereal::make_nvp("constraints", constraints));
    }
};
} // namespace components
} // namespace nodec_physics

NODEC_SCENE_REGISTER_SERIALIZABLE_COMPONENT(nodec_physics::components::SerializableRigidBody)

#endif