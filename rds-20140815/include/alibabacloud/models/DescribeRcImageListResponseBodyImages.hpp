// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCIMAGELISTRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCIMAGELISTRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCImageListResponseBodyImagesDiskDeviceMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCImageListResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCImageListResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_TO_JSON(IsSupportRdsCustom, isSupportRdsCustom_);
      DARABONBA_PTR_TO_JSON(OSName, OSName_);
      DARABONBA_PTR_TO_JSON(OSNameEn, OSNameEn_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCImageListResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_FROM_JSON(IsSupportRdsCustom, isSupportRdsCustom_);
      DARABONBA_PTR_FROM_JSON(OSName, OSName_);
      DARABONBA_PTR_FROM_JSON(OSNameEn, OSNameEn_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    DescribeRCImageListResponseBodyImages() = default ;
    DescribeRCImageListResponseBodyImages(const DescribeRCImageListResponseBodyImages &) = default ;
    DescribeRCImageListResponseBodyImages(DescribeRCImageListResponseBodyImages &&) = default ;
    DescribeRCImageListResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCImageListResponseBodyImages() = default ;
    DescribeRCImageListResponseBodyImages& operator=(const DescribeRCImageListResponseBodyImages &) = default ;
    DescribeRCImageListResponseBodyImages& operator=(DescribeRCImageListResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architecture_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->diskDeviceMappings_ == nullptr && return this->imageId_ == nullptr && return this->imageName_ == nullptr
        && return this->imageVersion_ == nullptr && return this->isPublic_ == nullptr && return this->isSupportRdsCustom_ == nullptr && return this->OSName_ == nullptr && return this->OSNameEn_ == nullptr
        && return this->OSType_ == nullptr && return this->platform_ == nullptr && return this->size_ == nullptr && return this->status_ == nullptr && return this->usage_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeRCImageListResponseBodyImages& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRCImageListResponseBodyImages& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRCImageListResponseBodyImages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskDeviceMappings Field Functions 
    bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
    void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
    inline const vector<Models::DescribeRCImageListResponseBodyImagesDiskDeviceMappings> & diskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, vector<Models::DescribeRCImageListResponseBodyImagesDiskDeviceMappings>) };
    inline vector<Models::DescribeRCImageListResponseBodyImagesDiskDeviceMappings> diskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, vector<Models::DescribeRCImageListResponseBodyImagesDiskDeviceMappings>) };
    inline DescribeRCImageListResponseBodyImages& setDiskDeviceMappings(const vector<Models::DescribeRCImageListResponseBodyImagesDiskDeviceMappings> & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
    inline DescribeRCImageListResponseBodyImages& setDiskDeviceMappings(vector<Models::DescribeRCImageListResponseBodyImagesDiskDeviceMappings> && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeRCImageListResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeRCImageListResponseBodyImages& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline DescribeRCImageListResponseBodyImages& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // isPublic Field Functions 
    bool hasIsPublic() const { return this->isPublic_ != nullptr;};
    void deleteIsPublic() { this->isPublic_ = nullptr;};
    inline bool isPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, false) };
    inline DescribeRCImageListResponseBodyImages& setIsPublic(bool isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


    // isSupportRdsCustom Field Functions 
    bool hasIsSupportRdsCustom() const { return this->isSupportRdsCustom_ != nullptr;};
    void deleteIsSupportRdsCustom() { this->isSupportRdsCustom_ = nullptr;};
    inline bool isSupportRdsCustom() const { DARABONBA_PTR_GET_DEFAULT(isSupportRdsCustom_, false) };
    inline DescribeRCImageListResponseBodyImages& setIsSupportRdsCustom(bool isSupportRdsCustom) { DARABONBA_PTR_SET_VALUE(isSupportRdsCustom_, isSupportRdsCustom) };


    // OSName Field Functions 
    bool hasOSName() const { return this->OSName_ != nullptr;};
    void deleteOSName() { this->OSName_ = nullptr;};
    inline string OSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
    inline DescribeRCImageListResponseBodyImages& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


    // OSNameEn Field Functions 
    bool hasOSNameEn() const { return this->OSNameEn_ != nullptr;};
    void deleteOSNameEn() { this->OSNameEn_ = nullptr;};
    inline string OSNameEn() const { DARABONBA_PTR_GET_DEFAULT(OSNameEn_, "") };
    inline DescribeRCImageListResponseBodyImages& setOSNameEn(string OSNameEn) { DARABONBA_PTR_SET_VALUE(OSNameEn_, OSNameEn) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline DescribeRCImageListResponseBodyImages& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeRCImageListResponseBodyImages& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeRCImageListResponseBodyImages& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRCImageListResponseBodyImages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline DescribeRCImageListResponseBodyImages& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The image architecture. Valid values:
    // 
    // *   x86_64
    // *   arm64
    std::shared_ptr<string> architecture_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRCImageListResponseBodyImagesDiskDeviceMappings>> diskDeviceMappings_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The image version.
    std::shared_ptr<string> imageVersion_ = nullptr;
    // Indicates whether the image is a public image. Public images include public images provided by Alibaba Cloud and custom images published as community images.
    // 
    // *   **true**: The image is a public image.
    // *   **false**: The image is not a public image.
    std::shared_ptr<bool> isPublic_ = nullptr;
    std::shared_ptr<bool> isSupportRdsCustom_ = nullptr;
    // The display name of the operating system in Chinese.
    std::shared_ptr<string> OSName_ = nullptr;
    // The display name of the operating system in English.
    std::shared_ptr<string> OSNameEn_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **windows**
    // *   **linux**
    std::shared_ptr<string> OSType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    // The image size. Unit: GiB.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The image status. Valid values:
    // 
    // *   **Unavailable**
    // *   **Available**
    // *   **Creating**
    // *   **CreateFailed**
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the image is used by the RDS Custom instance. Valid values:
    // 
    // *   **instance**: The image is used to create one or more RDS Custom instances.
    // *   **none**: The image is not used to create RDS Custom instances.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
