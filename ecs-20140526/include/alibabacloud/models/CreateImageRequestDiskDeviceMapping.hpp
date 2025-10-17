// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEREQUESTDISKDEVICEMAPPING_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEREQUESTDISKDEVICEMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImageRequestDiskDeviceMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageRequestDiskDeviceMapping& obj) { 
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageRequestDiskDeviceMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    CreateImageRequestDiskDeviceMapping() = default ;
    CreateImageRequestDiskDeviceMapping(const CreateImageRequestDiskDeviceMapping &) = default ;
    CreateImageRequestDiskDeviceMapping(CreateImageRequestDiskDeviceMapping &&) = default ;
    CreateImageRequestDiskDeviceMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageRequestDiskDeviceMapping() = default ;
    CreateImageRequestDiskDeviceMapping& operator=(const CreateImageRequestDiskDeviceMapping &) = default ;
    CreateImageRequestDiskDeviceMapping& operator=(CreateImageRequestDiskDeviceMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->device_ == nullptr
        && return this->diskType_ == nullptr && return this->size_ == nullptr && return this->snapshotId_ == nullptr; };
    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline CreateImageRequestDiskDeviceMapping& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateImageRequestDiskDeviceMapping& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateImageRequestDiskDeviceMapping& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateImageRequestDiskDeviceMapping& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The device name of disk N in the custom image. Valid values:
    // 
    // *   The device name of the system disk must be /dev/xvda.
    // *   The device names of the data disks are unique and range from /dev/xvdb to /dev/xvdz in alphabetical order.
    std::shared_ptr<string> device_ = nullptr;
    // The type of disk N in the custom image. You can specify this parameter to create the system disk of the custom image from a data disk snapshot. If you do not specify this parameter, the disk type is determined by the corresponding snapshot. Valid values:
    // 
    // *   system: system disk. You can specify only one snapshot to use to create the system disk in the custom image.
    // *   data: data disk. You can specify up to 16 snapshots to use to create data disks in the custom image.
    std::shared_ptr<string> diskType_ = nullptr;
    // The size of disk N in the custom image. Unit: GiB. The valid values and default value of DiskDeviceMapping.N.Size vary based on the value of DiskDeviceMapping.N.SnapshotId.
    // 
    // *   If you leave DiskDeviceMapping.N.SnapshotId empty, DiskDeviceMapping.N.Size has the following valid values and default values:
    // 
    //     *   For basic disks, the valid values range from 5 to 2000, and the default value is 5.
    //     *   For other disks, the valid values range from 20 to 32768, and the default value is 20.
    // 
    // *   If you specify DiskDeviceMapping.N.SnapshotId, the value of DiskDeviceMapping.N.Size must be greater than or equal to the size of the specified snapshot. The default value of DiskDeviceMapping.N.Size is the size of the specified snapshot.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
