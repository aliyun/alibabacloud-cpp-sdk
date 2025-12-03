// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancersRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(ServerIntranetAddress, serverIntranetAddress_);
      DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(ServerIntranetAddress, serverIntranetAddress_);
      DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeLoadBalancersRequest() = default ;
    DescribeLoadBalancersRequest(const DescribeLoadBalancersRequest &) = default ;
    DescribeLoadBalancersRequest(DescribeLoadBalancersRequest &&) = default ;
    DescribeLoadBalancersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancersRequest() = default ;
    DescribeLoadBalancersRequest& operator=(const DescribeLoadBalancersRequest &) = default ;
    DescribeLoadBalancersRequest& operator=(DescribeLoadBalancersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressIPVersion_ == nullptr && return this->addressType_ == nullptr && return this->internetChargeType_ == nullptr && return this->loadBalancerId_ == nullptr && return this->loadBalancerName_ == nullptr
        && return this->loadBalancerStatus_ == nullptr && return this->masterZoneId_ == nullptr && return this->networkType_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->payType_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->serverId_ == nullptr && return this->serverIntranetAddress_ == nullptr && return this->slaveZoneId_ == nullptr
        && return this->tag_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeLoadBalancersRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeLoadBalancersRequest& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeLoadBalancersRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeLoadBalancersRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancersRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline DescribeLoadBalancersRequest& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string loadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline DescribeLoadBalancersRequest& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string masterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline DescribeLoadBalancersRequest& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeLoadBalancersRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeLoadBalancersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLoadBalancersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLoadBalancersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLoadBalancersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeLoadBalancersRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLoadBalancersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeLoadBalancersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeLoadBalancersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeLoadBalancersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline DescribeLoadBalancersRequest& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // serverIntranetAddress Field Functions 
    bool hasServerIntranetAddress() const { return this->serverIntranetAddress_ != nullptr;};
    void deleteServerIntranetAddress() { this->serverIntranetAddress_ = nullptr;};
    inline string serverIntranetAddress() const { DARABONBA_PTR_GET_DEFAULT(serverIntranetAddress_, "") };
    inline DescribeLoadBalancersRequest& setServerIntranetAddress(string serverIntranetAddress) { DARABONBA_PTR_SET_VALUE(serverIntranetAddress_, serverIntranetAddress) };


    // slaveZoneId Field Functions 
    bool hasSlaveZoneId() const { return this->slaveZoneId_ != nullptr;};
    void deleteSlaveZoneId() { this->slaveZoneId_ = nullptr;};
    inline string slaveZoneId() const { DARABONBA_PTR_GET_DEFAULT(slaveZoneId_, "") };
    inline DescribeLoadBalancersRequest& setSlaveZoneId(string slaveZoneId) { DARABONBA_PTR_SET_VALUE(slaveZoneId_, slaveZoneId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeLoadBalancersRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeLoadBalancersRequestTag>) };
    inline vector<DescribeLoadBalancersRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeLoadBalancersRequestTag>) };
    inline DescribeLoadBalancersRequest& setTag(const vector<DescribeLoadBalancersRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeLoadBalancersRequest& setTag(vector<DescribeLoadBalancersRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeLoadBalancersRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeLoadBalancersRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeLoadBalancersRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The IP address that the CLB instance uses to provide services.
    std::shared_ptr<string> address_ = nullptr;
    // The IP version that is used by the CLB instance. Valid values: **ipv4** and **ipv6**.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The network type of the CLB instance. Valid values:
    // 
    // *   **internet:** After an Internet-facing CLB instance is created, the system assigns a public IP address to the CLB instance. Then, the CLB instance can forward requests over the Internet.
    // *   **intranet:** After an internal-facing CLB instance is created, the system assigns a private IP address to the CLB instance. Then, the CLB instance can forward requests only over internal networks.
    std::shared_ptr<string> addressType_ = nullptr;
    // The metering method of Internet data transfer. Valid values:
    // 
    // *   **paybybandwidth:** pay-by-bandwidth.
    // *   **paybytraffic:** pay-by-data-transfer.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The ID of the CLB instance.
    // 
    // You can specify up to 10 IDs. Separate multiple IDs with commas (,).
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the CLB instance.
    // 
    // The name must be 1 to 80 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    // 
    // You can specify up to 10 names. Separate multiple names with commas (,).
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The status of the CLB instance. Valid values:
    // 
    // *   **inactive:** The CLB instance is disabled. CLB instances in the inactive state do not forward traffic.
    // *   **active:** The CLB instance runs as expected. By default, newly created CLB instances are in the **active** state.
    // *   **locked:** The CLB instance is locked. After a CLB instance expires, it is locked for seven days. A locked CLB instance cannot forward traffic and you cannot perform operations on the locked CLB instance. However, other settings such as the IP address are retained.
    std::shared_ptr<string> loadBalancerStatus_ = nullptr;
    // The ID of the primary zone to which the CLB instance belongs.
    std::shared_ptr<string> masterZoneId_ = nullptr;
    // The network type of the internal-facing CLB instance. Valid values:
    // 
    // *   **vpc**: VPC
    // *   **Classic**: classic network
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Valid values: **1** to **100**.
    // 
    // >  If you specify the **PageSize** parameter, you must also specify the **PageNumber** parameter.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The billing method of the CLB instance. Valid values:
    // 
    // *   Set the value to **PayOnDemand**.
    std::shared_ptr<string> payType_ = nullptr;
    // The ID of the region where the CLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/2401682.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the backend server that is added to the CLB instance.
    std::shared_ptr<string> serverId_ = nullptr;
    // The private IP address of the backend server that is added to the CLB instance.
    // 
    // You can specify multiple IP addresses. Separate multiple IP addresses with commas (,).
    std::shared_ptr<string> serverIntranetAddress_ = nullptr;
    // The ID of the secondary zone to which the CLB instance belongs.
    // 
    // CLB instances on Alibaba Finance Cloud do not support cross-zone deployment.
    std::shared_ptr<string> slaveZoneId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<DescribeLoadBalancersRequestTag>> tag_ = nullptr;
    // The tags that are added to the CLB instance. The tags must be key-value pairs that are contained in a JSON dictionary.
    // 
    // You can specify up to 10 tags in each call.
    std::shared_ptr<string> tags_ = nullptr;
    // The ID of the vSwitch to which the CLB instance belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the CLB instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
