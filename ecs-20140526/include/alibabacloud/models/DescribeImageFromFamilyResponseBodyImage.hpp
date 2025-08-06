// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODYIMAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODYIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings.hpp>
#include <alibabacloud/models/DescribeImageFromFamilyResponseBodyImageTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageFromFamilyResponseBodyImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFromFamilyResponseBodyImage& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(IsCopied, isCopied_);
      DARABONBA_PTR_TO_JSON(IsSelfShared, isSelfShared_);
      DARABONBA_PTR_TO_JSON(IsSubscribed, isSubscribed_);
      DARABONBA_PTR_TO_JSON(IsSupportCloudinit, isSupportCloudinit_);
      DARABONBA_PTR_TO_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
      DARABONBA_PTR_TO_JSON(OSName, OSName_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFromFamilyResponseBodyImage& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(IsCopied, isCopied_);
      DARABONBA_PTR_FROM_JSON(IsSelfShared, isSelfShared_);
      DARABONBA_PTR_FROM_JSON(IsSubscribed, isSubscribed_);
      DARABONBA_PTR_FROM_JSON(IsSupportCloudinit, isSupportCloudinit_);
      DARABONBA_PTR_FROM_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
      DARABONBA_PTR_FROM_JSON(OSName, OSName_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    DescribeImageFromFamilyResponseBodyImage() = default ;
    DescribeImageFromFamilyResponseBodyImage(const DescribeImageFromFamilyResponseBodyImage &) = default ;
    DescribeImageFromFamilyResponseBodyImage(DescribeImageFromFamilyResponseBodyImage &&) = default ;
    DescribeImageFromFamilyResponseBodyImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFromFamilyResponseBodyImage() = default ;
    DescribeImageFromFamilyResponseBodyImage& operator=(const DescribeImageFromFamilyResponseBodyImage &) = default ;
    DescribeImageFromFamilyResponseBodyImage& operator=(DescribeImageFromFamilyResponseBodyImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->architecture_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->diskDeviceMappings_ != nullptr && this->imageFamily_ != nullptr && this->imageId_ != nullptr
        && this->imageName_ != nullptr && this->imageOwnerAlias_ != nullptr && this->imageVersion_ != nullptr && this->isCopied_ != nullptr && this->isSelfShared_ != nullptr
        && this->isSubscribed_ != nullptr && this->isSupportCloudinit_ != nullptr && this->isSupportIoOptimized_ != nullptr && this->OSName_ != nullptr && this->OSType_ != nullptr
        && this->platform_ != nullptr && this->productCode_ != nullptr && this->progress_ != nullptr && this->size_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->usage_ != nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskDeviceMappings Field Functions 
    bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
    void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
    inline const Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings & diskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings) };
    inline Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings diskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings) };
    inline DescribeImageFromFamilyResponseBodyImage& setDiskDeviceMappings(const Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
    inline DescribeImageFromFamilyResponseBodyImage& setDiskDeviceMappings(Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string imageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // isCopied Field Functions 
    bool hasIsCopied() const { return this->isCopied_ != nullptr;};
    void deleteIsCopied() { this->isCopied_ = nullptr;};
    inline bool isCopied() const { DARABONBA_PTR_GET_DEFAULT(isCopied_, false) };
    inline DescribeImageFromFamilyResponseBodyImage& setIsCopied(bool isCopied) { DARABONBA_PTR_SET_VALUE(isCopied_, isCopied) };


    // isSelfShared Field Functions 
    bool hasIsSelfShared() const { return this->isSelfShared_ != nullptr;};
    void deleteIsSelfShared() { this->isSelfShared_ = nullptr;};
    inline string isSelfShared() const { DARABONBA_PTR_GET_DEFAULT(isSelfShared_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setIsSelfShared(string isSelfShared) { DARABONBA_PTR_SET_VALUE(isSelfShared_, isSelfShared) };


    // isSubscribed Field Functions 
    bool hasIsSubscribed() const { return this->isSubscribed_ != nullptr;};
    void deleteIsSubscribed() { this->isSubscribed_ = nullptr;};
    inline bool isSubscribed() const { DARABONBA_PTR_GET_DEFAULT(isSubscribed_, false) };
    inline DescribeImageFromFamilyResponseBodyImage& setIsSubscribed(bool isSubscribed) { DARABONBA_PTR_SET_VALUE(isSubscribed_, isSubscribed) };


    // isSupportCloudinit Field Functions 
    bool hasIsSupportCloudinit() const { return this->isSupportCloudinit_ != nullptr;};
    void deleteIsSupportCloudinit() { this->isSupportCloudinit_ = nullptr;};
    inline bool isSupportCloudinit() const { DARABONBA_PTR_GET_DEFAULT(isSupportCloudinit_, false) };
    inline DescribeImageFromFamilyResponseBodyImage& setIsSupportCloudinit(bool isSupportCloudinit) { DARABONBA_PTR_SET_VALUE(isSupportCloudinit_, isSupportCloudinit) };


    // isSupportIoOptimized Field Functions 
    bool hasIsSupportIoOptimized() const { return this->isSupportIoOptimized_ != nullptr;};
    void deleteIsSupportIoOptimized() { this->isSupportIoOptimized_ = nullptr;};
    inline bool isSupportIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(isSupportIoOptimized_, false) };
    inline DescribeImageFromFamilyResponseBodyImage& setIsSupportIoOptimized(bool isSupportIoOptimized) { DARABONBA_PTR_SET_VALUE(isSupportIoOptimized_, isSupportIoOptimized) };


    // OSName Field Functions 
    bool hasOSName() const { return this->OSName_ != nullptr;};
    void deleteOSName() { this->OSName_ = nullptr;};
    inline string OSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeImageFromFamilyResponseBodyImage& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeImageFromFamilyResponseBodyImageTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeImageFromFamilyResponseBodyImageTags) };
    inline Models::DescribeImageFromFamilyResponseBodyImageTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeImageFromFamilyResponseBodyImageTags) };
    inline DescribeImageFromFamilyResponseBodyImage& setTags(const Models::DescribeImageFromFamilyResponseBodyImageTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeImageFromFamilyResponseBodyImage& setTags(Models::DescribeImageFromFamilyResponseBodyImageTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline DescribeImageFromFamilyResponseBodyImage& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The architecture of the image. Valid values:
    // 
    // *   i386
    // *   x86_64
    std::shared_ptr<string> architecture_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the volume.
    std::shared_ptr<string> description_ = nullptr;
    // The mappings between the disk and the snapshot in the image.
    std::shared_ptr<Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings> diskDeviceMappings_ = nullptr;
    // The name of the image family.
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The alias of the image owner. Valid values:
    // 
    // *   system: public images provided by Alibaba Cloud
    // *   self: your custom images
    // *   others: shared images from other Alibaba Cloud accounts
    // *   marketplace: Alibaba Cloud Marketplace images
    std::shared_ptr<string> imageOwnerAlias_ = nullptr;
    // The image version.
    std::shared_ptr<string> imageVersion_ = nullptr;
    // Indicates whether the image is a copy of another image.
    std::shared_ptr<bool> isCopied_ = nullptr;
    // Indicates whether the custom image was shared to other Alibaba Cloud accounts.
    std::shared_ptr<string> isSelfShared_ = nullptr;
    // Indicates whether you have subscribed to the service terms of the image product corresponding to the image product code.
    std::shared_ptr<bool> isSubscribed_ = nullptr;
    // Indicates whether cloud-init is supported.
    std::shared_ptr<bool> isSupportCloudinit_ = nullptr;
    // Indicates whether the image can be used on I/O optimized instances.
    std::shared_ptr<bool> isSupportIoOptimized_ = nullptr;
    // The display name of the operating system in Chinese.
    std::shared_ptr<string> OSName_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   windows
    // *   linux
    std::shared_ptr<string> OSType_ = nullptr;
    // The operating system.
    std::shared_ptr<string> platform_ = nullptr;
    // The product code of the Alibaba Cloud Marketplace image.
    std::shared_ptr<string> productCode_ = nullptr;
    // The image creation progress in percentage.
    std::shared_ptr<string> progress_ = nullptr;
    // The size of the image. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The state of the image. Valid values:
    // 
    // *   UnAvailable
    // *   Available
    // *   Creating
    // *   CreateFailed
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the image.
    std::shared_ptr<Models::DescribeImageFromFamilyResponseBodyImageTags> tags_ = nullptr;
    // Indicates whether the image has been used to create ECS instances. Valid values:
    // 
    // *   instance: The image was used to create one or more ECS instances.
    // *   none: The image was not used to create ECS instances.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
