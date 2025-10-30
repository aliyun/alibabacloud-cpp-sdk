// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTCONNECTIONSRESPONSEBODYCONNECTIONSZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTCONNECTIONSRESPONSEBODYCONNECTIONSZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointConnectionsResponseBodyConnectionsZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointConnectionsResponseBodyConnectionsZones& obj) { 
      DARABONBA_PTR_TO_JSON(EniId, eniId_);
      DARABONBA_PTR_TO_JSON(ReplacedEniId, replacedEniId_);
      DARABONBA_PTR_TO_JSON(ReplacedResourceId, replacedResourceId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneDomain, zoneDomain_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneStatus, zoneStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointConnectionsResponseBodyConnectionsZones& obj) { 
      DARABONBA_PTR_FROM_JSON(EniId, eniId_);
      DARABONBA_PTR_FROM_JSON(ReplacedEniId, replacedEniId_);
      DARABONBA_PTR_FROM_JSON(ReplacedResourceId, replacedResourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneDomain, zoneDomain_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneStatus, zoneStatus_);
    };
    ListVpcEndpointConnectionsResponseBodyConnectionsZones() = default ;
    ListVpcEndpointConnectionsResponseBodyConnectionsZones(const ListVpcEndpointConnectionsResponseBodyConnectionsZones &) = default ;
    ListVpcEndpointConnectionsResponseBodyConnectionsZones(ListVpcEndpointConnectionsResponseBodyConnectionsZones &&) = default ;
    ListVpcEndpointConnectionsResponseBodyConnectionsZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointConnectionsResponseBodyConnectionsZones() = default ;
    ListVpcEndpointConnectionsResponseBodyConnectionsZones& operator=(const ListVpcEndpointConnectionsResponseBodyConnectionsZones &) = default ;
    ListVpcEndpointConnectionsResponseBodyConnectionsZones& operator=(ListVpcEndpointConnectionsResponseBodyConnectionsZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eniId_ == nullptr
        && return this->replacedEniId_ == nullptr && return this->replacedResourceId_ == nullptr && return this->resourceId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneDomain_ == nullptr
        && return this->zoneId_ == nullptr && return this->zoneStatus_ == nullptr; };
    // eniId Field Functions 
    bool hasEniId() const { return this->eniId_ != nullptr;};
    void deleteEniId() { this->eniId_ = nullptr;};
    inline string eniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnectionsZones& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


    // replacedEniId Field Functions 
    bool hasReplacedEniId() const { return this->replacedEniId_ != nullptr;};
    void deleteReplacedEniId() { this->replacedEniId_ = nullptr;};
    inline string replacedEniId() const { DARABONBA_PTR_GET_DEFAULT(replacedEniId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnectionsZones& setReplacedEniId(string replacedEniId) { DARABONBA_PTR_SET_VALUE(replacedEniId_, replacedEniId) };


    // replacedResourceId Field Functions 
    bool hasReplacedResourceId() const { return this->replacedResourceId_ != nullptr;};
    void deleteReplacedResourceId() { this->replacedResourceId_ = nullptr;};
    inline string replacedResourceId() const { DARABONBA_PTR_GET_DEFAULT(replacedResourceId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnectionsZones& setReplacedResourceId(string replacedResourceId) { DARABONBA_PTR_SET_VALUE(replacedResourceId_, replacedResourceId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnectionsZones& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnectionsZones& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneDomain Field Functions 
    bool hasZoneDomain() const { return this->zoneDomain_ != nullptr;};
    void deleteZoneDomain() { this->zoneDomain_ = nullptr;};
    inline string zoneDomain() const { DARABONBA_PTR_GET_DEFAULT(zoneDomain_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnectionsZones& setZoneDomain(string zoneDomain) { DARABONBA_PTR_SET_VALUE(zoneDomain_, zoneDomain) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnectionsZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneStatus Field Functions 
    bool hasZoneStatus() const { return this->zoneStatus_ != nullptr;};
    void deleteZoneStatus() { this->zoneStatus_ = nullptr;};
    inline string zoneStatus() const { DARABONBA_PTR_GET_DEFAULT(zoneStatus_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnectionsZones& setZoneStatus(string zoneStatus) { DARABONBA_PTR_SET_VALUE(zoneStatus_, zoneStatus) };


  protected:
    // The endpoint ENI ID.
    std::shared_ptr<string> eniId_ = nullptr;
    // The ID of the replaced endpoint ENI in smooth migration scenarios.
    std::shared_ptr<string> replacedEniId_ = nullptr;
    // The ID of the replaced service resource in smooth migration scenarios.
    std::shared_ptr<string> replacedResourceId_ = nullptr;
    // The service resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The ID of the vSwitch to which the endpoint belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The domain name of the zone.
    std::shared_ptr<string> zoneDomain_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The state of the zone. Valid values:
    // 
    // *   **Creating**: The zone is being created.
    // *   **Wait**: The zone is to be connected.
    // *   **Connected**: The zone is connected.
    // *   **Deleting**: The zone is being deleted.
    // *   **Disconnecting**: The zone is being disconnected.
    // *   **Disconnected**: The zone is disconnected.
    // *   **Connecting**: The zone is being connected.
    // *   **Migrating**: The zone is being migrated.
    // *   **Migrated**: The zone is migrated.
    std::shared_ptr<string> zoneStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
