// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceAttributeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(ClassicEgressAddress, classicEgressAddress_);
      DARABONBA_PTR_TO_JSON(ConnectCidrBlocks, connectCidrBlocks_);
      DARABONBA_PTR_TO_JSON(ConnectVpcId, connectVpcId_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DedicatedInstanceType, dedicatedInstanceType_);
      DARABONBA_PTR_TO_JSON(EgressIpv6Enable, egressIpv6Enable_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(HttpsPolicies, httpsPolicies_);
      DARABONBA_PTR_TO_JSON(IPV6AclId, IPV6AclId_);
      DARABONBA_PTR_TO_JSON(IPV6AclName, IPV6AclName_);
      DARABONBA_PTR_TO_JSON(IPV6AclStatus, IPV6AclStatus_);
      DARABONBA_PTR_TO_JSON(IPV6AclType, IPV6AclType_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceCidrBlock, instanceCidrBlock_);
      DARABONBA_PTR_TO_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceRpsLimit, instanceRpsLimit_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(InstanceSpecAttributes, instanceSpecAttributes_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetEgressAddress, internetEgressAddress_);
      DARABONBA_PTR_TO_JSON(IntranetSegments, intranetSegments_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceAttributes, networkInterfaceAttributes_);
      DARABONBA_PTR_TO_JSON(NewVpcEgressAddress, newVpcEgressAddress_);
      DARABONBA_PTR_TO_JSON(PrivateDnsList, privateDnsList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportIpv6, supportIpv6_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserVpcId, userVpcId_);
      DARABONBA_PTR_TO_JSON(UserVswitchId, userVswitchId_);
      DARABONBA_PTR_TO_JSON(VpcEgressAddress, vpcEgressAddress_);
      DARABONBA_PTR_TO_JSON(VpcIntranetEnable, vpcIntranetEnable_);
      DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_TO_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneLocalName, zoneLocalName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(ClassicEgressAddress, classicEgressAddress_);
      DARABONBA_PTR_FROM_JSON(ConnectCidrBlocks, connectCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(ConnectVpcId, connectVpcId_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DedicatedInstanceType, dedicatedInstanceType_);
      DARABONBA_PTR_FROM_JSON(EgressIpv6Enable, egressIpv6Enable_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(HttpsPolicies, httpsPolicies_);
      DARABONBA_PTR_FROM_JSON(IPV6AclId, IPV6AclId_);
      DARABONBA_PTR_FROM_JSON(IPV6AclName, IPV6AclName_);
      DARABONBA_PTR_FROM_JSON(IPV6AclStatus, IPV6AclStatus_);
      DARABONBA_PTR_FROM_JSON(IPV6AclType, IPV6AclType_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceCidrBlock, instanceCidrBlock_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceRpsLimit, instanceRpsLimit_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceSpecAttributes, instanceSpecAttributes_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetEgressAddress, internetEgressAddress_);
      DARABONBA_PTR_FROM_JSON(IntranetSegments, intranetSegments_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceAttributes, networkInterfaceAttributes_);
      DARABONBA_PTR_FROM_JSON(NewVpcEgressAddress, newVpcEgressAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsList, privateDnsList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportIpv6, supportIpv6_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserVpcId, userVpcId_);
      DARABONBA_PTR_FROM_JSON(UserVswitchId, userVswitchId_);
      DARABONBA_PTR_FROM_JSON(VpcEgressAddress, vpcEgressAddress_);
      DARABONBA_PTR_FROM_JSON(VpcIntranetEnable, vpcIntranetEnable_);
      DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_FROM_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneLocalName, zoneLocalName_);
    };
    DescribeInstancesResponseBodyInstancesInstanceAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttribute(const DescribeInstancesResponseBodyInstancesInstanceAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttribute(DescribeInstancesResponseBodyInstancesInstanceAttribute &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttribute& operator=(const DescribeInstancesResponseBodyInstancesInstanceAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttribute& operator=(DescribeInstancesResponseBodyInstancesInstanceAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclName_ == nullptr && return this->aclStatus_ == nullptr && return this->aclType_ == nullptr && return this->classicEgressAddress_ == nullptr && return this->connectCidrBlocks_ == nullptr
        && return this->connectVpcId_ == nullptr && return this->createdTime_ == nullptr && return this->dedicatedInstanceType_ == nullptr && return this->egressIpv6Enable_ == nullptr && return this->expiredTime_ == nullptr
        && return this->httpsPolicies_ == nullptr && return this->IPV6AclId_ == nullptr && return this->IPV6AclName_ == nullptr && return this->IPV6AclStatus_ == nullptr && return this->IPV6AclType_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->instanceCidrBlock_ == nullptr && return this->instanceClusterId_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->instanceRpsLimit_ == nullptr && return this->instanceSpec_ == nullptr && return this->instanceSpecAttributes_ == nullptr && return this->instanceType_ == nullptr && return this->internetEgressAddress_ == nullptr
        && return this->intranetSegments_ == nullptr && return this->maintainEndTime_ == nullptr && return this->maintainStartTime_ == nullptr && return this->networkInterfaceAttributes_ == nullptr && return this->newVpcEgressAddress_ == nullptr
        && return this->privateDnsList_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->supportIpv6_ == nullptr && return this->tags_ == nullptr
        && return this->userVpcId_ == nullptr && return this->userVswitchId_ == nullptr && return this->vpcEgressAddress_ == nullptr && return this->vpcIntranetEnable_ == nullptr && return this->vpcOwnerId_ == nullptr
        && return this->vpcSlbIntranetEnable_ == nullptr && return this->zoneId_ == nullptr && return this->zoneLocalName_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // classicEgressAddress Field Functions 
    bool hasClassicEgressAddress() const { return this->classicEgressAddress_ != nullptr;};
    void deleteClassicEgressAddress() { this->classicEgressAddress_ = nullptr;};
    inline string classicEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(classicEgressAddress_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setClassicEgressAddress(string classicEgressAddress) { DARABONBA_PTR_SET_VALUE(classicEgressAddress_, classicEgressAddress) };


    // connectCidrBlocks Field Functions 
    bool hasConnectCidrBlocks() const { return this->connectCidrBlocks_ != nullptr;};
    void deleteConnectCidrBlocks() { this->connectCidrBlocks_ = nullptr;};
    inline string connectCidrBlocks() const { DARABONBA_PTR_GET_DEFAULT(connectCidrBlocks_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setConnectCidrBlocks(string connectCidrBlocks) { DARABONBA_PTR_SET_VALUE(connectCidrBlocks_, connectCidrBlocks) };


    // connectVpcId Field Functions 
    bool hasConnectVpcId() const { return this->connectVpcId_ != nullptr;};
    void deleteConnectVpcId() { this->connectVpcId_ = nullptr;};
    inline string connectVpcId() const { DARABONBA_PTR_GET_DEFAULT(connectVpcId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setConnectVpcId(string connectVpcId) { DARABONBA_PTR_SET_VALUE(connectVpcId_, connectVpcId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // dedicatedInstanceType Field Functions 
    bool hasDedicatedInstanceType() const { return this->dedicatedInstanceType_ != nullptr;};
    void deleteDedicatedInstanceType() { this->dedicatedInstanceType_ = nullptr;};
    inline string dedicatedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedInstanceType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setDedicatedInstanceType(string dedicatedInstanceType) { DARABONBA_PTR_SET_VALUE(dedicatedInstanceType_, dedicatedInstanceType) };


    // egressIpv6Enable Field Functions 
    bool hasEgressIpv6Enable() const { return this->egressIpv6Enable_ != nullptr;};
    void deleteEgressIpv6Enable() { this->egressIpv6Enable_ = nullptr;};
    inline bool egressIpv6Enable() const { DARABONBA_PTR_GET_DEFAULT(egressIpv6Enable_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setEgressIpv6Enable(bool egressIpv6Enable) { DARABONBA_PTR_SET_VALUE(egressIpv6Enable_, egressIpv6Enable) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // httpsPolicies Field Functions 
    bool hasHttpsPolicies() const { return this->httpsPolicies_ != nullptr;};
    void deleteHttpsPolicies() { this->httpsPolicies_ = nullptr;};
    inline string httpsPolicies() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicies_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setHttpsPolicies(string httpsPolicies) { DARABONBA_PTR_SET_VALUE(httpsPolicies_, httpsPolicies) };


    // IPV6AclId Field Functions 
    bool hasIPV6AclId() const { return this->IPV6AclId_ != nullptr;};
    void deleteIPV6AclId() { this->IPV6AclId_ = nullptr;};
    inline string IPV6AclId() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setIPV6AclId(string IPV6AclId) { DARABONBA_PTR_SET_VALUE(IPV6AclId_, IPV6AclId) };


    // IPV6AclName Field Functions 
    bool hasIPV6AclName() const { return this->IPV6AclName_ != nullptr;};
    void deleteIPV6AclName() { this->IPV6AclName_ = nullptr;};
    inline string IPV6AclName() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setIPV6AclName(string IPV6AclName) { DARABONBA_PTR_SET_VALUE(IPV6AclName_, IPV6AclName) };


    // IPV6AclStatus Field Functions 
    bool hasIPV6AclStatus() const { return this->IPV6AclStatus_ != nullptr;};
    void deleteIPV6AclStatus() { this->IPV6AclStatus_ = nullptr;};
    inline string IPV6AclStatus() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclStatus_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setIPV6AclStatus(string IPV6AclStatus) { DARABONBA_PTR_SET_VALUE(IPV6AclStatus_, IPV6AclStatus) };


    // IPV6AclType Field Functions 
    bool hasIPV6AclType() const { return this->IPV6AclType_ != nullptr;};
    void deleteIPV6AclType() { this->IPV6AclType_ = nullptr;};
    inline string IPV6AclType() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setIPV6AclType(string IPV6AclType) { DARABONBA_PTR_SET_VALUE(IPV6AclType_, IPV6AclType) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceCidrBlock Field Functions 
    bool hasInstanceCidrBlock() const { return this->instanceCidrBlock_ != nullptr;};
    void deleteInstanceCidrBlock() { this->instanceCidrBlock_ = nullptr;};
    inline string instanceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(instanceCidrBlock_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceCidrBlock(string instanceCidrBlock) { DARABONBA_PTR_SET_VALUE(instanceCidrBlock_, instanceCidrBlock) };


    // instanceClusterId Field Functions 
    bool hasInstanceClusterId() const { return this->instanceClusterId_ != nullptr;};
    void deleteInstanceClusterId() { this->instanceClusterId_ = nullptr;};
    inline string instanceClusterId() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceClusterId(string instanceClusterId) { DARABONBA_PTR_SET_VALUE(instanceClusterId_, instanceClusterId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceRpsLimit Field Functions 
    bool hasInstanceRpsLimit() const { return this->instanceRpsLimit_ != nullptr;};
    void deleteInstanceRpsLimit() { this->instanceRpsLimit_ = nullptr;};
    inline int32_t instanceRpsLimit() const { DARABONBA_PTR_GET_DEFAULT(instanceRpsLimit_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceRpsLimit(int32_t instanceRpsLimit) { DARABONBA_PTR_SET_VALUE(instanceRpsLimit_, instanceRpsLimit) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // instanceSpecAttributes Field Functions 
    bool hasInstanceSpecAttributes() const { return this->instanceSpecAttributes_ != nullptr;};
    void deleteInstanceSpecAttributes() { this->instanceSpecAttributes_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes & instanceSpecAttributes() const { DARABONBA_PTR_GET_CONST(instanceSpecAttributes_, Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes instanceSpecAttributes() { DARABONBA_PTR_GET(instanceSpecAttributes_, Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceSpecAttributes(const Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes & instanceSpecAttributes) { DARABONBA_PTR_SET_VALUE(instanceSpecAttributes_, instanceSpecAttributes) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceSpecAttributes(Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes && instanceSpecAttributes) { DARABONBA_PTR_SET_RVALUE(instanceSpecAttributes_, instanceSpecAttributes) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetEgressAddress Field Functions 
    bool hasInternetEgressAddress() const { return this->internetEgressAddress_ != nullptr;};
    void deleteInternetEgressAddress() { this->internetEgressAddress_ = nullptr;};
    inline string internetEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(internetEgressAddress_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setInternetEgressAddress(string internetEgressAddress) { DARABONBA_PTR_SET_VALUE(internetEgressAddress_, internetEgressAddress) };


    // intranetSegments Field Functions 
    bool hasIntranetSegments() const { return this->intranetSegments_ != nullptr;};
    void deleteIntranetSegments() { this->intranetSegments_ = nullptr;};
    inline string intranetSegments() const { DARABONBA_PTR_GET_DEFAULT(intranetSegments_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setIntranetSegments(string intranetSegments) { DARABONBA_PTR_SET_VALUE(intranetSegments_, intranetSegments) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // networkInterfaceAttributes Field Functions 
    bool hasNetworkInterfaceAttributes() const { return this->networkInterfaceAttributes_ != nullptr;};
    void deleteNetworkInterfaceAttributes() { this->networkInterfaceAttributes_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes & networkInterfaceAttributes() const { DARABONBA_PTR_GET_CONST(networkInterfaceAttributes_, Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes networkInterfaceAttributes() { DARABONBA_PTR_GET(networkInterfaceAttributes_, Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setNetworkInterfaceAttributes(const Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes & networkInterfaceAttributes) { DARABONBA_PTR_SET_VALUE(networkInterfaceAttributes_, networkInterfaceAttributes) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setNetworkInterfaceAttributes(Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes && networkInterfaceAttributes) { DARABONBA_PTR_SET_RVALUE(networkInterfaceAttributes_, networkInterfaceAttributes) };


    // newVpcEgressAddress Field Functions 
    bool hasNewVpcEgressAddress() const { return this->newVpcEgressAddress_ != nullptr;};
    void deleteNewVpcEgressAddress() { this->newVpcEgressAddress_ = nullptr;};
    inline string newVpcEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(newVpcEgressAddress_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setNewVpcEgressAddress(string newVpcEgressAddress) { DARABONBA_PTR_SET_VALUE(newVpcEgressAddress_, newVpcEgressAddress) };


    // privateDnsList Field Functions 
    bool hasPrivateDnsList() const { return this->privateDnsList_ != nullptr;};
    void deletePrivateDnsList() { this->privateDnsList_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList & privateDnsList() const { DARABONBA_PTR_GET_CONST(privateDnsList_, Models::DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList privateDnsList() { DARABONBA_PTR_GET(privateDnsList_, Models::DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setPrivateDnsList(const Models::DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList & privateDnsList) { DARABONBA_PTR_SET_VALUE(privateDnsList_, privateDnsList) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setPrivateDnsList(Models::DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList && privateDnsList) { DARABONBA_PTR_SET_RVALUE(privateDnsList_, privateDnsList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportIpv6 Field Functions 
    bool hasSupportIpv6() const { return this->supportIpv6_ != nullptr;};
    void deleteSupportIpv6() { this->supportIpv6_ = nullptr;};
    inline bool supportIpv6() const { DARABONBA_PTR_GET_DEFAULT(supportIpv6_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setSupportIpv6(bool supportIpv6) { DARABONBA_PTR_SET_VALUE(supportIpv6_, supportIpv6) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTags) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTags) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setTags(const Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setTags(Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userVpcId Field Functions 
    bool hasUserVpcId() const { return this->userVpcId_ != nullptr;};
    void deleteUserVpcId() { this->userVpcId_ = nullptr;};
    inline string userVpcId() const { DARABONBA_PTR_GET_DEFAULT(userVpcId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setUserVpcId(string userVpcId) { DARABONBA_PTR_SET_VALUE(userVpcId_, userVpcId) };


    // userVswitchId Field Functions 
    bool hasUserVswitchId() const { return this->userVswitchId_ != nullptr;};
    void deleteUserVswitchId() { this->userVswitchId_ = nullptr;};
    inline string userVswitchId() const { DARABONBA_PTR_GET_DEFAULT(userVswitchId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setUserVswitchId(string userVswitchId) { DARABONBA_PTR_SET_VALUE(userVswitchId_, userVswitchId) };


    // vpcEgressAddress Field Functions 
    bool hasVpcEgressAddress() const { return this->vpcEgressAddress_ != nullptr;};
    void deleteVpcEgressAddress() { this->vpcEgressAddress_ = nullptr;};
    inline string vpcEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(vpcEgressAddress_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setVpcEgressAddress(string vpcEgressAddress) { DARABONBA_PTR_SET_VALUE(vpcEgressAddress_, vpcEgressAddress) };


    // vpcIntranetEnable Field Functions 
    bool hasVpcIntranetEnable() const { return this->vpcIntranetEnable_ != nullptr;};
    void deleteVpcIntranetEnable() { this->vpcIntranetEnable_ = nullptr;};
    inline bool vpcIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcIntranetEnable_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setVpcIntranetEnable(bool vpcIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcIntranetEnable_, vpcIntranetEnable) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline int64_t vpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


    // vpcSlbIntranetEnable Field Functions 
    bool hasVpcSlbIntranetEnable() const { return this->vpcSlbIntranetEnable_ != nullptr;};
    void deleteVpcSlbIntranetEnable() { this->vpcSlbIntranetEnable_ = nullptr;};
    inline bool vpcSlbIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcSlbIntranetEnable_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setVpcSlbIntranetEnable(bool vpcSlbIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcSlbIntranetEnable_, vpcSlbIntranetEnable) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneLocalName Field Functions 
    bool hasZoneLocalName() const { return this->zoneLocalName_ != nullptr;};
    void deleteZoneLocalName() { this->zoneLocalName_ = nullptr;};
    inline string zoneLocalName() const { DARABONBA_PTR_GET_DEFAULT(zoneLocalName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttribute& setZoneLocalName(string zoneLocalName) { DARABONBA_PTR_SET_VALUE(zoneLocalName_, zoneLocalName) };


  protected:
    // The ACL ID.
    std::shared_ptr<string> aclId_ = nullptr;
    // The name of the access control list (ACL).
    std::shared_ptr<string> aclName_ = nullptr;
    // Indicates whether the ACL is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The ACL type. Valid values:
    // 
    // *   black: blacklist
    // *   white: whitelist
    std::shared_ptr<string> aclType_ = nullptr;
    // The egress IP address.
    std::shared_ptr<string> classicEgressAddress_ = nullptr;
    // The internal CIDR block of the user\\"s VPC that can be accessed if the instance is a VPC integration instance.
    std::shared_ptr<string> connectCidrBlocks_ = nullptr;
    // The ID of the user\\"s VPC if the instance is a VPC integration instance.
    std::shared_ptr<string> connectVpcId_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The type of the dedicated instance. Valid values:
    // 
    // *   vpc_connect: VPC integration instance
    // *   normal: conventional dedicated instance
    std::shared_ptr<string> dedicatedInstanceType_ = nullptr;
    // Indicates whether outbound IPv6 traffic is supported.
    std::shared_ptr<bool> egressIpv6Enable_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The HTTPS security policy.
    std::shared_ptr<string> httpsPolicies_ = nullptr;
    // The ID of the IPv6 ACL.
    std::shared_ptr<string> IPV6AclId_ = nullptr;
    // The name of the IPv6 ACL.
    std::shared_ptr<string> IPV6AclName_ = nullptr;
    // Indicates whether the IPv6 ACL is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> IPV6AclStatus_ = nullptr;
    // The type of the IPv6 ACL. Valid values:
    // 
    // *   black: blacklist
    // *   white: whitelist
    std::shared_ptr<string> IPV6AclType_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   PrePaid: subscription
    // *   PayAsYouGo: pay-as-you-go
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The CIDR block of the dedicated instance.
    // 
    // *   172.16.0.0/12
    // *   192.168.0.0/16
    std::shared_ptr<string> instanceCidrBlock_ = nullptr;
    // The ID of the cluster to which the dedicated instance cluster belongs.
    std::shared_ptr<string> instanceClusterId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The requests per second (RPS) limit on the instance.
    std::shared_ptr<int32_t> instanceRpsLimit_ = nullptr;
    // The instance specification.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The instance specification details.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes> instanceSpecAttributes_ = nullptr;
    // The instance type. Valid values:
    // 
    // *   VPC_SHARED: shared instance (VPC)
    // *   VPC_DEDICATED: dedicated instance (VPC)
    std::shared_ptr<string> instanceType_ = nullptr;
    // The outbound public IP address.
    std::shared_ptr<string> internetEgressAddress_ = nullptr;
    // The internal CIDR block that is allowed to access the API Gateway instance.
    std::shared_ptr<string> intranetSegments_ = nullptr;
    // The end time of the maintenance window. The time is in the *HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    // The start time of the maintenance window. The time is in the *HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> maintainStartTime_ = nullptr;
    // The network information of the user\\"s VPC if the instance is a VPC integration instance.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes> networkInterfaceAttributes_ = nullptr;
    // The new VPC egress CIDR block.
    std::shared_ptr<string> newVpcEgressAddress_ = nullptr;
    // The private DNS list.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList> privateDnsList_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The instance status.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether IPv6 traffic is supported.
    std::shared_ptr<bool> supportIpv6_ = nullptr;
    // The tags of the instance.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTags> tags_ = nullptr;
    // The user VPC ID.
    std::shared_ptr<string> userVpcId_ = nullptr;
    // The user vSwitch ID.
    std::shared_ptr<string> userVswitchId_ = nullptr;
    // The VPC egress CIDR block.
    std::shared_ptr<string> vpcEgressAddress_ = nullptr;
    // Indicates whether VPC access is enabled.
    std::shared_ptr<bool> vpcIntranetEnable_ = nullptr;
    // The ID of the account to which the VPC-based instance belongs.
    std::shared_ptr<int64_t> vpcOwnerId_ = nullptr;
    // Indicates whether virtual private cloud (VPC) Server Load Balancer (SLB) is enabled.
    std::shared_ptr<bool> vpcSlbIntranetEnable_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The zone.
    std::shared_ptr<string> zoneLocalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
