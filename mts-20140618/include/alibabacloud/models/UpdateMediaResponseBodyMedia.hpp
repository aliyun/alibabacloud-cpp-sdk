// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIARESPONSEBODYMEDIA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIARESPONSEBODYMEDIA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMediaResponseBodyMediaFile.hpp>
#include <alibabacloud/models/UpdateMediaResponseBodyMediaRunIdList.hpp>
#include <alibabacloud/models/UpdateMediaResponseBodyMediaTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateMediaResponseBodyMedia : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaResponseBodyMedia& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CensorState, censorState_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(PublishState, publishState_);
      DARABONBA_PTR_TO_JSON(RunIdList, runIdList_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaResponseBodyMedia& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CensorState, censorState_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(PublishState, publishState_);
      DARABONBA_PTR_FROM_JSON(RunIdList, runIdList_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    UpdateMediaResponseBodyMedia() = default ;
    UpdateMediaResponseBodyMedia(const UpdateMediaResponseBodyMedia &) = default ;
    UpdateMediaResponseBodyMedia(UpdateMediaResponseBodyMedia &&) = default ;
    UpdateMediaResponseBodyMedia(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaResponseBodyMedia() = default ;
    UpdateMediaResponseBodyMedia& operator=(const UpdateMediaResponseBodyMedia &) = default ;
    UpdateMediaResponseBodyMedia& operator=(UpdateMediaResponseBodyMedia &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->cateId_ == nullptr && return this->censorState_ == nullptr && return this->coverURL_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr
        && return this->duration_ == nullptr && return this->file_ == nullptr && return this->format_ == nullptr && return this->fps_ == nullptr && return this->height_ == nullptr
        && return this->mediaId_ == nullptr && return this->publishState_ == nullptr && return this->runIdList_ == nullptr && return this->size_ == nullptr && return this->tags_ == nullptr
        && return this->title_ == nullptr && return this->width_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline UpdateMediaResponseBodyMedia& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline UpdateMediaResponseBodyMedia& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // censorState Field Functions 
    bool hasCensorState() const { return this->censorState_ != nullptr;};
    void deleteCensorState() { this->censorState_ = nullptr;};
    inline string censorState() const { DARABONBA_PTR_GET_DEFAULT(censorState_, "") };
    inline UpdateMediaResponseBodyMedia& setCensorState(string censorState) { DARABONBA_PTR_SET_VALUE(censorState_, censorState) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline UpdateMediaResponseBodyMedia& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline UpdateMediaResponseBodyMedia& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMediaResponseBodyMedia& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline UpdateMediaResponseBodyMedia& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const Models::UpdateMediaResponseBodyMediaFile & file() const { DARABONBA_PTR_GET_CONST(file_, Models::UpdateMediaResponseBodyMediaFile) };
    inline Models::UpdateMediaResponseBodyMediaFile file() { DARABONBA_PTR_GET(file_, Models::UpdateMediaResponseBodyMediaFile) };
    inline UpdateMediaResponseBodyMedia& setFile(const Models::UpdateMediaResponseBodyMediaFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline UpdateMediaResponseBodyMedia& setFile(Models::UpdateMediaResponseBodyMediaFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline UpdateMediaResponseBodyMedia& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline UpdateMediaResponseBodyMedia& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline UpdateMediaResponseBodyMedia& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline UpdateMediaResponseBodyMedia& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // publishState Field Functions 
    bool hasPublishState() const { return this->publishState_ != nullptr;};
    void deletePublishState() { this->publishState_ = nullptr;};
    inline string publishState() const { DARABONBA_PTR_GET_DEFAULT(publishState_, "") };
    inline UpdateMediaResponseBodyMedia& setPublishState(string publishState) { DARABONBA_PTR_SET_VALUE(publishState_, publishState) };


    // runIdList Field Functions 
    bool hasRunIdList() const { return this->runIdList_ != nullptr;};
    void deleteRunIdList() { this->runIdList_ = nullptr;};
    inline const Models::UpdateMediaResponseBodyMediaRunIdList & runIdList() const { DARABONBA_PTR_GET_CONST(runIdList_, Models::UpdateMediaResponseBodyMediaRunIdList) };
    inline Models::UpdateMediaResponseBodyMediaRunIdList runIdList() { DARABONBA_PTR_GET(runIdList_, Models::UpdateMediaResponseBodyMediaRunIdList) };
    inline UpdateMediaResponseBodyMedia& setRunIdList(const Models::UpdateMediaResponseBodyMediaRunIdList & runIdList) { DARABONBA_PTR_SET_VALUE(runIdList_, runIdList) };
    inline UpdateMediaResponseBodyMedia& setRunIdList(Models::UpdateMediaResponseBodyMediaRunIdList && runIdList) { DARABONBA_PTR_SET_RVALUE(runIdList_, runIdList) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline UpdateMediaResponseBodyMedia& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::UpdateMediaResponseBodyMediaTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::UpdateMediaResponseBodyMediaTags) };
    inline Models::UpdateMediaResponseBodyMediaTags tags() { DARABONBA_PTR_GET(tags_, Models::UpdateMediaResponseBodyMediaTags) };
    inline UpdateMediaResponseBodyMedia& setTags(const Models::UpdateMediaResponseBodyMediaTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateMediaResponseBodyMedia& setTags(Models::UpdateMediaResponseBodyMediaTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateMediaResponseBodyMedia& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline UpdateMediaResponseBodyMedia& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The bitrate of the media file.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The ID of the category to which the media file belongs.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The review state of the media file. Valid values:
    // 
    // *   **Initiated**: The media file is uploaded but not reviewed.
    // *   **Pass**: The media file is uploaded and passes the review.
    std::shared_ptr<string> censorState_ = nullptr;
    // The URL of the thumbnail.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the media file was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the media file.
    std::shared_ptr<string> description_ = nullptr;
    // The duration of the media file.
    std::shared_ptr<string> duration_ = nullptr;
    // The information about the input file.
    std::shared_ptr<Models::UpdateMediaResponseBodyMediaFile> file_ = nullptr;
    // The format of the media file. Valid values: mov, mp4, m4a, 3gp, 3g2, and mj2.
    std::shared_ptr<string> format_ = nullptr;
    // The frame rate of the media file.
    std::shared_ptr<string> fps_ = nullptr;
    // The height of the media file.
    std::shared_ptr<string> height_ = nullptr;
    // The ID of the media file.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The publishing state of the media file. Valid values:
    // 
    // *   **Initiated**: The media file is in the initial state.
    // *   **UnPublish**: The media file has not been published, and the playback permission on the OSS object is Private.
    // *   **Published**: The media file has been published, and the playback permission on the OSS object is Default.
    // *   **Deleted**: The media file is deleted.
    std::shared_ptr<string> publishState_ = nullptr;
    // The IDs of the media workflow execution instances.
    std::shared_ptr<Models::UpdateMediaResponseBodyMediaRunIdList> runIdList_ = nullptr;
    // The size of the media file.
    std::shared_ptr<string> size_ = nullptr;
    // The information about the tags.
    std::shared_ptr<Models::UpdateMediaResponseBodyMediaTags> tags_ = nullptr;
    // The title of the media file.
    std::shared_ptr<string> title_ = nullptr;
    // The width of the media file.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
