// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODYCAPACITYRESERVATIONSETCAPACITYRESERVATIONITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODYCAPACITYRESERVATIONSETCAPACITYRESERVATIONITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources.hpp>
#include <alibabacloud/models/DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& obj) { 
      DARABONBA_PTR_TO_JSON(AllocatedResources, allocatedResources_);
      DARABONBA_PTR_TO_JSON(CapacityReservationOwnerId, capacityReservationOwnerId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeType, endTimeType_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsName, privatePoolOptionsName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeSlot, timeSlot_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocatedResources, allocatedResources_);
      DARABONBA_PTR_FROM_JSON(CapacityReservationOwnerId, capacityReservationOwnerId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeType, endTimeType_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsName, privatePoolOptionsName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeSlot, timeSlot_);
    };
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem() = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem(const DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem &) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem(DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem &&) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem() = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& operator=(const DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem &) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& operator=(DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocatedResources_ == nullptr
        && return this->capacityReservationOwnerId_ == nullptr && return this->description_ == nullptr && return this->endTime_ == nullptr && return this->endTimeType_ == nullptr && return this->instanceChargeType_ == nullptr
        && return this->platform_ == nullptr && return this->privatePoolOptionsId_ == nullptr && return this->privatePoolOptionsMatchCriteria_ == nullptr && return this->privatePoolOptionsName_ == nullptr && return this->regionId_ == nullptr
        && return this->reservedInstanceId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->savingPlanId_ == nullptr && return this->startTime_ == nullptr && return this->startTimeType_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr && return this->timeSlot_ == nullptr; };
    // allocatedResources Field Functions 
    bool hasAllocatedResources() const { return this->allocatedResources_ != nullptr;};
    void deleteAllocatedResources() { this->allocatedResources_ = nullptr;};
    inline const Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources & allocatedResources() const { DARABONBA_PTR_GET_CONST(allocatedResources_, Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources) };
    inline Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources allocatedResources() { DARABONBA_PTR_GET(allocatedResources_, Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setAllocatedResources(const Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources & allocatedResources) { DARABONBA_PTR_SET_VALUE(allocatedResources_, allocatedResources) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setAllocatedResources(Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources && allocatedResources) { DARABONBA_PTR_SET_RVALUE(allocatedResources_, allocatedResources) };


    // capacityReservationOwnerId Field Functions 
    bool hasCapacityReservationOwnerId() const { return this->capacityReservationOwnerId_ != nullptr;};
    void deleteCapacityReservationOwnerId() { this->capacityReservationOwnerId_ = nullptr;};
    inline string capacityReservationOwnerId() const { DARABONBA_PTR_GET_DEFAULT(capacityReservationOwnerId_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setCapacityReservationOwnerId(string capacityReservationOwnerId) { DARABONBA_PTR_SET_VALUE(capacityReservationOwnerId_, capacityReservationOwnerId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeType Field Functions 
    bool hasEndTimeType() const { return this->endTimeType_ != nullptr;};
    void deleteEndTimeType() { this->endTimeType_ = nullptr;};
    inline string endTimeType() const { DARABONBA_PTR_GET_DEFAULT(endTimeType_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setEndTimeType(string endTimeType) { DARABONBA_PTR_SET_VALUE(endTimeType_, endTimeType) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // privatePoolOptionsId Field Functions 
    bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
    void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
    inline string privatePoolOptionsId() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsId_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setPrivatePoolOptionsId(string privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };


    // privatePoolOptionsMatchCriteria Field Functions 
    bool hasPrivatePoolOptionsMatchCriteria() const { return this->privatePoolOptionsMatchCriteria_ != nullptr;};
    void deletePrivatePoolOptionsMatchCriteria() { this->privatePoolOptionsMatchCriteria_ = nullptr;};
    inline string privatePoolOptionsMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsMatchCriteria_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setPrivatePoolOptionsMatchCriteria(string privatePoolOptionsMatchCriteria) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsMatchCriteria_, privatePoolOptionsMatchCriteria) };


    // privatePoolOptionsName Field Functions 
    bool hasPrivatePoolOptionsName() const { return this->privatePoolOptionsName_ != nullptr;};
    void deletePrivatePoolOptionsName() { this->privatePoolOptionsName_ = nullptr;};
    inline string privatePoolOptionsName() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsName_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setPrivatePoolOptionsName(string privatePoolOptionsName) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsName_, privatePoolOptionsName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedInstanceId Field Functions 
    bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
    void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
    inline string reservedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceId_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setReservedInstanceId(string reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // savingPlanId Field Functions 
    bool hasSavingPlanId() const { return this->savingPlanId_ != nullptr;};
    void deleteSavingPlanId() { this->savingPlanId_ = nullptr;};
    inline string savingPlanId() const { DARABONBA_PTR_GET_DEFAULT(savingPlanId_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setSavingPlanId(string savingPlanId) { DARABONBA_PTR_SET_VALUE(savingPlanId_, savingPlanId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeType Field Functions 
    bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
    void deleteStartTimeType() { this->startTimeType_ = nullptr;};
    inline string startTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setStartTimeType(string startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags) };
    inline Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setTags(const Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setTags(Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeSlot Field Functions 
    bool hasTimeSlot() const { return this->timeSlot_ != nullptr;};
    void deleteTimeSlot() { this->timeSlot_ = nullptr;};
    inline string timeSlot() const { DARABONBA_PTR_GET_DEFAULT(timeSlot_, "") };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem& setTimeSlot(string timeSlot) { DARABONBA_PTR_SET_VALUE(timeSlot_, timeSlot) };


  protected:
    // Details of the allocated resources.
    std::shared_ptr<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources> allocatedResources_ = nullptr;
    // The ID of the capacity reservation owner.
    std::shared_ptr<string> capacityReservationOwnerId_ = nullptr;
    // The description of the capacity reservation.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the capacity reservation expires.
    std::shared_ptr<string> endTime_ = nullptr;
    // The release mode of the capacity reservation. Valid values:
    // 
    // *   Limited: The capacity reservation is automatically released at a specified time.
    // *   Unlimited: The capacity reservation is manually released. You can release the capacity reservation anytime.
    std::shared_ptr<string> endTimeType_ = nullptr;
    // The billing method of the instances created by using the capacity reservation. Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The operating system type of the instances created by using the capacity reservation. Valid values:
    // 
    // *   windows
    // *   linux
    std::shared_ptr<string> platform_ = nullptr;
    // The ID of the capacity reservation.
    std::shared_ptr<string> privatePoolOptionsId_ = nullptr;
    // The type of the private pool generated after the capacity reservation takes effect. Valid values:
    // 
    // *   Open: open private pool. If you use the capacity reservation to create Elastic Compute Service (ECS) instances, the open private pool that is associated with the capacity reservation is automatically matched. If no capacity is available in the open private pool, resources in the public pool are automatically used to create the instances.
    // *   Target: targeted private pool. If you use the capacity reservation to create ECS instances, the targeted private pool that is associated with the capacity reservation is automatically matched. If no capacity is available in the private pool, the instances fail to be created.
    std::shared_ptr<string> privatePoolOptionsMatchCriteria_ = nullptr;
    // The name of the capacity reservation.
    std::shared_ptr<string> privatePoolOptionsName_ = nullptr;
    // The region ID of the capacity reservation.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the reserved instance used with the capacity reservation.
    std::shared_ptr<string> reservedInstanceId_ = nullptr;
    // The ID of the resource group to which the capacity reservation belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the savings plan used with the capacity reservation.
    std::shared_ptr<string> savingPlanId_ = nullptr;
    // The time when the capacity reservation takes effect.
    std::shared_ptr<string> startTime_ = nullptr;
    // The mode in which the capacity reservation takes effect. Valid values:
    // 
    // *   Now: The capacity reservation takes effect immediately after it is created.
    // *   Later: The capacity reservation takes effect at a specified time.
    std::shared_ptr<string> startTimeType_ = nullptr;
    // The status of the capacity reservation. Valid values:
    // 
    // *   Pending: The capacity reservation is being initialized.
    // *   Preparing: The capacity reservation is being prepared.
    // *   Prepared: The capacity reservation is to take effect.
    // *   Active: The capacity reservation is in effect.
    // *   Released: The capacity reservation has been released manually or automatically when it expired.
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are added to the capacity reservation.
    std::shared_ptr<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags> tags_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> timeSlot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
