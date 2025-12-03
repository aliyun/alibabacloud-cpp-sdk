// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAUDIO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAUDIO_HPP_
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
  class SearchMediaResponseBodyMediaListAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaListAudio& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaListAudio& obj) { 
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
    SearchMediaResponseBodyMediaListAudio() = default ;
    SearchMediaResponseBodyMediaListAudio(const SearchMediaResponseBodyMediaListAudio &) = default ;
    SearchMediaResponseBodyMediaListAudio(SearchMediaResponseBodyMediaListAudio &&) = default ;
    SearchMediaResponseBodyMediaListAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaListAudio() = default ;
    SearchMediaResponseBodyMediaListAudio& operator=(const SearchMediaResponseBodyMediaListAudio &) = default ;
    SearchMediaResponseBodyMediaListAudio& operator=(SearchMediaResponseBodyMediaListAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->audioId_ == nullptr && return this->cateId_ == nullptr && return this->cateName_ == nullptr && return this->coverURL_ == nullptr && return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->downloadSwitch_ == nullptr && return this->duration_ == nullptr && return this->mediaSource_ == nullptr && return this->modificationTime_ == nullptr
        && return this->preprocessStatus_ == nullptr && return this->referenceId_ == nullptr && return this->restoreExpiration_ == nullptr && return this->restoreStatus_ == nullptr && return this->size_ == nullptr
        && return this->snapshots_ == nullptr && return this->spriteSnapshots_ == nullptr && return this->status_ == nullptr && return this->storageClass_ == nullptr && return this->storageLocation_ == nullptr
        && return this->tags_ == nullptr && return this->title_ == nullptr && return this->transcodeMode_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // audioId Field Functions 
    bool hasAudioId() const { return this->audioId_ != nullptr;};
    void deleteAudioId() { this->audioId_ = nullptr;};
    inline string audioId() const { DARABONBA_PTR_GET_DEFAULT(audioId_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setAudioId(string audioId) { DARABONBA_PTR_SET_VALUE(audioId_, audioId) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline SearchMediaResponseBodyMediaListAudio& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadSwitch Field Functions 
    bool hasDownloadSwitch() const { return this->downloadSwitch_ != nullptr;};
    void deleteDownloadSwitch() { this->downloadSwitch_ = nullptr;};
    inline string downloadSwitch() const { DARABONBA_PTR_GET_DEFAULT(downloadSwitch_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setDownloadSwitch(string downloadSwitch) { DARABONBA_PTR_SET_VALUE(downloadSwitch_, downloadSwitch) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline SearchMediaResponseBodyMediaListAudio& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // mediaSource Field Functions 
    bool hasMediaSource() const { return this->mediaSource_ != nullptr;};
    void deleteMediaSource() { this->mediaSource_ = nullptr;};
    inline string mediaSource() const { DARABONBA_PTR_GET_DEFAULT(mediaSource_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setMediaSource(string mediaSource) { DARABONBA_PTR_SET_VALUE(mediaSource_, mediaSource) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // preprocessStatus Field Functions 
    bool hasPreprocessStatus() const { return this->preprocessStatus_ != nullptr;};
    void deletePreprocessStatus() { this->preprocessStatus_ = nullptr;};
    inline string preprocessStatus() const { DARABONBA_PTR_GET_DEFAULT(preprocessStatus_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setPreprocessStatus(string preprocessStatus) { DARABONBA_PTR_SET_VALUE(preprocessStatus_, preprocessStatus) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // restoreExpiration Field Functions 
    bool hasRestoreExpiration() const { return this->restoreExpiration_ != nullptr;};
    void deleteRestoreExpiration() { this->restoreExpiration_ = nullptr;};
    inline string restoreExpiration() const { DARABONBA_PTR_GET_DEFAULT(restoreExpiration_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setRestoreExpiration(string restoreExpiration) { DARABONBA_PTR_SET_VALUE(restoreExpiration_, restoreExpiration) };


    // restoreStatus Field Functions 
    bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
    void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
    inline string restoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline SearchMediaResponseBodyMediaListAudio& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<string> & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
    inline vector<string> snapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
    inline SearchMediaResponseBodyMediaListAudio& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline SearchMediaResponseBodyMediaListAudio& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // spriteSnapshots Field Functions 
    bool hasSpriteSnapshots() const { return this->spriteSnapshots_ != nullptr;};
    void deleteSpriteSnapshots() { this->spriteSnapshots_ = nullptr;};
    inline const vector<string> & spriteSnapshots() const { DARABONBA_PTR_GET_CONST(spriteSnapshots_, vector<string>) };
    inline vector<string> spriteSnapshots() { DARABONBA_PTR_GET(spriteSnapshots_, vector<string>) };
    inline SearchMediaResponseBodyMediaListAudio& setSpriteSnapshots(const vector<string> & spriteSnapshots) { DARABONBA_PTR_SET_VALUE(spriteSnapshots_, spriteSnapshots) };
    inline SearchMediaResponseBodyMediaListAudio& setSpriteSnapshots(vector<string> && spriteSnapshots) { DARABONBA_PTR_SET_RVALUE(spriteSnapshots_, spriteSnapshots) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // transcodeMode Field Functions 
    bool hasTranscodeMode() const { return this->transcodeMode_ != nullptr;};
    void deleteTranscodeMode() { this->transcodeMode_ = nullptr;};
    inline string transcodeMode() const { DARABONBA_PTR_GET_DEFAULT(transcodeMode_, "") };
    inline SearchMediaResponseBodyMediaListAudio& setTranscodeMode(string transcodeMode) { DARABONBA_PTR_SET_VALUE(transcodeMode_, transcodeMode) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the audio file.
    std::shared_ptr<string> audioId_ = nullptr;
    // The ID of the category.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The name of the category.
    std::shared_ptr<string> cateName_ = nullptr;
    // The URL of the thumbnail.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the audio stream was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the audio file.
    std::shared_ptr<string> description_ = nullptr;
    // The download switch. The audio file can be downloaded offline only when the download switch is turned on. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> downloadSwitch_ = nullptr;
    // The duration of the audio file.
    std::shared_ptr<float> duration_ = nullptr;
    // The source of the audio file. Valid values:
    // 
    // *   **general**: The audio file is uploaded by using ApsaraVideo VOD.
    // *   **short_video**: The audio file is uploaded to ApsaraVideo VOD by using the short video SDK. For more information, see [Introduction](https://help.aliyun.com/document_detail/53407.html).
    // *   **editing**: The audio file is uploaded to ApsaraVideo VOD after online editing and production. For more information, see [ProduceEditingProjectVideo](https://help.aliyun.com/document_detail/68536.html).
    // *   **live**: The audio file is recorded and uploaded as a file to ApsaraVideo VOD.
    std::shared_ptr<string> mediaSource_ = nullptr;
    // The time when the audio file was updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The preprocessing status. Only preprocessed videos can be used for live streaming in the production studio. Valid values:
    // 
    // *   **UnPreprocess**
    // *   **Preprocessing**
    // *   **PreprocessSucceed**
    // *   **PreprocessFailed**
    std::shared_ptr<string> preprocessStatus_ = nullptr;
    std::shared_ptr<string> referenceId_ = nullptr;
    // The period of time in which the audio file remains in the restored state.
    std::shared_ptr<string> restoreExpiration_ = nullptr;
    // The restoration status of the audio file. Valid values:
    // 
    // *   **Processing**
    // *   **Success**
    // *   **Failed**
    std::shared_ptr<string> restoreStatus_ = nullptr;
    // The size of the audio file.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The automatic snapshots.
    std::shared_ptr<vector<string>> snapshots_ = nullptr;
    // The sprite snapshots.
    std::shared_ptr<vector<string>> spriteSnapshots_ = nullptr;
    // The status of the audio file. Valid values:
    // 
    // *   **Uploading**
    // *   **Normal**
    // *   **UploadFail**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
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
    std::shared_ptr<string> storageClass_ = nullptr;
    // The region in which the audio is stored.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The tags of the audio file.
    std::shared_ptr<string> tags_ = nullptr;
    // The title of the audio file
    std::shared_ptr<string> title_ = nullptr;
    // The transcoding mode. Valid values:
    // 
    // *   **FastTranscode**: The audio file is immediately transcoded after it is uploaded. You cannot play the file before it is transcoded.
    // *   **NoTranscode**: The audio file can be played without being transcoded. You can immediately play the file after it is uploaded.
    // *   **AsyncTranscode**: The audio file can be immediately played and asynchronously transcoded after it is uploaded.
    std::shared_ptr<string> transcodeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
