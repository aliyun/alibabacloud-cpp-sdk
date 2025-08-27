// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListImagesResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ReleaseFileMd5, releaseFileMd5_);
      DARABONBA_PTR_TO_JSON(ReleaseFileSize, releaseFileSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ReleaseFileMd5, releaseFileMd5_);
      DARABONBA_PTR_FROM_JSON(ReleaseFileSize, releaseFileSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListImagesResponseBodyImages() = default ;
    ListImagesResponseBodyImages(const ListImagesResponseBodyImages &) = default ;
    ListImagesResponseBodyImages(ListImagesResponseBodyImages &&) = default ;
    ListImagesResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesResponseBodyImages() = default ;
    ListImagesResponseBodyImages& operator=(const ListImagesResponseBodyImages &) = default ;
    ListImagesResponseBodyImages& operator=(ListImagesResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->architecture_ != nullptr
        && this->description_ != nullptr && this->imageId_ != nullptr && this->imageName_ != nullptr && this->imageVersion_ != nullptr && this->nodeCount_ != nullptr
        && this->platform_ != nullptr && this->releaseFileMd5_ != nullptr && this->releaseFileSize_ != nullptr && this->type_ != nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline ListImagesResponseBodyImages& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListImagesResponseBodyImages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImagesResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ListImagesResponseBodyImages& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline ListImagesResponseBodyImages& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline ListImagesResponseBodyImages& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListImagesResponseBodyImages& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // releaseFileMd5 Field Functions 
    bool hasReleaseFileMd5() const { return this->releaseFileMd5_ != nullptr;};
    void deleteReleaseFileMd5() { this->releaseFileMd5_ = nullptr;};
    inline string releaseFileMd5() const { DARABONBA_PTR_GET_DEFAULT(releaseFileMd5_, "") };
    inline ListImagesResponseBodyImages& setReleaseFileMd5(string releaseFileMd5) { DARABONBA_PTR_SET_VALUE(releaseFileMd5_, releaseFileMd5) };


    // releaseFileSize Field Functions 
    bool hasReleaseFileSize() const { return this->releaseFileSize_ != nullptr;};
    void deleteReleaseFileSize() { this->releaseFileSize_ = nullptr;};
    inline string releaseFileSize() const { DARABONBA_PTR_GET_DEFAULT(releaseFileSize_, "") };
    inline ListImagesResponseBodyImages& setReleaseFileSize(string releaseFileSize) { DARABONBA_PTR_SET_VALUE(releaseFileSize_, releaseFileSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListImagesResponseBodyImages& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The architecture.
    std::shared_ptr<string> architecture_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The image version.
    std::shared_ptr<string> imageVersion_ = nullptr;
    // The number of nodes.
    std::shared_ptr<int64_t> nodeCount_ = nullptr;
    // The platform.
    std::shared_ptr<string> platform_ = nullptr;
    // The MD5 hash value of the file.
    std::shared_ptr<string> releaseFileMd5_ = nullptr;
    // The image size.
    std::shared_ptr<string> releaseFileSize_ = nullptr;
    // The image type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
