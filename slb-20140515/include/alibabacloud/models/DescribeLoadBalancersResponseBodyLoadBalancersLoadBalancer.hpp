// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODYLOADBALANCERSLOADBALANCER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODYLOADBALANCERSLOADBALANCER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancerTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeTypeAlias, internetChargeTypeAlias_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionIdAlias, regionIdAlias_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeTypeAlias, internetChargeTypeAlias_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionIdAlias, regionIdAlias_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer() = default ;
    DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer(const DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer &) = default ;
    DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer(DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer &&) = default ;
    DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer() = default ;
    DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& operator=(const DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer &) = default ;
    DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& operator=(DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressIPVersion_ == nullptr && return this->addressType_ == nullptr && return this->bandwidth_ == nullptr && return this->createTime_ == nullptr && return this->createTimeStamp_ == nullptr
        && return this->deleteProtection_ == nullptr && return this->instanceChargeType_ == nullptr && return this->internetChargeType_ == nullptr && return this->internetChargeTypeAlias_ == nullptr && return this->loadBalancerId_ == nullptr
        && return this->loadBalancerName_ == nullptr && return this->loadBalancerSpec_ == nullptr && return this->loadBalancerStatus_ == nullptr && return this->masterZoneId_ == nullptr && return this->modificationProtectionReason_ == nullptr
        && return this->modificationProtectionStatus_ == nullptr && return this->networkType_ == nullptr && return this->payType_ == nullptr && return this->regionId_ == nullptr && return this->regionIdAlias_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->slaveZoneId_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // deleteProtection Field Functions 
    bool hasDeleteProtection() const { return this->deleteProtection_ != nullptr;};
    void deleteDeleteProtection() { this->deleteProtection_ = nullptr;};
    inline string deleteProtection() const { DARABONBA_PTR_GET_DEFAULT(deleteProtection_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setDeleteProtection(string deleteProtection) { DARABONBA_PTR_SET_VALUE(deleteProtection_, deleteProtection) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetChargeTypeAlias Field Functions 
    bool hasInternetChargeTypeAlias() const { return this->internetChargeTypeAlias_ != nullptr;};
    void deleteInternetChargeTypeAlias() { this->internetChargeTypeAlias_ = nullptr;};
    inline string internetChargeTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(internetChargeTypeAlias_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setInternetChargeTypeAlias(string internetChargeTypeAlias) { DARABONBA_PTR_SET_VALUE(internetChargeTypeAlias_, internetChargeTypeAlias) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string loadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string masterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // modificationProtectionReason Field Functions 
    bool hasModificationProtectionReason() const { return this->modificationProtectionReason_ != nullptr;};
    void deleteModificationProtectionReason() { this->modificationProtectionReason_ = nullptr;};
    inline string modificationProtectionReason() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionReason_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setModificationProtectionReason(string modificationProtectionReason) { DARABONBA_PTR_SET_VALUE(modificationProtectionReason_, modificationProtectionReason) };


    // modificationProtectionStatus Field Functions 
    bool hasModificationProtectionStatus() const { return this->modificationProtectionStatus_ != nullptr;};
    void deleteModificationProtectionStatus() { this->modificationProtectionStatus_ = nullptr;};
    inline string modificationProtectionStatus() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionStatus_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setModificationProtectionStatus(string modificationProtectionStatus) { DARABONBA_PTR_SET_VALUE(modificationProtectionStatus_, modificationProtectionStatus) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIdAlias Field Functions 
    bool hasRegionIdAlias() const { return this->regionIdAlias_ != nullptr;};
    void deleteRegionIdAlias() { this->regionIdAlias_ = nullptr;};
    inline string regionIdAlias() const { DARABONBA_PTR_GET_DEFAULT(regionIdAlias_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setRegionIdAlias(string regionIdAlias) { DARABONBA_PTR_SET_VALUE(regionIdAlias_, regionIdAlias) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveZoneId Field Functions 
    bool hasSlaveZoneId() const { return this->slaveZoneId_ != nullptr;};
    void deleteSlaveZoneId() { this->slaveZoneId_ = nullptr;};
    inline string slaveZoneId() const { DARABONBA_PTR_GET_DEFAULT(slaveZoneId_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setSlaveZoneId(string slaveZoneId) { DARABONBA_PTR_SET_VALUE(slaveZoneId_, slaveZoneId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancerTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancerTags) };
    inline Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancerTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancerTags) };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setTags(const Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancerTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setTags(Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancerTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The endpoint of the CLB instance.
    std::shared_ptr<string> address_ = nullptr;
    // The IP version that is used by the CLB instance. Valid values: **ipv4** and **ipv6**.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The network type of the CLB instance. Valid values:
    // 
    // *   **internet:** After an Internet-facing CLB instance is created, the system assigns a public IP address to the CLB instance. Then, the CLB instance can forward requests over the Internet.
    // *   **intranet:** After an internal-facing CLB instance is created, the system assigns a private IP address to the CLB instance. Then, the CLB instance can forward requests only over internal networks.
    std::shared_ptr<string> addressType_ = nullptr;
    // The maximum bandwidth of the listener. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The time when the CLB instance was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp when the instance was created.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    // Indicates whether deletion protection is enabled for the CLB instance. Valid values:
    // 
    // *   **on:** Deletion protection is enabled.
    // *   **off:** Deletion protection is disabled.
    std::shared_ptr<string> deleteProtection_ = nullptr;
    // The metering method of the CLB instance. Valid values:
    // 
    // *   **PayBySpec:** pay-by-specification.
    // *   **PayByCLCU:** pay-by-LCU.
    // 
    // >  This parameter takes effect only for accounts registered on the China site (aliyun.com) and when the **PayType** parameter is set to **PayOnDemand**.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of the Internet-facing CLB instance. Valid values:
    // 
    // *   **3:** pay-by-bandwidth (**paybybandwidth**).
    // *   **4:** pay-by-data-transfer (**paybytraffic**).
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The metering method of Internet data transfer. Valid values:
    // 
    // *   **paybybandwidth:** pay-by-bandwidth.
    // *   **paybytraffic:** pay-by-data-transfer.
    std::shared_ptr<string> internetChargeTypeAlias_ = nullptr;
    // The ID of the CLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the CLB instance.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The specification of the CLB instance.
    // 
    // >  Pay-as-you-go CLB instances are not subject to specifications. **slb.lcu.elastic** is returned by default.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
    // The status of the CLB instance. Valid values:
    // 
    // *   **inactive:** The CLB instance is disabled. CLB instances in the inactive state do not forward traffic.
    // *   **active:** The CLB instance runs as expected. By default, newly created CLB instances are in the **active** state.
    // *   **locked:** The CLB instance is locked.
    std::shared_ptr<string> loadBalancerStatus_ = nullptr;
    // The ID of the primary zone to which the CLB instance belongs.
    std::shared_ptr<string> masterZoneId_ = nullptr;
    // The reason why the configuration read-only mode was enabled. The reason must be 1 to 80 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The reason must start with a letter.
    // 
    // > This parameter takes effect only when you set the `ModificationProtectionStatus` parameter to **ConsoleProtection**.
    std::shared_ptr<string> modificationProtectionReason_ = nullptr;
    // Indicates whether the configuration read-only mode is enabled for the CLB instance. Valid values:
    // 
    // *   **NonProtection:** The configuration read-only mode is disabled. In this case, you cannot specify the ModificationProtectionReason parameter. If you specify the `ModificationProtectionReason` parameter, the value is cleared.
    // *   **ConsoleProtection:** The configuration read-only mode is enabled.
    // 
    // >  If you set this parameter to **ConsoleProtection**, you cannot modify the configurations of the CLB instance in the CLB console. However, you can call API operations to modify the configurations of the CLB instance.
    std::shared_ptr<string> modificationProtectionStatus_ = nullptr;
    // The network type of the internal-facing CLB instance. Valid values:
    // 
    // *   **vpc**: VPC
    // *   **Classic**: classic network
    std::shared_ptr<string> networkType_ = nullptr;
    // The billing method of the CLB instance.
    // 
    // *   **PayOnDemand** is returned, which indicates the pay-as-you-go billing method.
    std::shared_ptr<string> payType_ = nullptr;
    // The ID of the region where the CLB instance was deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The region where the CLB instance was deployed.
    std::shared_ptr<string> regionIdAlias_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the secondary zone to which the CLB instance belongs.
    std::shared_ptr<string> slaveZoneId_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancerTags> tags_ = nullptr;
    // The ID of the vSwitch to which the internal-facing CLB instance belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC in which the internal-facing CLB instance was deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
