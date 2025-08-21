// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImagesResponseBodyImagesImageDiskDeviceMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImagesResponseBodyImagesImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    DescribeImagesResponseBodyImagesImage() = default ;
    DescribeImagesResponseBodyImagesImage(const DescribeImagesResponseBodyImagesImage &) = default ;
    DescribeImagesResponseBodyImagesImage(DescribeImagesResponseBodyImagesImage &&) = default ;
    DescribeImagesResponseBodyImagesImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBodyImagesImage() = default ;
    DescribeImagesResponseBodyImagesImage& operator=(const DescribeImagesResponseBodyImagesImage &) = default ;
    DescribeImagesResponseBodyImagesImage& operator=(DescribeImagesResponseBodyImagesImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->architecture_ != nullptr
        && this->creationTime_ != nullptr && this->diskDeviceMappings_ != nullptr && this->imageId_ != nullptr && this->imageName_ != nullptr && this->imageOwnerAlias_ != nullptr
        && this->imageSize_ != nullptr && this->platform_ != nullptr && this->regionId_ != nullptr && this->snapshotId_ != nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeImagesResponseBodyImagesImage& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeImagesResponseBodyImagesImage& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // diskDeviceMappings Field Functions 
    bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
    void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
    inline const Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings & diskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings) };
    inline Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings diskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings) };
    inline DescribeImagesResponseBodyImagesImage& setDiskDeviceMappings(const Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
    inline DescribeImagesResponseBodyImagesImage& setDiskDeviceMappings(Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImagesResponseBodyImagesImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeImagesResponseBodyImagesImage& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string imageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline DescribeImagesResponseBodyImagesImage& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline string imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, "") };
    inline DescribeImagesResponseBodyImagesImage& setImageSize(string imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeImagesResponseBodyImagesImage& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImagesResponseBodyImagesImage& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeImagesResponseBodyImagesImage& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The architecture of the image. Example: **x86_64**.
    std::shared_ptr<string> architecture_ = nullptr;
    // The time when the image was created. The time follows the ISO 8601 standard.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The mappings between the disk and the snapshot in the image.
    std::shared_ptr<Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings> diskDeviceMappings_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The source of the image. Valid values:
    // 
    // *   system: Alibaba Cloud public images
    // *   self: your custom images
    // *   others: shared images from other Alibaba Cloud accounts, or community images published by other Alibaba Cloud accounts
    std::shared_ptr<string> imageOwnerAlias_ = nullptr;
    // The size of the image. Unit: GiB.
    std::shared_ptr<string> imageSize_ = nullptr;
    // The operating system type of the image. Valid values:
    // 
    // *   Linux
    // *   Windows
    std::shared_ptr<string> platform_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
