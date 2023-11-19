#ifndef NODEC_PHYSICS__SERIALIZATION__COMPONENTS__TRIGGER_BODY_HPP_
#define NODEC_PHYSICS__SERIALIZATION__COMPONENTS__TRIGGER_BODY_HPP_

#include <nodec_physics/components/trigger_body.hpp>
#include <nodec_scene_serialization/serializable_component.hpp>

namespace nodec_physics {
namespace components {

class SerializableTriggerBody : public nodec_scene_serialization::BaseSerializableComponent {
public:
    SerializableTriggerBody()
        : BaseSerializableComponent(this) {}

    SerializableTriggerBody(const TriggerBody &other)
        : BaseSerializableComponent(this) {}

    operator TriggerBody() const noexcept {
        return TriggerBody{};
    }

    template<class Archive>
    void serialize(Archive &) {
    }
};

} // namespace components
} // namespace nodec_physics

NODEC_SCENE_REGISTER_SERIALIZABLE_COMPONENT(nodec_physics::components::SerializableTriggerBody)

#endif