// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEINFOSRESPONSEBODYIMAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEINFOSRESPONSEBODYIMAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageInfosResponseBodyImageInfoMezzanine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetImageInfosResponseBodyImageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageInfosResponseBodyImageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(Mezzanine, mezzanine_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageInfosResponseBodyImageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(Mezzanine, mezzanine_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    GetImageInfosResponseBodyImageInfo() = default ;
    GetImageInfosResponseBodyImageInfo(const GetImageInfosResponseBodyImageInfo &) = default ;
    GetImageInfosResponseBodyImageInfo(GetImageInfosResponseBodyImageInfo &&) = default ;
    GetImageInfosResponseBodyImageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageInfosResponseBodyImageInfo() = default ;
    GetImageInfosResponseBodyImageInfo& operator=(const GetImageInfosResponseBodyImageInfo &) = default ;
    GetImageInfosResponseBodyImageInfo& operator=(GetImageInfosResponseBodyImageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->cateId_ != nullptr && this->cateName_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->imageId_ != nullptr
        && this->imageType_ != nullptr && this->mezzanine_ != nullptr && this->status_ != nullptr && this->storageLocation_ != nullptr && this->tags_ != nullptr
        && this->title_ != nullptr && this->URL_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetImageInfosResponseBodyImageInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetImageInfosResponseBodyImageInfo& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline GetImageInfosResponseBodyImageInfo& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetImageInfosResponseBodyImageInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetImageInfosResponseBodyImageInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageInfosResponseBodyImageInfo& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline GetImageInfosResponseBodyImageInfo& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // mezzanine Field Functions 
    bool hasMezzanine() const { return this->mezzanine_ != nullptr;};
    void deleteMezzanine() { this->mezzanine_ = nullptr;};
    inline const Models::GetImageInfosResponseBodyImageInfoMezzanine & mezzanine() const { DARABONBA_PTR_GET_CONST(mezzanine_, Models::GetImageInfosResponseBodyImageInfoMezzanine) };
    inline Models::GetImageInfosResponseBodyImageInfoMezzanine mezzanine() { DARABONBA_PTR_GET(mezzanine_, Models::GetImageInfosResponseBodyImageInfoMezzanine) };
    inline GetImageInfosResponseBodyImageInfo& setMezzanine(const Models::GetImageInfosResponseBodyImageInfoMezzanine & mezzanine) { DARABONBA_PTR_SET_VALUE(mezzanine_, mezzanine) };
    inline GetImageInfosResponseBodyImageInfo& setMezzanine(Models::GetImageInfosResponseBodyImageInfoMezzanine && mezzanine) { DARABONBA_PTR_SET_RVALUE(mezzanine_, mezzanine) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetImageInfosResponseBodyImageInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline GetImageInfosResponseBodyImageInfo& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetImageInfosResponseBodyImageInfo& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetImageInfosResponseBodyImageInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline GetImageInfosResponseBodyImageInfo& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the category.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The name of the category.
    std::shared_ptr<string> cateName_ = nullptr;
    // The time when the image was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the image. Valid values:
    // 
    // *   **default**: regular images
    // *   **cover**: video thumbnail
    std::shared_ptr<string> imageType_ = nullptr;
    // The source information about the image.
    std::shared_ptr<Models::GetImageInfosResponseBodyImageInfoMezzanine> mezzanine_ = nullptr;
    // The status of the image file. Valid values:
    // 
    // *   **Uploading**: The image is being uploaded. This is the initial status.
    // *   **Normal**: The image is uploaded.
    // *   **UploadFail**: The image fails to be uploaded.
    std::shared_ptr<string> status_ = nullptr;
    // The bucket in which the image is stored.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The tags of the image. Multiple tags are separated by commas (,).
    std::shared_ptr<string> tags_ = nullptr;
    // The title of the image.
    std::shared_ptr<string> title_ = nullptr;
    // The image URL. If a domain name for CDN is specified, a CDN URL is returned. Otherwise, an OSS URL is returned.
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
