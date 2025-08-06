// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODYLIVERECORDVIDEOLISTLIVERECORDVIDEOVIDEO_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODYLIVERECORDVIDEOLISTLIVERECORDVIDEOVIDEO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideoSnapshots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo() = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo(const ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo &) = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo(ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo &&) = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo() = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& operator=(const ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo &) = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& operator=(ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->cateName_ != nullptr && this->coverURL_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->duration_ != nullptr
        && this->modifyTime_ != nullptr && this->size_ != nullptr && this->snapshots_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->templateGroupId_ != nullptr && this->title_ != nullptr && this->videoId_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int32_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setCateId(int32_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideoSnapshots & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideoSnapshots) };
    inline Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideoSnapshots snapshots() { DARABONBA_PTR_GET(snapshots_, Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideoSnapshots) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setSnapshots(const Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideoSnapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setSnapshots(Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideoSnapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // templateGroupId Field Functions 
    bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
    void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
    inline string templateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The ID of the video category.
    std::shared_ptr<int32_t> cateId_ = nullptr;
    // The category of the video.
    std::shared_ptr<string> cateName_ = nullptr;
    // The URL of the video thumbnail.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the audio or video file was created. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the video file.
    std::shared_ptr<string> description_ = nullptr;
    // The duration of the video file. Unit: seconds.
    std::shared_ptr<float> duration_ = nullptr;
    // The time when the video was updated. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The size of the source video file. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The array of video snapshot URLs.
    std::shared_ptr<Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideoSnapshots> snapshots_ = nullptr;
    // The status of the video. Valid values:
    // 
    // *   **Uploading**
    // *   **UploadFail**
    // *   **UploadSuccess**
    // *   **Transcoding**
    // *   **TranscodeFail**
    // *   **Blocked**
    // *   **Normal**: The video is normal.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the video. Multiple tags are separated with commas (,).
    std::shared_ptr<string> tags_ = nullptr;
    // The ID of the transcoding template group.
    std::shared_ptr<string> templateGroupId_ = nullptr;
    // The title of the video.
    std::shared_ptr<string> title_ = nullptr;
    // The ID of the video.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
