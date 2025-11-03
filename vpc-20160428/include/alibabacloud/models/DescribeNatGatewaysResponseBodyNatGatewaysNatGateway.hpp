// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayAccessMode.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewaySnatTableIds.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysNatGateway : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsMetricEnabled, ecsMetricEnabled_);
      DARABONBA_PTR_TO_JSON(EipBindMode, eipBindMode_);
      DARABONBA_PTR_TO_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ForwardTableIds, forwardTableIds_);
      DARABONBA_PTR_TO_JSON(FullNatTableIds, fullNatTableIds_);
      DARABONBA_PTR_TO_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpLists, ipLists_);
      DARABONBA_PTR_TO_JSON(IpPrefixList, ipPrefixList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayPrivateInfo, natGatewayPrivateInfo_);
      DARABONBA_PTR_TO_JSON(NatType, natType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PrivateLinkEnabled, privateLinkEnabled_);
      DARABONBA_PTR_TO_JSON(PrivateLinkMode, privateLinkMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityProtectionEnabled, securityProtectionEnabled_);
      DARABONBA_PTR_TO_JSON(SnatTableIds, snatTableIds_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsMetricEnabled, ecsMetricEnabled_);
      DARABONBA_PTR_FROM_JSON(EipBindMode, eipBindMode_);
      DARABONBA_PTR_FROM_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ForwardTableIds, forwardTableIds_);
      DARABONBA_PTR_FROM_JSON(FullNatTableIds, fullNatTableIds_);
      DARABONBA_PTR_FROM_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpLists, ipLists_);
      DARABONBA_PTR_FROM_JSON(IpPrefixList, ipPrefixList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayPrivateInfo, natGatewayPrivateInfo_);
      DARABONBA_PTR_FROM_JSON(NatType, natType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PrivateLinkEnabled, privateLinkEnabled_);
      DARABONBA_PTR_FROM_JSON(PrivateLinkMode, privateLinkMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityProtectionEnabled, securityProtectionEnabled_);
      DARABONBA_PTR_FROM_JSON(SnatTableIds, snatTableIds_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway(const DescribeNatGatewaysResponseBodyNatGatewaysNatGateway &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway(DescribeNatGatewaysResponseBodyNatGatewaysNatGateway &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysNatGateway() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysNatGateway &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& operator=(DescribeNatGatewaysResponseBodyNatGatewaysNatGateway &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessMode_ == nullptr
        && return this->autoPay_ == nullptr && return this->businessStatus_ == nullptr && return this->creationTime_ == nullptr && return this->deletionProtection_ == nullptr && return this->description_ == nullptr
        && return this->ecsMetricEnabled_ == nullptr && return this->eipBindMode_ == nullptr && return this->enableSessionLog_ == nullptr && return this->expiredTime_ == nullptr && return this->forwardTableIds_ == nullptr
        && return this->fullNatTableIds_ == nullptr && return this->icmpReplyEnabled_ == nullptr && return this->instanceChargeType_ == nullptr && return this->internetChargeType_ == nullptr && return this->ipLists_ == nullptr
        && return this->ipPrefixList_ == nullptr && return this->name_ == nullptr && return this->natGatewayId_ == nullptr && return this->natGatewayPrivateInfo_ == nullptr && return this->natType_ == nullptr
        && return this->networkType_ == nullptr && return this->privateLinkEnabled_ == nullptr && return this->privateLinkMode_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->securityProtectionEnabled_ == nullptr && return this->snatTableIds_ == nullptr && return this->spec_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr
        && return this->vpcId_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayAccessMode & accessMode() const { DARABONBA_PTR_GET_CONST(accessMode_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayAccessMode) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayAccessMode accessMode() { DARABONBA_PTR_GET(accessMode_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayAccessMode) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setAccessMode(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayAccessMode & accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setAccessMode(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayAccessMode && accessMode) { DARABONBA_PTR_SET_RVALUE(accessMode_, accessMode) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsMetricEnabled Field Functions 
    bool hasEcsMetricEnabled() const { return this->ecsMetricEnabled_ != nullptr;};
    void deleteEcsMetricEnabled() { this->ecsMetricEnabled_ = nullptr;};
    inline bool ecsMetricEnabled() const { DARABONBA_PTR_GET_DEFAULT(ecsMetricEnabled_, false) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setEcsMetricEnabled(bool ecsMetricEnabled) { DARABONBA_PTR_SET_VALUE(ecsMetricEnabled_, ecsMetricEnabled) };


    // eipBindMode Field Functions 
    bool hasEipBindMode() const { return this->eipBindMode_ != nullptr;};
    void deleteEipBindMode() { this->eipBindMode_ = nullptr;};
    inline string eipBindMode() const { DARABONBA_PTR_GET_DEFAULT(eipBindMode_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setEipBindMode(string eipBindMode) { DARABONBA_PTR_SET_VALUE(eipBindMode_, eipBindMode) };


    // enableSessionLog Field Functions 
    bool hasEnableSessionLog() const { return this->enableSessionLog_ != nullptr;};
    void deleteEnableSessionLog() { this->enableSessionLog_ = nullptr;};
    inline string enableSessionLog() const { DARABONBA_PTR_GET_DEFAULT(enableSessionLog_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setEnableSessionLog(string enableSessionLog) { DARABONBA_PTR_SET_VALUE(enableSessionLog_, enableSessionLog) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // forwardTableIds Field Functions 
    bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
    void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds & forwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds forwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setForwardTableIds(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setForwardTableIds(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


    // fullNatTableIds Field Functions 
    bool hasFullNatTableIds() const { return this->fullNatTableIds_ != nullptr;};
    void deleteFullNatTableIds() { this->fullNatTableIds_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds & fullNatTableIds() const { DARABONBA_PTR_GET_CONST(fullNatTableIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds fullNatTableIds() { DARABONBA_PTR_GET(fullNatTableIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setFullNatTableIds(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds & fullNatTableIds) { DARABONBA_PTR_SET_VALUE(fullNatTableIds_, fullNatTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setFullNatTableIds(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds && fullNatTableIds) { DARABONBA_PTR_SET_RVALUE(fullNatTableIds_, fullNatTableIds) };


    // icmpReplyEnabled Field Functions 
    bool hasIcmpReplyEnabled() const { return this->icmpReplyEnabled_ != nullptr;};
    void deleteIcmpReplyEnabled() { this->icmpReplyEnabled_ = nullptr;};
    inline bool icmpReplyEnabled() const { DARABONBA_PTR_GET_DEFAULT(icmpReplyEnabled_, false) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setIcmpReplyEnabled(bool icmpReplyEnabled) { DARABONBA_PTR_SET_VALUE(icmpReplyEnabled_, icmpReplyEnabled) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipLists Field Functions 
    bool hasIpLists() const { return this->ipLists_ != nullptr;};
    void deleteIpLists() { this->ipLists_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists & ipLists() const { DARABONBA_PTR_GET_CONST(ipLists_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists ipLists() { DARABONBA_PTR_GET(ipLists_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setIpLists(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists & ipLists) { DARABONBA_PTR_SET_VALUE(ipLists_, ipLists) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setIpLists(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists && ipLists) { DARABONBA_PTR_SET_RVALUE(ipLists_, ipLists) };


    // ipPrefixList Field Functions 
    bool hasIpPrefixList() const { return this->ipPrefixList_ != nullptr;};
    void deleteIpPrefixList() { this->ipPrefixList_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList & ipPrefixList() const { DARABONBA_PTR_GET_CONST(ipPrefixList_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList ipPrefixList() { DARABONBA_PTR_GET(ipPrefixList_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setIpPrefixList(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList & ipPrefixList) { DARABONBA_PTR_SET_VALUE(ipPrefixList_, ipPrefixList) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setIpPrefixList(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList && ipPrefixList) { DARABONBA_PTR_SET_RVALUE(ipPrefixList_, ipPrefixList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayPrivateInfo Field Functions 
    bool hasNatGatewayPrivateInfo() const { return this->natGatewayPrivateInfo_ != nullptr;};
    void deleteNatGatewayPrivateInfo() { this->natGatewayPrivateInfo_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo & natGatewayPrivateInfo() const { DARABONBA_PTR_GET_CONST(natGatewayPrivateInfo_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo natGatewayPrivateInfo() { DARABONBA_PTR_GET(natGatewayPrivateInfo_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setNatGatewayPrivateInfo(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo & natGatewayPrivateInfo) { DARABONBA_PTR_SET_VALUE(natGatewayPrivateInfo_, natGatewayPrivateInfo) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setNatGatewayPrivateInfo(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo && natGatewayPrivateInfo) { DARABONBA_PTR_SET_RVALUE(natGatewayPrivateInfo_, natGatewayPrivateInfo) };


    // natType Field Functions 
    bool hasNatType() const { return this->natType_ != nullptr;};
    void deleteNatType() { this->natType_ = nullptr;};
    inline string natType() const { DARABONBA_PTR_GET_DEFAULT(natType_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setNatType(string natType) { DARABONBA_PTR_SET_VALUE(natType_, natType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // privateLinkEnabled Field Functions 
    bool hasPrivateLinkEnabled() const { return this->privateLinkEnabled_ != nullptr;};
    void deletePrivateLinkEnabled() { this->privateLinkEnabled_ = nullptr;};
    inline bool privateLinkEnabled() const { DARABONBA_PTR_GET_DEFAULT(privateLinkEnabled_, false) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setPrivateLinkEnabled(bool privateLinkEnabled) { DARABONBA_PTR_SET_VALUE(privateLinkEnabled_, privateLinkEnabled) };


    // privateLinkMode Field Functions 
    bool hasPrivateLinkMode() const { return this->privateLinkMode_ != nullptr;};
    void deletePrivateLinkMode() { this->privateLinkMode_ = nullptr;};
    inline string privateLinkMode() const { DARABONBA_PTR_GET_DEFAULT(privateLinkMode_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setPrivateLinkMode(string privateLinkMode) { DARABONBA_PTR_SET_VALUE(privateLinkMode_, privateLinkMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityProtectionEnabled Field Functions 
    bool hasSecurityProtectionEnabled() const { return this->securityProtectionEnabled_ != nullptr;};
    void deleteSecurityProtectionEnabled() { this->securityProtectionEnabled_ = nullptr;};
    inline bool securityProtectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(securityProtectionEnabled_, false) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setSecurityProtectionEnabled(bool securityProtectionEnabled) { DARABONBA_PTR_SET_VALUE(securityProtectionEnabled_, securityProtectionEnabled) };


    // snatTableIds Field Functions 
    bool hasSnatTableIds() const { return this->snatTableIds_ != nullptr;};
    void deleteSnatTableIds() { this->snatTableIds_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewaySnatTableIds & snatTableIds() const { DARABONBA_PTR_GET_CONST(snatTableIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewaySnatTableIds) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewaySnatTableIds snatTableIds() { DARABONBA_PTR_GET(snatTableIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewaySnatTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setSnatTableIds(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewaySnatTableIds & snatTableIds) { DARABONBA_PTR_SET_VALUE(snatTableIds_, snatTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setSnatTableIds(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewaySnatTableIds && snatTableIds) { DARABONBA_PTR_SET_RVALUE(snatTableIds_, snatTableIds) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayTags) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayTags) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setTags(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setTags(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayAccessMode> accessMode_ = nullptr;
    // Indicates whether automatic payment is enabled. Valid values:
    // 
    // *   **false**: no
    // *   **true**: yes
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The status of the NAT gateway. Valid values:
    // 
    // *   **Normal**: normal
    // *   **FinancialLocked**: locked due to overdue payments
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The time when the NAT gateway was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the deletion protection feature is enabled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The description of the NAT gateway.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the traffic monitoring feature is enabled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> ecsMetricEnabled_ = nullptr;
    // The mode in which the NAT gateway is associated with an elastic IP address (EIP). Valid values:
    // 
    // *   **MULTI_BINDED**: multi-EIP-to-ENI mode
    // *   **NAT**: NAT mode, which is compatible with IPv4 addresses.
    // 
    // >  Note: If you use the NAT mode, the EIP occupies one private IP address on the vSwitch of the NAT gateway. Make sure that the vSwitch has sufficient private IP addresses. Otherwise, the NAT gateway fails to be associated with the EIP. In NAT mode, you can associate a NAT gateway with up to 50 EIPs.
    std::shared_ptr<string> eipBindMode_ = nullptr;
    std::shared_ptr<string> enableSessionLog_ = nullptr;
    // The time when the NAT gateway expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The ID of the DNAT table.
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds> forwardTableIds_ = nullptr;
    // The ID of the FULLNAT table.
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds> fullNatTableIds_ = nullptr;
    // Indicates whether the ICMP non-retrieval feature is enabled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> icmpReplyEnabled_ = nullptr;
    // The billing method of the NAT gateway. The value is set to **PostPaid**, which indicates the pay-as-you-go billing method.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of the NAT gateway. Valid values:
    // 
    // *   **PayBySpec**: pay-by-specification
    // *   **PayByLcu**: pay-by-CU
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The list of elastic IP addresses (EIPs) that are associated with the Internet NAT gateway.
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists> ipLists_ = nullptr;
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList> ipPrefixList_ = nullptr;
    // The name of the NAT gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The private network information about the enhanced Internet NAT gateway.
    // 
    // >  If **NatType** is set to **Normal**, all parameters returned in this list are empty.
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo> natGatewayPrivateInfo_ = nullptr;
    // The type of the NAT gateway. The value is set to **Enhanced** (enhanced NAT gateway).
    std::shared_ptr<string> natType_ = nullptr;
    // The type of NAT gateway. Valid values:
    // 
    // *   **internet**: an Internet NAT gateway
    // *   **intranet**: a VPC NAT gateway
    std::shared_ptr<string> networkType_ = nullptr;
    // Indicates whether the NAT gateway supports PrivateLink. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> privateLinkEnabled_ = nullptr;
    // The mode that is used by PrivateLink. Valid values:
    // 
    // *   **FullNat**: the FULLNAT mode
    // *   **Geneve**: the GENEVE mode
    std::shared_ptr<string> privateLinkMode_ = nullptr;
    // The ID of the region where the NAT gateway is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the contiguous EIP group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the firewall feature is enabled. Valid values:
    // 
    // *   **false**: no
    // *   **true**: yes
    std::shared_ptr<bool> securityProtectionEnabled_ = nullptr;
    // The ID of the SNAT table of the NAT gateway.
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewaySnatTableIds> snatTableIds_ = nullptr;
    // The size of the NAT gateway. An empty value is returned for the parameter.
    // 
    // If **InternetChargeType** is set to **PayByLcu**, an empty value is returned.
    std::shared_ptr<string> spec_ = nullptr;
    // The status of the NAT gateway. Valid values:
    // 
    // *   **Creating**: After you send a request to create a NAT gateway, the system creates the NAT gateway in the background. The NAT gateway remains in the Creating state until the operation is completed.
    // *   **Available**: The NAT gateway remains in a stable state after the NAT gateway is created.
    // *   **Modifying**: After you send a request to modify a NAT gateway, the system modifies the NAT gateway in the background. The NAT gateway remains in the Modifying state until the operation is completed.
    // *   **Deleting**: After you send a request to delete a NAT gateway, the system deletes the NAT gateway in the background. The NAT gateway remains in the Deleting state until the operation is completed.
    // *   **Converting**: After you send a request to upgrade a standard NAT gateway to an enhanced NAT gateway, the system upgrades the NAT gateway in the background. The NAT gateway remains in the Converting state until the operation is completed.
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are added to the resource group.
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayTags> tags_ = nullptr;
    // The ID of the VPC where the NAT gateway is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
