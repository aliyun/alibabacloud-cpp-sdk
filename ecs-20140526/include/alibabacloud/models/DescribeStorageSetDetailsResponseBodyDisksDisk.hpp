// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGESETDETAILSRESPONSEBODYDISKSDISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGESETDETAILSRESPONSEBODYDISKSDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeStorageSetDetailsResponseBodyDisksDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageSetDetailsResponseBodyDisksDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageSetDetailsResponseBodyDisksDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeStorageSetDetailsResponseBodyDisksDisk() = default ;
    DescribeStorageSetDetailsResponseBodyDisksDisk(const DescribeStorageSetDetailsResponseBodyDisksDisk &) = default ;
    DescribeStorageSetDetailsResponseBodyDisksDisk(DescribeStorageSetDetailsResponseBodyDisksDisk &&) = default ;
    DescribeStorageSetDetailsResponseBodyDisksDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageSetDetailsResponseBodyDisksDisk() = default ;
    DescribeStorageSetDetailsResponseBodyDisksDisk& operator=(const DescribeStorageSetDetailsResponseBodyDisksDisk &) = default ;
    DescribeStorageSetDetailsResponseBodyDisksDisk& operator=(DescribeStorageSetDetailsResponseBodyDisksDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->creationTime_ == nullptr && return this->diskId_ == nullptr && return this->diskName_ == nullptr && return this->regionId_ == nullptr && return this->storageSetId_ == nullptr
        && return this->storageSetPartitionNumber_ == nullptr && return this->zoneId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeStorageSetDetailsResponseBodyDisksDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeStorageSetDetailsResponseBodyDisksDisk& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeStorageSetDetailsResponseBodyDisksDisk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeStorageSetDetailsResponseBodyDisksDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeStorageSetDetailsResponseBodyDisksDisk& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string storageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline DescribeStorageSetDetailsResponseBodyDisksDisk& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t storageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline DescribeStorageSetDetailsResponseBodyDisksDisk& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeStorageSetDetailsResponseBodyDisksDisk& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The category of the disk or Shared Block Storage device.
    std::shared_ptr<string> category_ = nullptr;
    // The time when the disk or Shared Block Storage device was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the disk or Shared Block Storage device.
    std::shared_ptr<string> diskId_ = nullptr;
    // The name of the disk or Shared Block Storage device.
    std::shared_ptr<string> diskName_ = nullptr;
    // The region to which the disk or Shared Block Storage device belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the storage set.
    std::shared_ptr<string> storageSetId_ = nullptr;
    // The number of partitions in the storage set.
    std::shared_ptr<int32_t> storageSetPartitionNumber_ = nullptr;
    // The zone to which the disk or Shared Block Storage device belongs.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
