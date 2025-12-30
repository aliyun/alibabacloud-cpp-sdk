// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOLISTRESPONSEBODY_HPP_
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
  class GetVideoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaList, mediaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaList, mediaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetVideoListResponseBody() = default ;
    GetVideoListResponseBody(const GetVideoListResponseBody &) = default ;
    GetVideoListResponseBody(GetVideoListResponseBody &&) = default ;
    GetVideoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoListResponseBody() = default ;
    GetVideoListResponseBody& operator=(const GetVideoListResponseBody &) = default ;
    GetVideoListResponseBody& operator=(GetVideoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, MediaList& obj) { 
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
      MediaList() = default ;
      MediaList(const MediaList &) = default ;
      MediaList(MediaList &&) = default ;
      MediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaList() = default ;
      MediaList& operator=(const MediaList &) = default ;
      MediaList& operator=(MediaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->cateId_ == nullptr && this->cateName_ == nullptr && this->coverUrl_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr
        && this->duration_ == nullptr && this->mediaId_ == nullptr && this->modificationTime_ == nullptr && this->size_ == nullptr && this->snapshots_ == nullptr
        && this->status_ == nullptr && this->storageLocation_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline MediaList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // cateId Field Functions 
      bool hasCateId() const { return this->cateId_ != nullptr;};
      void deleteCateId() { this->cateId_ = nullptr;};
      inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
      inline MediaList& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


      // cateName Field Functions 
      bool hasCateName() const { return this->cateName_ != nullptr;};
      void deleteCateName() { this->cateName_ = nullptr;};
      inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
      inline MediaList& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline MediaList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline MediaList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MediaList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline MediaList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline MediaList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline MediaList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // snapshots Field Functions 
      bool hasSnapshots() const { return this->snapshots_ != nullptr;};
      void deleteSnapshots() { this->snapshots_ = nullptr;};
      inline const vector<string> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
      inline vector<string> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
      inline MediaList& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
      inline MediaList& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MediaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageLocation Field Functions 
      bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
      void deleteStorageLocation() { this->storageLocation_ = nullptr;};
      inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
      inline MediaList& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline MediaList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline MediaList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The ID of the application. Default value: app-1000000.
      shared_ptr<string> appId_ {};
      // The ID of the category.
      shared_ptr<int64_t> cateId_ {};
      // The name of the category.
      shared_ptr<string> cateName_ {};
      // The URL of the thumbnail.
      shared_ptr<string> coverUrl_ {};
      // The time when the audio or video file was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the audio or video file.
      shared_ptr<string> description_ {};
      // The duration. Unit: seconds.
      shared_ptr<float> duration_ {};
      // The ID of the audio or video file.
      shared_ptr<string> mediaId_ {};
      // The time when the audio or video file was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The size of the source file. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The array of video snapshot URLs.
      shared_ptr<vector<string>> snapshots_ {};
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
      shared_ptr<string> status_ {};
      // The storage address.
      shared_ptr<string> storageLocation_ {};
      // The tags of the audio or video file.
      shared_ptr<string> tags_ {};
      // The title of the audio or video file.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->mediaList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetVideoListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaList Field Functions 
    bool hasMediaList() const { return this->mediaList_ != nullptr;};
    void deleteMediaList() { this->mediaList_ = nullptr;};
    inline const vector<GetVideoListResponseBody::MediaList> & getMediaList() const { DARABONBA_PTR_GET_CONST(mediaList_, vector<GetVideoListResponseBody::MediaList>) };
    inline vector<GetVideoListResponseBody::MediaList> getMediaList() { DARABONBA_PTR_GET(mediaList_, vector<GetVideoListResponseBody::MediaList>) };
    inline GetVideoListResponseBody& setMediaList(const vector<GetVideoListResponseBody::MediaList> & mediaList) { DARABONBA_PTR_SET_VALUE(mediaList_, mediaList) };
    inline GetVideoListResponseBody& setMediaList(vector<GetVideoListResponseBody::MediaList> && mediaList) { DARABONBA_PTR_SET_RVALUE(mediaList_, mediaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetVideoListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetVideoListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The information about the audio and video files.
    shared_ptr<vector<GetVideoListResponseBody::MediaList>> mediaList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The total number of audio and video files that meet the conditions.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
