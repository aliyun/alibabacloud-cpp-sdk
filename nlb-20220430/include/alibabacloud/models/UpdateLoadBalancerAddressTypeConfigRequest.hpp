// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERADDRESSTYPECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERADDRESSTYPECONFIGREQUEST_HPP_
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
  class UpdateLoadBalancerAddressTypeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerAddressTypeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerAddressTypeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    UpdateLoadBalancerAddressTypeConfigRequest() = default ;
    UpdateLoadBalancerAddressTypeConfigRequest(const UpdateLoadBalancerAddressTypeConfigRequest &) = default ;
    UpdateLoadBalancerAddressTypeConfigRequest(UpdateLoadBalancerAddressTypeConfigRequest &&) = default ;
    UpdateLoadBalancerAddressTypeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerAddressTypeConfigRequest() = default ;
    UpdateLoadBalancerAddressTypeConfigRequest& operator=(const UpdateLoadBalancerAddressTypeConfigRequest &) = default ;
    UpdateLoadBalancerAddressTypeConfigRequest& operator=(UpdateLoadBalancerAddressTypeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_TO_JSON(EipType, eipType_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_FROM_JSON(EipType, eipType_);
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
        && this->eipType_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
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
      // The ID of the elastic IP address (EIP).
      shared_ptr<string> allocationId_ {};
      // The type of the EIP. Valid values:
      // 
      // *   **Common**: an EIP
      // *   **Anycast**: an Anycast EIP
      // 
      // >  This parameter is required only if **AddressType** is set to **Internet**.
      shared_ptr<string> eipType_ {};
      // The ID of the vSwitch in the zone. You can specify only one vSwitch (subnet) in each zone of an NLB instance.
      shared_ptr<string> vSwitchId_ {};
      // The zone ID of the NLB instance.
      // 
      // You can call the [DescribeZones](https://help.aliyun.com/document_detail/443890.html) operation to query the most recent zone list.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->addressType_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->loadBalancerId_ == nullptr && this->regionId_ == nullptr && this->zoneMappings_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline UpdateLoadBalancerAddressTypeConfigRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateLoadBalancerAddressTypeConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateLoadBalancerAddressTypeConfigRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline UpdateLoadBalancerAddressTypeConfigRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLoadBalancerAddressTypeConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings>) };
    inline vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings>) };
    inline UpdateLoadBalancerAddressTypeConfigRequest& setZoneMappings(const vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline UpdateLoadBalancerAddressTypeConfigRequest& setZoneMappings(vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The new network type. Valid values:
    // 
    // *   **Internet**: The nodes of an Internet-facing NLB instance have public IP addresses. The DNS name of an Internet-facing NLB instance is publicly resolvable to the public IP addresses of the nodes. Therefore, Internet-facing NLB instances can route requests from clients over the Internet.
    // *   **Intranet**: The nodes of an internal-facing NLB instance have only private IP addresses. The DNS name of an internal-facing NLB instance is publicly resolvable to the private IP addresses of the nodes. Therefore, internal-facing NLB instances can route requests only from clients with access to the virtual private cloud (VPC) for the NLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> addressType_ {};
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate this value. Ensure that the value is unique among all requests. Only ASCII characters are allowed.
    // 
    // >  If you do not specify this parameter, the value of **RequestId** is used.**** **RequestId** of each request is different.
    shared_ptr<string> clientToken_ {};
    // Perform a dry run without actually making the request. Valid values are:
    // 
    // *   **true**: Perform only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the check, an error message specifying the issue is returned. If the request passes, the `DryRunOperation` error code is returned.
    // *   **false** (default): Check the request and perform the operation. If the request passes the check, a 2xx HTTP status code is returned, and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the NLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The mappings between zones and vSwitches. You can specify up to 10 zones.
    shared_ptr<vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
