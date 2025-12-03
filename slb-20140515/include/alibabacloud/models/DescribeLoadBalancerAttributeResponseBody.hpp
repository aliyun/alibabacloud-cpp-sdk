// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLoadBalancerAttributeResponseBodyBackendServers.hpp>
#include <alibabacloud/models/DescribeLoadBalancerAttributeResponseBodyListenerPorts.hpp>
#include <alibabacloud/models/DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal.hpp>
#include <alibabacloud/models/DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol.hpp>
#include <alibabacloud/models/DescribeLoadBalancerAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(ListenerPorts, listenerPorts_);
      DARABONBA_PTR_TO_JSON(ListenerPortsAndProtocal, listenerPortsAndProtocal_);
      DARABONBA_PTR_TO_JSON(ListenerPortsAndProtocol, listenerPortsAndProtocol_);
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
      DARABONBA_PTR_TO_JSON(RenewalCycUnit, renewalCycUnit_);
      DARABONBA_PTR_TO_JSON(RenewalDuration, renewalDuration_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(ListenerPorts, listenerPorts_);
      DARABONBA_PTR_FROM_JSON(ListenerPortsAndProtocal, listenerPortsAndProtocal_);
      DARABONBA_PTR_FROM_JSON(ListenerPortsAndProtocol, listenerPortsAndProtocol_);
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
      DARABONBA_PTR_FROM_JSON(RenewalCycUnit, renewalCycUnit_);
      DARABONBA_PTR_FROM_JSON(RenewalDuration, renewalDuration_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeLoadBalancerAttributeResponseBody() = default ;
    DescribeLoadBalancerAttributeResponseBody(const DescribeLoadBalancerAttributeResponseBody &) = default ;
    DescribeLoadBalancerAttributeResponseBody(DescribeLoadBalancerAttributeResponseBody &&) = default ;
    DescribeLoadBalancerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerAttributeResponseBody() = default ;
    DescribeLoadBalancerAttributeResponseBody& operator=(const DescribeLoadBalancerAttributeResponseBody &) = default ;
    DescribeLoadBalancerAttributeResponseBody& operator=(DescribeLoadBalancerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressIPVersion_ == nullptr && return this->addressType_ == nullptr && return this->autoReleaseTime_ == nullptr && return this->backendServers_ == nullptr && return this->bandwidth_ == nullptr
        && return this->createTime_ == nullptr && return this->createTimeStamp_ == nullptr && return this->deleteProtection_ == nullptr && return this->endTime_ == nullptr && return this->endTimeStamp_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->internetChargeType_ == nullptr && return this->listenerPorts_ == nullptr && return this->listenerPortsAndProtocal_ == nullptr && return this->listenerPortsAndProtocol_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->loadBalancerName_ == nullptr && return this->loadBalancerSpec_ == nullptr && return this->loadBalancerStatus_ == nullptr && return this->masterZoneId_ == nullptr
        && return this->modificationProtectionReason_ == nullptr && return this->modificationProtectionStatus_ == nullptr && return this->networkType_ == nullptr && return this->payType_ == nullptr && return this->regionId_ == nullptr
        && return this->regionIdAlias_ == nullptr && return this->renewalCycUnit_ == nullptr && return this->renewalDuration_ == nullptr && return this->renewalStatus_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->slaveZoneId_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline int64_t autoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, 0L) };
    inline DescribeLoadBalancerAttributeResponseBody& setAutoReleaseTime(int64_t autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBodyBackendServers & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, DescribeLoadBalancerAttributeResponseBodyBackendServers) };
    inline DescribeLoadBalancerAttributeResponseBodyBackendServers backendServers() { DARABONBA_PTR_GET(backendServers_, DescribeLoadBalancerAttributeResponseBodyBackendServers) };
    inline DescribeLoadBalancerAttributeResponseBody& setBackendServers(const DescribeLoadBalancerAttributeResponseBodyBackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline DescribeLoadBalancerAttributeResponseBody& setBackendServers(DescribeLoadBalancerAttributeResponseBodyBackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline DescribeLoadBalancerAttributeResponseBody& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // deleteProtection Field Functions 
    bool hasDeleteProtection() const { return this->deleteProtection_ != nullptr;};
    void deleteDeleteProtection() { this->deleteProtection_ = nullptr;};
    inline string deleteProtection() const { DARABONBA_PTR_GET_DEFAULT(deleteProtection_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setDeleteProtection(string deleteProtection) { DARABONBA_PTR_SET_VALUE(deleteProtection_, deleteProtection) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeStamp Field Functions 
    bool hasEndTimeStamp() const { return this->endTimeStamp_ != nullptr;};
    void deleteEndTimeStamp() { this->endTimeStamp_ = nullptr;};
    inline int64_t endTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(endTimeStamp_, 0L) };
    inline DescribeLoadBalancerAttributeResponseBody& setEndTimeStamp(int64_t endTimeStamp) { DARABONBA_PTR_SET_VALUE(endTimeStamp_, endTimeStamp) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // listenerPorts Field Functions 
    bool hasListenerPorts() const { return this->listenerPorts_ != nullptr;};
    void deleteListenerPorts() { this->listenerPorts_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBodyListenerPorts & listenerPorts() const { DARABONBA_PTR_GET_CONST(listenerPorts_, DescribeLoadBalancerAttributeResponseBodyListenerPorts) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPorts listenerPorts() { DARABONBA_PTR_GET(listenerPorts_, DescribeLoadBalancerAttributeResponseBodyListenerPorts) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPorts(const DescribeLoadBalancerAttributeResponseBodyListenerPorts & listenerPorts) { DARABONBA_PTR_SET_VALUE(listenerPorts_, listenerPorts) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPorts(DescribeLoadBalancerAttributeResponseBodyListenerPorts && listenerPorts) { DARABONBA_PTR_SET_RVALUE(listenerPorts_, listenerPorts) };


    // listenerPortsAndProtocal Field Functions 
    bool hasListenerPortsAndProtocal() const { return this->listenerPortsAndProtocal_ != nullptr;};
    void deleteListenerPortsAndProtocal() { this->listenerPortsAndProtocal_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal & listenerPortsAndProtocal() const { DARABONBA_PTR_GET_CONST(listenerPortsAndProtocal_, DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal listenerPortsAndProtocal() { DARABONBA_PTR_GET(listenerPortsAndProtocal_, DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocal(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal & listenerPortsAndProtocal) { DARABONBA_PTR_SET_VALUE(listenerPortsAndProtocal_, listenerPortsAndProtocal) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocal(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal && listenerPortsAndProtocal) { DARABONBA_PTR_SET_RVALUE(listenerPortsAndProtocal_, listenerPortsAndProtocal) };


    // listenerPortsAndProtocol Field Functions 
    bool hasListenerPortsAndProtocol() const { return this->listenerPortsAndProtocol_ != nullptr;};
    void deleteListenerPortsAndProtocol() { this->listenerPortsAndProtocol_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol & listenerPortsAndProtocol() const { DARABONBA_PTR_GET_CONST(listenerPortsAndProtocol_, DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol listenerPortsAndProtocol() { DARABONBA_PTR_GET(listenerPortsAndProtocol_, DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocol(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol & listenerPortsAndProtocol) { DARABONBA_PTR_SET_VALUE(listenerPortsAndProtocol_, listenerPortsAndProtocol) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocol(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol && listenerPortsAndProtocol) { DARABONBA_PTR_SET_RVALUE(listenerPortsAndProtocol_, listenerPortsAndProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string loadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string masterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // modificationProtectionReason Field Functions 
    bool hasModificationProtectionReason() const { return this->modificationProtectionReason_ != nullptr;};
    void deleteModificationProtectionReason() { this->modificationProtectionReason_ = nullptr;};
    inline string modificationProtectionReason() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionReason_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setModificationProtectionReason(string modificationProtectionReason) { DARABONBA_PTR_SET_VALUE(modificationProtectionReason_, modificationProtectionReason) };


    // modificationProtectionStatus Field Functions 
    bool hasModificationProtectionStatus() const { return this->modificationProtectionStatus_ != nullptr;};
    void deleteModificationProtectionStatus() { this->modificationProtectionStatus_ = nullptr;};
    inline string modificationProtectionStatus() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionStatus_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setModificationProtectionStatus(string modificationProtectionStatus) { DARABONBA_PTR_SET_VALUE(modificationProtectionStatus_, modificationProtectionStatus) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIdAlias Field Functions 
    bool hasRegionIdAlias() const { return this->regionIdAlias_ != nullptr;};
    void deleteRegionIdAlias() { this->regionIdAlias_ = nullptr;};
    inline string regionIdAlias() const { DARABONBA_PTR_GET_DEFAULT(regionIdAlias_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRegionIdAlias(string regionIdAlias) { DARABONBA_PTR_SET_VALUE(regionIdAlias_, regionIdAlias) };


    // renewalCycUnit Field Functions 
    bool hasRenewalCycUnit() const { return this->renewalCycUnit_ != nullptr;};
    void deleteRenewalCycUnit() { this->renewalCycUnit_ = nullptr;};
    inline string renewalCycUnit() const { DARABONBA_PTR_GET_DEFAULT(renewalCycUnit_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRenewalCycUnit(string renewalCycUnit) { DARABONBA_PTR_SET_VALUE(renewalCycUnit_, renewalCycUnit) };


    // renewalDuration Field Functions 
    bool hasRenewalDuration() const { return this->renewalDuration_ != nullptr;};
    void deleteRenewalDuration() { this->renewalDuration_ = nullptr;};
    inline int32_t renewalDuration() const { DARABONBA_PTR_GET_DEFAULT(renewalDuration_, 0) };
    inline DescribeLoadBalancerAttributeResponseBody& setRenewalDuration(int32_t renewalDuration) { DARABONBA_PTR_SET_VALUE(renewalDuration_, renewalDuration) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string renewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveZoneId Field Functions 
    bool hasSlaveZoneId() const { return this->slaveZoneId_ != nullptr;};
    void deleteSlaveZoneId() { this->slaveZoneId_ = nullptr;};
    inline string slaveZoneId() const { DARABONBA_PTR_GET_DEFAULT(slaveZoneId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setSlaveZoneId(string slaveZoneId) { DARABONBA_PTR_SET_VALUE(slaveZoneId_, slaveZoneId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeLoadBalancerAttributeResponseBodyTags) };
    inline DescribeLoadBalancerAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeLoadBalancerAttributeResponseBodyTags) };
    inline DescribeLoadBalancerAttributeResponseBody& setTags(const DescribeLoadBalancerAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLoadBalancerAttributeResponseBody& setTags(DescribeLoadBalancerAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The service IP address of the CLB instance.
    std::shared_ptr<string> address_ = nullptr;
    // The version of the IP address. Valid values: **ipv4** and **ipv6**.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The address type of the CLB instance.
    std::shared_ptr<string> addressType_ = nullptr;
    // The timestamp generated when the CLB instance is released.
    std::shared_ptr<int64_t> autoReleaseTime_ = nullptr;
    // The backend servers of the CLB instance.
    std::shared_ptr<DescribeLoadBalancerAttributeResponseBodyBackendServers> backendServers_ = nullptr;
    // The maximum bandwidth of the Internet-facing CLB instance that is billed on a pay-by-bandwidth basis.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The time when the CLB instance was created. The time is in the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp generated when the CA certificate is uploaded.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    // Indicates whether deletion protection is enabled for the CLB instance.
    // 
    // Valid values: **on** and **off**.
    std::shared_ptr<string> deleteProtection_ = nullptr;
    // The time when the CLB instance expires.
    std::shared_ptr<string> endTime_ = nullptr;
    // The timestamp that indicates the expiration time of the CLB instance.
    std::shared_ptr<int64_t> endTimeStamp_ = nullptr;
    // The metering method of the CLB instance. Valid values:
    // 
    // *   **PayBySpec** (default)
    // *   **PayByCLCU**
    // 
    // > This parameter is available only on the China site and takes effect only when **PayType** is set to **PayOnDemand**.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of the Internet-facing CLB instance. Valid values:
    // 
    // *   **paybytraffic**
    // *   **paybybandwidth**
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The frontend port used by the CLB instance.
    std::shared_ptr<DescribeLoadBalancerAttributeResponseBodyListenerPorts> listenerPorts_ = nullptr;
    // The ports or protocols of the listeners.
    std::shared_ptr<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal> listenerPortsAndProtocal_ = nullptr;
    // The ports or protocols of the listeners.
    std::shared_ptr<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol> listenerPortsAndProtocol_ = nullptr;
    // The CLB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the CLB instance.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The specification of the CLB instance.
    // 
    // >  Pay-as-you-go CLB instances are not subject to specifications. By default, **slb.lcu.elastic** is returned.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
    // The status of the CLB instance. Valid values:
    // 
    // *   **inactive**: The CLB instance is disabled. CLB instances in the inactive state do not forward traffic.
    // *   **active**: The CLB instance is running as expected. Newly created CLB instances are in the **active** state by default.
    // *   **locked**: The CLB instance is locked. CLB instances may be locked due to overdue payments or other reasons.
    std::shared_ptr<string> loadBalancerStatus_ = nullptr;
    // The ID of the primary zone to which the CLB instance belongs.
    std::shared_ptr<string> masterZoneId_ = nullptr;
    // The reason why the configuration read-only mode is enabled. The value is 1 to 80 characters in length. It starts with a letter and can contain digits, periods (.), underscores (_), and hyphens (-).
    // 
    // >  This parameter is valid only when **ModificationProtectionStatus** is set to **ConsoleProtection**.
    std::shared_ptr<string> modificationProtectionReason_ = nullptr;
    // Indicates whether the configuration read-only mode is enabled. Valid values:
    // 
    // *   **NonProtection**: The configuration read-only mode is disabled. After you disable the configuration read-only mode, the value of **ModificationProtectionReason** is cleared.
    // *   **ConsoleProtection**: The configuration read-only mode is enabled.
    // 
    // >  If this parameter is set to **ConsoleProtection**, you cannot modify instance configurations in the CLB console. However, you can modify instance configurations by calling API operations.
    std::shared_ptr<string> modificationProtectionStatus_ = nullptr;
    // The network type of the CLB instance.
    std::shared_ptr<string> networkType_ = nullptr;
    // The billing method of the CLB instance. Valid values:
    // 
    // *   Only **PayOnDemand** may be returned, which indicates the pay-as-you-go billing method.
    std::shared_ptr<string> payType_ = nullptr;
    // The region ID of the CLB instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The alias of the region to which the CLB instance belongs.
    std::shared_ptr<string> regionIdAlias_ = nullptr;
    // The auto-renewal cycle. Valid values: **Year** and **Month**. Default value: Month.
    // 
    // >  This parameter is valid only if you create a subscription CLB instance on the Alibaba Cloud China site. In this case, **PayType** must be set to **PrePay** and **RenewalStatus** must be set to **AutoRenewal**.
    std::shared_ptr<string> renewalCycUnit_ = nullptr;
    // The auto-renewal duration. This parameter is valid only if **RenewalStatus** is set to **AutoRenewal**.
    // 
    // *   Valid values when **PeriodUnit** is set to **Year**: **1**~**5**.
    // 
    // *   Valid values when **PeriodUnit** is set to **Month**: **1**~ **9**.
    // 
    // > This parameter is valid only when you create a subscription CLB instance on the Alibaba Cloud China site. In this case, the **PayType** parameter must be set to **PrePay**.
    std::shared_ptr<int32_t> renewalDuration_ = nullptr;
    // Indicates whether auto-renewal is enabled. Valid values:
    // 
    // *   **AutoRenewal**: Auto-renewal is enabled.
    // 
    // *   **Normal**: Auto-renewal is disabled. You must manually renew the CLB instance.
    // 
    // *   **NotRenewal**: The CLB instance will not be renewed upon expiration. If this value is returned, the system does not send notifications until three days before the expiration date.
    // 
    //     **
    // 
    //     **Note** This parameter is valid only when you create a subscription CLB instance on the Alibaba Cloud China site. In this case, **PayType** must be set to **PrePay**.
    std::shared_ptr<string> renewalStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the secondary zone to which the CLB instance belongs.
    std::shared_ptr<string> slaveZoneId_ = nullptr;
    // The tags.
    std::shared_ptr<DescribeLoadBalancerAttributeResponseBodyTags> tags_ = nullptr;
    // The ID of the vSwitch to which the internal-facing CLB instance belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) where the internal-facing CLB instance is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
