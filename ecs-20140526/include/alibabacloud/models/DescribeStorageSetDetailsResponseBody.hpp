// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGESETDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGESETDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeStorageSetDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageSetDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageSetDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStorageSetDetailsResponseBody() = default ;
    DescribeStorageSetDetailsResponseBody(const DescribeStorageSetDetailsResponseBody &) = default ;
    DescribeStorageSetDetailsResponseBody(DescribeStorageSetDetailsResponseBody &&) = default ;
    DescribeStorageSetDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageSetDetailsResponseBody() = default ;
    DescribeStorageSetDetailsResponseBody& operator=(const DescribeStorageSetDetailsResponseBody &) = default ;
    DescribeStorageSetDetailsResponseBody& operator=(DescribeStorageSetDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Disks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Disks& obj) { 
        DARABONBA_PTR_TO_JSON(Disk, disk_);
      };
      friend void from_json(const Darabonba::Json& j, Disks& obj) { 
        DARABONBA_PTR_FROM_JSON(Disk, disk_);
      };
      Disks() = default ;
      Disks(const Disks &) = default ;
      Disks(Disks &&) = default ;
      Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Disks() = default ;
      Disks& operator=(const Disks &) = default ;
      Disks& operator=(Disks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Disk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Disk& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
          DARABONBA_PTR_TO_JSON(DiskName, diskName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
          DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Disk& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
          DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
          DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Disk() = default ;
        Disk(const Disk &) = default ;
        Disk(Disk &&) = default ;
        Disk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Disk() = default ;
        Disk& operator=(const Disk &) = default ;
        Disk& operator=(Disk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->creationTime_ == nullptr && this->diskId_ == nullptr && this->diskName_ == nullptr && this->regionId_ == nullptr && this->storageSetId_ == nullptr
        && this->storageSetPartitionNumber_ == nullptr && this->zoneId_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Disk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Disk& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline Disk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // diskName Field Functions 
        bool hasDiskName() const { return this->diskName_ != nullptr;};
        void deleteDiskName() { this->diskName_ = nullptr;};
        inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
        inline Disk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Disk& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // storageSetId Field Functions 
        bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
        void deleteStorageSetId() { this->storageSetId_ = nullptr;};
        inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
        inline Disk& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


        // storageSetPartitionNumber Field Functions 
        bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
        void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
        inline int32_t getStorageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
        inline Disk& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Disk& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The category of the disk or Shared Block Storage device.
        shared_ptr<string> category_ {};
        // The time when the disk or Shared Block Storage device was created.
        shared_ptr<string> creationTime_ {};
        // The ID of the disk or Shared Block Storage device.
        shared_ptr<string> diskId_ {};
        // The name of the disk or Shared Block Storage device.
        shared_ptr<string> diskName_ {};
        // The region to which the disk or Shared Block Storage device belongs.
        shared_ptr<string> regionId_ {};
        // The ID of the storage set.
        shared_ptr<string> storageSetId_ {};
        // The number of partitions in the storage set.
        shared_ptr<int32_t> storageSetPartitionNumber_ {};
        // The zone to which the disk or Shared Block Storage device belongs.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->disk_ == nullptr; };
      // disk Field Functions 
      bool hasDisk() const { return this->disk_ != nullptr;};
      void deleteDisk() { this->disk_ = nullptr;};
      inline const vector<Disks::Disk> & getDisk() const { DARABONBA_PTR_GET_CONST(disk_, vector<Disks::Disk>) };
      inline vector<Disks::Disk> getDisk() { DARABONBA_PTR_GET(disk_, vector<Disks::Disk>) };
      inline Disks& setDisk(const vector<Disks::Disk> & disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };
      inline Disks& setDisk(vector<Disks::Disk> && disk) { DARABONBA_PTR_SET_RVALUE(disk_, disk) };


    protected:
      shared_ptr<vector<Disks::Disk>> disk_ {};
    };

    virtual bool empty() const override { return this->disks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const DescribeStorageSetDetailsResponseBody::Disks & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, DescribeStorageSetDetailsResponseBody::Disks) };
    inline DescribeStorageSetDetailsResponseBody::Disks getDisks() { DARABONBA_PTR_GET(disks_, DescribeStorageSetDetailsResponseBody::Disks) };
    inline DescribeStorageSetDetailsResponseBody& setDisks(const DescribeStorageSetDetailsResponseBody::Disks & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeStorageSetDetailsResponseBody& setDisks(DescribeStorageSetDetailsResponseBody::Disks && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStorageSetDetailsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStorageSetDetailsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStorageSetDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeStorageSetDetailsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the disks or Shared Block Storage devices in the storage set.
    shared_ptr<DescribeStorageSetDetailsResponseBody::Disks> disks_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of storage sets.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
