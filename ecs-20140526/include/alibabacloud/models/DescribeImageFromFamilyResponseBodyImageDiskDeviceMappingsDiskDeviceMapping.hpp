// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODYIMAGEDISKDEVICEMAPPINGSDISKDEVICEMAPPING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODYIMAGEDISKDEVICEMAPPINGSDISKDEVICEMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& obj) { 
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(ImportOSSBucket, importOSSBucket_);
      DARABONBA_PTR_TO_JSON(ImportOSSObject, importOSSObject_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(ImportOSSBucket, importOSSBucket_);
      DARABONBA_PTR_FROM_JSON(ImportOSSObject, importOSSObject_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping() = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping(const DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping &) = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping(DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping &&) = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping() = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& operator=(const DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping &) = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& operator=(DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->device_ != nullptr
        && this->format_ != nullptr && this->importOSSBucket_ != nullptr && this->importOSSObject_ != nullptr && this->size_ != nullptr && this->snapshotId_ != nullptr
        && this->type_ != nullptr; };
    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // importOSSBucket Field Functions 
    bool hasImportOSSBucket() const { return this->importOSSBucket_ != nullptr;};
    void deleteImportOSSBucket() { this->importOSSBucket_ = nullptr;};
    inline string importOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(importOSSBucket_, "") };
    inline DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& setImportOSSBucket(string importOSSBucket) { DARABONBA_PTR_SET_VALUE(importOSSBucket_, importOSSBucket) };


    // importOSSObject Field Functions 
    bool hasImportOSSObject() const { return this->importOSSObject_ != nullptr;};
    void deleteImportOSSObject() { this->importOSSObject_ = nullptr;};
    inline string importOSSObject() const { DARABONBA_PTR_GET_DEFAULT(importOSSObject_, "") };
    inline DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& setImportOSSObject(string importOSSObject) { DARABONBA_PTR_SET_VALUE(importOSSObject_, importOSSObject) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The device name of the disk. Example: /dev/xvdb.
    // 
    // >  This parameter will be removed in the future. To ensure compatibility, we recommend that you use other parameters.
    std::shared_ptr<string> device_ = nullptr;
    // The image format.
    std::shared_ptr<string> format_ = nullptr;
    // The OSS bucket that contains the imported image file.
    std::shared_ptr<string> importOSSBucket_ = nullptr;
    // The OSS object to which the imported image belongs.
    std::shared_ptr<string> importOSSObject_ = nullptr;
    // The size of the disk. Unit: GiB.
    std::shared_ptr<string> size_ = nullptr;
    // The snapshot ID.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The image type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
