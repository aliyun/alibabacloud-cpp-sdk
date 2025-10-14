// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCESYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCESYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(device_type, deviceType_);
      DARABONBA_PTR_TO_JSON(disk_type, diskType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(storage, storage_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(device_type, deviceType_);
      DARABONBA_PTR_FROM_JSON(disk_type, diskType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(storage, storage_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    DescribeInstancesResponseBodyInstancesInstanceSystemDisk() = default ;
    DescribeInstancesResponseBodyInstancesInstanceSystemDisk(const DescribeInstancesResponseBodyInstancesInstanceSystemDisk &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceSystemDisk(DescribeInstancesResponseBodyInstancesInstanceSystemDisk &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceSystemDisk() = default ;
    DescribeInstancesResponseBodyInstancesInstanceSystemDisk& operator=(const DescribeInstancesResponseBodyInstancesInstanceSystemDisk &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceSystemDisk& operator=(DescribeInstancesResponseBodyInstancesInstanceSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->diskId_ == nullptr && return this->diskName_ == nullptr && return this->size_ == nullptr && return this->deviceType_ == nullptr && return this->diskType_ == nullptr
        && return this->name_ == nullptr && return this->storage_ == nullptr && return this->uuid_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceSystemDisk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceSystemDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstanceSystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceSystemDisk& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceSystemDisk& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceSystemDisk& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int32_t storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstanceSystemDisk& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceSystemDisk& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The category of the cloud disk or local disk. Valid values:
    // 
    // *   **file**: local disk.
    // *   **pangu**: ultra disk.
    // *   **local_hdd**: local HDD.
    std::shared_ptr<string> category_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The name of the disk.
    std::shared_ptr<string> diskName_ = nullptr;
    // The size of the disk. Unit: MiB.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The extended field of the disk category. Valid values:
    // 
    // *   **file**: local disk.
    // *   **pangu**: ultra disk.
    // *   **local_hdd**: local HDD.
    std::shared_ptr<string> deviceType_ = nullptr;
    // The type of the cloud disk or local disk. Valid values:
    // 
    // *   **system**: system disk.
    // *   **data**: data disk.
    std::shared_ptr<string> diskType_ = nullptr;
    // The name of the disk.
    std::shared_ptr<string> name_ = nullptr;
    // The size of the disk. Unit: MiB.
    std::shared_ptr<int32_t> storage_ = nullptr;
    // The UUID of the disk.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
