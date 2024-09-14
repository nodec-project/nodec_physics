#ifndef NODEC_PHYSICS__SERIALIZATION__COMPONENTS__COLLISION_FILTER_HPP_
#define NODEC_PHYSICS__SERIALIZATION__COMPONENTS__COLLISION_FILTER_HPP_

#include <cstdint>

#include <nodec_physics/components/collision_filter.hpp>
#include <nodec_scene_serialization/serializable_component.hpp>

namespace nodec_physics {
namespace components {

class SerializableCollisionFilter : public nodec_scene_serialization::BaseSerializableComponent {
public:
    SerializableCollisionFilter()
        : BaseSerializableComponent(this) {}

    SerializableCollisionFilter(const CollisionFilter &other)
        : BaseSerializableComponent(this),
          group(other.group),
          mask(other.mask) {}

    operator CollisionFilter() const noexcept {
        CollisionFilter value;
        value.group = group;
        value.mask = mask;
        return value;
    }

    std::uint32_t group{0x00};
    std::uint32_t mask{0xFFFFFFFF};

    template<class Archive>
    void serialize(Archive &archive) {
        archive(cereal::make_nvp("group", group));
        archive(cereal::make_nvp("mask", mask));
    }
};

} // namespace components
} // namespace nodec_physics

NODEC_SCENE_REGISTER_SERIALIZABLE_COMPONENT(nodec_physics::components::SerializableCollisionFilter)

#endif