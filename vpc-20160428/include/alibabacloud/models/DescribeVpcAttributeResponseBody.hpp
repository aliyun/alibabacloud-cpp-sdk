// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyAssociatedCens.hpp>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyAssociatedPropagationSources.hpp>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyCloudResources.hpp>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyIpv6CidrBlocks.hpp>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodySecondaryCidrBlocks.hpp>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyTags.hpp>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyUserCidrs.hpp>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyVSwitchIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedCens, associatedCens_);
      DARABONBA_PTR_TO_JSON(AssociatedPropagationSources, associatedPropagationSources_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(ClassicLinkEnabled, classicLinkEnabled_);
      DARABONBA_PTR_TO_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetStatus, dhcpOptionsSetStatus_);
      DARABONBA_PTR_TO_JSON(DnsHostnameStatus, dnsHostnameStatus_);
      DARABONBA_PTR_TO_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportIpv4Gateway, supportIpv4Gateway_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserCidrs, userCidrs_);
      DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedCens, associatedCens_);
      DARABONBA_PTR_FROM_JSON(AssociatedPropagationSources, associatedPropagationSources_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(ClassicLinkEnabled, classicLinkEnabled_);
      DARABONBA_PTR_FROM_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetStatus, dhcpOptionsSetStatus_);
      DARABONBA_PTR_FROM_JSON(DnsHostnameStatus, dnsHostnameStatus_);
      DARABONBA_PTR_FROM_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportIpv4Gateway, supportIpv4Gateway_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserCidrs, userCidrs_);
      DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcAttributeResponseBody() = default ;
    DescribeVpcAttributeResponseBody(const DescribeVpcAttributeResponseBody &) = default ;
    DescribeVpcAttributeResponseBody(DescribeVpcAttributeResponseBody &&) = default ;
    DescribeVpcAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBody() = default ;
    DescribeVpcAttributeResponseBody& operator=(const DescribeVpcAttributeResponseBody &) = default ;
    DescribeVpcAttributeResponseBody& operator=(DescribeVpcAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedCens_ == nullptr
        && return this->associatedPropagationSources_ == nullptr && return this->cidrBlock_ == nullptr && return this->classicLinkEnabled_ == nullptr && return this->cloudResources_ == nullptr && return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->dhcpOptionsSetId_ == nullptr && return this->dhcpOptionsSetStatus_ == nullptr && return this->dnsHostnameStatus_ == nullptr && return this->enabledIpv6_ == nullptr
        && return this->ipv4GatewayId_ == nullptr && return this->ipv6CidrBlock_ == nullptr && return this->ipv6CidrBlocks_ == nullptr && return this->isDefault_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->secondaryCidrBlocks_ == nullptr && return this->status_ == nullptr
        && return this->supportIpv4Gateway_ == nullptr && return this->tags_ == nullptr && return this->userCidrs_ == nullptr && return this->VRouterId_ == nullptr && return this->vSwitchIds_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // associatedCens Field Functions 
    bool hasAssociatedCens() const { return this->associatedCens_ != nullptr;};
    void deleteAssociatedCens() { this->associatedCens_ = nullptr;};
    inline const DescribeVpcAttributeResponseBodyAssociatedCens & associatedCens() const { DARABONBA_PTR_GET_CONST(associatedCens_, DescribeVpcAttributeResponseBodyAssociatedCens) };
    inline DescribeVpcAttributeResponseBodyAssociatedCens associatedCens() { DARABONBA_PTR_GET(associatedCens_, DescribeVpcAttributeResponseBodyAssociatedCens) };
    inline DescribeVpcAttributeResponseBody& setAssociatedCens(const DescribeVpcAttributeResponseBodyAssociatedCens & associatedCens) { DARABONBA_PTR_SET_VALUE(associatedCens_, associatedCens) };
    inline DescribeVpcAttributeResponseBody& setAssociatedCens(DescribeVpcAttributeResponseBodyAssociatedCens && associatedCens) { DARABONBA_PTR_SET_RVALUE(associatedCens_, associatedCens) };


    // associatedPropagationSources Field Functions 
    bool hasAssociatedPropagationSources() const { return this->associatedPropagationSources_ != nullptr;};
    void deleteAssociatedPropagationSources() { this->associatedPropagationSources_ = nullptr;};
    inline const DescribeVpcAttributeResponseBodyAssociatedPropagationSources & associatedPropagationSources() const { DARABONBA_PTR_GET_CONST(associatedPropagationSources_, DescribeVpcAttributeResponseBodyAssociatedPropagationSources) };
    inline DescribeVpcAttributeResponseBodyAssociatedPropagationSources associatedPropagationSources() { DARABONBA_PTR_GET(associatedPropagationSources_, DescribeVpcAttributeResponseBodyAssociatedPropagationSources) };
    inline DescribeVpcAttributeResponseBody& setAssociatedPropagationSources(const DescribeVpcAttributeResponseBodyAssociatedPropagationSources & associatedPropagationSources) { DARABONBA_PTR_SET_VALUE(associatedPropagationSources_, associatedPropagationSources) };
    inline DescribeVpcAttributeResponseBody& setAssociatedPropagationSources(DescribeVpcAttributeResponseBodyAssociatedPropagationSources && associatedPropagationSources) { DARABONBA_PTR_SET_RVALUE(associatedPropagationSources_, associatedPropagationSources) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVpcAttributeResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // classicLinkEnabled Field Functions 
    bool hasClassicLinkEnabled() const { return this->classicLinkEnabled_ != nullptr;};
    void deleteClassicLinkEnabled() { this->classicLinkEnabled_ = nullptr;};
    inline bool classicLinkEnabled() const { DARABONBA_PTR_GET_DEFAULT(classicLinkEnabled_, false) };
    inline DescribeVpcAttributeResponseBody& setClassicLinkEnabled(bool classicLinkEnabled) { DARABONBA_PTR_SET_VALUE(classicLinkEnabled_, classicLinkEnabled) };


    // cloudResources Field Functions 
    bool hasCloudResources() const { return this->cloudResources_ != nullptr;};
    void deleteCloudResources() { this->cloudResources_ = nullptr;};
    inline const DescribeVpcAttributeResponseBodyCloudResources & cloudResources() const { DARABONBA_PTR_GET_CONST(cloudResources_, DescribeVpcAttributeResponseBodyCloudResources) };
    inline DescribeVpcAttributeResponseBodyCloudResources cloudResources() { DARABONBA_PTR_GET(cloudResources_, DescribeVpcAttributeResponseBodyCloudResources) };
    inline DescribeVpcAttributeResponseBody& setCloudResources(const DescribeVpcAttributeResponseBodyCloudResources & cloudResources) { DARABONBA_PTR_SET_VALUE(cloudResources_, cloudResources) };
    inline DescribeVpcAttributeResponseBody& setCloudResources(DescribeVpcAttributeResponseBodyCloudResources && cloudResources) { DARABONBA_PTR_SET_RVALUE(cloudResources_, cloudResources) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVpcAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVpcAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dhcpOptionsSetId Field Functions 
    bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
    void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
    inline string dhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
    inline DescribeVpcAttributeResponseBody& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


    // dhcpOptionsSetStatus Field Functions 
    bool hasDhcpOptionsSetStatus() const { return this->dhcpOptionsSetStatus_ != nullptr;};
    void deleteDhcpOptionsSetStatus() { this->dhcpOptionsSetStatus_ = nullptr;};
    inline string dhcpOptionsSetStatus() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetStatus_, "") };
    inline DescribeVpcAttributeResponseBody& setDhcpOptionsSetStatus(string dhcpOptionsSetStatus) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetStatus_, dhcpOptionsSetStatus) };


    // dnsHostnameStatus Field Functions 
    bool hasDnsHostnameStatus() const { return this->dnsHostnameStatus_ != nullptr;};
    void deleteDnsHostnameStatus() { this->dnsHostnameStatus_ = nullptr;};
    inline string dnsHostnameStatus() const { DARABONBA_PTR_GET_DEFAULT(dnsHostnameStatus_, "") };
    inline DescribeVpcAttributeResponseBody& setDnsHostnameStatus(string dnsHostnameStatus) { DARABONBA_PTR_SET_VALUE(dnsHostnameStatus_, dnsHostnameStatus) };


    // enabledIpv6 Field Functions 
    bool hasEnabledIpv6() const { return this->enabledIpv6_ != nullptr;};
    void deleteEnabledIpv6() { this->enabledIpv6_ = nullptr;};
    inline bool enabledIpv6() const { DARABONBA_PTR_GET_DEFAULT(enabledIpv6_, false) };
    inline DescribeVpcAttributeResponseBody& setEnabledIpv6(bool enabledIpv6) { DARABONBA_PTR_SET_VALUE(enabledIpv6_, enabledIpv6) };


    // ipv4GatewayId Field Functions 
    bool hasIpv4GatewayId() const { return this->ipv4GatewayId_ != nullptr;};
    void deleteIpv4GatewayId() { this->ipv4GatewayId_ = nullptr;};
    inline string ipv4GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayId_, "") };
    inline DescribeVpcAttributeResponseBody& setIpv4GatewayId(string ipv4GatewayId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayId_, ipv4GatewayId) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string ipv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline DescribeVpcAttributeResponseBody& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // ipv6CidrBlocks Field Functions 
    bool hasIpv6CidrBlocks() const { return this->ipv6CidrBlocks_ != nullptr;};
    void deleteIpv6CidrBlocks() { this->ipv6CidrBlocks_ = nullptr;};
    inline const DescribeVpcAttributeResponseBodyIpv6CidrBlocks & ipv6CidrBlocks() const { DARABONBA_PTR_GET_CONST(ipv6CidrBlocks_, DescribeVpcAttributeResponseBodyIpv6CidrBlocks) };
    inline DescribeVpcAttributeResponseBodyIpv6CidrBlocks ipv6CidrBlocks() { DARABONBA_PTR_GET(ipv6CidrBlocks_, DescribeVpcAttributeResponseBodyIpv6CidrBlocks) };
    inline DescribeVpcAttributeResponseBody& setIpv6CidrBlocks(const DescribeVpcAttributeResponseBodyIpv6CidrBlocks & ipv6CidrBlocks) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };
    inline DescribeVpcAttributeResponseBody& setIpv6CidrBlocks(DescribeVpcAttributeResponseBodyIpv6CidrBlocks && ipv6CidrBlocks) { DARABONBA_PTR_SET_RVALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeVpcAttributeResponseBody& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVpcAttributeResponseBody& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpcAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVpcAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondaryCidrBlocks Field Functions 
    bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
    void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
    inline const DescribeVpcAttributeResponseBodySecondaryCidrBlocks & secondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, DescribeVpcAttributeResponseBodySecondaryCidrBlocks) };
    inline DescribeVpcAttributeResponseBodySecondaryCidrBlocks secondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, DescribeVpcAttributeResponseBodySecondaryCidrBlocks) };
    inline DescribeVpcAttributeResponseBody& setSecondaryCidrBlocks(const DescribeVpcAttributeResponseBodySecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
    inline DescribeVpcAttributeResponseBody& setSecondaryCidrBlocks(DescribeVpcAttributeResponseBodySecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpcAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportIpv4Gateway Field Functions 
    bool hasSupportIpv4Gateway() const { return this->supportIpv4Gateway_ != nullptr;};
    void deleteSupportIpv4Gateway() { this->supportIpv4Gateway_ = nullptr;};
    inline bool supportIpv4Gateway() const { DARABONBA_PTR_GET_DEFAULT(supportIpv4Gateway_, false) };
    inline DescribeVpcAttributeResponseBody& setSupportIpv4Gateway(bool supportIpv4Gateway) { DARABONBA_PTR_SET_VALUE(supportIpv4Gateway_, supportIpv4Gateway) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeVpcAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeVpcAttributeResponseBodyTags) };
    inline DescribeVpcAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeVpcAttributeResponseBodyTags) };
    inline DescribeVpcAttributeResponseBody& setTags(const DescribeVpcAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVpcAttributeResponseBody& setTags(DescribeVpcAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userCidrs Field Functions 
    bool hasUserCidrs() const { return this->userCidrs_ != nullptr;};
    void deleteUserCidrs() { this->userCidrs_ = nullptr;};
    inline const DescribeVpcAttributeResponseBodyUserCidrs & userCidrs() const { DARABONBA_PTR_GET_CONST(userCidrs_, DescribeVpcAttributeResponseBodyUserCidrs) };
    inline DescribeVpcAttributeResponseBodyUserCidrs userCidrs() { DARABONBA_PTR_GET(userCidrs_, DescribeVpcAttributeResponseBodyUserCidrs) };
    inline DescribeVpcAttributeResponseBody& setUserCidrs(const DescribeVpcAttributeResponseBodyUserCidrs & userCidrs) { DARABONBA_PTR_SET_VALUE(userCidrs_, userCidrs) };
    inline DescribeVpcAttributeResponseBody& setUserCidrs(DescribeVpcAttributeResponseBodyUserCidrs && userCidrs) { DARABONBA_PTR_SET_RVALUE(userCidrs_, userCidrs) };


    // VRouterId Field Functions 
    bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
    void deleteVRouterId() { this->VRouterId_ = nullptr;};
    inline string VRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
    inline DescribeVpcAttributeResponseBody& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const DescribeVpcAttributeResponseBodyVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, DescribeVpcAttributeResponseBodyVSwitchIds) };
    inline DescribeVpcAttributeResponseBodyVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, DescribeVpcAttributeResponseBodyVSwitchIds) };
    inline DescribeVpcAttributeResponseBody& setVSwitchIds(const DescribeVpcAttributeResponseBodyVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeVpcAttributeResponseBody& setVSwitchIds(DescribeVpcAttributeResponseBodyVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcAttributeResponseBody& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The list of Cloud Enterprise Network (CEN) instances to which the VPC is attached.
    // 
    // If the VPC is not attached to a CEN instance, the parameter is not returned.
    std::shared_ptr<DescribeVpcAttributeResponseBodyAssociatedCens> associatedCens_ = nullptr;
    // The route source associated with the VPC.
    std::shared_ptr<DescribeVpcAttributeResponseBodyAssociatedPropagationSources> associatedPropagationSources_ = nullptr;
    // The IPv4 CIDR block of the VPC.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // Indicates whether the ClassicLink feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> classicLinkEnabled_ = nullptr;
    // The list of resources deployed in the VPC.
    std::shared_ptr<DescribeVpcAttributeResponseBodyCloudResources> cloudResources_ = nullptr;
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
    // Indicates whether DNS hostname is enabled.
    std::shared_ptr<string> dnsHostnameStatus_ = nullptr;
    // Indicates whether the VPC enables IPv6 .
    // - true
    // - false
    std::shared_ptr<bool> enabledIpv6_ = nullptr;
    // The ID of the IPv4 gateway.
    std::shared_ptr<string> ipv4GatewayId_ = nullptr;
    // The IPv6 CIDR block of the VPC.
    std::shared_ptr<string> ipv6CidrBlock_ = nullptr;
    // The IPv6 CIDR block of the VPC.
    std::shared_ptr<DescribeVpcAttributeResponseBodyIpv6CidrBlocks> ipv6CidrBlocks_ = nullptr;
    // Indicates whether the VPC is the default VPC. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region to which the VPC belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The secondary IPv4 CIDR block of the VPC.
    std::shared_ptr<DescribeVpcAttributeResponseBodySecondaryCidrBlocks> secondaryCidrBlocks_ = nullptr;
    // The status of the VPC. Valid values:
    // 
    // *   **Available**
    // *   **Pending**
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the VPC supports IPv4 gateways.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> supportIpv4Gateway_ = nullptr;
    // The information about the tags.
    std::shared_ptr<DescribeVpcAttributeResponseBodyTags> tags_ = nullptr;
    // The user CIDR block. Multiple CIDR blocks are separated by commas (,). At most three CIDR blocks are returned.
    std::shared_ptr<DescribeVpcAttributeResponseBodyUserCidrs> userCidrs_ = nullptr;
    // The ID of the vRouter that belongs to the VPC.
    std::shared_ptr<string> VRouterId_ = nullptr;
    // The list of vSwitches deployed in the VPC.
    std::shared_ptr<DescribeVpcAttributeResponseBodyVSwitchIds> vSwitchIds_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
