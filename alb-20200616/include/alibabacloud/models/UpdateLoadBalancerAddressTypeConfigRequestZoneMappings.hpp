// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERADDRESSTYPECONFIGREQUESTZONEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERADDRESSTYPECONFIGREQUESTZONEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateLoadBalancerAddressTypeConfigRequestZoneMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerAddressTypeConfigRequestZoneMappings& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(EipType, eipType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerAddressTypeConfigRequestZoneMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(EipType, eipType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateLoadBalancerAddressTypeConfigRequestZoneMappings() = default ;
    UpdateLoadBalancerAddressTypeConfigRequestZoneMappings(const UpdateLoadBalancerAddressTypeConfigRequestZoneMappings &) = default ;
    UpdateLoadBalancerAddressTypeConfigRequestZoneMappings(UpdateLoadBalancerAddressTypeConfigRequestZoneMappings &&) = default ;
    UpdateLoadBalancerAddressTypeConfigRequestZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerAddressTypeConfigRequestZoneMappings() = default ;
    UpdateLoadBalancerAddressTypeConfigRequestZoneMappings& operator=(const UpdateLoadBalancerAddressTypeConfigRequestZoneMappings &) = default ;
    UpdateLoadBalancerAddressTypeConfigRequestZoneMappings& operator=(UpdateLoadBalancerAddressTypeConfigRequestZoneMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationId_ != nullptr
        && this->eipType_ != nullptr && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline UpdateLoadBalancerAddressTypeConfigRequestZoneMappings& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // eipType Field Functions 
    bool hasEipType() const { return this->eipType_ != nullptr;};
    void deleteEipType() { this->eipType_ = nullptr;};
    inline string eipType() const { DARABONBA_PTR_GET_DEFAULT(eipType_, "") };
    inline UpdateLoadBalancerAddressTypeConfigRequestZoneMappings& setEipType(string eipType) { DARABONBA_PTR_SET_VALUE(eipType_, eipType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateLoadBalancerAddressTypeConfigRequestZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateLoadBalancerAddressTypeConfigRequestZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the elastic IP address (EIP). You can specify a maximum of 10 zones.
    // 
    // >  This parameter is required if you want to change the network type from internal-facing to Internet-facing.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The type of the EIP. Valid values:
    // 
    // *   Common (default): indicates an EIP
    // *   Anycast: indicates an Anycast EIP
    // 
    // >  For more information about the regions in which ALB supports Anycast EIPs, see [Limits](https://help.aliyun.com/document_detail/460727.html).
    std::shared_ptr<string> eipType_ = nullptr;
    // The vSwitch in the zone. You can specify only one vSwitch (subnet) in each zone of an ALB instance. You can specify a maximum of 10 zones. If the selected region supports two or more zones, select at least two zones to ensure the high availability of your service.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the ALB instance. You can specify a maximum of 10 zones. If the selected region supports two or more zones, select at least two zones to ensure the high availability of your service.
    // 
    // You can call the [DescribeZones](https://help.aliyun.com/document_detail/189196.html) operation to query the information about the zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
