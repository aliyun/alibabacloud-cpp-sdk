// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSRESPONSEBODYSTORAGECAPACITYUNITSSTORAGECAPACITYUNIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSRESPONSEBODYSTORAGECAPACITYUNITSSTORAGECAPACITYUNIT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnitTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit() = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit(const DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit &) = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit(DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit &&) = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit() = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& operator=(const DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit &) = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& operator=(DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationStatus_ == nullptr
        && return this->capacity_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->expiredTime_ == nullptr && return this->name_ == nullptr
        && return this->regionId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->storageCapacityUnitId_ == nullptr && return this->tags_ == nullptr; };
    // allocationStatus Field Functions 
    bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
    void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
    inline string allocationStatus() const { DARABONBA_PTR_GET_DEFAULT(allocationStatus_, "") };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setAllocationStatus(string allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int32_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0) };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setCapacity(int32_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageCapacityUnitId Field Functions 
    bool hasStorageCapacityUnitId() const { return this->storageCapacityUnitId_ != nullptr;};
    void deleteStorageCapacityUnitId() { this->storageCapacityUnitId_ = nullptr;};
    inline string storageCapacityUnitId() const { DARABONBA_PTR_GET_DEFAULT(storageCapacityUnitId_, "") };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setStorageCapacityUnitId(string storageCapacityUnitId) { DARABONBA_PTR_SET_VALUE(storageCapacityUnitId_, storageCapacityUnitId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnitTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnitTags) };
    inline Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnitTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnitTags) };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setTags(const Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnitTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit& setTags(Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnitTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // Indicates the allocation state of the SCU when the AllocationType parameter is set to Shared. Valid values:
    // 
    // *   allocated: The SCU is allocated to other accounts.
    // *   BeAllocated: The SCU is allocated from another account.
    std::shared_ptr<string> allocationStatus_ = nullptr;
    // The capacity of the SCU.
    std::shared_ptr<int32_t> capacity_ = nullptr;
    // The time when the SCU was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the SCU.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the SCU expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The name of the SCU.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID of the SCU.
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the SCU took effect.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the SCU. Valid values:
    // 
    // *   Creating: The SCUs are being created.
    // *   Active: The SCUs are in effect.
    // *   Expired: The SCUs have expired.
    // *   Pending: The SCUs have not taken effect.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the SCU.
    std::shared_ptr<string> storageCapacityUnitId_ = nullptr;
    // The tag key-value pairs of the SCU.
    std::shared_ptr<Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnitTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
