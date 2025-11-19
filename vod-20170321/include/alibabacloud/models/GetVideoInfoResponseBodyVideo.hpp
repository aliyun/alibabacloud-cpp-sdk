// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOINFORESPONSEBODYVIDEO_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOINFORESPONSEBODYVIDEO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoInfoResponseBodyVideoSnapshots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoInfoResponseBodyVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoInfoResponseBodyVideo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetVideoInfoResponseBodyVideo& obj) { 
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
    GetVideoInfoResponseBodyVideo() = default ;
    GetVideoInfoResponseBodyVideo(const GetVideoInfoResponseBodyVideo &) = default ;
    GetVideoInfoResponseBodyVideo(GetVideoInfoResponseBodyVideo &&) = default ;
    GetVideoInfoResponseBodyVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoInfoResponseBodyVideo() = default ;
    GetVideoInfoResponseBodyVideo& operator=(const GetVideoInfoResponseBodyVideo &) = default ;
    GetVideoInfoResponseBodyVideo& operator=(GetVideoInfoResponseBodyVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->auditStatus_ == nullptr && return this->cateId_ == nullptr && return this->cateName_ == nullptr && return this->coverURL_ == nullptr && return this->creationTime_ == nullptr
        && return this->customMediaInfo_ == nullptr && return this->description_ == nullptr && return this->downloadSwitch_ == nullptr && return this->duration_ == nullptr && return this->modificationTime_ == nullptr
        && return this->regionId_ == nullptr && return this->restoreExpiration_ == nullptr && return this->restoreStatus_ == nullptr && return this->size_ == nullptr && return this->snapshots_ == nullptr
        && return this->status_ == nullptr && return this->storageClass_ == nullptr && return this->storageLocation_ == nullptr && return this->tags_ == nullptr && return this->templateGroupId_ == nullptr
        && return this->title_ == nullptr && return this->userData_ == nullptr && return this->videoId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetVideoInfoResponseBodyVideo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline GetVideoInfoResponseBodyVideo& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetVideoInfoResponseBodyVideo& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline GetVideoInfoResponseBodyVideo& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline GetVideoInfoResponseBodyVideo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetVideoInfoResponseBodyVideo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // customMediaInfo Field Functions 
    bool hasCustomMediaInfo() const { return this->customMediaInfo_ != nullptr;};
    void deleteCustomMediaInfo() { this->customMediaInfo_ = nullptr;};
    inline string customMediaInfo() const { DARABONBA_PTR_GET_DEFAULT(customMediaInfo_, "") };
    inline GetVideoInfoResponseBodyVideo& setCustomMediaInfo(string customMediaInfo) { DARABONBA_PTR_SET_VALUE(customMediaInfo_, customMediaInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetVideoInfoResponseBodyVideo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadSwitch Field Functions 
    bool hasDownloadSwitch() const { return this->downloadSwitch_ != nullptr;};
    void deleteDownloadSwitch() { this->downloadSwitch_ = nullptr;};
    inline string downloadSwitch() const { DARABONBA_PTR_GET_DEFAULT(downloadSwitch_, "") };
    inline GetVideoInfoResponseBodyVideo& setDownloadSwitch(string downloadSwitch) { DARABONBA_PTR_SET_VALUE(downloadSwitch_, downloadSwitch) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetVideoInfoResponseBodyVideo& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline GetVideoInfoResponseBodyVideo& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVideoInfoResponseBodyVideo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // restoreExpiration Field Functions 
    bool hasRestoreExpiration() const { return this->restoreExpiration_ != nullptr;};
    void deleteRestoreExpiration() { this->restoreExpiration_ = nullptr;};
    inline string restoreExpiration() const { DARABONBA_PTR_GET_DEFAULT(restoreExpiration_, "") };
    inline GetVideoInfoResponseBodyVideo& setRestoreExpiration(string restoreExpiration) { DARABONBA_PTR_SET_VALUE(restoreExpiration_, restoreExpiration) };


    // restoreStatus Field Functions 
    bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
    void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
    inline string restoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
    inline GetVideoInfoResponseBodyVideo& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetVideoInfoResponseBodyVideo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const Models::GetVideoInfoResponseBodyVideoSnapshots & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, Models::GetVideoInfoResponseBodyVideoSnapshots) };
    inline Models::GetVideoInfoResponseBodyVideoSnapshots snapshots() { DARABONBA_PTR_GET(snapshots_, Models::GetVideoInfoResponseBodyVideoSnapshots) };
    inline GetVideoInfoResponseBodyVideo& setSnapshots(const Models::GetVideoInfoResponseBodyVideoSnapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline GetVideoInfoResponseBodyVideo& setSnapshots(Models::GetVideoInfoResponseBodyVideoSnapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVideoInfoResponseBodyVideo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline GetVideoInfoResponseBodyVideo& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline GetVideoInfoResponseBodyVideo& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetVideoInfoResponseBodyVideo& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // templateGroupId Field Functions 
    bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
    void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
    inline string templateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
    inline GetVideoInfoResponseBodyVideo& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetVideoInfoResponseBodyVideo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetVideoInfoResponseBodyVideo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetVideoInfoResponseBodyVideo& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The final review result of the audio or video file. Valid values:
    // 
    // *   **Normal**: pass
    // *   **Blocked**: blocked
    std::shared_ptr<string> auditStatus_ = nullptr;
    // The category ID of the media file.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The name of the category.
    std::shared_ptr<string> cateName_ = nullptr;
    // The thumbnail URL of the media file.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the media file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The custom information about the media file.\\n\\n> This parameter has been deprecated. This parameter is no longer returned after you call the operation.
    std::shared_ptr<string> customMediaInfo_ = nullptr;
    // The description of the media file.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the offline download feature is enabled. If you enable the offline download feature, users can download and play videos by using the ApsaraVideo Player on a local PC. For more information, see [Configure download settings](https://help.aliyun.com/document_detail/86107.html). Valid values:
    // 
    // *   **on**: the offline download feature is enabled.
    // *   **off**: the offline download feature is not enabled.
    std::shared_ptr<string> downloadSwitch_ = nullptr;
    // The duration of the media file. Unit: seconds.
    std::shared_ptr<float> duration_ = nullptr;
    // The time when the audio or video file was last updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The region where the media file is stored.
    std::shared_ptr<string> regionId_ = nullptr;
    // The period of time in which the object remains in the restored state.
    std::shared_ptr<string> restoreExpiration_ = nullptr;
    // The restoration status of the audio or video file. Valid values:
    // 
    // *   **Processing**
    // *   **Success**
    // *   **Failed**
    std::shared_ptr<string> restoreStatus_ = nullptr;
    // The size of the source file. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The video snapshot URLs.
    std::shared_ptr<Models::GetVideoInfoResponseBodyVideoSnapshots> snapshots_ = nullptr;
    // The status of the media file. For more information about the operations that you can perform on files in different statuses and usage limits, see [Status: the status of a video](~~52839#title-vqg-8cz-7p8~~). Valid values:
    // 
    // *   **Uploading**
    // *   **UploadFail**
    // *   **UploadSucc**
    // *   **Transcoding**
    // *   **TranscodeFail**
    // *   **Blocked**
    // *   **Normal**
    std::shared_ptr<string> status_ = nullptr;
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
    std::shared_ptr<string> storageClass_ = nullptr;
    // The storage address of the media file.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The tags of the audio or video file. Multiple tags are separated by commas (,).
    std::shared_ptr<string> tags_ = nullptr;
    // The ID of the transcoding template group.
    std::shared_ptr<string> templateGroupId_ = nullptr;
    // The title of the media file.
    std::shared_ptr<string> title_ = nullptr;
    // Custom settings. This is a JSON string that supports settings such as message callbacks and upload acceleration. For more information, please refer to [UserData](https://help.aliyun.com/document_detail/86952.html).
    std::shared_ptr<string> userData_ = nullptr;
    // The ID of the media file.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
