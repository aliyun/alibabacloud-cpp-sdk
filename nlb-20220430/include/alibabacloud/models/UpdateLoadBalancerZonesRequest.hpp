// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class UpdateLoadBalancerZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    UpdateLoadBalancerZonesRequest() = default ;
    UpdateLoadBalancerZonesRequest(const UpdateLoadBalancerZonesRequest &) = default ;
    UpdateLoadBalancerZonesRequest(UpdateLoadBalancerZonesRequest &&) = default ;
    UpdateLoadBalancerZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerZonesRequest() = default ;
    UpdateLoadBalancerZonesRequest& operator=(const UpdateLoadBalancerZonesRequest &) = default ;
    UpdateLoadBalancerZonesRequest& operator=(UpdateLoadBalancerZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_TO_JSON(EipType, eipType_);
        DARABONBA_PTR_TO_JSON(PrivateIPv4Address, privateIPv4Address_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_FROM_JSON(EipType, eipType_);
        DARABONBA_PTR_FROM_JSON(PrivateIPv4Address, privateIPv4Address_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ZoneMappings() = default ;
      ZoneMappings(const ZoneMappings &) = default ;
      ZoneMappings(ZoneMappings &&) = default ;
      ZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneMappings() = default ;
      ZoneMappings& operator=(const ZoneMappings &) = default ;
      ZoneMappings& operator=(ZoneMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->eipType_ == nullptr && this->privateIPv4Address_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // allocationId Field Functions 
      bool hasAllocationId() const { return this->allocationId_ != nullptr;};
      void deleteAllocationId() { this->allocationId_ = nullptr;};
      inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
      inline ZoneMappings& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


      // eipType Field Functions 
      bool hasEipType() const { return this->eipType_ != nullptr;};
      void deleteEipType() { this->eipType_ = nullptr;};
      inline string getEipType() const { DARABONBA_PTR_GET_DEFAULT(eipType_, "") };
      inline ZoneMappings& setEipType(string eipType) { DARABONBA_PTR_SET_VALUE(eipType_, eipType) };


      // privateIPv4Address Field Functions 
      bool hasPrivateIPv4Address() const { return this->privateIPv4Address_ != nullptr;};
      void deletePrivateIPv4Address() { this->privateIPv4Address_ = nullptr;};
      inline string getPrivateIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(privateIPv4Address_, "") };
      inline ZoneMappings& setPrivateIPv4Address(string privateIPv4Address) { DARABONBA_PTR_SET_VALUE(privateIPv4Address_, privateIPv4Address) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the elastic IP address (EIP) or Anycast EIP.
      shared_ptr<string> allocationId_ {};
      // The type of the EIP. Valid values:
      // 
      // *   **Common**: an EIP
      // *   **Anycast**: an Anycast EIP
      // 
      // >  For regions that support Anycast EIPs, see [Limits](https://help.aliyun.com/document_detail/470000.html).This parameter is required if **AddressType** is set to **Internet**.
      shared_ptr<string> eipType_ {};
      // The private IP address.
      shared_ptr<string> privateIPv4Address_ {};
      // The ID of the vSwitch in the zone. By default, each zone uses one vSwitch and one subnet.
      // 
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
      // The zone ID. You can call the [DescribeZones](https://help.aliyun.com/document_detail/443890.html) operation to query the most recent zone list.
      // 
      // This parameter is required.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->loadBalancerId_ == nullptr && this->regionId_ == nullptr && this->zoneMappings_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateLoadBalancerZonesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateLoadBalancerZonesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline UpdateLoadBalancerZonesRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLoadBalancerZonesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<UpdateLoadBalancerZonesRequest::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<UpdateLoadBalancerZonesRequest::ZoneMappings>) };
    inline vector<UpdateLoadBalancerZonesRequest::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<UpdateLoadBalancerZonesRequest::ZoneMappings>) };
    inline UpdateLoadBalancerZonesRequest& setZoneMappings(const vector<UpdateLoadBalancerZonesRequest::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline UpdateLoadBalancerZonesRequest& setZoneMappings(vector<UpdateLoadBalancerZonesRequest::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. Only ASCII characters are allowed.
    // 
    // >  If you do not set this parameter, the value of **RequestId** is used.**** The value of **RequestId** is different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: validates the request without performing the operation. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the validation, the corresponding error message is returned. If the request passes the validation, the `DryRunOperation` error code is returned.
    // *   **false** (default): validates the request and performs the request. If the request passes the validation, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the NLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The ID of region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The mappings between the zones and the vSwitches. You can specify up to 10 zones.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateLoadBalancerZonesRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
