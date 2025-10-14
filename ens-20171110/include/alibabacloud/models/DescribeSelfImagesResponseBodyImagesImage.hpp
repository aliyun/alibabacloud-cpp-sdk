// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESELFIMAGESRESPONSEBODYIMAGESIMAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESELFIMAGESRESPONSEBODYIMAGESIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSelfImagesResponseBodyImagesImageDiskDeviceMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSelfImagesResponseBodyImagesImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSelfImagesResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(ComputeType, computeType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_TO_JSON(ImageStorageSize, imageStorageSize_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSelfImagesResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(ComputeType, computeType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_FROM_JSON(ImageStorageSize, imageStorageSize_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSelfImagesResponseBodyImagesImage() = default ;
    DescribeSelfImagesResponseBodyImagesImage(const DescribeSelfImagesResponseBodyImagesImage &) = default ;
    DescribeSelfImagesResponseBodyImagesImage(DescribeSelfImagesResponseBodyImagesImage &&) = default ;
    DescribeSelfImagesResponseBodyImagesImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSelfImagesResponseBodyImagesImage() = default ;
    DescribeSelfImagesResponseBodyImagesImage& operator=(const DescribeSelfImagesResponseBodyImagesImage &) = default ;
    DescribeSelfImagesResponseBodyImagesImage& operator=(DescribeSelfImagesResponseBodyImagesImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architecture_ == nullptr
        && return this->computeType_ == nullptr && return this->creationTime_ == nullptr && return this->diskDeviceMappings_ == nullptr && return this->imageId_ == nullptr && return this->imageName_ == nullptr
        && return this->imageOwnerAlias_ == nullptr && return this->imageSize_ == nullptr && return this->imageStorageSize_ == nullptr && return this->instanceId_ == nullptr && return this->osVersion_ == nullptr
        && return this->platform_ == nullptr && return this->regionId_ == nullptr && return this->snapshotId_ == nullptr && return this->status_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // computeType Field Functions 
    bool hasComputeType() const { return this->computeType_ != nullptr;};
    void deleteComputeType() { this->computeType_ = nullptr;};
    inline string computeType() const { DARABONBA_PTR_GET_DEFAULT(computeType_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setComputeType(string computeType) { DARABONBA_PTR_SET_VALUE(computeType_, computeType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // diskDeviceMappings Field Functions 
    bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
    void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
    inline const Models::DescribeSelfImagesResponseBodyImagesImageDiskDeviceMappings & diskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, Models::DescribeSelfImagesResponseBodyImagesImageDiskDeviceMappings) };
    inline Models::DescribeSelfImagesResponseBodyImagesImageDiskDeviceMappings diskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, Models::DescribeSelfImagesResponseBodyImagesImageDiskDeviceMappings) };
    inline DescribeSelfImagesResponseBodyImagesImage& setDiskDeviceMappings(const Models::DescribeSelfImagesResponseBodyImagesImageDiskDeviceMappings & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
    inline DescribeSelfImagesResponseBodyImagesImage& setDiskDeviceMappings(Models::DescribeSelfImagesResponseBodyImagesImageDiskDeviceMappings && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string imageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline string imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setImageSize(string imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // imageStorageSize Field Functions 
    bool hasImageStorageSize() const { return this->imageStorageSize_ != nullptr;};
    void deleteImageStorageSize() { this->imageStorageSize_ = nullptr;};
    inline string imageStorageSize() const { DARABONBA_PTR_GET_DEFAULT(imageStorageSize_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setImageStorageSize(string imageStorageSize) { DARABONBA_PTR_SET_VALUE(imageStorageSize_, imageStorageSize) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSelfImagesResponseBodyImagesImage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The image architecture. Valid values:
    // 
    // *   i386
    // *   x86_64
    std::shared_ptr<string> architecture_ = nullptr;
    // Computing type. ens_vm/ens: x86 computing. bare_metal: x86 bare machine or x86 bare metal. arm_vm: ARM computing. arm_bare_metal: ARM bare machine or ARM bare metal. pcfarm: heterogeneous computing.
    std::shared_ptr<string> computeType_ = nullptr;
    // The image creation time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The mappings between the disk and the snapshot in the image.
    std::shared_ptr<Models::DescribeSelfImagesResponseBodyImagesImageDiskDeviceMappings> diskDeviceMappings_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The source of the image. Valid values:
    // 
    // *   **others**: a custom image that is shared by other Alibaba Cloud accounts.
    // *   **self**: your own custom image.
    std::shared_ptr<string> imageOwnerAlias_ = nullptr;
    // The size of the image. Unit: GiB.
    std::shared_ptr<string> imageSize_ = nullptr;
    // The size of the image storage.
    std::shared_ptr<string> imageStorageSize_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The operating system version.
    std::shared_ptr<string> osVersion_ = nullptr;
    // The platform.
    // 
    // *   centos
    // *   ubuntu
    // *   alios
    // *   debian
    // *   rhel
    // *   windows
    std::shared_ptr<string> platform_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The snapshot ID.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The state of the image.
    // 
    // *   Creating.
    // *   Packing.
    // *   Uploading.
    // *   Pack_failed.
    // *   Upload_failed.
    // *   Available: Only images in the Available state can be used and operated.
    // *   Unavailable.
    // *   Copying.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
