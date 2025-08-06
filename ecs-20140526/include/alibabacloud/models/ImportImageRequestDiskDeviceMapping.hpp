// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTIMAGEREQUESTDISKDEVICEMAPPING_HPP_
#define ALIBABACLOUD_MODELS_IMPORTIMAGEREQUESTDISKDEVICEMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ImportImageRequestDiskDeviceMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportImageRequestDiskDeviceMapping& obj) { 
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskImSize, diskImSize_);
      DARABONBA_PTR_TO_JSON(DiskImageSize, diskImageSize_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(OSSObject, OSSObject_);
    };
    friend void from_json(const Darabonba::Json& j, ImportImageRequestDiskDeviceMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskImSize, diskImSize_);
      DARABONBA_PTR_FROM_JSON(DiskImageSize, diskImageSize_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(OSSObject, OSSObject_);
    };
    ImportImageRequestDiskDeviceMapping() = default ;
    ImportImageRequestDiskDeviceMapping(const ImportImageRequestDiskDeviceMapping &) = default ;
    ImportImageRequestDiskDeviceMapping(ImportImageRequestDiskDeviceMapping &&) = default ;
    ImportImageRequestDiskDeviceMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportImageRequestDiskDeviceMapping() = default ;
    ImportImageRequestDiskDeviceMapping& operator=(const ImportImageRequestDiskDeviceMapping &) = default ;
    ImportImageRequestDiskDeviceMapping& operator=(ImportImageRequestDiskDeviceMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->device_ != nullptr
        && this->diskImSize_ != nullptr && this->diskImageSize_ != nullptr && this->format_ != nullptr && this->OSSBucket_ != nullptr && this->OSSObject_ != nullptr; };
    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline ImportImageRequestDiskDeviceMapping& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskImSize Field Functions 
    bool hasDiskImSize() const { return this->diskImSize_ != nullptr;};
    void deleteDiskImSize() { this->diskImSize_ = nullptr;};
    inline int32_t diskImSize() const { DARABONBA_PTR_GET_DEFAULT(diskImSize_, 0) };
    inline ImportImageRequestDiskDeviceMapping& setDiskImSize(int32_t diskImSize) { DARABONBA_PTR_SET_VALUE(diskImSize_, diskImSize) };


    // diskImageSize Field Functions 
    bool hasDiskImageSize() const { return this->diskImageSize_ != nullptr;};
    void deleteDiskImageSize() { this->diskImageSize_ = nullptr;};
    inline int32_t diskImageSize() const { DARABONBA_PTR_GET_DEFAULT(diskImageSize_, 0) };
    inline ImportImageRequestDiskDeviceMapping& setDiskImageSize(int32_t diskImageSize) { DARABONBA_PTR_SET_VALUE(diskImageSize_, diskImageSize) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ImportImageRequestDiskDeviceMapping& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string OSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline ImportImageRequestDiskDeviceMapping& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // OSSObject Field Functions 
    bool hasOSSObject() const { return this->OSSObject_ != nullptr;};
    void deleteOSSObject() { this->OSSObject_ = nullptr;};
    inline string OSSObject() const { DARABONBA_PTR_GET_DEFAULT(OSSObject_, "") };
    inline ImportImageRequestDiskDeviceMapping& setOSSObject(string OSSObject) { DARABONBA_PTR_SET_VALUE(OSSObject_, OSSObject) };


  protected:
    // The device name of disk N in the custom image.
    // 
    // >  This parameter will be removed in the future. We recommend that you do not use this parameter to ensure future compatibility.
    std::shared_ptr<string> device_ = nullptr;
    // The size of disk N in the custom image. Unit: GiB.
    // 
    // You can use this parameter to specify the sizes of the system disk and data disks in the custom image. When you specify the size of the system disk, make sure that the specified size is greater than or equal to the size of the imported image file. Unit: GiB. Valid values:
    // 
    // *   When the N value is 1, this parameter specifies the size of the system disk in the custom image. Valid values: 1 to 2048.
    // *   When the N value is an integer in the range of 2 to 17, this parameter specifies the size of a data disk in the custom image. Valid values: 1 to 2048.
    // 
    // After the image file is uploaded to an OSS bucket, you can view the size of the image file in the OSS bucket.
    // 
    // >  This parameter will be removed in the future. We recommend that you use `DiskDeviceMapping.N.DiskImageSize` to ensure future compatibility.
    std::shared_ptr<int32_t> diskImSize_ = nullptr;
    // The size of disk N in the custom image after the source image is imported.
    // 
    // You can use this parameter to specify the sizes of the system disk and data disks in the custom image. When you specify the size of the system disk, make sure that the specified size is greater than or equal to the size of the imported image file. Unit: GiB. Valid values:
    // 
    // *   When the N value is 1, this parameter specifies the size of the system disk in the custom image. Valid values: 1 to 2048.
    // *   When the N value is an integer in the range of 2 to 17, this parameter specifies the size of a data disk in the custom image. Valid values: 1 to 2048.
    // 
    // After the image file is uploaded to an OSS bucket, you can view the size of the image file in the OSS bucket.
    std::shared_ptr<int32_t> diskImageSize_ = nullptr;
    // The format of the source image. Valid values:
    // 
    // *   RAW
    // *   VHD
    // *   QCOW2
    // *   VMDK (invitational preview)
    // 
    // This parameter is empty by default, which indicates that the system checks the image format and uses the check result as the value of this parameter.
    std::shared_ptr<string> format_ = nullptr;
    // The Object Storage Service (OSS) bucket where the image file is stored.
    // 
    // >  Before you import images for the first time, you must use RAM to authorize ECS to access your OSS buckets. If ECS is not authorized to access your OSS buckets, the `NoSetRoletoECSServiceAcount` error code is returned when you call the ImportImage operation. For more information, see **Usage notes**.
    std::shared_ptr<string> OSSBucket_ = nullptr;
    // The name (key) of the object that the image file is stored as in the OSS bucket.
    std::shared_ptr<string> OSSObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
