// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCESRESERVEDINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCESRESERVEDINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks.hpp>
#include <alibabacloud/models/DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceName, reservedInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceName, reservedInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance() = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance(const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance(DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance &&) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance() = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& operator=(const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& operator=(DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationStatus_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->expiredTime_ != nullptr && this->instanceAmount_ != nullptr && this->instanceType_ != nullptr
        && this->offeringType_ != nullptr && this->operationLocks_ != nullptr && this->platform_ != nullptr && this->regionId_ != nullptr && this->reservedInstanceId_ != nullptr
        && this->reservedInstanceName_ != nullptr && this->resourceGroupId_ != nullptr && this->scope_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->zoneId_ != nullptr; };
    // allocationStatus Field Functions 
    bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
    void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
    inline string allocationStatus() const { DARABONBA_PTR_GET_DEFAULT(allocationStatus_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setAllocationStatus(string allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // instanceAmount Field Functions 
    bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
    void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
    inline int32_t instanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // offeringType Field Functions 
    bool hasOfferingType() const { return this->offeringType_ != nullptr;};
    void deleteOfferingType() { this->offeringType_ = nullptr;};
    inline string offeringType() const { DARABONBA_PTR_GET_DEFAULT(offeringType_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setOfferingType(string offeringType) { DARABONBA_PTR_SET_VALUE(offeringType_, offeringType) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks) };
    inline Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks) };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setOperationLocks(const Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setOperationLocks(Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedInstanceId Field Functions 
    bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
    void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
    inline string reservedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceId_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setReservedInstanceId(string reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };


    // reservedInstanceName Field Functions 
    bool hasReservedInstanceName() const { return this->reservedInstanceName_ != nullptr;};
    void deleteReservedInstanceName() { this->reservedInstanceName_ = nullptr;};
    inline string reservedInstanceName() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceName_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setReservedInstanceName(string reservedInstanceName) { DARABONBA_PTR_SET_VALUE(reservedInstanceName_, reservedInstanceName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags) };
    inline Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags) };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setTags(const Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setTags(Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Indicates the sharing status of the reserved instance when the AllocationType parameter is set to Shared. Valid values:
    // 
    // *   allocated: The reserved instance is allocated to another account.
    // *   beAllocated: The reserved instance is allocated by another account.
    std::shared_ptr<string> allocationStatus_ = nullptr;
    // The creation time.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The expiration time.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The number of pay-as-you-go instances that are of the same instance type as the reserved instance and can be matched to the reserved instance.
    std::shared_ptr<int32_t> instanceAmount_ = nullptr;
    // The instance type of the pay-as-you-go instances that can be matched to the reserved instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The payment option.
    std::shared_ptr<string> offeringType_ = nullptr;
    // Details about the lock status of the reserved instance.
    std::shared_ptr<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks> operationLocks_ = nullptr;
    // The operating system of the image used by the instance. Valid values:
    // 
    // *   Windows
    // *   Linux
    std::shared_ptr<string> platform_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The reserved instance ID.
    std::shared_ptr<string> reservedInstanceId_ = nullptr;
    // The name.
    std::shared_ptr<string> reservedInstanceName_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The scope.
    std::shared_ptr<string> scope_ = nullptr;
    // The effective time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the reserved instance.
    std::shared_ptr<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags> tags_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
