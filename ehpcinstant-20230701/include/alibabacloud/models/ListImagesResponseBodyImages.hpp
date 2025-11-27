// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListImagesResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OsTag, osTag_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OsTag, osTag_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
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
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->documentId_ == nullptr && return this->imageId_ == nullptr && return this->imageType_ == nullptr
        && return this->name_ == nullptr && return this->osTag_ == nullptr && return this->updateTime_ == nullptr && return this->version_ == nullptr && return this->weight_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListImagesResponseBodyImages& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListImagesResponseBodyImages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListImagesResponseBodyImages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline int32_t documentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, 0) };
    inline ListImagesResponseBodyImages& setDocumentId(int32_t documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImagesResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline ListImagesResponseBodyImages& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListImagesResponseBodyImages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // osTag Field Functions 
    bool hasOsTag() const { return this->osTag_ != nullptr;};
    void deleteOsTag() { this->osTag_ = nullptr;};
    inline string osTag() const { DARABONBA_PTR_GET_DEFAULT(osTag_, "") };
    inline ListImagesResponseBodyImages& setOsTag(string osTag) { DARABONBA_PTR_SET_VALUE(osTag_, osTag) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListImagesResponseBodyImages& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListImagesResponseBodyImages& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ListImagesResponseBodyImages& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the storage resource was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The document ID.
    std::shared_ptr<int32_t> documentId_ = nullptr;
    // The image ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageType_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the specific OS version.
    std::shared_ptr<string> osTag_ = nullptr;
    // The time when the image was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> version_ = nullptr;
    // The weight.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
