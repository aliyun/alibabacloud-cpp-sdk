// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTIMAGEINFORESPONSEBODYIMAGESIMAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTIMAGEINFORESPONSEBODYIMAGESIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeExportImageInfoResponseBodyImagesImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExportImageInfoResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExportedImageURL, exportedImageURL_);
      DARABONBA_PTR_TO_JSON(ImageExportStatus, imageExportStatus_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExportImageInfoResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExportedImageURL, exportedImageURL_);
      DARABONBA_PTR_FROM_JSON(ImageExportStatus, imageExportStatus_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
    };
    DescribeExportImageInfoResponseBodyImagesImage() = default ;
    DescribeExportImageInfoResponseBodyImagesImage(const DescribeExportImageInfoResponseBodyImagesImage &) = default ;
    DescribeExportImageInfoResponseBodyImagesImage(DescribeExportImageInfoResponseBodyImagesImage &&) = default ;
    DescribeExportImageInfoResponseBodyImagesImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExportImageInfoResponseBodyImagesImage() = default ;
    DescribeExportImageInfoResponseBodyImagesImage& operator=(const DescribeExportImageInfoResponseBodyImagesImage &) = default ;
    DescribeExportImageInfoResponseBodyImagesImage& operator=(DescribeExportImageInfoResponseBodyImagesImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->architecture_ != nullptr
        && this->creationTime_ != nullptr && this->exportedImageURL_ != nullptr && this->imageExportStatus_ != nullptr && this->imageId_ != nullptr && this->imageName_ != nullptr
        && this->imageOwnerAlias_ != nullptr && this->platform_ != nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeExportImageInfoResponseBodyImagesImage& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeExportImageInfoResponseBodyImagesImage& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // exportedImageURL Field Functions 
    bool hasExportedImageURL() const { return this->exportedImageURL_ != nullptr;};
    void deleteExportedImageURL() { this->exportedImageURL_ = nullptr;};
    inline string exportedImageURL() const { DARABONBA_PTR_GET_DEFAULT(exportedImageURL_, "") };
    inline DescribeExportImageInfoResponseBodyImagesImage& setExportedImageURL(string exportedImageURL) { DARABONBA_PTR_SET_VALUE(exportedImageURL_, exportedImageURL) };


    // imageExportStatus Field Functions 
    bool hasImageExportStatus() const { return this->imageExportStatus_ != nullptr;};
    void deleteImageExportStatus() { this->imageExportStatus_ = nullptr;};
    inline string imageExportStatus() const { DARABONBA_PTR_GET_DEFAULT(imageExportStatus_, "") };
    inline DescribeExportImageInfoResponseBodyImagesImage& setImageExportStatus(string imageExportStatus) { DARABONBA_PTR_SET_VALUE(imageExportStatus_, imageExportStatus) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeExportImageInfoResponseBodyImagesImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeExportImageInfoResponseBodyImagesImage& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string imageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline DescribeExportImageInfoResponseBodyImagesImage& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeExportImageInfoResponseBodyImagesImage& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


  protected:
    // The architecture of the image. Example: **x86_64**.
    std::shared_ptr<string> architecture_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The URL of the exported image.
    std::shared_ptr<string> exportedImageURL_ = nullptr;
    // The export status of the image. Valid values:
    // 
    // *   Exporting
    // *   Exported
    // *   ExportError
    // *   Unexported
    std::shared_ptr<string> imageExportStatus_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The source of the image. Valid values:
    // 
    // *   system: public image
    // *   self: custom image
    std::shared_ptr<string> imageOwnerAlias_ = nullptr;
    // The OS.
    std::shared_ptr<string> platform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
