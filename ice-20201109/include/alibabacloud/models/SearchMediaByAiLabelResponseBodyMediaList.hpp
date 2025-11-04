// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODYMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODYMEDIALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchMediaByAILabelResponseBodyMediaListAiData.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByAILabelResponseBodyMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByAILabelResponseBodyMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(AiData, aiData_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
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
    friend void from_json(const Darabonba::Json& j, SearchMediaByAILabelResponseBodyMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(AiData, aiData_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
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
    SearchMediaByAILabelResponseBodyMediaList() = default ;
    SearchMediaByAILabelResponseBodyMediaList(const SearchMediaByAILabelResponseBodyMediaList &) = default ;
    SearchMediaByAILabelResponseBodyMediaList(SearchMediaByAILabelResponseBodyMediaList &&) = default ;
    SearchMediaByAILabelResponseBodyMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByAILabelResponseBodyMediaList() = default ;
    SearchMediaByAILabelResponseBodyMediaList& operator=(const SearchMediaByAILabelResponseBodyMediaList &) = default ;
    SearchMediaByAILabelResponseBodyMediaList& operator=(SearchMediaByAILabelResponseBodyMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiData_ == nullptr
        && return this->appId_ == nullptr && return this->coverUrl_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->duration_ == nullptr
        && return this->mediaId_ == nullptr && return this->modificationTime_ == nullptr && return this->size_ == nullptr && return this->snapshots_ == nullptr && return this->status_ == nullptr
        && return this->storageLocation_ == nullptr && return this->tags_ == nullptr && return this->title_ == nullptr; };
    // aiData Field Functions 
    bool hasAiData() const { return this->aiData_ != nullptr;};
    void deleteAiData() { this->aiData_ = nullptr;};
    inline const Models::SearchMediaByAILabelResponseBodyMediaListAiData & aiData() const { DARABONBA_PTR_GET_CONST(aiData_, Models::SearchMediaByAILabelResponseBodyMediaListAiData) };
    inline Models::SearchMediaByAILabelResponseBodyMediaListAiData aiData() { DARABONBA_PTR_GET(aiData_, Models::SearchMediaByAILabelResponseBodyMediaListAiData) };
    inline SearchMediaByAILabelResponseBodyMediaList& setAiData(const Models::SearchMediaByAILabelResponseBodyMediaListAiData & aiData) { DARABONBA_PTR_SET_VALUE(aiData_, aiData) };
    inline SearchMediaByAILabelResponseBodyMediaList& setAiData(Models::SearchMediaByAILabelResponseBodyMediaListAiData && aiData) { DARABONBA_PTR_SET_RVALUE(aiData_, aiData) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline SearchMediaByAILabelResponseBodyMediaList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline SearchMediaByAILabelResponseBodyMediaList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<string> & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
    inline vector<string> snapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
    inline SearchMediaByAILabelResponseBodyMediaList& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline SearchMediaByAILabelResponseBodyMediaList& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchMediaByAILabelResponseBodyMediaList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The details of the AI job.
    std::shared_ptr<Models::SearchMediaByAILabelResponseBodyMediaListAiData> aiData_ = nullptr;
    // The ID of the application. Default value: app-1000000.
    std::shared_ptr<string> appId_ = nullptr;
    // The URL of the thumbnail.
    std::shared_ptr<string> coverUrl_ = nullptr;
    // The time when the media asset was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the media asset.
    std::shared_ptr<string> description_ = nullptr;
    // The duration. Unit: seconds.
    std::shared_ptr<float> duration_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The time when the media asset was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The size of the source file. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The array of video snapshot URLs.
    std::shared_ptr<vector<string>> snapshots_ = nullptr;
    // The status of the video.
    // 
    // Valid values:
    // 
    // *   PrepareFail
    // *   UploadFail
    // *   Init
    // *   UploadSucc
    // *   Transcoding
    // *   TranscodeFail
    // *   Deleted
    // *   Normal
    // *   Uploading
    // *   Preparing
    // *   Blocked
    // *   Checking
    std::shared_ptr<string> status_ = nullptr;
    // The storage address.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The tags of the media asset.
    std::shared_ptr<string> tags_ = nullptr;
    // The title of the media asset.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
