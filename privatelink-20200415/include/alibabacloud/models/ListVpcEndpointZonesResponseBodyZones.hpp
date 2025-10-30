// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTZONESRESPONSEBODYZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTZONESRESPONSEBODYZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointZonesResponseBodyZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_TO_JSON(EniId, eniId_);
      DARABONBA_PTR_TO_JSON(EniIp, eniIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneDomain, zoneDomain_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIpv6Address, zoneIpv6Address_);
      DARABONBA_PTR_TO_JSON(ZoneStatus, zoneStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_FROM_JSON(EniId, eniId_);
      DARABONBA_PTR_FROM_JSON(EniIp, eniIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneDomain, zoneDomain_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIpv6Address, zoneIpv6Address_);
      DARABONBA_PTR_FROM_JSON(ZoneStatus, zoneStatus_);
    };
    ListVpcEndpointZonesResponseBodyZones() = default ;
    ListVpcEndpointZonesResponseBodyZones(const ListVpcEndpointZonesResponseBodyZones &) = default ;
    ListVpcEndpointZonesResponseBodyZones(ListVpcEndpointZonesResponseBodyZones &&) = default ;
    ListVpcEndpointZonesResponseBodyZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointZonesResponseBodyZones() = default ;
    ListVpcEndpointZonesResponseBodyZones& operator=(const ListVpcEndpointZonesResponseBodyZones &) = default ;
    ListVpcEndpointZonesResponseBodyZones& operator=(ListVpcEndpointZonesResponseBodyZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eniId_ == nullptr
        && return this->eniIp_ == nullptr && return this->regionId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneDomain_ == nullptr && return this->zoneId_ == nullptr
        && return this->zoneIpv6Address_ == nullptr && return this->zoneStatus_ == nullptr; };
    // eniId Field Functions 
    bool hasEniId() const { return this->eniId_ != nullptr;};
    void deleteEniId() { this->eniId_ = nullptr;};
    inline string eniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
    inline ListVpcEndpointZonesResponseBodyZones& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


    // eniIp Field Functions 
    bool hasEniIp() const { return this->eniIp_ != nullptr;};
    void deleteEniIp() { this->eniIp_ = nullptr;};
    inline string eniIp() const { DARABONBA_PTR_GET_DEFAULT(eniIp_, "") };
    inline ListVpcEndpointZonesResponseBodyZones& setEniIp(string eniIp) { DARABONBA_PTR_SET_VALUE(eniIp_, eniIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcEndpointZonesResponseBodyZones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListVpcEndpointZonesResponseBodyZones& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneDomain Field Functions 
    bool hasZoneDomain() const { return this->zoneDomain_ != nullptr;};
    void deleteZoneDomain() { this->zoneDomain_ = nullptr;};
    inline string zoneDomain() const { DARABONBA_PTR_GET_DEFAULT(zoneDomain_, "") };
    inline ListVpcEndpointZonesResponseBodyZones& setZoneDomain(string zoneDomain) { DARABONBA_PTR_SET_VALUE(zoneDomain_, zoneDomain) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListVpcEndpointZonesResponseBodyZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIpv6Address Field Functions 
    bool hasZoneIpv6Address() const { return this->zoneIpv6Address_ != nullptr;};
    void deleteZoneIpv6Address() { this->zoneIpv6Address_ = nullptr;};
    inline string zoneIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(zoneIpv6Address_, "") };
    inline ListVpcEndpointZonesResponseBodyZones& setZoneIpv6Address(string zoneIpv6Address) { DARABONBA_PTR_SET_VALUE(zoneIpv6Address_, zoneIpv6Address) };


    // zoneStatus Field Functions 
    bool hasZoneStatus() const { return this->zoneStatus_ != nullptr;};
    void deleteZoneStatus() { this->zoneStatus_ = nullptr;};
    inline string zoneStatus() const { DARABONBA_PTR_GET_DEFAULT(zoneStatus_, "") };
    inline ListVpcEndpointZonesResponseBodyZones& setZoneStatus(string zoneStatus) { DARABONBA_PTR_SET_VALUE(zoneStatus_, zoneStatus) };


  protected:
    // The ID of the endpoint ENI.
    std::shared_ptr<string> eniId_ = nullptr;
    // The IP address of the endpoint ENI.
    std::shared_ptr<string> eniIp_ = nullptr;
    // The region ID of the endpoint.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the vSwitch in the zone. The system automatically creates an endpoint elastic network interface (ENI) in the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The domain name of the zone.
    // 
    // After the endpoint in the zone is connected to the endpoint service, you can access the service resources of the endpoint service by using the domain name of the zone.
    std::shared_ptr<string> zoneDomain_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // Indicates whether the endpoint service supports IPv6. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<string> zoneIpv6Address_ = nullptr;
    // The state of the zone. Valid values:
    // 
    // *   **Creating**: The zone is being created.
    // *   **Wait**: The zone is to be connected.
    // *   **Connected**: The zone is connected.
    // *   **Deleting**: The zone is being deleted.
    // *   **Disconnecting**: The zone is being disconnected.
    // *   **Disconnected**: The zone is disconnected.
    // *   **Connecting**: The zone is being connected.
    std::shared_ptr<string> zoneStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
