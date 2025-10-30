// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTREQUESTZONE_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTREQUESTZONE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class CreateVpcEndpointRequestZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointRequestZone& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointRequestZone& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
    };
    CreateVpcEndpointRequestZone() = default ;
    CreateVpcEndpointRequestZone(const CreateVpcEndpointRequestZone &) = default ;
    CreateVpcEndpointRequestZone(CreateVpcEndpointRequestZone &&) = default ;
    CreateVpcEndpointRequestZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointRequestZone() = default ;
    CreateVpcEndpointRequestZone& operator=(const CreateVpcEndpointRequestZone &) = default ;
    CreateVpcEndpointRequestZone& operator=(CreateVpcEndpointRequestZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6Address_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr && return this->ip_ == nullptr; };
    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline string ipv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
    inline CreateVpcEndpointRequestZone& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateVpcEndpointRequestZone& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateVpcEndpointRequestZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline CreateVpcEndpointRequestZone& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // The IPv6 address of the zone where the endpoint is deployed.
    // 
    // >  You can specify this parameter only if AddressIpVersion is set to DualStack.
    std::shared_ptr<string> ipv6Address_ = nullptr;
    // The ID of the vSwitch for which you want to create the endpoint elastic network interface (ENI) in the zone. You can specify up to 10 vSwitches.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the zone where the endpoint service is deployed.
    // 
    // You can specify up to 10 zones.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The IP address of the zone where the endpoint is deployed.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
