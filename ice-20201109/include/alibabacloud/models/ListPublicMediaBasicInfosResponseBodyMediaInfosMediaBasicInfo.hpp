// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSRESPONSEBODYMEDIAINFOSMEDIABASICINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSRESPONSEBODYMEDIAINFOSMEDIABASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
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
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TranscodeStatus, transcodeStatus_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
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
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TranscodeStatus, transcodeStatus_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo(const ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo &) = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo(ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo &&) = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& operator=(const ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo &) = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& operator=(ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->category_ != nullptr && this->coverURL_ != nullptr && this->createTime_ != nullptr && this->deletedTime_ != nullptr && this->description_ != nullptr
        && this->inputURL_ != nullptr && this->mediaId_ != nullptr && this->mediaTags_ != nullptr && this->mediaType_ != nullptr && this->modifiedTime_ != nullptr
        && this->snapshots_ != nullptr && this->source_ != nullptr && this->status_ != nullptr && this->title_ != nullptr && this->transcodeStatus_ != nullptr
        && this->userData_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletedTime Field Functions 
    bool hasDeletedTime() const { return this->deletedTime_ != nullptr;};
    void deleteDeletedTime() { this->deletedTime_ = nullptr;};
    inline string deletedTime() const { DARABONBA_PTR_GET_DEFAULT(deletedTime_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setDeletedTime(string deletedTime) { DARABONBA_PTR_SET_VALUE(deletedTime_, deletedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string inputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaTags Field Functions 
    bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
    void deleteMediaTags() { this->mediaTags_ = nullptr;};
    inline string mediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline string snapshots() const { DARABONBA_PTR_GET_DEFAULT(snapshots_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setSnapshots(string snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // transcodeStatus Field Functions 
    bool hasTranscodeStatus() const { return this->transcodeStatus_ != nullptr;};
    void deleteTranscodeStatus() { this->transcodeStatus_ = nullptr;};
    inline string transcodeStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeStatus_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setTranscodeStatus(string transcodeStatus) { DARABONBA_PTR_SET_VALUE(transcodeStatus_, transcodeStatus) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The business type of the media asset.
    std::shared_ptr<string> businessType_ = nullptr;
    // The category of the media asset.
    std::shared_ptr<string> category_ = nullptr;
    // The thumbnail URL of the media asset.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the media asset was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the media asset was deleted.
    std::shared_ptr<string> deletedTime_ = nullptr;
    // The description of the media asset.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the media asset in another service.
    std::shared_ptr<string> inputURL_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The tags of the media asset.
    std::shared_ptr<string> mediaTags_ = nullptr;
    // The type of the media asset.
    std::shared_ptr<string> mediaType_ = nullptr;
    // The time when the media asset was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The snapshots of the media asset.
    std::shared_ptr<string> snapshots_ = nullptr;
    // The source of the media asset.
    std::shared_ptr<string> source_ = nullptr;
    // The status of the media asset.
    std::shared_ptr<string> status_ = nullptr;
    // The title of the media asset.
    std::shared_ptr<string> title_ = nullptr;
    // The transcoding status of the media asset.
    std::shared_ptr<string> transcodeStatus_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
