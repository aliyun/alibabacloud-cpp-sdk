// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEPACKAGESRESPONSEBODYPACKAGESPACKAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEPACKAGESRESPONSEBODYPACKAGESPACKAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeStoragePackagesResponseBodyPackagesPackage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStoragePackagesResponseBodyPackagesPackage& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(PackageId, packageId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStoragePackagesResponseBodyPackagesPackage& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DescribeStoragePackagesResponseBodyPackagesPackage() = default ;
    DescribeStoragePackagesResponseBodyPackagesPackage(const DescribeStoragePackagesResponseBodyPackagesPackage &) = default ;
    DescribeStoragePackagesResponseBodyPackagesPackage(DescribeStoragePackagesResponseBodyPackagesPackage &&) = default ;
    DescribeStoragePackagesResponseBodyPackagesPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStoragePackagesResponseBodyPackagesPackage() = default ;
    DescribeStoragePackagesResponseBodyPackagesPackage& operator=(const DescribeStoragePackagesResponseBodyPackagesPackage &) = default ;
    DescribeStoragePackagesResponseBodyPackagesPackage& operator=(DescribeStoragePackagesResponseBodyPackagesPackage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiredTime_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->packageId_ == nullptr && return this->size_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->storageType_ == nullptr; };
    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeStoragePackagesResponseBodyPackagesPackage& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeStoragePackagesResponseBodyPackagesPackage& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // packageId Field Functions 
    bool hasPackageId() const { return this->packageId_ != nullptr;};
    void deletePackageId() { this->packageId_ = nullptr;};
    inline string packageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
    inline DescribeStoragePackagesResponseBodyPackagesPackage& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeStoragePackagesResponseBodyPackagesPackage& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeStoragePackagesResponseBodyPackagesPackage& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeStoragePackagesResponseBodyPackagesPackage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeStoragePackagesResponseBodyPackagesPackage& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The end time of the validity period for the storage plan.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The ID of the file system that is bound to the storage plan.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The ID of the storage plan.
    std::shared_ptr<string> packageId_ = nullptr;
    // The capacity of the storage plan.
    // 
    // Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The start time of the validity period for the storage plan.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the storage plan.
    // 
    // Valid values:
    // 
    // *   free: The storage plan is not bound to a file system. You can bind the storage plan to a file system of the same storage type.
    // *   bound: The storage plan is bound to a file system.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the storage plan.
    // 
    // Valid values:
    // 
    // *   Performance
    // *   Capacity
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
