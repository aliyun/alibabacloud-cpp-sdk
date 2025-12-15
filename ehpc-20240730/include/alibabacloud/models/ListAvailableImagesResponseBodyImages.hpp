// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAvailableImagesResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(OSName, OSName_);
      DARABONBA_PTR_TO_JSON(OSNameEn, OSNameEn_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(OSName, OSName_);
      DARABONBA_PTR_FROM_JSON(OSNameEn, OSNameEn_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListAvailableImagesResponseBodyImages() = default ;
    ListAvailableImagesResponseBodyImages(const ListAvailableImagesResponseBodyImages &) = default ;
    ListAvailableImagesResponseBodyImages(ListAvailableImagesResponseBodyImages &&) = default ;
    ListAvailableImagesResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableImagesResponseBodyImages() = default ;
    ListAvailableImagesResponseBodyImages& operator=(const ListAvailableImagesResponseBodyImages &) = default ;
    ListAvailableImagesResponseBodyImages& operator=(ListAvailableImagesResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architecture_ == nullptr
        && return this->bootMode_ == nullptr && return this->description_ == nullptr && return this->imageId_ == nullptr && return this->imageName_ == nullptr && return this->imageOwnerAlias_ == nullptr
        && return this->OSName_ == nullptr && return this->OSNameEn_ == nullptr && return this->platform_ == nullptr && return this->size_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline ListAvailableImagesResponseBodyImages& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // bootMode Field Functions 
    bool hasBootMode() const { return this->bootMode_ != nullptr;};
    void deleteBootMode() { this->bootMode_ = nullptr;};
    inline string bootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
    inline ListAvailableImagesResponseBodyImages& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAvailableImagesResponseBodyImages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListAvailableImagesResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ListAvailableImagesResponseBodyImages& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string imageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline ListAvailableImagesResponseBodyImages& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // OSName Field Functions 
    bool hasOSName() const { return this->OSName_ != nullptr;};
    void deleteOSName() { this->OSName_ = nullptr;};
    inline string OSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
    inline ListAvailableImagesResponseBodyImages& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


    // OSNameEn Field Functions 
    bool hasOSNameEn() const { return this->OSNameEn_ != nullptr;};
    void deleteOSNameEn() { this->OSNameEn_ = nullptr;};
    inline string OSNameEn() const { DARABONBA_PTR_GET_DEFAULT(OSNameEn_, "") };
    inline ListAvailableImagesResponseBodyImages& setOSNameEn(string OSNameEn) { DARABONBA_PTR_SET_VALUE(OSNameEn_, OSNameEn) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListAvailableImagesResponseBodyImages& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ListAvailableImagesResponseBodyImages& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The OS architecture of the image. Valid values:
    // 
    // *   x86_64
    // *   arm64
    std::shared_ptr<string> architecture_ = nullptr;
    // The boot mode of the image. Valid values:
    // 
    // *   BIOS: Basic Input/Output System (BIOS).
    // *   UEFI: Unified Extensible Firmware Interface (UEFI).
    // 
    // >  When you change the OS boot mode of an instance, you must make sure that the boot mode matches the boot mode of the associated image. Otherwise, the instance fails to be booted.
    std::shared_ptr<string> bootMode_ = nullptr;
    // The image description.
    std::shared_ptr<string> description_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The image source. Valid values:
    // 
    // *   system: system image.
    // *   self: custom image.
    // *   others: shared image.
    std::shared_ptr<string> imageOwnerAlias_ = nullptr;
    // The OS name in Chinese.
    std::shared_ptr<string> OSName_ = nullptr;
    // The OS name in English.
    std::shared_ptr<string> OSNameEn_ = nullptr;
    // The OS. Valid values:
    // 
    // *   CentOS
    // *   windows
    std::shared_ptr<string> platform_ = nullptr;
    // The image size. Unit: GiB
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
