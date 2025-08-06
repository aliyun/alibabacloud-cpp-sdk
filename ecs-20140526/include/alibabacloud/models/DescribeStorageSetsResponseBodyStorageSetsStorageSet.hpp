// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGESETSRESPONSEBODYSTORAGESETSSTORAGESET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGESETSRESPONSEBODYSTORAGESETSSTORAGESET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStorageSetsResponseBodyStorageSetsStorageSetTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeStorageSetsResponseBodyStorageSetsStorageSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageSetsResponseBodyStorageSetsStorageSet& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_TO_JSON(StorageSetName, storageSetName_);
      DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageSetsResponseBodyStorageSetsStorageSet& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_FROM_JSON(StorageSetName, storageSetName_);
      DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeStorageSetsResponseBodyStorageSetsStorageSet() = default ;
    DescribeStorageSetsResponseBodyStorageSetsStorageSet(const DescribeStorageSetsResponseBodyStorageSetsStorageSet &) = default ;
    DescribeStorageSetsResponseBodyStorageSetsStorageSet(DescribeStorageSetsResponseBodyStorageSetsStorageSet &&) = default ;
    DescribeStorageSetsResponseBodyStorageSetsStorageSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageSetsResponseBodyStorageSetsStorageSet() = default ;
    DescribeStorageSetsResponseBodyStorageSetsStorageSet& operator=(const DescribeStorageSetsResponseBodyStorageSetsStorageSet &) = default ;
    DescribeStorageSetsResponseBodyStorageSetsStorageSet& operator=(DescribeStorageSetsResponseBodyStorageSetsStorageSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->storageSetId_ != nullptr && this->storageSetName_ != nullptr
        && this->storageSetPartitionNumber_ != nullptr && this->tags_ != nullptr && this->zoneId_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string storageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetName Field Functions 
    bool hasStorageSetName() const { return this->storageSetName_ != nullptr;};
    void deleteStorageSetName() { this->storageSetName_ = nullptr;};
    inline string storageSetName() const { DARABONBA_PTR_GET_DEFAULT(storageSetName_, "") };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setStorageSetName(string storageSetName) { DARABONBA_PTR_SET_VALUE(storageSetName_, storageSetName) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t storageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeStorageSetsResponseBodyStorageSetsStorageSetTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeStorageSetsResponseBodyStorageSetsStorageSetTags) };
    inline Models::DescribeStorageSetsResponseBodyStorageSetsStorageSetTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeStorageSetsResponseBodyStorageSetsStorageSetTags) };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setTags(const Models::DescribeStorageSetsResponseBodyStorageSetsStorageSetTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setTags(Models::DescribeStorageSetsResponseBodyStorageSetsStorageSetTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeStorageSetsResponseBodyStorageSetsStorageSet& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the storage set was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the storage set.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the region to which the storage set belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the storage set.
    std::shared_ptr<string> storageSetId_ = nullptr;
    // The name of the storage set.
    std::shared_ptr<string> storageSetName_ = nullptr;
    // The maximum number of partitions supported by the storage set.
    std::shared_ptr<int32_t> storageSetPartitionNumber_ = nullptr;
    std::shared_ptr<Models::DescribeStorageSetsResponseBodyStorageSetsStorageSetTags> tags_ = nullptr;
    // The ID of the zone to which the storage set belongs.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
