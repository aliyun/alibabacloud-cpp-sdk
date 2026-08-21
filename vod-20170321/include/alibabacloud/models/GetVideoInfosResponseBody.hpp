// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOINFOSRESPONSEBODY_HPP_
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
  class GetVideoInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_TO_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoList, videoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_FROM_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoList, videoList_);
    };
    GetVideoInfosResponseBody() = default ;
    GetVideoInfosResponseBody(const GetVideoInfosResponseBody &) = default ;
    GetVideoInfosResponseBody(GetVideoInfosResponseBody &&) = default ;
    GetVideoInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoInfosResponseBody() = default ;
    GetVideoInfosResponseBody& operator=(const GetVideoInfosResponseBody &) = default ;
    GetVideoInfosResponseBody& operator=(GetVideoInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CateId, cateId_);
        DARABONBA_PTR_TO_JSON(CateName, cateName_);
        DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DownloadSwitch, downloadSwitch_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
        DARABONBA_PTR_TO_JSON(RestoreExpiration, restoreExpiration_);
        DARABONBA_PTR_TO_JSON(RestoreStatus, restoreStatus_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, VideoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CateId, cateId_);
        DARABONBA_PTR_FROM_JSON(CateName, cateName_);
        DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DownloadSwitch, downloadSwitch_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
        DARABONBA_PTR_FROM_JSON(RestoreExpiration, restoreExpiration_);
        DARABONBA_PTR_FROM_JSON(RestoreStatus, restoreStatus_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      VideoList() = default ;
      VideoList(const VideoList &) = default ;
      VideoList(VideoList &&) = default ;
      VideoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoList() = default ;
      VideoList& operator=(const VideoList &) = default ;
      VideoList& operator=(VideoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->cateId_ == nullptr && this->cateName_ == nullptr && this->coverURL_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr
        && this->downloadSwitch_ == nullptr && this->duration_ == nullptr && this->modificationTime_ == nullptr && this->referenceId_ == nullptr && this->restoreExpiration_ == nullptr
        && this->restoreStatus_ == nullptr && this->size_ == nullptr && this->snapshots_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr
        && this->storageLocation_ == nullptr && this->tags_ == nullptr && this->templateGroupId_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr
        && this->videoId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline VideoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // cateId Field Functions 
      bool hasCateId() const { return this->cateId_ != nullptr;};
      void deleteCateId() { this->cateId_ = nullptr;};
      inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
      inline VideoList& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


      // cateName Field Functions 
      bool hasCateName() const { return this->cateName_ != nullptr;};
      void deleteCateName() { this->cateName_ = nullptr;};
      inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
      inline VideoList& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline VideoList& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline VideoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline VideoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloadSwitch Field Functions 
      bool hasDownloadSwitch() const { return this->downloadSwitch_ != nullptr;};
      void deleteDownloadSwitch() { this->downloadSwitch_ = nullptr;};
      inline string getDownloadSwitch() const { DARABONBA_PTR_GET_DEFAULT(downloadSwitch_, "") };
      inline VideoList& setDownloadSwitch(string downloadSwitch) { DARABONBA_PTR_SET_VALUE(downloadSwitch_, downloadSwitch) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline VideoList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline VideoList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline VideoList& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


      // restoreExpiration Field Functions 
      bool hasRestoreExpiration() const { return this->restoreExpiration_ != nullptr;};
      void deleteRestoreExpiration() { this->restoreExpiration_ = nullptr;};
      inline string getRestoreExpiration() const { DARABONBA_PTR_GET_DEFAULT(restoreExpiration_, "") };
      inline VideoList& setRestoreExpiration(string restoreExpiration) { DARABONBA_PTR_SET_VALUE(restoreExpiration_, restoreExpiration) };


      // restoreStatus Field Functions 
      bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
      void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
      inline string getRestoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
      inline VideoList& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline VideoList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // snapshots Field Functions 
      bool hasSnapshots() const { return this->snapshots_ != nullptr;};
      void deleteSnapshots() { this->snapshots_ = nullptr;};
      inline const vector<string> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
      inline vector<string> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
      inline VideoList& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
      inline VideoList& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VideoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline VideoList& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


      // storageLocation Field Functions 
      bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
      void deleteStorageLocation() { this->storageLocation_ = nullptr;};
      inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
      inline VideoList& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline VideoList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // templateGroupId Field Functions 
      bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
      void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
      inline string getTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
      inline VideoList& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline VideoList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline VideoList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline VideoList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The category ID.
      shared_ptr<int64_t> cateId_ {};
      // The category name.
      shared_ptr<string> cateName_ {};
      // The thumbnail URL of the audio or video file.
      shared_ptr<string> coverURL_ {};
      // The time when the audio or video file was created. The time follows the ISO 8601 standard in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the audio or video file.
      shared_ptr<string> description_ {};
      // The status of the offline download switch. If the offline download feature is enabled, mobile users can cache videos to their local devices for offline viewing by using ApsaraVideo Player. For more information, see [Offline download](https://help.aliyun.com/document_detail/86107.html). Valid values:
      // 
      // - **on**: enabled. Offline download is allowed.
      // - **off**: disabled. Offline download is not allowed.
      shared_ptr<string> downloadSwitch_ {};
      // The duration of the audio or video file. Unit: seconds.
      shared_ptr<float> duration_ {};
      // The last time when the audio or video file was updated. The time follows the ISO 8601 standard in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The custom ID. The value can contain only lowercase letters, uppercase letters, digits, hyphens (-), and underscores (_), and must be 6 to 64 characters in length. The value is unique at the user level.
      shared_ptr<string> referenceId_ {};
      // The expiration time of the media asset restoration.
      shared_ptr<string> restoreExpiration_ {};
      // The restoration status of the media asset. Valid values:
      // - **Processing**: The media asset is being restored.
      // - **Success**: The media asset is restored.
      // - **Failed**: The media asset failed to be restored.
      shared_ptr<string> restoreStatus_ {};
      // The size of the audio or video source file. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The array of video snapshot URLs.
      shared_ptr<vector<string>> snapshots_ {};
      // The video status. Valid values:
      // 
      // - **Uploading**: The video is being uploaded.
      // - **UploadFail**: The video failed to be uploaded.
      // - **UploadSucc**: The video has been uploaded.
      // - **Transcoding**: The video is being transcoded.
      // - **TranscodeFail**: The video failed to be transcoded.
      // - **Blocked**: The video is blocked.
      // - **Normal**: The video is in a normal state.
      shared_ptr<string> status_ {};
      // The storage class of the media asset. Valid values:
      // - **Standard**: standard.
      // - **IA**: media asset Infrequent Access.
      // - **Archive**: media asset Archive.
      // - **ColdArchive**: media asset Cold Archive.
      // - **SourceIA**: source file Infrequent Access.
      // - **SourceArchive**: source file Archive.
      // - **SourceColdArchive**: source file Cold Archive.
      // - **Changing**: the media asset storage class is being changed.
      // - **SourceChanging**: the source file storage class is being changed.
      shared_ptr<string> storageClass_ {};
      // The storage address of the audio or video file.
      shared_ptr<string> storageLocation_ {};
      // The tags of the audio or video file. Multiple tags are separated by commas (,).
      shared_ptr<string> tags_ {};
      // The transcoding template group ID.
      shared_ptr<string> templateGroupId_ {};
      // The title of the audio or video file.
      shared_ptr<string> title_ {};
      // The custom settings. The value is a JSON string that supports settings such as message callbacks and upload acceleration. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
      shared_ptr<string> userData_ {};
      // The audio or video ID.
      shared_ptr<string> videoId_ {};
    };

    virtual bool empty() const override { return this->nonExistReferenceIds_ == nullptr
        && this->nonExistVideoIds_ == nullptr && this->requestId_ == nullptr && this->videoList_ == nullptr; };
    // nonExistReferenceIds Field Functions 
    bool hasNonExistReferenceIds() const { return this->nonExistReferenceIds_ != nullptr;};
    void deleteNonExistReferenceIds() { this->nonExistReferenceIds_ = nullptr;};
    inline const vector<string> & getNonExistReferenceIds() const { DARABONBA_PTR_GET_CONST(nonExistReferenceIds_, vector<string>) };
    inline vector<string> getNonExistReferenceIds() { DARABONBA_PTR_GET(nonExistReferenceIds_, vector<string>) };
    inline GetVideoInfosResponseBody& setNonExistReferenceIds(const vector<string> & nonExistReferenceIds) { DARABONBA_PTR_SET_VALUE(nonExistReferenceIds_, nonExistReferenceIds) };
    inline GetVideoInfosResponseBody& setNonExistReferenceIds(vector<string> && nonExistReferenceIds) { DARABONBA_PTR_SET_RVALUE(nonExistReferenceIds_, nonExistReferenceIds) };


    // nonExistVideoIds Field Functions 
    bool hasNonExistVideoIds() const { return this->nonExistVideoIds_ != nullptr;};
    void deleteNonExistVideoIds() { this->nonExistVideoIds_ = nullptr;};
    inline const vector<string> & getNonExistVideoIds() const { DARABONBA_PTR_GET_CONST(nonExistVideoIds_, vector<string>) };
    inline vector<string> getNonExistVideoIds() { DARABONBA_PTR_GET(nonExistVideoIds_, vector<string>) };
    inline GetVideoInfosResponseBody& setNonExistVideoIds(const vector<string> & nonExistVideoIds) { DARABONBA_PTR_SET_VALUE(nonExistVideoIds_, nonExistVideoIds) };
    inline GetVideoInfosResponseBody& setNonExistVideoIds(vector<string> && nonExistVideoIds) { DARABONBA_PTR_SET_RVALUE(nonExistVideoIds_, nonExistVideoIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoList Field Functions 
    bool hasVideoList() const { return this->videoList_ != nullptr;};
    void deleteVideoList() { this->videoList_ = nullptr;};
    inline const vector<GetVideoInfosResponseBody::VideoList> & getVideoList() const { DARABONBA_PTR_GET_CONST(videoList_, vector<GetVideoInfosResponseBody::VideoList>) };
    inline vector<GetVideoInfosResponseBody::VideoList> getVideoList() { DARABONBA_PTR_GET(videoList_, vector<GetVideoInfosResponseBody::VideoList>) };
    inline GetVideoInfosResponseBody& setVideoList(const vector<GetVideoInfosResponseBody::VideoList> & videoList) { DARABONBA_PTR_SET_VALUE(videoList_, videoList) };
    inline GetVideoInfosResponseBody& setVideoList(vector<GetVideoInfosResponseBody::VideoList> && videoList) { DARABONBA_PTR_SET_RVALUE(videoList_, videoList) };


  protected:
    // The list of custom IDs that do not exist.
    shared_ptr<vector<string>> nonExistReferenceIds_ {};
    // The list of audio or video IDs that do not exist.
    shared_ptr<vector<string>> nonExistVideoIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the audio and video files.
    shared_ptr<vector<GetVideoInfosResponseBody::VideoList>> videoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
