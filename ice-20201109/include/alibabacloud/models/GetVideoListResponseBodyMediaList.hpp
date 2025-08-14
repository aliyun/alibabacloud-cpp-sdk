// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOLISTRESPONSEBODYMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOLISTRESPONSEBODYMEDIALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetVideoListResponseBodyMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoListResponseBodyMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoListResponseBodyMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetVideoListResponseBodyMediaList() = default ;
    GetVideoListResponseBodyMediaList(const GetVideoListResponseBodyMediaList &) = default ;
    GetVideoListResponseBodyMediaList(GetVideoListResponseBodyMediaList &&) = default ;
    GetVideoListResponseBodyMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoListResponseBodyMediaList() = default ;
    GetVideoListResponseBodyMediaList& operator=(const GetVideoListResponseBodyMediaList &) = default ;
    GetVideoListResponseBodyMediaList& operator=(GetVideoListResponseBodyMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->cateId_ != nullptr && this->cateName_ != nullptr && this->coverUrl_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr
        && this->duration_ != nullptr && this->mediaId_ != nullptr && this->modificationTime_ != nullptr && this->size_ != nullptr && this->snapshots_ != nullptr
        && this->status_ != nullptr && this->storageLocation_ != nullptr && this->tags_ != nullptr && this->title_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetVideoListResponseBodyMediaList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetVideoListResponseBodyMediaList& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline GetVideoListResponseBodyMediaList& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline GetVideoListResponseBodyMediaList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetVideoListResponseBodyMediaList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetVideoListResponseBodyMediaList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetVideoListResponseBodyMediaList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetVideoListResponseBodyMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline GetVideoListResponseBodyMediaList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetVideoListResponseBodyMediaList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<string> & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
    inline vector<string> snapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
    inline GetVideoListResponseBodyMediaList& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline GetVideoListResponseBodyMediaList& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVideoListResponseBodyMediaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline GetVideoListResponseBodyMediaList& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetVideoListResponseBodyMediaList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetVideoListResponseBodyMediaList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the application. Default value: app-1000000.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the category.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The name of the category.
    std::shared_ptr<string> cateName_ = nullptr;
    // The URL of the thumbnail.
    std::shared_ptr<string> coverUrl_ = nullptr;
    // The time when the audio or video file was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the audio or video file.
    std::shared_ptr<string> description_ = nullptr;
    // The duration. Unit: seconds.
    std::shared_ptr<float> duration_ = nullptr;
    // The ID of the audio or video file.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The time when the audio or video file was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The size of the source file. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The array of video snapshot URLs.
    std::shared_ptr<vector<string>> snapshots_ = nullptr;
    // The status of the video.
    // 
    // Valid values:
    // 
    // *   PrepareFail: The file is abnormal.
    // *   UploadFail: The video failed to be uploaded.
    // *   UploadSucc: The video is uploaded.
    // *   Transcoding: The video is being transcoded.
    // *   TranscodeFail: The video failed to be transcoded.
    // *   ProduceFail: The video failed to be produced.
    // *   Normal: The video is normal.
    // *   Uploading: The video is being uploaded.
    // *   Preparing: The file is being generated.
    // *   Blocked: The video is blocked.
    // *   checking: The video is being reviewed.
    std::shared_ptr<string> status_ = nullptr;
    // The storage address.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The tags of the audio or video file.
    std::shared_ptr<string> tags_ = nullptr;
    // The title of the audio or video file.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
