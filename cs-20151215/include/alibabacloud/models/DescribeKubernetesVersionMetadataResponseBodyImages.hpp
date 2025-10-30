// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKUBERNETESVERSIONMETADATARESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKUBERNETESVERSIONMETADATARESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeKubernetesVersionMetadataResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKubernetesVersionMetadataResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(image_name, imageName_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
      DARABONBA_PTR_TO_JSON(os_version, osVersion_);
      DARABONBA_PTR_TO_JSON(image_type, imageType_);
      DARABONBA_PTR_TO_JSON(os_type, osType_);
      DARABONBA_PTR_TO_JSON(image_category, imageCategory_);
      DARABONBA_PTR_TO_JSON(architecture, architecture_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKubernetesVersionMetadataResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(image_name, imageName_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
      DARABONBA_PTR_FROM_JSON(os_version, osVersion_);
      DARABONBA_PTR_FROM_JSON(image_type, imageType_);
      DARABONBA_PTR_FROM_JSON(os_type, osType_);
      DARABONBA_PTR_FROM_JSON(image_category, imageCategory_);
      DARABONBA_PTR_FROM_JSON(architecture, architecture_);
    };
    DescribeKubernetesVersionMetadataResponseBodyImages() = default ;
    DescribeKubernetesVersionMetadataResponseBodyImages(const DescribeKubernetesVersionMetadataResponseBodyImages &) = default ;
    DescribeKubernetesVersionMetadataResponseBodyImages(DescribeKubernetesVersionMetadataResponseBodyImages &&) = default ;
    DescribeKubernetesVersionMetadataResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKubernetesVersionMetadataResponseBodyImages() = default ;
    DescribeKubernetesVersionMetadataResponseBodyImages& operator=(const DescribeKubernetesVersionMetadataResponseBodyImages &) = default ;
    DescribeKubernetesVersionMetadataResponseBodyImages& operator=(DescribeKubernetesVersionMetadataResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->imageName_ == nullptr && return this->platform_ == nullptr && return this->osVersion_ == nullptr && return this->imageType_ == nullptr && return this->osType_ == nullptr
        && return this->imageCategory_ == nullptr && return this->architecture_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeKubernetesVersionMetadataResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeKubernetesVersionMetadataResponseBodyImages& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeKubernetesVersionMetadataResponseBodyImages& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline DescribeKubernetesVersionMetadataResponseBodyImages& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeKubernetesVersionMetadataResponseBodyImages& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeKubernetesVersionMetadataResponseBodyImages& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // imageCategory Field Functions 
    bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
    void deleteImageCategory() { this->imageCategory_ = nullptr;};
    inline string imageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
    inline DescribeKubernetesVersionMetadataResponseBodyImages& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeKubernetesVersionMetadataResponseBodyImages& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


  protected:
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The OS platform. You can obtain the terminal ID by calling one of the following operations:
    // 
    // *   `AliyunLinux`
    // *   `CentOS`
    // *   `Windows`
    // *   `WindowsCore`
    std::shared_ptr<string> platform_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> osVersion_ = nullptr;
    // The type of operating system distribution that you want to use. We recommend that you use this parameter to specify the node operating system. You can obtain the terminal ID by calling one of the following operations:
    // 
    // *   `CentOS`
    // *   `AliyunLinux`
    // *   `AliyunLinux Qboot`
    // *   `AliyunLinuxUEFI`
    // *   `AliyunLinux3`
    // *   `Windows`
    // *   `WindowsCore`
    // *   `AliyunLinux3Arm64`
    // *   `ContainerOS`
    std::shared_ptr<string> imageType_ = nullptr;
    // The type of OS. Examples:
    // 
    // *   `Windows`
    // *   `Linux`
    std::shared_ptr<string> osType_ = nullptr;
    // The type of image. Valid values:
    // 
    // *   `system`: public image
    // *   `self`: custom image
    // *   `others`: shared image from other Alibaba Cloud accounts
    // *   `marketplace`: image from the marketplace
    std::shared_ptr<string> imageCategory_ = nullptr;
    // The architecture of the image.
    std::shared_ptr<string> architecture_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
