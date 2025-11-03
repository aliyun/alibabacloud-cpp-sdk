// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks.hpp>
#include <alibabacloud/models/DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes.hpp>
#include <alibabacloud/models/DescribeEipAddressesResponseBodyEipAddressesEipAddressTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipAddressesResponseBodyEipAddressesEipAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesResponseBodyEipAddressesEipAddress& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(AllocationTime, allocationTime_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageBandwidth, bandwidthPackageBandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(HDMonitorStatus, HDMonitorStatus_);
      DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceRegionId, instanceRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Netmode, netmode_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondLimited, secondLimited_);
      DARABONBA_PTR_TO_JSON(SecurityProtectionTypes, securityProtectionTypes_);
      DARABONBA_PTR_TO_JSON(SegmentInstanceId, segmentInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesResponseBodyEipAddressesEipAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(AllocationTime, allocationTime_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageBandwidth, bandwidthPackageBandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(HDMonitorStatus, HDMonitorStatus_);
      DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceRegionId, instanceRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Netmode, netmode_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondLimited, secondLimited_);
      DARABONBA_PTR_FROM_JSON(SecurityProtectionTypes, securityProtectionTypes_);
      DARABONBA_PTR_FROM_JSON(SegmentInstanceId, segmentInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    DescribeEipAddressesResponseBodyEipAddressesEipAddress() = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddress(const DescribeEipAddressesResponseBodyEipAddressesEipAddress &) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddress(DescribeEipAddressesResponseBodyEipAddressesEipAddress &&) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipAddressesResponseBodyEipAddressesEipAddress() = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddress& operator=(const DescribeEipAddressesResponseBodyEipAddressesEipAddress &) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddress& operator=(DescribeEipAddressesResponseBodyEipAddressesEipAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && return this->allocationTime_ == nullptr && return this->bandwidth_ == nullptr && return this->bandwidthPackageBandwidth_ == nullptr && return this->bandwidthPackageId_ == nullptr && return this->bandwidthPackageType_ == nullptr
        && return this->bizType_ == nullptr && return this->businessStatus_ == nullptr && return this->chargeType_ == nullptr && return this->deletionProtection_ == nullptr && return this->description_ == nullptr
        && return this->eipBandwidth_ == nullptr && return this->expiredTime_ == nullptr && return this->HDMonitorStatus_ == nullptr && return this->hasReservationData_ == nullptr && return this->ISP_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceRegionId_ == nullptr && return this->instanceType_ == nullptr && return this->internetChargeType_ == nullptr && return this->ipAddress_ == nullptr
        && return this->mode_ == nullptr && return this->name_ == nullptr && return this->netmode_ == nullptr && return this->operationLocks_ == nullptr && return this->privateIpAddress_ == nullptr
        && return this->publicIpAddressPoolId_ == nullptr && return this->regionId_ == nullptr && return this->reservationActiveTime_ == nullptr && return this->reservationBandwidth_ == nullptr && return this->reservationInternetChargeType_ == nullptr
        && return this->reservationOrderType_ == nullptr && return this->resourceGroupId_ == nullptr && return this->secondLimited_ == nullptr && return this->securityProtectionTypes_ == nullptr && return this->segmentInstanceId_ == nullptr
        && return this->serviceID_ == nullptr && return this->serviceManaged_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->vpcId_ == nullptr
        && return this->zone_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // allocationTime Field Functions 
    bool hasAllocationTime() const { return this->allocationTime_ != nullptr;};
    void deleteAllocationTime() { this->allocationTime_ = nullptr;};
    inline string allocationTime() const { DARABONBA_PTR_GET_DEFAULT(allocationTime_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setAllocationTime(string allocationTime) { DARABONBA_PTR_SET_VALUE(allocationTime_, allocationTime) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthPackageBandwidth Field Functions 
    bool hasBandwidthPackageBandwidth() const { return this->bandwidthPackageBandwidth_ != nullptr;};
    void deleteBandwidthPackageBandwidth() { this->bandwidthPackageBandwidth_ = nullptr;};
    inline string bandwidthPackageBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageBandwidth_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setBandwidthPackageBandwidth(string bandwidthPackageBandwidth) { DARABONBA_PTR_SET_VALUE(bandwidthPackageBandwidth_, bandwidthPackageBandwidth) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string bandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline string eipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setEipBandwidth(string eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // HDMonitorStatus Field Functions 
    bool hasHDMonitorStatus() const { return this->HDMonitorStatus_ != nullptr;};
    void deleteHDMonitorStatus() { this->HDMonitorStatus_ = nullptr;};
    inline string HDMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(HDMonitorStatus_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setHDMonitorStatus(string HDMonitorStatus) { DARABONBA_PTR_SET_VALUE(HDMonitorStatus_, HDMonitorStatus) };


    // hasReservationData Field Functions 
    bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
    void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
    inline string hasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string ISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceRegionId Field Functions 
    bool hasInstanceRegionId() const { return this->instanceRegionId_ != nullptr;};
    void deleteInstanceRegionId() { this->instanceRegionId_ = nullptr;};
    inline string instanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(instanceRegionId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setInstanceRegionId(string instanceRegionId) { DARABONBA_PTR_SET_VALUE(instanceRegionId_, instanceRegionId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netmode Field Functions 
    bool hasNetmode() const { return this->netmode_ != nullptr;};
    void deleteNetmode() { this->netmode_ = nullptr;};
    inline string netmode() const { DARABONBA_PTR_GET_DEFAULT(netmode_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setNetmode(string netmode) { DARABONBA_PTR_SET_VALUE(netmode_, netmode) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks) };
    inline Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setOperationLocks(const Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setOperationLocks(Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // publicIpAddressPoolId Field Functions 
    bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
    void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
    inline string publicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservationActiveTime Field Functions 
    bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
    void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
    inline string reservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


    // reservationBandwidth Field Functions 
    bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
    void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
    inline string reservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setReservationBandwidth(string reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


    // reservationInternetChargeType Field Functions 
    bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
    void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
    inline string reservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


    // reservationOrderType Field Functions 
    bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
    void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
    inline string reservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondLimited Field Functions 
    bool hasSecondLimited() const { return this->secondLimited_ != nullptr;};
    void deleteSecondLimited() { this->secondLimited_ = nullptr;};
    inline bool secondLimited() const { DARABONBA_PTR_GET_DEFAULT(secondLimited_, false) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setSecondLimited(bool secondLimited) { DARABONBA_PTR_SET_VALUE(secondLimited_, secondLimited) };


    // securityProtectionTypes Field Functions 
    bool hasSecurityProtectionTypes() const { return this->securityProtectionTypes_ != nullptr;};
    void deleteSecurityProtectionTypes() { this->securityProtectionTypes_ = nullptr;};
    inline const Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes & securityProtectionTypes() const { DARABONBA_PTR_GET_CONST(securityProtectionTypes_, Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes) };
    inline Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes securityProtectionTypes() { DARABONBA_PTR_GET(securityProtectionTypes_, Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setSecurityProtectionTypes(const Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes & securityProtectionTypes) { DARABONBA_PTR_SET_VALUE(securityProtectionTypes_, securityProtectionTypes) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setSecurityProtectionTypes(Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes && securityProtectionTypes) { DARABONBA_PTR_SET_RVALUE(securityProtectionTypes_, securityProtectionTypes) };


    // segmentInstanceId Field Functions 
    bool hasSegmentInstanceId() const { return this->segmentInstanceId_ != nullptr;};
    void deleteSegmentInstanceId() { this->segmentInstanceId_ = nullptr;};
    inline string segmentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(segmentInstanceId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setSegmentInstanceId(string segmentInstanceId) { DARABONBA_PTR_SET_VALUE(segmentInstanceId_, segmentInstanceId) };


    // serviceID Field Functions 
    bool hasServiceID() const { return this->serviceID_ != nullptr;};
    void deleteServiceID() { this->serviceID_ = nullptr;};
    inline int64_t serviceID() const { DARABONBA_PTR_GET_DEFAULT(serviceID_, 0L) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setServiceID(int64_t serviceID) { DARABONBA_PTR_SET_VALUE(serviceID_, serviceID) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline int32_t serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, 0) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setServiceManaged(int32_t serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTags) };
    inline Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTags) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setTags(const Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setTags(Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // The ID of the EIP.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The time when the EIP was created. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> allocationTime_ = nullptr;
    // The maximum bandwidth of the EIP. Unit: Mbit/s.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The maximum bandwidth of the Internet Shared Bandwidth instance with which the EIP is associated. Unit: Mbit/s.
    std::shared_ptr<string> bandwidthPackageBandwidth_ = nullptr;
    // The ID of the Internet Shared Bandwidth instance.
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    // The type of the bandwidth. Only **CommonBandwidthPackage** may be returned, which indicates Internet Shared Bandwidth.
    std::shared_ptr<string> bandwidthPackageType_ = nullptr;
    // The service type. Valid values:
    // 
    // *   **CloudBox** Only cloud box users can select this type.
    // *   **Default** (default)
    std::shared_ptr<string> bizType_ = nullptr;
    // The service status of the EIP. Valid values:
    // 
    // *   **Normal**
    // *   **OperationLock**
    // *   **Unactivated**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The billing method of the EIP. Valid values:
    // 
    // *   **PostPaid**: pay-as-you-go.
    // *   **PrePaid**: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    // Indicates whether deletion protection is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The description of the EIP.
    std::shared_ptr<string> description_ = nullptr;
    // The maximum bandwidth of the EIP when it is not associated with an Internet Shared Bandwidth instance. Unit: Mbit/s.
    std::shared_ptr<string> eipBandwidth_ = nullptr;
    // The time when the EIP expires. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // Indicates whether fine-grained monitoring is enabled for the EIP. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<string> HDMonitorStatus_ = nullptr;
    // Indicates whether renewal data is included. Valid values:
    // 
    // *   **false**
    // *   **true** A value of **true** is returned only when **IncludeReservationData** is set to **true** and some orders have not taken effect.
    std::shared_ptr<string> hasReservationData_ = nullptr;
    // The line type. Valid values:
    // 
    // *   **BGP**: BGP (Multi-ISP). The BGP (Multi-ISP) line is supported in all regions.
    // *   **BGP_PRO**: BGP (Multi-ISP) Pro lines. BGP (Multi-ISP) Pro line is supported only in the China (Hong Kong), Singapore, Japan (Tokyo), Malaysia (Kuala Lumpur), Philippines (Manila), Indonesia (Jakarta), and Thailand (Bangkok) regions.
    // 
    // For more information about BGP (Multi-ISP) and BGP (Multi-ISP) Pro, see the [Line types](https://help.aliyun.com/document_detail/32321.html) section of the "What is EIP?" topic.
    // 
    // If you are allowed to use single-ISP bandwidth, one of the following values may be returned:
    // 
    // *   **ChinaTelecom**
    // *   **ChinaUnicom**
    // *   **ChinaMobile**
    // *   **ChinaTelecom_L2**
    // *   **ChinaUnicom_L2**
    // *   **ChinaMobile_L2**
    // 
    // If your services are deployed in China East 1 Finance, **BGP_FinanceCloud** is returned.
    std::shared_ptr<string> ISP_ = nullptr;
    // The ID of the associated instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the associated instance.
    std::shared_ptr<string> instanceRegionId_ = nullptr;
    // The type of the associated instance. Valid values:
    // 
    // *   **EcsInstance**: an ECS instance in a VPC.
    // *   **SlbInstance**: a CLB instance in a VPC.
    // *   **Nat**: a NAT gateway.
    // *   **HaVip**: an HAVIP.
    // *   **NetworkInterface**: a secondary ENI.
    // *   **IpAddress**: an IP address.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The metering method of the EIP. Valid values:
    // 
    // *   **PayByBandwidth**
    // *   **PayByTraffic**
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The EIP.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The association mode. Valid values:
    // - **NAT**: NAT mode
    // - **MULTI_BINDED**: multi-EIP-to-ENI mode
    // - **BINDED**: cut-through mode
    std::shared_ptr<string> mode_ = nullptr;
    // The name of the EIP.
    std::shared_ptr<string> name_ = nullptr;
    // The network type. Only **public** may be returned.
    std::shared_ptr<string> netmode_ = nullptr;
    // The details about the locked EIP.
    std::shared_ptr<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks> operationLocks_ = nullptr;
    // The private IP address of the secondary ENI with which the EIP is associated.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The ID of the IP address pool to which the EIP belongs.
    std::shared_ptr<string> publicIpAddressPoolId_ = nullptr;
    // The region ID of the EIP.
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the renewal took effect. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> reservationActiveTime_ = nullptr;
    // The maximum bandwidth after the renewal takes effect. Unit: Mbit/s.
    std::shared_ptr<string> reservationBandwidth_ = nullptr;
    // The metering method that is used after the renewal takes effect. Valid values:
    // 
    // *   **PayByBandwidth**
    // *   **PayByTraffic**
    std::shared_ptr<string> reservationInternetChargeType_ = nullptr;
    // The type of the renewal order. Valid values:
    // 
    // *   **RENEWCHANGE**: renewal with an upgrade or a downgrade.
    // *   **TEMP_UPGRADE**: temporary upgrade.
    // *   **UPGRADE**: upgrade.
    std::shared_ptr<string> reservationOrderType_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether level-2 throttling is configured. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> secondLimited_ = nullptr;
    // The edition of Anti-DDoS.
    // 
    // *   If an empty value is returned, it indicates that Anti-DDoS Origin Basic is used.
    // *   If **AntiDDoS_Enhanced** is returned, it indicates that Anti-DDoS Pro/Premium is used.
    std::shared_ptr<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes> securityProtectionTypes_ = nullptr;
    // The ID of the contiguous EIP group.
    // 
    // This value is returned only when you query contiguous EIPs.
    std::shared_ptr<string> segmentInstanceId_ = nullptr;
    // The ID of the service provider to which the managed instance belongs.
    // > This is only valid when the ServiceManaged parameter is set to True.
    std::shared_ptr<int64_t> serviceID_ = nullptr;
    // Indicates whether the instance is managed. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> serviceManaged_ = nullptr;
    // The status of the EIP. Valid values:
    // 
    // *   **Associating**
    // *   **Unassociating**
    // *   **InUse**
    // *   **Available**
    // *   **Releasing**
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the EIP.
    std::shared_ptr<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTags> tags_ = nullptr;
    // The ID of the VPC in which an IPv4 gateway is created and that is deployed in the same region as the EIP.
    // 
    // When you associate an EIP with an IP address, the system can enable the IP address to access the Internet based on VPC route configurations.
    // 
    // >  This parameter is returned if the value of **InstanceType** is **IpAddress**. In this case, the EIP is associated with an IP address.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone of the EIP.
    // 
    // This parameter is returned only when the service type is CloudBox.
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
