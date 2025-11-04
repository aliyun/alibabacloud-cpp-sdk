// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLICMEDIAINFORESPONSEBODYMEDIAINFOMEDIABASICINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLICMEDIAINFORESPONSEBODYMEDIAINFOMEDIABASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeletedTime, deletedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SpriteImages, spriteImages_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeletedTime, deletedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SpriteImages, spriteImages_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo() = default ;
    GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo(const GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo &) = default ;
    GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo(GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo &&) = default ;
    GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo() = default ;
    GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& operator=(const GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo &) = default ;
    GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& operator=(GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && return this->category_ == nullptr && return this->coverURL_ == nullptr && return this->createTime_ == nullptr && return this->deletedTime_ == nullptr && return this->description_ == nullptr
        && return this->mediaId_ == nullptr && return this->mediaTags_ == nullptr && return this->mediaType_ == nullptr && return this->modifiedTime_ == nullptr && return this->source_ == nullptr
        && return this->spriteImages_ == nullptr && return this->status_ == nullptr && return this->title_ == nullptr && return this->userData_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletedTime Field Functions 
    bool hasDeletedTime() const { return this->deletedTime_ != nullptr;};
    void deleteDeletedTime() { this->deletedTime_ = nullptr;};
    inline string deletedTime() const { DARABONBA_PTR_GET_DEFAULT(deletedTime_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setDeletedTime(string deletedTime) { DARABONBA_PTR_SET_VALUE(deletedTime_, deletedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaTags Field Functions 
    bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
    void deleteMediaTags() { this->mediaTags_ = nullptr;};
    inline string mediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // spriteImages Field Functions 
    bool hasSpriteImages() const { return this->spriteImages_ != nullptr;};
    void deleteSpriteImages() { this->spriteImages_ = nullptr;};
    inline string spriteImages() const { DARABONBA_PTR_GET_DEFAULT(spriteImages_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setSpriteImages(string spriteImages) { DARABONBA_PTR_SET_VALUE(spriteImages_, spriteImages) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> coverURL_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> deletedTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // MediaId
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> mediaTags_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> spriteImages_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
