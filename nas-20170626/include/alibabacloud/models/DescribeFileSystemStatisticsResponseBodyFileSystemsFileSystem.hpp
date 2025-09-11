// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSFILESYSTEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSFILESYSTEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(MeteredIASize, meteredIASize_);
      DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_TO_JSON(Packages, packages_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(MeteredIASize, meteredIASize_);
      DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_FROM_JSON(Packages, packages_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem(const DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem(DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem &&) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& operator=(const DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& operator=(DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacity_ != nullptr
        && this->chargeType_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->expiredTime_ != nullptr && this->fileSystemId_ != nullptr
        && this->fileSystemType_ != nullptr && this->meteredIASize_ != nullptr && this->meteredSize_ != nullptr && this->packages_ != nullptr && this->protocolType_ != nullptr
        && this->regionId_ != nullptr && this->status_ != nullptr && this->storageType_ != nullptr && this->zoneId_ != nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // meteredIASize Field Functions 
    bool hasMeteredIASize() const { return this->meteredIASize_ != nullptr;};
    void deleteMeteredIASize() { this->meteredIASize_ = nullptr;};
    inline int64_t meteredIASize() const { DARABONBA_PTR_GET_DEFAULT(meteredIASize_, 0L) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setMeteredIASize(int64_t meteredIASize) { DARABONBA_PTR_SET_VALUE(meteredIASize_, meteredIASize) };


    // meteredSize Field Functions 
    bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
    void deleteMeteredSize() { this->meteredSize_ = nullptr;};
    inline int64_t meteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


    // packages Field Functions 
    bool hasPackages() const { return this->packages_ != nullptr;};
    void deletePackages() { this->packages_ = nullptr;};
    inline const Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages & packages() const { DARABONBA_PTR_GET_CONST(packages_, Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages) };
    inline Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages packages() { DARABONBA_PTR_GET(packages_, Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setPackages(const Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setPackages(Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The capacity of the file system.
    // 
    // Unit: GiB.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   Subscription: The subscription billing method is used.
    // *   PayAsYouGo: The pay-as-you-go billing method is used.
    // *   Package: A storage plan is attached to the file system.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the NAS file system was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the file system.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the file system expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard: General-purpose NAS file system
    // *   extreme: Extreme NAS file system
    // *   cpfs: CPFS file system
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The storage usage of the Infrequent Access (IA) storage medium.
    // 
    // Unit: bytes.
    std::shared_ptr<int64_t> meteredIASize_ = nullptr;
    // The storage usage of the file system.
    // 
    // The value of this parameter is the maximum storage usage of the file system over the last hour. Unit: bytes.
    std::shared_ptr<int64_t> meteredSize_ = nullptr;
    // The information about storage plans.
    std::shared_ptr<Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages> packages_ = nullptr;
    // The protocol type of the file system.
    // 
    // Valid values:
    // 
    // *   NFS: Network File System (NFS)
    // *   SMB: Server Message Block (SMB)
    // *   cpfs: the protocol type supported by the CPFS file system
    std::shared_ptr<string> protocolType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the file system.
    // 
    // This parameter is returned for Extreme NAS file systems and Cloud Parallel File Storage (CPFS) file systems. Valid values:
    // 
    // *   Pending: The file system is being created or modified.
    // *   Running: The file system is available. Before you create a mount target for the file system, make sure that the file system is in the Running state.
    // *   Stopped: The file system is unavailable.
    // *   Extending: The file system is being scaled out.
    // *   Stopping: The file system is being disabled.
    // *   Deleting: The file system is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The storage type.
    // 
    // Valid values:
    // 
    // *   Valid values for General-purpose NAS file systems: Capacity and Performance.
    // *   Valid values for Extreme NAS file systems: standard and advance.
    // *   Valid values for CPFS file systems: advance_100 (100 MB/s/TiB baseline) and advance_200 (200 MB/s/TiB baseline).
    std::shared_ptr<string> storageType_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
