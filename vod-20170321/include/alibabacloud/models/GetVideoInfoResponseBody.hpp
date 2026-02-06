// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOINFORESPONSEBODY_HPP_
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
  class GetVideoInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    GetVideoInfoResponseBody() = default ;
    GetVideoInfoResponseBody(const GetVideoInfoResponseBody &) = default ;
    GetVideoInfoResponseBody(GetVideoInfoResponseBody &&) = default ;
    GetVideoInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoInfoResponseBody() = default ;
    GetVideoInfoResponseBody& operator=(const GetVideoInfoResponseBody &) = default ;
    GetVideoInfoResponseBody& operator=(GetVideoInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Video : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Video& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(CateId, cateId_);
        DARABONBA_PTR_TO_JSON(CateName, cateName_);
        DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(CustomMediaInfo, customMediaInfo_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DownloadSwitch, downloadSwitch_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
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
      friend void from_json(const Darabonba::Json& j, Video& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(CateId, cateId_);
        DARABONBA_PTR_FROM_JSON(CateName, cateName_);
        DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(CustomMediaInfo, customMediaInfo_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DownloadSwitch, downloadSwitch_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
      class Snapshots : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
          DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
        };
        friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
          DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
        };
        Snapshots() = default ;
        Snapshots(const Snapshots &) = default ;
        Snapshots(Snapshots &&) = default ;
        Snapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Snapshots() = default ;
        Snapshots& operator=(const Snapshots &) = default ;
        Snapshots& operator=(Snapshots &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->snapshot_ == nullptr; };
        // snapshot Field Functions 
        bool hasSnapshot() const { return this->snapshot_ != nullptr;};
        void deleteSnapshot() { this->snapshot_ = nullptr;};
        inline const vector<string> & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<string>) };
        inline vector<string> getSnapshot() { DARABONBA_PTR_GET(snapshot_, vector<string>) };
        inline Snapshots& setSnapshot(const vector<string> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
        inline Snapshots& setSnapshot(vector<string> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


      protected:
        shared_ptr<vector<string>> snapshot_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->auditStatus_ == nullptr && this->cateId_ == nullptr && this->cateName_ == nullptr && this->coverURL_ == nullptr && this->creationTime_ == nullptr
        && this->customMediaInfo_ == nullptr && this->description_ == nullptr && this->downloadSwitch_ == nullptr && this->duration_ == nullptr && this->modificationTime_ == nullptr
        && this->referenceId_ == nullptr && this->regionId_ == nullptr && this->restoreExpiration_ == nullptr && this->restoreStatus_ == nullptr && this->size_ == nullptr
        && this->snapshots_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr && this->storageLocation_ == nullptr && this->tags_ == nullptr
        && this->templateGroupId_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr && this->videoId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Video& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
      inline Video& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


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


      // customMediaInfo Field Functions 
      bool hasCustomMediaInfo() const { return this->customMediaInfo_ != nullptr;};
      void deleteCustomMediaInfo() { this->customMediaInfo_ = nullptr;};
      inline string getCustomMediaInfo() const { DARABONBA_PTR_GET_DEFAULT(customMediaInfo_, "") };
      inline Video& setCustomMediaInfo(string customMediaInfo) { DARABONBA_PTR_SET_VALUE(customMediaInfo_, customMediaInfo) };


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


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline Video& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline Video& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Video& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
      inline const Video::Snapshots & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, Video::Snapshots) };
      inline Video::Snapshots getSnapshots() { DARABONBA_PTR_GET(snapshots_, Video::Snapshots) };
      inline Video& setSnapshots(const Video::Snapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
      inline Video& setSnapshots(Video::Snapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


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


      // templateGroupId Field Functions 
      bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
      void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
      inline string getTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
      inline Video& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Video& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline Video& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline Video& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The final review result of the audio or video file. Valid values:
      // 
      // *   **Normal**: pass
      // *   **Blocked**: blocked
      shared_ptr<string> auditStatus_ {};
      // The category ID of the media file.
      shared_ptr<int64_t> cateId_ {};
      // The name of the category.
      shared_ptr<string> cateName_ {};
      // The thumbnail URL of the media file.
      shared_ptr<string> coverURL_ {};
      // The time when the media file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The custom information about the media file.\\n\\n> This parameter has been deprecated. This parameter is no longer returned after you call the operation.
      shared_ptr<string> customMediaInfo_ {};
      // The description of the media file.
      shared_ptr<string> description_ {};
      // Indicates whether the offline download feature is enabled. If you enable the offline download feature, users can download and play videos by using the ApsaraVideo Player on a local PC. For more information, see [Configure download settings](https://help.aliyun.com/document_detail/86107.html). Valid values:
      // 
      // *   **on**: the offline download feature is enabled.
      // *   **off**: the offline download feature is not enabled.
      shared_ptr<string> downloadSwitch_ {};
      // The duration of the media file. Unit: seconds.
      shared_ptr<float> duration_ {};
      // The time when the audio or video file was last updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      shared_ptr<string> referenceId_ {};
      // The region where the media file is stored.
      shared_ptr<string> regionId_ {};
      // The period of time in which the object remains in the restored state.
      shared_ptr<string> restoreExpiration_ {};
      // The restoration status of the audio or video file. Valid values:
      // 
      // *   **Processing**
      // *   **Success**
      // *   **Failed**
      shared_ptr<string> restoreStatus_ {};
      // The size of the source file. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The video snapshot URLs.
      shared_ptr<Video::Snapshots> snapshots_ {};
      // The status of the media file. For more information about the operations that you can perform on files in different statuses and usage limits, see [Status: the status of a video](~~52839#title-vqg-8cz-7p8~~). Valid values:
      // 
      // *   **Uploading**
      // *   **UploadFail**
      // *   **UploadSucc**
      // *   **Transcoding**
      // *   **TranscodeFail**
      // *   **Blocked**
      // *   **Normal**
      shared_ptr<string> status_ {};
      // The storage class of the audio or video file. Valid values:
      // 
      // *   **Standard**: All media resources are stored as Standard objects.
      // *   **IA**: All media resources are stored as IA objects.
      // *   **Archive**: All media resources are stored as Archive objects.
      // *   **ColdArchive**: All media resources are stored as Cold Archive objects.
      // *   **SourceIA**: Only the source files are IA objects.
      // *   **SourceArchive**: Only the source files are Archive objects.
      // *   **SourceColdArchive**: Only the source files are Cold Archive objects.
      // *   **Changing**: The storage class of the audio or video file is being changed.
      // *   **SourceChanging**: The storage class of the source file is being changed.
      shared_ptr<string> storageClass_ {};
      // The storage address of the media file.
      shared_ptr<string> storageLocation_ {};
      // The tags of the audio or video file. Multiple tags are separated by commas (,).
      shared_ptr<string> tags_ {};
      // The ID of the transcoding template group.
      shared_ptr<string> templateGroupId_ {};
      // The title of the media file.
      shared_ptr<string> title_ {};
      // Custom settings. This is a JSON string that supports settings such as message callbacks and upload acceleration. For more information, please refer to [UserData](https://help.aliyun.com/document_detail/86952.html).
      shared_ptr<string> userData_ {};
      // The ID of the media file.
      shared_ptr<string> videoId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->video_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const GetVideoInfoResponseBody::Video & getVideo() const { DARABONBA_PTR_GET_CONST(video_, GetVideoInfoResponseBody::Video) };
    inline GetVideoInfoResponseBody::Video getVideo() { DARABONBA_PTR_GET(video_, GetVideoInfoResponseBody::Video) };
    inline GetVideoInfoResponseBody& setVideo(const GetVideoInfoResponseBody::Video & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline GetVideoInfoResponseBody& setVideo(GetVideoInfoResponseBody::Video && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the audio or video file.
    shared_ptr<GetVideoInfoResponseBody::Video> video_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
