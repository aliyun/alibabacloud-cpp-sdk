// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEDISKDEVICEMAPPINGSDISKDEVICEMAPPING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEDISKDEVICEMAPPINGSDISKDEVICEMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& obj) { 
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(ImportOSSBucket, importOSSBucket_);
      DARABONBA_PTR_TO_JSON(ImportOSSObject, importOSSObject_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(ImportOSSBucket, importOSSBucket_);
      DARABONBA_PTR_FROM_JSON(ImportOSSObject, importOSSObject_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping() = default ;
    DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping(const DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping &) = default ;
    DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping(DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping &&) = default ;
    DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping() = default ;
    DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& operator=(const DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping &) = default ;
    DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& operator=(DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->device_ != nullptr
        && this->encrypted_ != nullptr && this->format_ != nullptr && this->importOSSBucket_ != nullptr && this->importOSSObject_ != nullptr && this->progress_ != nullptr
        && this->remainTime_ != nullptr && this->size_ != nullptr && this->snapshotId_ != nullptr && this->type_ != nullptr; };
    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // importOSSBucket Field Functions 
    bool hasImportOSSBucket() const { return this->importOSSBucket_ != nullptr;};
    void deleteImportOSSBucket() { this->importOSSBucket_ = nullptr;};
    inline string importOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(importOSSBucket_, "") };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setImportOSSBucket(string importOSSBucket) { DARABONBA_PTR_SET_VALUE(importOSSBucket_, importOSSBucket) };


    // importOSSObject Field Functions 
    bool hasImportOSSObject() const { return this->importOSSObject_ != nullptr;};
    void deleteImportOSSObject() { this->importOSSObject_ = nullptr;};
    inline string importOSSObject() const { DARABONBA_PTR_GET_DEFAULT(importOSSObject_, "") };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setImportOSSObject(string importOSSObject) { DARABONBA_PTR_SET_VALUE(importOSSObject_, importOSSObject) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // remainTime Field Functions 
    bool hasRemainTime() const { return this->remainTime_ != nullptr;};
    void deleteRemainTime() { this->remainTime_ = nullptr;};
    inline int32_t remainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImagesResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The device name of the disk. Example: /dev/xvdb.
    std::shared_ptr<string> device_ = nullptr;
    // >  This parameter is in invitational preview.
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The format of the image.
    std::shared_ptr<string> format_ = nullptr;
    // The Object Storage Service (OSS) bucket that contains the imported image file.
    std::shared_ptr<string> importOSSBucket_ = nullptr;
    // The OSS object that corresponds to the imported image file.
    std::shared_ptr<string> importOSSObject_ = nullptr;
    // The progress of the image copy task.
    std::shared_ptr<string> progress_ = nullptr;
    // The remaining time of the image copy task. Unit: seconds.
    std::shared_ptr<int32_t> remainTime_ = nullptr;
    // The size of the disk. Unit: GiB.
    std::shared_ptr<string> size_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The type of the image.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
