// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERZONESREQUESTZONEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERZONESREQUESTZONEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class UpdateLoadBalancerZonesRequestZoneMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerZonesRequestZoneMappings& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(EipType, eipType_);
      DARABONBA_PTR_TO_JSON(PrivateIPv4Address, privateIPv4Address_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerZonesRequestZoneMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(EipType, eipType_);
      DARABONBA_PTR_FROM_JSON(PrivateIPv4Address, privateIPv4Address_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateLoadBalancerZonesRequestZoneMappings() = default ;
    UpdateLoadBalancerZonesRequestZoneMappings(const UpdateLoadBalancerZonesRequestZoneMappings &) = default ;
    UpdateLoadBalancerZonesRequestZoneMappings(UpdateLoadBalancerZonesRequestZoneMappings &&) = default ;
    UpdateLoadBalancerZonesRequestZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerZonesRequestZoneMappings() = default ;
    UpdateLoadBalancerZonesRequestZoneMappings& operator=(const UpdateLoadBalancerZonesRequestZoneMappings &) = default ;
    UpdateLoadBalancerZonesRequestZoneMappings& operator=(UpdateLoadBalancerZonesRequestZoneMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationId_ != nullptr
        && this->eipType_ != nullptr && this->privateIPv4Address_ != nullptr && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline UpdateLoadBalancerZonesRequestZoneMappings& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // eipType Field Functions 
    bool hasEipType() const { return this->eipType_ != nullptr;};
    void deleteEipType() { this->eipType_ = nullptr;};
    inline string eipType() const { DARABONBA_PTR_GET_DEFAULT(eipType_, "") };
    inline UpdateLoadBalancerZonesRequestZoneMappings& setEipType(string eipType) { DARABONBA_PTR_SET_VALUE(eipType_, eipType) };


    // privateIPv4Address Field Functions 
    bool hasPrivateIPv4Address() const { return this->privateIPv4Address_ != nullptr;};
    void deletePrivateIPv4Address() { this->privateIPv4Address_ = nullptr;};
    inline string privateIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(privateIPv4Address_, "") };
    inline UpdateLoadBalancerZonesRequestZoneMappings& setPrivateIPv4Address(string privateIPv4Address) { DARABONBA_PTR_SET_VALUE(privateIPv4Address_, privateIPv4Address) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateLoadBalancerZonesRequestZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateLoadBalancerZonesRequestZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the elastic IP address (EIP) or Anycast EIP.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The type of the EIP. Valid values:
    // 
    // *   **Common**: an EIP
    // *   **Anycast**: an Anycast EIP
    // 
    // >  For regions that support Anycast EIPs, see [Limits](https://help.aliyun.com/document_detail/470000.html).This parameter is required if **AddressType** is set to **Internet**.
    std::shared_ptr<string> eipType_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> privateIPv4Address_ = nullptr;
    // The ID of the vSwitch in the zone. By default, each zone uses one vSwitch and one subnet.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID. You can call the [DescribeZones](https://help.aliyun.com/document_detail/443890.html) operation to query the most recent zone list.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
