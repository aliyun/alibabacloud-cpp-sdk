// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeEipAddressesResponseBodyEipAddressesEipAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesResponseBodyEipAddressesEipAddress& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(AllocationTime, allocationTime_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesResponseBodyEipAddressesEipAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(AllocationTime, allocationTime_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
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
        && return this->allocationTime_ == nullptr && return this->bandwidth_ == nullptr && return this->chargeType_ == nullptr && return this->eipBandwidth_ == nullptr && return this->expiredTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->internetChargeType_ == nullptr && return this->ipAddress_ == nullptr && return this->operationLocks_ == nullptr
        && return this->regionId_ == nullptr && return this->status_ == nullptr; };
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


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


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


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks) };
    inline Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setOperationLocks(const Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setOperationLocks(Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> allocationId_ = nullptr;
    std::shared_ptr<string> allocationTime_ = nullptr;
    std::shared_ptr<string> bandwidth_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> eipBandwidth_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> internetChargeType_ = nullptr;
    std::shared_ptr<string> ipAddress_ = nullptr;
    std::shared_ptr<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks> operationLocks_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
