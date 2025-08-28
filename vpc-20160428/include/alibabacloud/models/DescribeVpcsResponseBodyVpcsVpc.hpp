// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcIpv6CidrBlocks.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcNatGatewayIds.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcRouterTableIds.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcSecondaryCidrBlocks.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcTags.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcUserCidrs.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcVSwitchIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcsResponseBodyVpcsVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBodyVpcsVpc& obj) { 
      DARABONBA_PTR_TO_JSON(CenStatus, cenStatus_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetStatus, dhcpOptionsSetStatus_);
      DARABONBA_PTR_TO_JSON(DnsHostnameStatus, dnsHostnameStatus_);
      DARABONBA_PTR_TO_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouterTableIds, routerTableIds_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserCidrs, userCidrs_);
      DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBodyVpcsVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(CenStatus, cenStatus_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetStatus, dhcpOptionsSetStatus_);
      DARABONBA_PTR_FROM_JSON(DnsHostnameStatus, dnsHostnameStatus_);
      DARABONBA_PTR_FROM_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouterTableIds, routerTableIds_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserCidrs, userCidrs_);
      DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcsResponseBodyVpcsVpc() = default ;
    DescribeVpcsResponseBodyVpcsVpc(const DescribeVpcsResponseBodyVpcsVpc &) = default ;
    DescribeVpcsResponseBodyVpcsVpc(DescribeVpcsResponseBodyVpcsVpc &&) = default ;
    DescribeVpcsResponseBodyVpcsVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBodyVpcsVpc() = default ;
    DescribeVpcsResponseBodyVpcsVpc& operator=(const DescribeVpcsResponseBodyVpcsVpc &) = default ;
    DescribeVpcsResponseBodyVpcsVpc& operator=(DescribeVpcsResponseBodyVpcsVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenStatus_ != nullptr
        && this->cidrBlock_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->dhcpOptionsSetId_ != nullptr && this->dhcpOptionsSetStatus_ != nullptr
        && this->dnsHostnameStatus_ != nullptr && this->enabledIpv6_ != nullptr && this->ipv6CidrBlock_ != nullptr && this->ipv6CidrBlocks_ != nullptr && this->isDefault_ != nullptr
        && this->natGatewayIds_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->routerTableIds_ != nullptr
        && this->secondaryCidrBlocks_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->userCidrs_ != nullptr && this->VRouterId_ != nullptr
        && this->vSwitchIds_ != nullptr && this->vpcId_ != nullptr && this->vpcName_ != nullptr; };
    // cenStatus Field Functions 
    bool hasCenStatus() const { return this->cenStatus_ != nullptr;};
    void deleteCenStatus() { this->cenStatus_ = nullptr;};
    inline string cenStatus() const { DARABONBA_PTR_GET_DEFAULT(cenStatus_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setCenStatus(string cenStatus) { DARABONBA_PTR_SET_VALUE(cenStatus_, cenStatus) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dhcpOptionsSetId Field Functions 
    bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
    void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
    inline string dhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


    // dhcpOptionsSetStatus Field Functions 
    bool hasDhcpOptionsSetStatus() const { return this->dhcpOptionsSetStatus_ != nullptr;};
    void deleteDhcpOptionsSetStatus() { this->dhcpOptionsSetStatus_ = nullptr;};
    inline string dhcpOptionsSetStatus() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetStatus_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setDhcpOptionsSetStatus(string dhcpOptionsSetStatus) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetStatus_, dhcpOptionsSetStatus) };


    // dnsHostnameStatus Field Functions 
    bool hasDnsHostnameStatus() const { return this->dnsHostnameStatus_ != nullptr;};
    void deleteDnsHostnameStatus() { this->dnsHostnameStatus_ = nullptr;};
    inline string dnsHostnameStatus() const { DARABONBA_PTR_GET_DEFAULT(dnsHostnameStatus_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setDnsHostnameStatus(string dnsHostnameStatus) { DARABONBA_PTR_SET_VALUE(dnsHostnameStatus_, dnsHostnameStatus) };


    // enabledIpv6 Field Functions 
    bool hasEnabledIpv6() const { return this->enabledIpv6_ != nullptr;};
    void deleteEnabledIpv6() { this->enabledIpv6_ = nullptr;};
    inline bool enabledIpv6() const { DARABONBA_PTR_GET_DEFAULT(enabledIpv6_, false) };
    inline DescribeVpcsResponseBodyVpcsVpc& setEnabledIpv6(bool enabledIpv6) { DARABONBA_PTR_SET_VALUE(enabledIpv6_, enabledIpv6) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string ipv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // ipv6CidrBlocks Field Functions 
    bool hasIpv6CidrBlocks() const { return this->ipv6CidrBlocks_ != nullptr;};
    void deleteIpv6CidrBlocks() { this->ipv6CidrBlocks_ = nullptr;};
    inline const Models::DescribeVpcsResponseBodyVpcsVpcIpv6CidrBlocks & ipv6CidrBlocks() const { DARABONBA_PTR_GET_CONST(ipv6CidrBlocks_, Models::DescribeVpcsResponseBodyVpcsVpcIpv6CidrBlocks) };
    inline Models::DescribeVpcsResponseBodyVpcsVpcIpv6CidrBlocks ipv6CidrBlocks() { DARABONBA_PTR_GET(ipv6CidrBlocks_, Models::DescribeVpcsResponseBodyVpcsVpcIpv6CidrBlocks) };
    inline DescribeVpcsResponseBodyVpcsVpc& setIpv6CidrBlocks(const Models::DescribeVpcsResponseBodyVpcsVpcIpv6CidrBlocks & ipv6CidrBlocks) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };
    inline DescribeVpcsResponseBodyVpcsVpc& setIpv6CidrBlocks(Models::DescribeVpcsResponseBodyVpcsVpcIpv6CidrBlocks && ipv6CidrBlocks) { DARABONBA_PTR_SET_RVALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeVpcsResponseBodyVpcsVpc& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // natGatewayIds Field Functions 
    bool hasNatGatewayIds() const { return this->natGatewayIds_ != nullptr;};
    void deleteNatGatewayIds() { this->natGatewayIds_ = nullptr;};
    inline const Models::DescribeVpcsResponseBodyVpcsVpcNatGatewayIds & natGatewayIds() const { DARABONBA_PTR_GET_CONST(natGatewayIds_, Models::DescribeVpcsResponseBodyVpcsVpcNatGatewayIds) };
    inline Models::DescribeVpcsResponseBodyVpcsVpcNatGatewayIds natGatewayIds() { DARABONBA_PTR_GET(natGatewayIds_, Models::DescribeVpcsResponseBodyVpcsVpcNatGatewayIds) };
    inline DescribeVpcsResponseBodyVpcsVpc& setNatGatewayIds(const Models::DescribeVpcsResponseBodyVpcsVpcNatGatewayIds & natGatewayIds) { DARABONBA_PTR_SET_VALUE(natGatewayIds_, natGatewayIds) };
    inline DescribeVpcsResponseBodyVpcsVpc& setNatGatewayIds(Models::DescribeVpcsResponseBodyVpcsVpcNatGatewayIds && natGatewayIds) { DARABONBA_PTR_SET_RVALUE(natGatewayIds_, natGatewayIds) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVpcsResponseBodyVpcsVpc& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routerTableIds Field Functions 
    bool hasRouterTableIds() const { return this->routerTableIds_ != nullptr;};
    void deleteRouterTableIds() { this->routerTableIds_ = nullptr;};
    inline const Models::DescribeVpcsResponseBodyVpcsVpcRouterTableIds & routerTableIds() const { DARABONBA_PTR_GET_CONST(routerTableIds_, Models::DescribeVpcsResponseBodyVpcsVpcRouterTableIds) };
    inline Models::DescribeVpcsResponseBodyVpcsVpcRouterTableIds routerTableIds() { DARABONBA_PTR_GET(routerTableIds_, Models::DescribeVpcsResponseBodyVpcsVpcRouterTableIds) };
    inline DescribeVpcsResponseBodyVpcsVpc& setRouterTableIds(const Models::DescribeVpcsResponseBodyVpcsVpcRouterTableIds & routerTableIds) { DARABONBA_PTR_SET_VALUE(routerTableIds_, routerTableIds) };
    inline DescribeVpcsResponseBodyVpcsVpc& setRouterTableIds(Models::DescribeVpcsResponseBodyVpcsVpcRouterTableIds && routerTableIds) { DARABONBA_PTR_SET_RVALUE(routerTableIds_, routerTableIds) };


    // secondaryCidrBlocks Field Functions 
    bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
    void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
    inline const Models::DescribeVpcsResponseBodyVpcsVpcSecondaryCidrBlocks & secondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, Models::DescribeVpcsResponseBodyVpcsVpcSecondaryCidrBlocks) };
    inline Models::DescribeVpcsResponseBodyVpcsVpcSecondaryCidrBlocks secondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, Models::DescribeVpcsResponseBodyVpcsVpcSecondaryCidrBlocks) };
    inline DescribeVpcsResponseBodyVpcsVpc& setSecondaryCidrBlocks(const Models::DescribeVpcsResponseBodyVpcsVpcSecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
    inline DescribeVpcsResponseBodyVpcsVpc& setSecondaryCidrBlocks(Models::DescribeVpcsResponseBodyVpcsVpcSecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeVpcsResponseBodyVpcsVpcTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeVpcsResponseBodyVpcsVpcTags) };
    inline Models::DescribeVpcsResponseBodyVpcsVpcTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeVpcsResponseBodyVpcsVpcTags) };
    inline DescribeVpcsResponseBodyVpcsVpc& setTags(const Models::DescribeVpcsResponseBodyVpcsVpcTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVpcsResponseBodyVpcsVpc& setTags(Models::DescribeVpcsResponseBodyVpcsVpcTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userCidrs Field Functions 
    bool hasUserCidrs() const { return this->userCidrs_ != nullptr;};
    void deleteUserCidrs() { this->userCidrs_ = nullptr;};
    inline const Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs & userCidrs() const { DARABONBA_PTR_GET_CONST(userCidrs_, Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs) };
    inline Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs userCidrs() { DARABONBA_PTR_GET(userCidrs_, Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs) };
    inline DescribeVpcsResponseBodyVpcsVpc& setUserCidrs(const Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs & userCidrs) { DARABONBA_PTR_SET_VALUE(userCidrs_, userCidrs) };
    inline DescribeVpcsResponseBodyVpcsVpc& setUserCidrs(Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs && userCidrs) { DARABONBA_PTR_SET_RVALUE(userCidrs_, userCidrs) };


    // VRouterId Field Functions 
    bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
    void deleteVRouterId() { this->VRouterId_ = nullptr;};
    inline string VRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds) };
    inline Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds) };
    inline DescribeVpcsResponseBodyVpcsVpc& setVSwitchIds(const Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeVpcsResponseBodyVpcsVpc& setVSwitchIds(Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The status of the Cloud Enterprise Network (CEN) instance to which the VPC is attached. **Attached** is returned only if the VPC is attached to a CEN instance.
    std::shared_ptr<string> cenStatus_ = nullptr;
    // The IPv4 CIDR block of the VPC.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The time when the VPC was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the VPC.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the DHCP options set.
    std::shared_ptr<string> dhcpOptionsSetId_ = nullptr;
    // The status of the DHCP options set. Valid values:
    // 
    // *   **Available**
    // *   **InUse**
    // *   **Deleted**
    // *   **Pending**
    std::shared_ptr<string> dhcpOptionsSetStatus_ = nullptr;
    // Indicates whether the Domain Name System (DNS) feature is enabled.
    std::shared_ptr<string> dnsHostnameStatus_ = nullptr;
    // Indicates whether the IPv6 is enabled.
    // 
    // Valid values:
    // 
    // - false: false
    // 
    // - true: true
    std::shared_ptr<bool> enabledIpv6_ = nullptr;
    // The IPv6 CIDR block of the VPC.
    std::shared_ptr<string> ipv6CidrBlock_ = nullptr;
    // The IPv6 CIDR block of the VPC.
    std::shared_ptr<Models::DescribeVpcsResponseBodyVpcsVpcIpv6CidrBlocks> ipv6CidrBlocks_ = nullptr;
    // Indicates whether the VPC is the default VPC in the region. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The ID of the Internet NAT gateway.
    std::shared_ptr<Models::DescribeVpcsResponseBodyVpcsVpcNatGatewayIds> natGatewayIds_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region to which the VPC belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the VPC belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the route table.
    std::shared_ptr<Models::DescribeVpcsResponseBodyVpcsVpcRouterTableIds> routerTableIds_ = nullptr;
    // The information about the secondary CIDR block.
    std::shared_ptr<Models::DescribeVpcsResponseBodyVpcsVpcSecondaryCidrBlocks> secondaryCidrBlocks_ = nullptr;
    // The status of the VPC. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    std::shared_ptr<string> status_ = nullptr;
    // The tag information about the VPC.
    std::shared_ptr<Models::DescribeVpcsResponseBodyVpcsVpcTags> tags_ = nullptr;
    // The list of user CIDR blocks.
    std::shared_ptr<Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs> userCidrs_ = nullptr;
    // The ID of the vRouter.
    std::shared_ptr<string> VRouterId_ = nullptr;
    // The vSwitches in the VPC.
    // 
    // You can query up to 300 vSwitches in the VPC. The information about the latest vSwitches is returned. If you want to query the information about all vSwitches in a VPC, call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation.
    std::shared_ptr<Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds> vSwitchIds_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
