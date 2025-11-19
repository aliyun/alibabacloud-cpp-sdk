// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEINFORESPONSEBODYIMAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEINFORESPONSEBODYIMAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageInfoResponseBodyImageInfoMezzanine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetImageInfoResponseBodyImageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageInfoResponseBodyImageInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetImageInfoResponseBodyImageInfo& obj) { 
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
    GetImageInfoResponseBodyImageInfo() = default ;
    GetImageInfoResponseBodyImageInfo(const GetImageInfoResponseBodyImageInfo &) = default ;
    GetImageInfoResponseBodyImageInfo(GetImageInfoResponseBodyImageInfo &&) = default ;
    GetImageInfoResponseBodyImageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageInfoResponseBodyImageInfo() = default ;
    GetImageInfoResponseBodyImageInfo& operator=(const GetImageInfoResponseBodyImageInfo &) = default ;
    GetImageInfoResponseBodyImageInfo& operator=(GetImageInfoResponseBodyImageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->cateId_ == nullptr && return this->cateName_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->imageId_ == nullptr
        && return this->imageType_ == nullptr && return this->mezzanine_ == nullptr && return this->status_ == nullptr && return this->storageLocation_ == nullptr && return this->tags_ == nullptr
        && return this->title_ == nullptr && return this->URL_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetImageInfoResponseBodyImageInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetImageInfoResponseBodyImageInfo& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline GetImageInfoResponseBodyImageInfo& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetImageInfoResponseBodyImageInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetImageInfoResponseBodyImageInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageInfoResponseBodyImageInfo& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline GetImageInfoResponseBodyImageInfo& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // mezzanine Field Functions 
    bool hasMezzanine() const { return this->mezzanine_ != nullptr;};
    void deleteMezzanine() { this->mezzanine_ = nullptr;};
    inline const Models::GetImageInfoResponseBodyImageInfoMezzanine & mezzanine() const { DARABONBA_PTR_GET_CONST(mezzanine_, Models::GetImageInfoResponseBodyImageInfoMezzanine) };
    inline Models::GetImageInfoResponseBodyImageInfoMezzanine mezzanine() { DARABONBA_PTR_GET(mezzanine_, Models::GetImageInfoResponseBodyImageInfoMezzanine) };
    inline GetImageInfoResponseBodyImageInfo& setMezzanine(const Models::GetImageInfoResponseBodyImageInfoMezzanine & mezzanine) { DARABONBA_PTR_SET_VALUE(mezzanine_, mezzanine) };
    inline GetImageInfoResponseBodyImageInfo& setMezzanine(Models::GetImageInfoResponseBodyImageInfoMezzanine && mezzanine) { DARABONBA_PTR_SET_RVALUE(mezzanine_, mezzanine) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetImageInfoResponseBodyImageInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline GetImageInfoResponseBodyImageInfo& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetImageInfoResponseBodyImageInfo& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetImageInfoResponseBodyImageInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline GetImageInfoResponseBodyImageInfo& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


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
    // *   **CoverSnapshot**: thumbnail snapshot.
    // *   **NormalSnapshot**: normal snapshot.
    // *   **SpriteSnapshot**: sprite snapshot.
    // *   **SpriteOriginSnapshot**: sprite source snapshot.
    // *   **All**: images of all the preceding types. Multiple types other than All can return for this parameter. Multiple types are separated by commas (,).
    std::shared_ptr<string> imageType_ = nullptr;
    // The source information about the image.
    std::shared_ptr<Models::GetImageInfoResponseBodyImageInfoMezzanine> mezzanine_ = nullptr;
    // The status of the image. Valid values:
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
