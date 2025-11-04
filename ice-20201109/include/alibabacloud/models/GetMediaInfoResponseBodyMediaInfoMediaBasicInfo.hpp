// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOMEDIABASICINFO_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOMEDIABASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBodyMediaInfoMediaBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeletedTime, deletedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SpriteImages, spriteImages_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UploadSource, uploadSource_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeletedTime, deletedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SpriteImages, spriteImages_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UploadSource, uploadSource_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetMediaInfoResponseBodyMediaInfoMediaBasicInfo() = default ;
    GetMediaInfoResponseBodyMediaInfoMediaBasicInfo(const GetMediaInfoResponseBodyMediaInfoMediaBasicInfo &) = default ;
    GetMediaInfoResponseBodyMediaInfoMediaBasicInfo(GetMediaInfoResponseBodyMediaInfoMediaBasicInfo &&) = default ;
    GetMediaInfoResponseBodyMediaInfoMediaBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBodyMediaInfoMediaBasicInfo() = default ;
    GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& operator=(const GetMediaInfoResponseBodyMediaInfoMediaBasicInfo &) = default ;
    GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& operator=(GetMediaInfoResponseBodyMediaInfoMediaBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->biz_ == nullptr
        && return this->businessType_ == nullptr && return this->cateId_ == nullptr && return this->cateName_ == nullptr && return this->category_ == nullptr && return this->coverURL_ == nullptr
        && return this->createTime_ == nullptr && return this->deletedTime_ == nullptr && return this->description_ == nullptr && return this->inputURL_ == nullptr && return this->mediaId_ == nullptr
        && return this->mediaTags_ == nullptr && return this->mediaType_ == nullptr && return this->modifiedTime_ == nullptr && return this->referenceId_ == nullptr && return this->snapshots_ == nullptr
        && return this->source_ == nullptr && return this->spriteImages_ == nullptr && return this->status_ == nullptr && return this->title_ == nullptr && return this->uploadSource_ == nullptr
        && return this->userData_ == nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string biz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletedTime Field Functions 
    bool hasDeletedTime() const { return this->deletedTime_ != nullptr;};
    void deleteDeletedTime() { this->deletedTime_ = nullptr;};
    inline string deletedTime() const { DARABONBA_PTR_GET_DEFAULT(deletedTime_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setDeletedTime(string deletedTime) { DARABONBA_PTR_SET_VALUE(deletedTime_, deletedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string inputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaTags Field Functions 
    bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
    void deleteMediaTags() { this->mediaTags_ = nullptr;};
    inline string mediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline string snapshots() const { DARABONBA_PTR_GET_DEFAULT(snapshots_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setSnapshots(string snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // spriteImages Field Functions 
    bool hasSpriteImages() const { return this->spriteImages_ != nullptr;};
    void deleteSpriteImages() { this->spriteImages_ = nullptr;};
    inline string spriteImages() const { DARABONBA_PTR_GET_DEFAULT(spriteImages_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setSpriteImages(string spriteImages) { DARABONBA_PTR_SET_VALUE(spriteImages_, spriteImages) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uploadSource Field Functions 
    bool hasUploadSource() const { return this->uploadSource_ != nullptr;};
    void deleteUploadSource() { this->uploadSource_ = nullptr;};
    inline string uploadSource() const { DARABONBA_PTR_GET_DEFAULT(uploadSource_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setUploadSource(string uploadSource) { DARABONBA_PTR_SET_VALUE(uploadSource_, uploadSource) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetMediaInfoResponseBodyMediaInfoMediaBasicInfo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The service to which the media asset belongs.
    std::shared_ptr<string> biz_ = nullptr;
    // The business type.
    std::shared_ptr<string> businessType_ = nullptr;
    // The category ID.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The category name.
    std::shared_ptr<string> cateName_ = nullptr;
    // The category.
    std::shared_ptr<string> category_ = nullptr;
    // The URL of the thumbnail.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the media asset was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the media asset was deleted.
    std::shared_ptr<string> deletedTime_ = nullptr;
    // The content description.
    std::shared_ptr<string> description_ = nullptr;
    // The input URL of the media asset in another service.
    std::shared_ptr<string> inputURL_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The tags.
    std::shared_ptr<string> mediaTags_ = nullptr;
    // The type of the media asset.
    std::shared_ptr<string> mediaType_ = nullptr;
    // The time when the media asset was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The custom ID. The ID can be 6 to 64 characters in length and can contain only letters, digits, hyphens (-), and underscores (_). The ID is unique among users.
    std::shared_ptr<string> referenceId_ = nullptr;
    // The snapshots.
    std::shared_ptr<string> snapshots_ = nullptr;
    // The source.
    std::shared_ptr<string> source_ = nullptr;
    // The sprite.
    std::shared_ptr<string> spriteImages_ = nullptr;
    // The resource status.
    std::shared_ptr<string> status_ = nullptr;
    // The title.
    std::shared_ptr<string> title_ = nullptr;
    // The upload source of the media asset.
    std::shared_ptr<string> uploadSource_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
