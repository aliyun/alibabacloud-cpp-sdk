// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImagesResponseBodyImagesImageDetectionOptions.hpp>
#include <alibabacloud/models/DescribeImagesResponseBodyImagesImageDiskDeviceMappings.hpp>
#include <alibabacloud/models/DescribeImagesResponseBodyImagesImageFeatures.hpp>
#include <alibabacloud/models/DescribeImagesResponseBodyImagesImageTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagesResponseBodyImagesImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetectionOptions, detectionOptions_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(ImageOwnerId, imageOwnerId_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(IsCopied, isCopied_);
      DARABONBA_PTR_TO_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_TO_JSON(IsSelfShared, isSelfShared_);
      DARABONBA_PTR_TO_JSON(IsSubscribed, isSubscribed_);
      DARABONBA_PTR_TO_JSON(IsSupportCloudinit, isSupportCloudinit_);
      DARABONBA_PTR_TO_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
      DARABONBA_PTR_TO_JSON(LoginAsNonRootSupported, loginAsNonRootSupported_);
      DARABONBA_PTR_TO_JSON(OSName, OSName_);
      DARABONBA_PTR_TO_JSON(OSNameEn, OSNameEn_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetectionOptions, detectionOptions_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerId, imageOwnerId_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(IsCopied, isCopied_);
      DARABONBA_PTR_FROM_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_FROM_JSON(IsSelfShared, isSelfShared_);
      DARABONBA_PTR_FROM_JSON(IsSubscribed, isSubscribed_);
      DARABONBA_PTR_FROM_JSON(IsSupportCloudinit, isSupportCloudinit_);
      DARABONBA_PTR_FROM_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
      DARABONBA_PTR_FROM_JSON(LoginAsNonRootSupported, loginAsNonRootSupported_);
      DARABONBA_PTR_FROM_JSON(OSName, OSName_);
      DARABONBA_PTR_FROM_JSON(OSNameEn, OSNameEn_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
        && this->bootMode_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->detectionOptions_ != nullptr && this->diskDeviceMappings_ != nullptr
        && this->features_ != nullptr && this->imageFamily_ != nullptr && this->imageId_ != nullptr && this->imageName_ != nullptr && this->imageOwnerAlias_ != nullptr
        && this->imageOwnerId_ != nullptr && this->imageVersion_ != nullptr && this->isCopied_ != nullptr && this->isPublic_ != nullptr && this->isSelfShared_ != nullptr
        && this->isSubscribed_ != nullptr && this->isSupportCloudinit_ != nullptr && this->isSupportIoOptimized_ != nullptr && this->loginAsNonRootSupported_ != nullptr && this->OSName_ != nullptr
        && this->OSNameEn_ != nullptr && this->OSType_ != nullptr && this->platform_ != nullptr && this->productCode_ != nullptr && this->progress_ != nullptr
        && this->resourceGroupId_ != nullptr && this->size_ != nullptr && this->status_ != nullptr && this->supplierName_ != nullptr && this->tags_ != nullptr
        && this->usage_ != nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeImagesResponseBodyImagesImage& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // bootMode Field Functions 
    bool hasBootMode() const { return this->bootMode_ != nullptr;};
    void deleteBootMode() { this->bootMode_ = nullptr;};
    inline string bootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
    inline DescribeImagesResponseBodyImagesImage& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeImagesResponseBodyImagesImage& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImagesResponseBodyImagesImage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detectionOptions Field Functions 
    bool hasDetectionOptions() const { return this->detectionOptions_ != nullptr;};
    void deleteDetectionOptions() { this->detectionOptions_ = nullptr;};
    inline const Models::DescribeImagesResponseBodyImagesImageDetectionOptions & detectionOptions() const { DARABONBA_PTR_GET_CONST(detectionOptions_, Models::DescribeImagesResponseBodyImagesImageDetectionOptions) };
    inline Models::DescribeImagesResponseBodyImagesImageDetectionOptions detectionOptions() { DARABONBA_PTR_GET(detectionOptions_, Models::DescribeImagesResponseBodyImagesImageDetectionOptions) };
    inline DescribeImagesResponseBodyImagesImage& setDetectionOptions(const Models::DescribeImagesResponseBodyImagesImageDetectionOptions & detectionOptions) { DARABONBA_PTR_SET_VALUE(detectionOptions_, detectionOptions) };
    inline DescribeImagesResponseBodyImagesImage& setDetectionOptions(Models::DescribeImagesResponseBodyImagesImageDetectionOptions && detectionOptions) { DARABONBA_PTR_SET_RVALUE(detectionOptions_, detectionOptions) };


    // diskDeviceMappings Field Functions 
    bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
    void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
    inline const Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings & diskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings) };
    inline Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings diskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings) };
    inline DescribeImagesResponseBodyImagesImage& setDiskDeviceMappings(const Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
    inline DescribeImagesResponseBodyImagesImage& setDiskDeviceMappings(Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const Models::DescribeImagesResponseBodyImagesImageFeatures & features() const { DARABONBA_PTR_GET_CONST(features_, Models::DescribeImagesResponseBodyImagesImageFeatures) };
    inline Models::DescribeImagesResponseBodyImagesImageFeatures features() { DARABONBA_PTR_GET(features_, Models::DescribeImagesResponseBodyImagesImageFeatures) };
    inline DescribeImagesResponseBodyImagesImage& setFeatures(const Models::DescribeImagesResponseBodyImagesImageFeatures & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline DescribeImagesResponseBodyImagesImage& setFeatures(Models::DescribeImagesResponseBodyImagesImageFeatures && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline DescribeImagesResponseBodyImagesImage& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


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


    // imageOwnerId Field Functions 
    bool hasImageOwnerId() const { return this->imageOwnerId_ != nullptr;};
    void deleteImageOwnerId() { this->imageOwnerId_ = nullptr;};
    inline int64_t imageOwnerId() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerId_, 0L) };
    inline DescribeImagesResponseBodyImagesImage& setImageOwnerId(int64_t imageOwnerId) { DARABONBA_PTR_SET_VALUE(imageOwnerId_, imageOwnerId) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline DescribeImagesResponseBodyImagesImage& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // isCopied Field Functions 
    bool hasIsCopied() const { return this->isCopied_ != nullptr;};
    void deleteIsCopied() { this->isCopied_ = nullptr;};
    inline bool isCopied() const { DARABONBA_PTR_GET_DEFAULT(isCopied_, false) };
    inline DescribeImagesResponseBodyImagesImage& setIsCopied(bool isCopied) { DARABONBA_PTR_SET_VALUE(isCopied_, isCopied) };


    // isPublic Field Functions 
    bool hasIsPublic() const { return this->isPublic_ != nullptr;};
    void deleteIsPublic() { this->isPublic_ = nullptr;};
    inline bool isPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, false) };
    inline DescribeImagesResponseBodyImagesImage& setIsPublic(bool isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


    // isSelfShared Field Functions 
    bool hasIsSelfShared() const { return this->isSelfShared_ != nullptr;};
    void deleteIsSelfShared() { this->isSelfShared_ = nullptr;};
    inline string isSelfShared() const { DARABONBA_PTR_GET_DEFAULT(isSelfShared_, "") };
    inline DescribeImagesResponseBodyImagesImage& setIsSelfShared(string isSelfShared) { DARABONBA_PTR_SET_VALUE(isSelfShared_, isSelfShared) };


    // isSubscribed Field Functions 
    bool hasIsSubscribed() const { return this->isSubscribed_ != nullptr;};
    void deleteIsSubscribed() { this->isSubscribed_ = nullptr;};
    inline bool isSubscribed() const { DARABONBA_PTR_GET_DEFAULT(isSubscribed_, false) };
    inline DescribeImagesResponseBodyImagesImage& setIsSubscribed(bool isSubscribed) { DARABONBA_PTR_SET_VALUE(isSubscribed_, isSubscribed) };


    // isSupportCloudinit Field Functions 
    bool hasIsSupportCloudinit() const { return this->isSupportCloudinit_ != nullptr;};
    void deleteIsSupportCloudinit() { this->isSupportCloudinit_ = nullptr;};
    inline bool isSupportCloudinit() const { DARABONBA_PTR_GET_DEFAULT(isSupportCloudinit_, false) };
    inline DescribeImagesResponseBodyImagesImage& setIsSupportCloudinit(bool isSupportCloudinit) { DARABONBA_PTR_SET_VALUE(isSupportCloudinit_, isSupportCloudinit) };


    // isSupportIoOptimized Field Functions 
    bool hasIsSupportIoOptimized() const { return this->isSupportIoOptimized_ != nullptr;};
    void deleteIsSupportIoOptimized() { this->isSupportIoOptimized_ = nullptr;};
    inline bool isSupportIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(isSupportIoOptimized_, false) };
    inline DescribeImagesResponseBodyImagesImage& setIsSupportIoOptimized(bool isSupportIoOptimized) { DARABONBA_PTR_SET_VALUE(isSupportIoOptimized_, isSupportIoOptimized) };


    // loginAsNonRootSupported Field Functions 
    bool hasLoginAsNonRootSupported() const { return this->loginAsNonRootSupported_ != nullptr;};
    void deleteLoginAsNonRootSupported() { this->loginAsNonRootSupported_ = nullptr;};
    inline bool loginAsNonRootSupported() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRootSupported_, false) };
    inline DescribeImagesResponseBodyImagesImage& setLoginAsNonRootSupported(bool loginAsNonRootSupported) { DARABONBA_PTR_SET_VALUE(loginAsNonRootSupported_, loginAsNonRootSupported) };


    // OSName Field Functions 
    bool hasOSName() const { return this->OSName_ != nullptr;};
    void deleteOSName() { this->OSName_ = nullptr;};
    inline string OSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
    inline DescribeImagesResponseBodyImagesImage& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


    // OSNameEn Field Functions 
    bool hasOSNameEn() const { return this->OSNameEn_ != nullptr;};
    void deleteOSNameEn() { this->OSNameEn_ = nullptr;};
    inline string OSNameEn() const { DARABONBA_PTR_GET_DEFAULT(OSNameEn_, "") };
    inline DescribeImagesResponseBodyImagesImage& setOSNameEn(string OSNameEn) { DARABONBA_PTR_SET_VALUE(OSNameEn_, OSNameEn) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline DescribeImagesResponseBodyImagesImage& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeImagesResponseBodyImagesImage& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeImagesResponseBodyImagesImage& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeImagesResponseBodyImagesImage& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeImagesResponseBodyImagesImage& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeImagesResponseBodyImagesImage& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImagesResponseBodyImagesImage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline DescribeImagesResponseBodyImagesImage& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeImagesResponseBodyImagesImageTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeImagesResponseBodyImagesImageTags) };
    inline Models::DescribeImagesResponseBodyImagesImageTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeImagesResponseBodyImagesImageTags) };
    inline DescribeImagesResponseBodyImagesImage& setTags(const Models::DescribeImagesResponseBodyImagesImageTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeImagesResponseBodyImagesImage& setTags(Models::DescribeImagesResponseBodyImagesImageTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline DescribeImagesResponseBodyImagesImage& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The architecture of the image. Valid values:
    // 
    // *   i386
    // *   x86_64
    // *   arm64
    std::shared_ptr<string> architecture_ = nullptr;
    // The boot mode of the image. Valid values:
    // 
    // *   BIOS: Basic Input/Output System (BIOS)
    // *   UEFI: Unified Extensible Firmware Interface (UEFI)
    // *   UEFI-Preferred: BIOS and UEFI
    // 
    // For information about the image boot modes, see [Image boot modes](~~2244655#b9caa9b8bb1wf~~).
    std::shared_ptr<string> bootMode_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // Details about the check performed on the image.
    std::shared_ptr<Models::DescribeImagesResponseBodyImagesImageDetectionOptions> detectionOptions_ = nullptr;
    // The mappings between disks and snapshots in the image.
    std::shared_ptr<Models::DescribeImagesResponseBodyImagesImageDiskDeviceMappings> diskDeviceMappings_ = nullptr;
    // The feature attributes of the image.
    std::shared_ptr<Models::DescribeImagesResponseBodyImagesImageFeatures> features_ = nullptr;
    // The name of the image family.
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The source of the image. Valid values:
    // 
    // *   system: a public image provided by Alibaba Cloud
    // *   self: a custom image that you created
    // *   others: a shared image from another Alibaba Cloud account or a community image published by another Alibaba Cloud account
    // *   marketplace: an Alibaba Cloud Marketplace image
    std::shared_ptr<string> imageOwnerAlias_ = nullptr;
    // The ID of the Alibaba Cloud account to which the image belongs. This parameter takes effect only if you query shared images or community images.
    std::shared_ptr<int64_t> imageOwnerId_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> imageVersion_ = nullptr;
    // Indicates whether the image is a copy of another image.
    std::shared_ptr<bool> isCopied_ = nullptr;
    // Indicates whether the image is publicly available. Publicly available images include public images provided by Alibaba Cloud and custom images published as community images. Valid values:
    // 
    // *   true: The image is publicly available.
    // *   false: The image is publicly unavailable.
    std::shared_ptr<bool> isPublic_ = nullptr;
    // Indicates whether the custom image was shared to other Alibaba Cloud accounts.
    std::shared_ptr<string> isSelfShared_ = nullptr;
    // Indicates whether you accepted the Terms of Service of the image service that corresponds to the product code.
    std::shared_ptr<bool> isSubscribed_ = nullptr;
    // Indicates whether the image supports cloud-init.
    std::shared_ptr<bool> isSupportCloudinit_ = nullptr;
    // Indicates whether the image can be used on I/O optimized instances.
    std::shared_ptr<bool> isSupportIoOptimized_ = nullptr;
    // Indicates whether the image supports logons of non-root users. Valid values:
    // 
    // *   true: The image supports logons of non-root users.
    // *   false: The image does not support logons of non-root users.
    std::shared_ptr<bool> loginAsNonRootSupported_ = nullptr;
    // The display name of the operating system in Chinese.
    std::shared_ptr<string> OSName_ = nullptr;
    // The display name of the operating system in English.
    std::shared_ptr<string> OSNameEn_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   windows
    // *   linux
    std::shared_ptr<string> OSType_ = nullptr;
    // The operating system platform.
    std::shared_ptr<string> platform_ = nullptr;
    // The Alibaba Cloud Marketplace product code of the image.
    std::shared_ptr<string> productCode_ = nullptr;
    // The creation progress of the image. Unit: percent (%).
    std::shared_ptr<string> progress_ = nullptr;
    // The ID of the resource group to which the image belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The size of the image. Unit: GiB.
    // 
    // >  If the image contains data disk snapshots, this parameter indicates only the size of the system disk snapshot contained in the image.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The state of the image. Valid values:
    // 
    // *   UnAvailable: The image is unavailable.
    // *   Available: The image is available.
    // *   Creating: The image is being created.
    // *   CreateFailed: The image failed to be created.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the supplier that published the community image.
    std::shared_ptr<string> supplierName_ = nullptr;
    // The tags of the image.
    std::shared_ptr<Models::DescribeImagesResponseBodyImagesImageTags> tags_ = nullptr;
    // Indicates whether the image was used to create ECS instances. Valid values:
    // 
    // *   instance: The image was used to create one or more ECS instances.
    // *   none: The image was not used to create ECS instances.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
