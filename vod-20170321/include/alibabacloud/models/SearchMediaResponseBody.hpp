// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaList, mediaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaList, mediaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaResponseBody() = default ;
    SearchMediaResponseBody(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody(SearchMediaResponseBody &&) = default ;
    SearchMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBody() = default ;
    SearchMediaResponseBody& operator=(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody& operator=(SearchMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaList& obj) { 
        DARABONBA_PTR_TO_JSON(AiData, aiData_);
        DARABONBA_PTR_TO_JSON(AiRoughData, aiRoughData_);
        DARABONBA_PTR_TO_JSON(AttachedMedia, attachedMedia_);
        DARABONBA_PTR_TO_JSON(Audio, audio_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
        DARABONBA_PTR_TO_JSON(Video, video_);
      };
      friend void from_json(const Darabonba::Json& j, MediaList& obj) { 
        DARABONBA_PTR_FROM_JSON(AiData, aiData_);
        DARABONBA_PTR_FROM_JSON(AiRoughData, aiRoughData_);
        DARABONBA_PTR_FROM_JSON(AttachedMedia, attachedMedia_);
        DARABONBA_PTR_FROM_JSON(Audio, audio_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
        DARABONBA_PTR_FROM_JSON(Video, video_);
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
      class Video : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Video& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(CateId, cateId_);
          DARABONBA_PTR_TO_JSON(CateName, cateName_);
          DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DownloadSwitch, downloadSwitch_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(MediaSource, mediaSource_);
          DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_TO_JSON(PreprocessStatus, preprocessStatus_);
          DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_TO_JSON(RestoreExpiration, restoreExpiration_);
          DARABONBA_PTR_TO_JSON(RestoreStatus, restoreStatus_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_TO_JSON(SpriteSnapshots, spriteSnapshots_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(TranscodeMode, transcodeMode_);
          DARABONBA_PTR_TO_JSON(VideoId, videoId_);
        };
        friend void from_json(const Darabonba::Json& j, Video& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(CateId, cateId_);
          DARABONBA_PTR_FROM_JSON(CateName, cateName_);
          DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DownloadSwitch, downloadSwitch_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(MediaSource, mediaSource_);
          DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_FROM_JSON(PreprocessStatus, preprocessStatus_);
          DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_FROM_JSON(RestoreExpiration, restoreExpiration_);
          DARABONBA_PTR_FROM_JSON(RestoreStatus, restoreStatus_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_FROM_JSON(SpriteSnapshots, spriteSnapshots_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(TranscodeMode, transcodeMode_);
          DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
        };
        Video() = default ;
        Video(const Video &) = default ;
        Video(Video &&) = default ;
        Video(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Video() = default ;
        Video& operator=(const Video &) = default ;
        Video& operator=(Video &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->cateId_ == nullptr && this->cateName_ == nullptr && this->coverURL_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr
        && this->downloadSwitch_ == nullptr && this->duration_ == nullptr && this->mediaSource_ == nullptr && this->modificationTime_ == nullptr && this->preprocessStatus_ == nullptr
        && this->referenceId_ == nullptr && this->restoreExpiration_ == nullptr && this->restoreStatus_ == nullptr && this->size_ == nullptr && this->snapshots_ == nullptr
        && this->spriteSnapshots_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr && this->storageLocation_ == nullptr && this->tags_ == nullptr
        && this->title_ == nullptr && this->transcodeMode_ == nullptr && this->videoId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Video& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // cateId Field Functions 
        bool hasCateId() const { return this->cateId_ != nullptr;};
        void deleteCateId() { this->cateId_ = nullptr;};
        inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
        inline Video& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


        // cateName Field Functions 
        bool hasCateName() const { return this->cateName_ != nullptr;};
        void deleteCateName() { this->cateName_ = nullptr;};
        inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
        inline Video& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


        // coverURL Field Functions 
        bool hasCoverURL() const { return this->coverURL_ != nullptr;};
        void deleteCoverURL() { this->coverURL_ = nullptr;};
        inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
        inline Video& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Video& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Video& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // downloadSwitch Field Functions 
        bool hasDownloadSwitch() const { return this->downloadSwitch_ != nullptr;};
        void deleteDownloadSwitch() { this->downloadSwitch_ = nullptr;};
        inline string getDownloadSwitch() const { DARABONBA_PTR_GET_DEFAULT(downloadSwitch_, "") };
        inline Video& setDownloadSwitch(string downloadSwitch) { DARABONBA_PTR_SET_VALUE(downloadSwitch_, downloadSwitch) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline Video& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // mediaSource Field Functions 
        bool hasMediaSource() const { return this->mediaSource_ != nullptr;};
        void deleteMediaSource() { this->mediaSource_ = nullptr;};
        inline string getMediaSource() const { DARABONBA_PTR_GET_DEFAULT(mediaSource_, "") };
        inline Video& setMediaSource(string mediaSource) { DARABONBA_PTR_SET_VALUE(mediaSource_, mediaSource) };


        // modificationTime Field Functions 
        bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
        void deleteModificationTime() { this->modificationTime_ = nullptr;};
        inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
        inline Video& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


        // preprocessStatus Field Functions 
        bool hasPreprocessStatus() const { return this->preprocessStatus_ != nullptr;};
        void deletePreprocessStatus() { this->preprocessStatus_ = nullptr;};
        inline string getPreprocessStatus() const { DARABONBA_PTR_GET_DEFAULT(preprocessStatus_, "") };
        inline Video& setPreprocessStatus(string preprocessStatus) { DARABONBA_PTR_SET_VALUE(preprocessStatus_, preprocessStatus) };


        // referenceId Field Functions 
        bool hasReferenceId() const { return this->referenceId_ != nullptr;};
        void deleteReferenceId() { this->referenceId_ = nullptr;};
        inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
        inline Video& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


        // restoreExpiration Field Functions 
        bool hasRestoreExpiration() const { return this->restoreExpiration_ != nullptr;};
        void deleteRestoreExpiration() { this->restoreExpiration_ = nullptr;};
        inline string getRestoreExpiration() const { DARABONBA_PTR_GET_DEFAULT(restoreExpiration_, "") };
        inline Video& setRestoreExpiration(string restoreExpiration) { DARABONBA_PTR_SET_VALUE(restoreExpiration_, restoreExpiration) };


        // restoreStatus Field Functions 
        bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
        void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
        inline string getRestoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
        inline Video& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Video& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshots Field Functions 
        bool hasSnapshots() const { return this->snapshots_ != nullptr;};
        void deleteSnapshots() { this->snapshots_ = nullptr;};
        inline const vector<string> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
        inline vector<string> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
        inline Video& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
        inline Video& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


        // spriteSnapshots Field Functions 
        bool hasSpriteSnapshots() const { return this->spriteSnapshots_ != nullptr;};
        void deleteSpriteSnapshots() { this->spriteSnapshots_ = nullptr;};
        inline const vector<string> & getSpriteSnapshots() const { DARABONBA_PTR_GET_CONST(spriteSnapshots_, vector<string>) };
        inline vector<string> getSpriteSnapshots() { DARABONBA_PTR_GET(spriteSnapshots_, vector<string>) };
        inline Video& setSpriteSnapshots(const vector<string> & spriteSnapshots) { DARABONBA_PTR_SET_VALUE(spriteSnapshots_, spriteSnapshots) };
        inline Video& setSpriteSnapshots(vector<string> && spriteSnapshots) { DARABONBA_PTR_SET_RVALUE(spriteSnapshots_, spriteSnapshots) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Video& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageClass Field Functions 
        bool hasStorageClass() const { return this->storageClass_ != nullptr;};
        void deleteStorageClass() { this->storageClass_ = nullptr;};
        inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
        inline Video& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


        // storageLocation Field Functions 
        bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
        void deleteStorageLocation() { this->storageLocation_ = nullptr;};
        inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
        inline Video& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline Video& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Video& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // transcodeMode Field Functions 
        bool hasTranscodeMode() const { return this->transcodeMode_ != nullptr;};
        void deleteTranscodeMode() { this->transcodeMode_ = nullptr;};
        inline string getTranscodeMode() const { DARABONBA_PTR_GET_DEFAULT(transcodeMode_, "") };
        inline Video& setTranscodeMode(string transcodeMode) { DARABONBA_PTR_SET_VALUE(transcodeMode_, transcodeMode) };


        // videoId Field Functions 
        bool hasVideoId() const { return this->videoId_ != nullptr;};
        void deleteVideoId() { this->videoId_ = nullptr;};
        inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
        inline Video& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The ID of the category.
        shared_ptr<int64_t> cateId_ {};
        // The name of the category.
        shared_ptr<string> cateName_ {};
        // The URL of the thumbnail.
        shared_ptr<string> coverURL_ {};
        // The time when the video file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the video file.
        shared_ptr<string> description_ {};
        // The download switch. The video file can be downloaded offline only when the download switch is turned on. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> downloadSwitch_ {};
        // The duration of the video file. Unit: seconds.
        shared_ptr<float> duration_ {};
        // The source of the video file. Valid values:
        // 
        // *   **general**: The video file is uploaded by using ApsaraVideo VOD.
        // *   **short_video**: The video file is uploaded by using the short video SDK.
        // *   **editing**: The video file is produced after online editing.
        // *   **live**: The video stream is recorded and uploaded as a file.
        shared_ptr<string> mediaSource_ {};
        // The time when the video file was updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> modificationTime_ {};
        // The preprocessing status. Valid values:
        // 
        // *   **UnPreprocess**
        // *   **Preprocessing**
        // *   **PreprocessSucceed**
        // *   **PreprocessFailed**
        shared_ptr<string> preprocessStatus_ {};
        shared_ptr<string> referenceId_ {};
        // The period of time in which the video file remains in the restored state.
        shared_ptr<string> restoreExpiration_ {};
        // The restoration status of the video file. Valid values:
        // 
        // *   **Processing**
        // *   **Success**
        // *   **Failed**
        shared_ptr<string> restoreStatus_ {};
        // The size of the video file.
        shared_ptr<int64_t> size_ {};
        // The automatic snapshots.
        shared_ptr<vector<string>> snapshots_ {};
        // The sprite snapshots.
        shared_ptr<vector<string>> spriteSnapshots_ {};
        // The status of the file. Valid values:
        // 
        // *   **Uploading**
        // *   **UploadFail**
        // *   **UploadSucc**
        // *   **Transcoding**
        // *   **TranscodeFail**
        // *   **Blocked**
        // *   **Normal**
        shared_ptr<string> status_ {};
        // The storage class of the video file. Valid values:
        // 
        // *   **Standard**: All media resources are stored as Standard objects.
        // *   **IA**: All media resources are stored as IA objects.
        // *   **Archive**: All media resources are stored as Archive objects.
        // *   **ColdArchive**: All media resources are stored as Cold Archive objects.
        // *   **SourceIA**: Only the source file is stored as an IA object.
        // *   **SourceArchive**: Only the source file is stored as an Archive object.
        // *   **SourceColdArchive**: Only the source file is stored as a Cold Archive object.
        // *   **Changing**: The storage class of the video file is being changed.
        // *   **SourceChanging**: The storage class of the source file is being changed.
        shared_ptr<string> storageClass_ {};
        // The region in which the video is stored.
        shared_ptr<string> storageLocation_ {};
        // The tags of the video file.
        shared_ptr<string> tags_ {};
        // The title of the video.
        shared_ptr<string> title_ {};
        // The transcoding mode. Valid values:
        // 
        // *   **FastTranscode**: The video file is immediately transcoded after it is uploaded. You cannot play the file before it is transcoded.
        // *   **NoTranscode**: The video file can be played without being transcoded. You can immediately play the file after it is uploaded.
        // *   **AsyncTranscode**: The video file can be immediately played and asynchronously transcoded after it is uploaded.
        shared_ptr<string> transcodeMode_ {};
        // The ID of the video file.
        shared_ptr<string> videoId_ {};
      };

      class Image : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Image& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(CateId, cateId_);
          DARABONBA_PTR_TO_JSON(CateName, cateName_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(URL, URL_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(CateId, cateId_);
          DARABONBA_PTR_FROM_JSON(CateName, cateName_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(URL, URL_);
        };
        Image() = default ;
        Image(const Image &) = default ;
        Image(Image &&) = default ;
        Image(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Image() = default ;
        Image& operator=(const Image &) = default ;
        Image& operator=(Image &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->cateId_ == nullptr && this->cateName_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->imageId_ == nullptr
        && this->modificationTime_ == nullptr && this->status_ == nullptr && this->storageLocation_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr
        && this->URL_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Image& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // cateId Field Functions 
        bool hasCateId() const { return this->cateId_ != nullptr;};
        void deleteCateId() { this->cateId_ = nullptr;};
        inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
        inline Image& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


        // cateName Field Functions 
        bool hasCateName() const { return this->cateName_ != nullptr;};
        void deleteCateName() { this->cateName_ = nullptr;};
        inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
        inline Image& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Image& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Image& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Image& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // modificationTime Field Functions 
        bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
        void deleteModificationTime() { this->modificationTime_ = nullptr;};
        inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
        inline Image& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Image& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageLocation Field Functions 
        bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
        void deleteStorageLocation() { this->storageLocation_ = nullptr;};
        inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
        inline Image& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline Image& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Image& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // URL Field Functions 
        bool hasURL() const { return this->URL_ != nullptr;};
        void deleteURL() { this->URL_ = nullptr;};
        inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
        inline Image& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The ID of the category.
        shared_ptr<int64_t> cateId_ {};
        // The name of the category.
        shared_ptr<string> cateName_ {};
        // The time when the image was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the image file.
        shared_ptr<string> description_ {};
        // The ID of the image file.
        shared_ptr<string> imageId_ {};
        // The time when the image file was updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> modificationTime_ {};
        // The status of the image file.
        // 
        // *   **Uploading**
        // *   **Normal**
        // *   **UploadFail**
        shared_ptr<string> status_ {};
        // The region in which the image is stored.
        shared_ptr<string> storageLocation_ {};
        // The tags of the image file.
        shared_ptr<string> tags_ {};
        // The title of the image file.
        shared_ptr<string> title_ {};
        // The URL of the image file.
        shared_ptr<string> URL_ {};
      };

      class Audio : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Audio& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AudioId, audioId_);
          DARABONBA_PTR_TO_JSON(CateId, cateId_);
          DARABONBA_PTR_TO_JSON(CateName, cateName_);
          DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DownloadSwitch, downloadSwitch_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(MediaSource, mediaSource_);
          DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_TO_JSON(PreprocessStatus, preprocessStatus_);
          DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_TO_JSON(RestoreExpiration, restoreExpiration_);
          DARABONBA_PTR_TO_JSON(RestoreStatus, restoreStatus_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_TO_JSON(SpriteSnapshots, spriteSnapshots_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(TranscodeMode, transcodeMode_);
        };
        friend void from_json(const Darabonba::Json& j, Audio& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AudioId, audioId_);
          DARABONBA_PTR_FROM_JSON(CateId, cateId_);
          DARABONBA_PTR_FROM_JSON(CateName, cateName_);
          DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DownloadSwitch, downloadSwitch_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(MediaSource, mediaSource_);
          DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_FROM_JSON(PreprocessStatus, preprocessStatus_);
          DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_FROM_JSON(RestoreExpiration, restoreExpiration_);
          DARABONBA_PTR_FROM_JSON(RestoreStatus, restoreStatus_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_FROM_JSON(SpriteSnapshots, spriteSnapshots_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(TranscodeMode, transcodeMode_);
        };
        Audio() = default ;
        Audio(const Audio &) = default ;
        Audio(Audio &&) = default ;
        Audio(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Audio() = default ;
        Audio& operator=(const Audio &) = default ;
        Audio& operator=(Audio &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->audioId_ == nullptr && this->cateId_ == nullptr && this->cateName_ == nullptr && this->coverURL_ == nullptr && this->creationTime_ == nullptr
        && this->description_ == nullptr && this->downloadSwitch_ == nullptr && this->duration_ == nullptr && this->mediaSource_ == nullptr && this->modificationTime_ == nullptr
        && this->preprocessStatus_ == nullptr && this->referenceId_ == nullptr && this->restoreExpiration_ == nullptr && this->restoreStatus_ == nullptr && this->size_ == nullptr
        && this->snapshots_ == nullptr && this->spriteSnapshots_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr && this->storageLocation_ == nullptr
        && this->tags_ == nullptr && this->title_ == nullptr && this->transcodeMode_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Audio& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // audioId Field Functions 
        bool hasAudioId() const { return this->audioId_ != nullptr;};
        void deleteAudioId() { this->audioId_ = nullptr;};
        inline string getAudioId() const { DARABONBA_PTR_GET_DEFAULT(audioId_, "") };
        inline Audio& setAudioId(string audioId) { DARABONBA_PTR_SET_VALUE(audioId_, audioId) };


        // cateId Field Functions 
        bool hasCateId() const { return this->cateId_ != nullptr;};
        void deleteCateId() { this->cateId_ = nullptr;};
        inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
        inline Audio& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


        // cateName Field Functions 
        bool hasCateName() const { return this->cateName_ != nullptr;};
        void deleteCateName() { this->cateName_ = nullptr;};
        inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
        inline Audio& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


        // coverURL Field Functions 
        bool hasCoverURL() const { return this->coverURL_ != nullptr;};
        void deleteCoverURL() { this->coverURL_ = nullptr;};
        inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
        inline Audio& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Audio& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Audio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // downloadSwitch Field Functions 
        bool hasDownloadSwitch() const { return this->downloadSwitch_ != nullptr;};
        void deleteDownloadSwitch() { this->downloadSwitch_ = nullptr;};
        inline string getDownloadSwitch() const { DARABONBA_PTR_GET_DEFAULT(downloadSwitch_, "") };
        inline Audio& setDownloadSwitch(string downloadSwitch) { DARABONBA_PTR_SET_VALUE(downloadSwitch_, downloadSwitch) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline Audio& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // mediaSource Field Functions 
        bool hasMediaSource() const { return this->mediaSource_ != nullptr;};
        void deleteMediaSource() { this->mediaSource_ = nullptr;};
        inline string getMediaSource() const { DARABONBA_PTR_GET_DEFAULT(mediaSource_, "") };
        inline Audio& setMediaSource(string mediaSource) { DARABONBA_PTR_SET_VALUE(mediaSource_, mediaSource) };


        // modificationTime Field Functions 
        bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
        void deleteModificationTime() { this->modificationTime_ = nullptr;};
        inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
        inline Audio& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


        // preprocessStatus Field Functions 
        bool hasPreprocessStatus() const { return this->preprocessStatus_ != nullptr;};
        void deletePreprocessStatus() { this->preprocessStatus_ = nullptr;};
        inline string getPreprocessStatus() const { DARABONBA_PTR_GET_DEFAULT(preprocessStatus_, "") };
        inline Audio& setPreprocessStatus(string preprocessStatus) { DARABONBA_PTR_SET_VALUE(preprocessStatus_, preprocessStatus) };


        // referenceId Field Functions 
        bool hasReferenceId() const { return this->referenceId_ != nullptr;};
        void deleteReferenceId() { this->referenceId_ = nullptr;};
        inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
        inline Audio& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


        // restoreExpiration Field Functions 
        bool hasRestoreExpiration() const { return this->restoreExpiration_ != nullptr;};
        void deleteRestoreExpiration() { this->restoreExpiration_ = nullptr;};
        inline string getRestoreExpiration() const { DARABONBA_PTR_GET_DEFAULT(restoreExpiration_, "") };
        inline Audio& setRestoreExpiration(string restoreExpiration) { DARABONBA_PTR_SET_VALUE(restoreExpiration_, restoreExpiration) };


        // restoreStatus Field Functions 
        bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
        void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
        inline string getRestoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
        inline Audio& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Audio& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshots Field Functions 
        bool hasSnapshots() const { return this->snapshots_ != nullptr;};
        void deleteSnapshots() { this->snapshots_ = nullptr;};
        inline const vector<string> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
        inline vector<string> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
        inline Audio& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
        inline Audio& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


        // spriteSnapshots Field Functions 
        bool hasSpriteSnapshots() const { return this->spriteSnapshots_ != nullptr;};
        void deleteSpriteSnapshots() { this->spriteSnapshots_ = nullptr;};
        inline const vector<string> & getSpriteSnapshots() const { DARABONBA_PTR_GET_CONST(spriteSnapshots_, vector<string>) };
        inline vector<string> getSpriteSnapshots() { DARABONBA_PTR_GET(spriteSnapshots_, vector<string>) };
        inline Audio& setSpriteSnapshots(const vector<string> & spriteSnapshots) { DARABONBA_PTR_SET_VALUE(spriteSnapshots_, spriteSnapshots) };
        inline Audio& setSpriteSnapshots(vector<string> && spriteSnapshots) { DARABONBA_PTR_SET_RVALUE(spriteSnapshots_, spriteSnapshots) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Audio& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageClass Field Functions 
        bool hasStorageClass() const { return this->storageClass_ != nullptr;};
        void deleteStorageClass() { this->storageClass_ = nullptr;};
        inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
        inline Audio& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


        // storageLocation Field Functions 
        bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
        void deleteStorageLocation() { this->storageLocation_ = nullptr;};
        inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
        inline Audio& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline Audio& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Audio& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // transcodeMode Field Functions 
        bool hasTranscodeMode() const { return this->transcodeMode_ != nullptr;};
        void deleteTranscodeMode() { this->transcodeMode_ = nullptr;};
        inline string getTranscodeMode() const { DARABONBA_PTR_GET_DEFAULT(transcodeMode_, "") };
        inline Audio& setTranscodeMode(string transcodeMode) { DARABONBA_PTR_SET_VALUE(transcodeMode_, transcodeMode) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The ID of the audio file.
        shared_ptr<string> audioId_ {};
        // The ID of the category.
        shared_ptr<int64_t> cateId_ {};
        // The name of the category.
        shared_ptr<string> cateName_ {};
        // The URL of the thumbnail.
        shared_ptr<string> coverURL_ {};
        // The time when the audio stream was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the audio file.
        shared_ptr<string> description_ {};
        // The download switch. The audio file can be downloaded offline only when the download switch is turned on. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> downloadSwitch_ {};
        // The duration of the audio file.
        shared_ptr<float> duration_ {};
        // The source of the audio file. Valid values:
        // 
        // *   **general**: The audio file is uploaded by using ApsaraVideo VOD.
        // *   **short_video**: The audio file is uploaded to ApsaraVideo VOD by using the short video SDK. For more information, see [Introduction](https://help.aliyun.com/document_detail/53407.html).
        // *   **editing**: The audio file is uploaded to ApsaraVideo VOD after online editing and production. For more information, see [ProduceEditingProjectVideo](https://help.aliyun.com/document_detail/68536.html).
        // *   **live**: The audio file is recorded and uploaded as a file to ApsaraVideo VOD.
        shared_ptr<string> mediaSource_ {};
        // The time when the audio file was updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> modificationTime_ {};
        // The preprocessing status. Only preprocessed videos can be used for live streaming in the production studio. Valid values:
        // 
        // *   **UnPreprocess**
        // *   **Preprocessing**
        // *   **PreprocessSucceed**
        // *   **PreprocessFailed**
        shared_ptr<string> preprocessStatus_ {};
        shared_ptr<string> referenceId_ {};
        // The period of time in which the audio file remains in the restored state.
        shared_ptr<string> restoreExpiration_ {};
        // The restoration status of the audio file. Valid values:
        // 
        // *   **Processing**
        // *   **Success**
        // *   **Failed**
        shared_ptr<string> restoreStatus_ {};
        // The size of the audio file.
        shared_ptr<int64_t> size_ {};
        // The automatic snapshots.
        shared_ptr<vector<string>> snapshots_ {};
        // The sprite snapshots.
        shared_ptr<vector<string>> spriteSnapshots_ {};
        // The status of the audio file. Valid values:
        // 
        // *   **Uploading**
        // *   **Normal**
        // *   **UploadFail**
        // *   **Deleted**
        shared_ptr<string> status_ {};
        // The storage class of the audio file. Valid values:
        // 
        // *   **Standard**: All media resources are stored as Standard objects.
        // *   **IA**: All media resources are stored as IA objects.
        // *   **Archive**: All media resources are stored as Archive objects.
        // *   **ColdArchive**: All media resources are stored as Cold Archive objects.
        // *   **SourceIA**: Only the source file is stored as an IA object.
        // *   **SourceArchive**: Only the source file is stored as an Archive object.
        // *   **SourceColdArchive**: Only the source file is stored as a Cold Archive object.
        // *   **Changing**: The storage class is being modified.
        shared_ptr<string> storageClass_ {};
        // The region in which the audio is stored.
        shared_ptr<string> storageLocation_ {};
        // The tags of the audio file.
        shared_ptr<string> tags_ {};
        // The title of the audio file
        shared_ptr<string> title_ {};
        // The transcoding mode. Valid values:
        // 
        // *   **FastTranscode**: The audio file is immediately transcoded after it is uploaded. You cannot play the file before it is transcoded.
        // *   **NoTranscode**: The audio file can be played without being transcoded. You can immediately play the file after it is uploaded.
        // *   **AsyncTranscode**: The audio file can be immediately played and asynchronously transcoded after it is uploaded.
        shared_ptr<string> transcodeMode_ {};
      };

      class AttachedMedia : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttachedMedia& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
          DARABONBA_PTR_TO_JSON(Categories, categories_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(URL, URL_);
        };
        friend void from_json(const Darabonba::Json& j, AttachedMedia& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
          DARABONBA_PTR_FROM_JSON(Categories, categories_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(URL, URL_);
        };
        AttachedMedia() = default ;
        AttachedMedia(const AttachedMedia &) = default ;
        AttachedMedia(AttachedMedia &&) = default ;
        AttachedMedia(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttachedMedia() = default ;
        AttachedMedia& operator=(const AttachedMedia &) = default ;
        AttachedMedia& operator=(AttachedMedia &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Categories : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Categories& obj) { 
            DARABONBA_PTR_TO_JSON(CateId, cateId_);
            DARABONBA_PTR_TO_JSON(CateName, cateName_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          };
          friend void from_json(const Darabonba::Json& j, Categories& obj) { 
            DARABONBA_PTR_FROM_JSON(CateId, cateId_);
            DARABONBA_PTR_FROM_JSON(CateName, cateName_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          };
          Categories() = default ;
          Categories(const Categories &) = default ;
          Categories(Categories &&) = default ;
          Categories(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Categories() = default ;
          Categories& operator=(const Categories &) = default ;
          Categories& operator=(Categories &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cateId_ == nullptr
        && this->cateName_ == nullptr && this->level_ == nullptr && this->parentId_ == nullptr; };
          // cateId Field Functions 
          bool hasCateId() const { return this->cateId_ != nullptr;};
          void deleteCateId() { this->cateId_ = nullptr;};
          inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
          inline Categories& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


          // cateName Field Functions 
          bool hasCateName() const { return this->cateName_ != nullptr;};
          void deleteCateName() { this->cateName_ = nullptr;};
          inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
          inline Categories& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
          inline Categories& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // parentId Field Functions 
          bool hasParentId() const { return this->parentId_ != nullptr;};
          void deleteParentId() { this->parentId_ = nullptr;};
          inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
          inline Categories& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        protected:
          // The category ID of the auxiliary media asset.
          shared_ptr<int64_t> cateId_ {};
          // The name of the category.
          shared_ptr<string> cateName_ {};
          // The level of the category.
          shared_ptr<int64_t> level_ {};
          // The ID of the parent node.
          shared_ptr<int64_t> parentId_ {};
        };

        virtual bool empty() const override { return this->appId_ == nullptr
        && this->businessType_ == nullptr && this->categories_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->mediaId_ == nullptr
        && this->modificationTime_ == nullptr && this->status_ == nullptr && this->storageLocation_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr
        && this->URL_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline AttachedMedia& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // businessType Field Functions 
        bool hasBusinessType() const { return this->businessType_ != nullptr;};
        void deleteBusinessType() { this->businessType_ = nullptr;};
        inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
        inline AttachedMedia& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


        // categories Field Functions 
        bool hasCategories() const { return this->categories_ != nullptr;};
        void deleteCategories() { this->categories_ = nullptr;};
        inline const vector<AttachedMedia::Categories> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<AttachedMedia::Categories>) };
        inline vector<AttachedMedia::Categories> getCategories() { DARABONBA_PTR_GET(categories_, vector<AttachedMedia::Categories>) };
        inline AttachedMedia& setCategories(const vector<AttachedMedia::Categories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
        inline AttachedMedia& setCategories(vector<AttachedMedia::Categories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline AttachedMedia& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AttachedMedia& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline AttachedMedia& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // modificationTime Field Functions 
        bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
        void deleteModificationTime() { this->modificationTime_ = nullptr;};
        inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
        inline AttachedMedia& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AttachedMedia& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageLocation Field Functions 
        bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
        void deleteStorageLocation() { this->storageLocation_ = nullptr;};
        inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
        inline AttachedMedia& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline AttachedMedia& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline AttachedMedia& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // URL Field Functions 
        bool hasURL() const { return this->URL_ != nullptr;};
        void deleteURL() { this->URL_ = nullptr;};
        inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
        inline AttachedMedia& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The type of the auxiliary media asset. Valid values:
        // 
        // *   **watermark**
        // *   **subtitle**
        // *   **material**
        shared_ptr<string> businessType_ {};
        // The list of category IDs.
        shared_ptr<vector<AttachedMedia::Categories>> categories_ {};
        // The time when the auxiliary media asset was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the auxiliary media asset.
        shared_ptr<string> description_ {};
        // The ID of the auxiliary media asset.
        shared_ptr<string> mediaId_ {};
        // The time when the auxiliary media asset was updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> modificationTime_ {};
        // The status of the auxiliary media asset. Valid values:
        // 
        // *   **Uploading**
        // *   **Normal**
        // *   **UploadFail**
        shared_ptr<string> status_ {};
        // The region in which the auxiliary media asset is stored.
        shared_ptr<string> storageLocation_ {};
        // The tags of the auxiliary media asset.
        shared_ptr<string> tags_ {};
        // The title of the auxiliary media asset.
        shared_ptr<string> title_ {};
        // The URL of the auxiliary media asset.
        shared_ptr<string> URL_ {};
      };

      class AiRoughData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiRoughData& obj) { 
          DARABONBA_PTR_TO_JSON(AiCategory, aiCategory_);
          DARABONBA_PTR_TO_JSON(AiJobId, aiJobId_);
          DARABONBA_PTR_TO_JSON(SaveType, saveType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AiRoughData& obj) { 
          DARABONBA_PTR_FROM_JSON(AiCategory, aiCategory_);
          DARABONBA_PTR_FROM_JSON(AiJobId, aiJobId_);
          DARABONBA_PTR_FROM_JSON(SaveType, saveType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AiRoughData() = default ;
        AiRoughData(const AiRoughData &) = default ;
        AiRoughData(AiRoughData &&) = default ;
        AiRoughData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiRoughData() = default ;
        AiRoughData& operator=(const AiRoughData &) = default ;
        AiRoughData& operator=(AiRoughData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aiCategory_ == nullptr
        && this->aiJobId_ == nullptr && this->saveType_ == nullptr && this->status_ == nullptr; };
        // aiCategory Field Functions 
        bool hasAiCategory() const { return this->aiCategory_ != nullptr;};
        void deleteAiCategory() { this->aiCategory_ = nullptr;};
        inline string getAiCategory() const { DARABONBA_PTR_GET_DEFAULT(aiCategory_, "") };
        inline AiRoughData& setAiCategory(string aiCategory) { DARABONBA_PTR_SET_VALUE(aiCategory_, aiCategory) };


        // aiJobId Field Functions 
        bool hasAiJobId() const { return this->aiJobId_ != nullptr;};
        void deleteAiJobId() { this->aiJobId_ = nullptr;};
        inline string getAiJobId() const { DARABONBA_PTR_GET_DEFAULT(aiJobId_, "") };
        inline AiRoughData& setAiJobId(string aiJobId) { DARABONBA_PTR_SET_VALUE(aiJobId_, aiJobId) };


        // saveType Field Functions 
        bool hasSaveType() const { return this->saveType_ != nullptr;};
        void deleteSaveType() { this->saveType_ = nullptr;};
        inline string getSaveType() const { DARABONBA_PTR_GET_DEFAULT(saveType_, "") };
        inline AiRoughData& setSaveType(string saveType) { DARABONBA_PTR_SET_VALUE(saveType_, saveType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AiRoughData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The AI category.
        shared_ptr<string> aiCategory_ {};
        // The ID of the AI task.
        shared_ptr<string> aiJobId_ {};
        // The save type.
        shared_ptr<string> saveType_ {};
        // The data status.
        shared_ptr<string> status_ {};
      };

      class AiData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiData& obj) { 
          DARABONBA_PTR_TO_JSON(AiLabelInfo, aiLabelInfo_);
          DARABONBA_PTR_TO_JSON(OcrInfo, ocrInfo_);
        };
        friend void from_json(const Darabonba::Json& j, AiData& obj) { 
          DARABONBA_PTR_FROM_JSON(AiLabelInfo, aiLabelInfo_);
          DARABONBA_PTR_FROM_JSON(OcrInfo, ocrInfo_);
        };
        AiData() = default ;
        AiData(const AiData &) = default ;
        AiData(AiData &&) = default ;
        AiData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiData() = default ;
        AiData& operator=(const AiData &) = default ;
        AiData& operator=(AiData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OcrInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OcrInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(From, from_);
            DARABONBA_PTR_TO_JSON(To, to_);
          };
          friend void from_json(const Darabonba::Json& j, OcrInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(From, from_);
            DARABONBA_PTR_FROM_JSON(To, to_);
          };
          OcrInfo() = default ;
          OcrInfo(const OcrInfo &) = default ;
          OcrInfo(OcrInfo &&) = default ;
          OcrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OcrInfo() = default ;
          OcrInfo& operator=(const OcrInfo &) = default ;
          OcrInfo& operator=(OcrInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->from_ == nullptr && this->to_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline OcrInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // from Field Functions 
          bool hasFrom() const { return this->from_ != nullptr;};
          void deleteFrom() { this->from_ = nullptr;};
          inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
          inline OcrInfo& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


          // to Field Functions 
          bool hasTo() const { return this->to_ != nullptr;};
          void deleteTo() { this->to_ = nullptr;};
          inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
          inline OcrInfo& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


        protected:
          // The text content.
          shared_ptr<string> content_ {};
          // The start time of the subtitle.
          shared_ptr<double> from_ {};
          // The end time of the subtitle.
          shared_ptr<double> to_ {};
        };

        class AiLabelInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AiLabelInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(LabelId, labelId_);
            DARABONBA_PTR_TO_JSON(LabelName, labelName_);
            DARABONBA_PTR_TO_JSON(Occurrences, occurrences_);
          };
          friend void from_json(const Darabonba::Json& j, AiLabelInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(LabelId, labelId_);
            DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
            DARABONBA_PTR_FROM_JSON(Occurrences, occurrences_);
          };
          AiLabelInfo() = default ;
          AiLabelInfo(const AiLabelInfo &) = default ;
          AiLabelInfo(AiLabelInfo &&) = default ;
          AiLabelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AiLabelInfo() = default ;
          AiLabelInfo& operator=(const AiLabelInfo &) = default ;
          AiLabelInfo& operator=(AiLabelInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Occurrences : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Occurrences& obj) { 
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(Score, score_);
              DARABONBA_PTR_TO_JSON(To, to_);
            };
            friend void from_json(const Darabonba::Json& j, Occurrences& obj) { 
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
              DARABONBA_PTR_FROM_JSON(To, to_);
            };
            Occurrences() = default ;
            Occurrences(const Occurrences &) = default ;
            Occurrences(Occurrences &&) = default ;
            Occurrences(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Occurrences() = default ;
            Occurrences& operator=(const Occurrences &) = default ;
            Occurrences& operator=(Occurrences &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->from_ == nullptr
        && this->score_ == nullptr && this->to_ == nullptr; };
            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
            inline Occurrences& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
            inline Occurrences& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
            inline Occurrences& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


          protected:
            // The start time of the clip.
            shared_ptr<double> from_ {};
            // The score.
            shared_ptr<double> score_ {};
            // The end time of the clip.
            shared_ptr<double> to_ {};
          };

          virtual bool empty() const override { return this->category_ == nullptr
        && this->labelId_ == nullptr && this->labelName_ == nullptr && this->occurrences_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline AiLabelInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // labelId Field Functions 
          bool hasLabelId() const { return this->labelId_ != nullptr;};
          void deleteLabelId() { this->labelId_ = nullptr;};
          inline string getLabelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, "") };
          inline AiLabelInfo& setLabelId(string labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


          // labelName Field Functions 
          bool hasLabelName() const { return this->labelName_ != nullptr;};
          void deleteLabelName() { this->labelName_ = nullptr;};
          inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
          inline AiLabelInfo& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


          // occurrences Field Functions 
          bool hasOccurrences() const { return this->occurrences_ != nullptr;};
          void deleteOccurrences() { this->occurrences_ = nullptr;};
          inline const vector<AiLabelInfo::Occurrences> & getOccurrences() const { DARABONBA_PTR_GET_CONST(occurrences_, vector<AiLabelInfo::Occurrences>) };
          inline vector<AiLabelInfo::Occurrences> getOccurrences() { DARABONBA_PTR_GET(occurrences_, vector<AiLabelInfo::Occurrences>) };
          inline AiLabelInfo& setOccurrences(const vector<AiLabelInfo::Occurrences> & occurrences) { DARABONBA_PTR_SET_VALUE(occurrences_, occurrences) };
          inline AiLabelInfo& setOccurrences(vector<AiLabelInfo::Occurrences> && occurrences) { DARABONBA_PTR_SET_RVALUE(occurrences_, occurrences) };


        protected:
          // The category.
          shared_ptr<string> category_ {};
          // The ID of the tag.
          shared_ptr<string> labelId_ {};
          // The name of the tag.
          shared_ptr<string> labelName_ {};
          // The clips.
          shared_ptr<vector<AiLabelInfo::Occurrences>> occurrences_ {};
        };

        virtual bool empty() const override { return this->aiLabelInfo_ == nullptr
        && this->ocrInfo_ == nullptr; };
        // aiLabelInfo Field Functions 
        bool hasAiLabelInfo() const { return this->aiLabelInfo_ != nullptr;};
        void deleteAiLabelInfo() { this->aiLabelInfo_ = nullptr;};
        inline const vector<AiData::AiLabelInfo> & getAiLabelInfo() const { DARABONBA_PTR_GET_CONST(aiLabelInfo_, vector<AiData::AiLabelInfo>) };
        inline vector<AiData::AiLabelInfo> getAiLabelInfo() { DARABONBA_PTR_GET(aiLabelInfo_, vector<AiData::AiLabelInfo>) };
        inline AiData& setAiLabelInfo(const vector<AiData::AiLabelInfo> & aiLabelInfo) { DARABONBA_PTR_SET_VALUE(aiLabelInfo_, aiLabelInfo) };
        inline AiData& setAiLabelInfo(vector<AiData::AiLabelInfo> && aiLabelInfo) { DARABONBA_PTR_SET_RVALUE(aiLabelInfo_, aiLabelInfo) };


        // ocrInfo Field Functions 
        bool hasOcrInfo() const { return this->ocrInfo_ != nullptr;};
        void deleteOcrInfo() { this->ocrInfo_ = nullptr;};
        inline const vector<AiData::OcrInfo> & getOcrInfo() const { DARABONBA_PTR_GET_CONST(ocrInfo_, vector<AiData::OcrInfo>) };
        inline vector<AiData::OcrInfo> getOcrInfo() { DARABONBA_PTR_GET(ocrInfo_, vector<AiData::OcrInfo>) };
        inline AiData& setOcrInfo(const vector<AiData::OcrInfo> & ocrInfo) { DARABONBA_PTR_SET_VALUE(ocrInfo_, ocrInfo) };
        inline AiData& setOcrInfo(vector<AiData::OcrInfo> && ocrInfo) { DARABONBA_PTR_SET_RVALUE(ocrInfo_, ocrInfo) };


      protected:
        // The AI tags.
        shared_ptr<vector<AiData::AiLabelInfo>> aiLabelInfo_ {};
        // The information about subtitles.
        shared_ptr<vector<AiData::OcrInfo>> ocrInfo_ {};
      };

      virtual bool empty() const override { return this->aiData_ == nullptr
        && this->aiRoughData_ == nullptr && this->attachedMedia_ == nullptr && this->audio_ == nullptr && this->creationTime_ == nullptr && this->image_ == nullptr
        && this->mediaId_ == nullptr && this->mediaType_ == nullptr && this->video_ == nullptr; };
      // aiData Field Functions 
      bool hasAiData() const { return this->aiData_ != nullptr;};
      void deleteAiData() { this->aiData_ = nullptr;};
      inline const MediaList::AiData & getAiData() const { DARABONBA_PTR_GET_CONST(aiData_, MediaList::AiData) };
      inline MediaList::AiData getAiData() { DARABONBA_PTR_GET(aiData_, MediaList::AiData) };
      inline MediaList& setAiData(const MediaList::AiData & aiData) { DARABONBA_PTR_SET_VALUE(aiData_, aiData) };
      inline MediaList& setAiData(MediaList::AiData && aiData) { DARABONBA_PTR_SET_RVALUE(aiData_, aiData) };


      // aiRoughData Field Functions 
      bool hasAiRoughData() const { return this->aiRoughData_ != nullptr;};
      void deleteAiRoughData() { this->aiRoughData_ = nullptr;};
      inline const MediaList::AiRoughData & getAiRoughData() const { DARABONBA_PTR_GET_CONST(aiRoughData_, MediaList::AiRoughData) };
      inline MediaList::AiRoughData getAiRoughData() { DARABONBA_PTR_GET(aiRoughData_, MediaList::AiRoughData) };
      inline MediaList& setAiRoughData(const MediaList::AiRoughData & aiRoughData) { DARABONBA_PTR_SET_VALUE(aiRoughData_, aiRoughData) };
      inline MediaList& setAiRoughData(MediaList::AiRoughData && aiRoughData) { DARABONBA_PTR_SET_RVALUE(aiRoughData_, aiRoughData) };


      // attachedMedia Field Functions 
      bool hasAttachedMedia() const { return this->attachedMedia_ != nullptr;};
      void deleteAttachedMedia() { this->attachedMedia_ = nullptr;};
      inline const MediaList::AttachedMedia & getAttachedMedia() const { DARABONBA_PTR_GET_CONST(attachedMedia_, MediaList::AttachedMedia) };
      inline MediaList::AttachedMedia getAttachedMedia() { DARABONBA_PTR_GET(attachedMedia_, MediaList::AttachedMedia) };
      inline MediaList& setAttachedMedia(const MediaList::AttachedMedia & attachedMedia) { DARABONBA_PTR_SET_VALUE(attachedMedia_, attachedMedia) };
      inline MediaList& setAttachedMedia(MediaList::AttachedMedia && attachedMedia) { DARABONBA_PTR_SET_RVALUE(attachedMedia_, attachedMedia) };


      // audio Field Functions 
      bool hasAudio() const { return this->audio_ != nullptr;};
      void deleteAudio() { this->audio_ = nullptr;};
      inline const MediaList::Audio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, MediaList::Audio) };
      inline MediaList::Audio getAudio() { DARABONBA_PTR_GET(audio_, MediaList::Audio) };
      inline MediaList& setAudio(const MediaList::Audio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
      inline MediaList& setAudio(MediaList::Audio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline MediaList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const MediaList::Image & getImage() const { DARABONBA_PTR_GET_CONST(image_, MediaList::Image) };
      inline MediaList::Image getImage() { DARABONBA_PTR_GET(image_, MediaList::Image) };
      inline MediaList& setImage(const MediaList::Image & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline MediaList& setImage(MediaList::Image && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaType Field Functions 
      bool hasMediaType() const { return this->mediaType_ != nullptr;};
      void deleteMediaType() { this->mediaType_ = nullptr;};
      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
      inline MediaList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


      // video Field Functions 
      bool hasVideo() const { return this->video_ != nullptr;};
      void deleteVideo() { this->video_ = nullptr;};
      inline const MediaList::Video & getVideo() const { DARABONBA_PTR_GET_CONST(video_, MediaList::Video) };
      inline MediaList::Video getVideo() { DARABONBA_PTR_GET(video_, MediaList::Video) };
      inline MediaList& setVideo(const MediaList::Video & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
      inline MediaList& setVideo(MediaList::Video && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


    protected:
      // Details about AI data.
      shared_ptr<MediaList::AiData> aiData_ {};
      // The basic information about AI data.
      shared_ptr<MediaList::AiRoughData> aiRoughData_ {};
      // [The information about the auxiliary media asset](https://help.aliyun.com/document_detail/86991.html).
      shared_ptr<MediaList::AttachedMedia> attachedMedia_ {};
      // [The information about the audio](https://help.aliyun.com/document_detail/86991.html).
      shared_ptr<MediaList::Audio> audio_ {};
      // The time when the media asset was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // [The information about the image](https://help.aliyun.com/document_detail/86991.html).
      shared_ptr<MediaList::Image> image_ {};
      // The ID of the file.
      shared_ptr<string> mediaId_ {};
      // The type of the media asset. Valid values:
      // 
      // *   **video**
      // *   **audio**
      // *   **image**
      // *   **attached**
      shared_ptr<string> mediaType_ {};
      // [The information about the video](https://help.aliyun.com/document_detail/86991.html).
      shared_ptr<MediaList::Video> video_ {};
    };

    virtual bool empty() const override { return this->mediaList_ == nullptr
        && this->requestId_ == nullptr && this->scrollToken_ == nullptr && this->total_ == nullptr; };
    // mediaList Field Functions 
    bool hasMediaList() const { return this->mediaList_ != nullptr;};
    void deleteMediaList() { this->mediaList_ = nullptr;};
    inline const vector<SearchMediaResponseBody::MediaList> & getMediaList() const { DARABONBA_PTR_GET_CONST(mediaList_, vector<SearchMediaResponseBody::MediaList>) };
    inline vector<SearchMediaResponseBody::MediaList> getMediaList() { DARABONBA_PTR_GET(mediaList_, vector<SearchMediaResponseBody::MediaList>) };
    inline SearchMediaResponseBody& setMediaList(const vector<SearchMediaResponseBody::MediaList> & mediaList) { DARABONBA_PTR_SET_VALUE(mediaList_, mediaList) };
    inline SearchMediaResponseBody& setMediaList(vector<SearchMediaResponseBody::MediaList> && mediaList) { DARABONBA_PTR_SET_RVALUE(mediaList_, mediaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scrollToken Field Functions 
    bool hasScrollToken() const { return this->scrollToken_ != nullptr;};
    void deleteScrollToken() { this->scrollToken_ = nullptr;};
    inline string getScrollToken() const { DARABONBA_PTR_GET_DEFAULT(scrollToken_, "") };
    inline SearchMediaResponseBody& setScrollToken(string scrollToken) { DARABONBA_PTR_SET_VALUE(scrollToken_, scrollToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The information about the media assets.
    shared_ptr<vector<SearchMediaResponseBody::MediaList>> mediaList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The pagination identifier.
    shared_ptr<string> scrollToken_ {};
    // The total number of data records that meet the specified filter criteria.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
