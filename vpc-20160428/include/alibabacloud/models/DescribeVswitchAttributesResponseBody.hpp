// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVSwitchAttributesResponseBodyRouteTable.hpp>
#include <alibabacloud/models/DescribeVSwitchAttributesResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVSwitchAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteTable, routeTable_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteTable, routeTable_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeVSwitchAttributesResponseBody() = default ;
    DescribeVSwitchAttributesResponseBody(const DescribeVSwitchAttributesResponseBody &) = default ;
    DescribeVSwitchAttributesResponseBody(DescribeVSwitchAttributesResponseBody &&) = default ;
    DescribeVSwitchAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchAttributesResponseBody() = default ;
    DescribeVSwitchAttributesResponseBody& operator=(const DescribeVSwitchAttributesResponseBody &) = default ;
    DescribeVSwitchAttributesResponseBody& operator=(DescribeVSwitchAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableIpAddressCount_ != nullptr
        && this->cidrBlock_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->enabledIpv6_ != nullptr && this->ipv6CidrBlock_ != nullptr
        && this->isDefault_ != nullptr && this->networkAclId_ != nullptr && this->ownerId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->routeTable_ != nullptr && this->shareType_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->vSwitchId_ != nullptr
        && this->vSwitchName_ != nullptr && this->vpcId_ != nullptr && this->zoneId_ != nullptr; };
    // availableIpAddressCount Field Functions 
    bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
    void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
    inline int64_t availableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
    inline DescribeVSwitchAttributesResponseBody& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVSwitchAttributesResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVSwitchAttributesResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVSwitchAttributesResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabledIpv6 Field Functions 
    bool hasEnabledIpv6() const { return this->enabledIpv6_ != nullptr;};
    void deleteEnabledIpv6() { this->enabledIpv6_ = nullptr;};
    inline bool enabledIpv6() const { DARABONBA_PTR_GET_DEFAULT(enabledIpv6_, false) };
    inline DescribeVSwitchAttributesResponseBody& setEnabledIpv6(bool enabledIpv6) { DARABONBA_PTR_SET_VALUE(enabledIpv6_, enabledIpv6) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string ipv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline DescribeVSwitchAttributesResponseBody& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeVSwitchAttributesResponseBody& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVSwitchAttributesResponseBody& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeTable Field Functions 
    bool hasRouteTable() const { return this->routeTable_ != nullptr;};
    void deleteRouteTable() { this->routeTable_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBodyRouteTable & routeTable() const { DARABONBA_PTR_GET_CONST(routeTable_, DescribeVSwitchAttributesResponseBodyRouteTable) };
    inline DescribeVSwitchAttributesResponseBodyRouteTable routeTable() { DARABONBA_PTR_GET(routeTable_, DescribeVSwitchAttributesResponseBodyRouteTable) };
    inline DescribeVSwitchAttributesResponseBody& setRouteTable(const DescribeVSwitchAttributesResponseBodyRouteTable & routeTable) { DARABONBA_PTR_SET_VALUE(routeTable_, routeTable) };
    inline DescribeVSwitchAttributesResponseBody& setRouteTable(DescribeVSwitchAttributesResponseBodyRouteTable && routeTable) { DARABONBA_PTR_SET_RVALUE(routeTable_, routeTable) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline DescribeVSwitchAttributesResponseBody& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVSwitchAttributesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeVSwitchAttributesResponseBodyTags) };
    inline DescribeVSwitchAttributesResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeVSwitchAttributesResponseBodyTags) };
    inline DescribeVSwitchAttributesResponseBody& setTags(const DescribeVSwitchAttributesResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVSwitchAttributesResponseBody& setTags(DescribeVSwitchAttributesResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline DescribeVSwitchAttributesResponseBody& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of available IP addresses.
    std::shared_ptr<int64_t> availableIpAddressCount_ = nullptr;
    // The CIDR block of the vSwitch.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The time when the vSwitch was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the vSwitch.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether IPv6 is enabled for the vSwitch. If you enable IPv6, you must configure the IPv6 CIDR block of the vSwitch. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enabledIpv6_ = nullptr;
    // The IPv6 CIDR block of the vSwitch.
    std::shared_ptr<string> ipv6CidrBlock_ = nullptr;
    // Indicates whether the vSwitch is the default vSwitch. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The network access control list (ACL) rules.
    std::shared_ptr<string> networkAclId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the ACL belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the route table that is associated with the vSwitch.
    std::shared_ptr<DescribeVSwitchAttributesResponseBodyRouteTable> routeTable_ = nullptr;
    // Indicates whether the vSwitch is shared.
    // 
    // *   If no value is returned, the vSwitch is a regular vSwitch.
    // *   If **Shared** is returned, the vSwitch is shared.
    // *   If **Sharing** is returned, the vSwitch is being shared.
    std::shared_ptr<string> shareType_ = nullptr;
    // The status of the vSwitch. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    std::shared_ptr<string> status_ = nullptr;
    // The information about the tags.
    std::shared_ptr<DescribeVSwitchAttributesResponseBodyTags> tags_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The vSwitch name.
    std::shared_ptr<string> vSwitchName_ = nullptr;
    // The ID of the VPC to which the vSwitch belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone to which the vSwitch belongs.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
