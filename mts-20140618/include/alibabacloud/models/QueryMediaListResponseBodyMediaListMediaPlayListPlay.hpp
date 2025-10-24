// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAPLAYLISTPLAY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAPLAYLISTPLAY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaPlayListPlayFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaPlayListPlay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaPlayListPlay& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowName, mediaWorkflowName_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaPlayListPlay& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowName, mediaWorkflowName_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    QueryMediaListResponseBodyMediaListMediaPlayListPlay() = default ;
    QueryMediaListResponseBodyMediaListMediaPlayListPlay(const QueryMediaListResponseBodyMediaListMediaPlayListPlay &) = default ;
    QueryMediaListResponseBodyMediaListMediaPlayListPlay(QueryMediaListResponseBodyMediaListMediaPlayListPlay &&) = default ;
    QueryMediaListResponseBodyMediaListMediaPlayListPlay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaPlayListPlay() = default ;
    QueryMediaListResponseBodyMediaListMediaPlayListPlay& operator=(const QueryMediaListResponseBodyMediaListMediaPlayListPlay &) = default ;
    QueryMediaListResponseBodyMediaListMediaPlayListPlay& operator=(QueryMediaListResponseBodyMediaListMediaPlayListPlay &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityName_ == nullptr
        && return this->bitrate_ == nullptr && return this->duration_ == nullptr && return this->encryption_ == nullptr && return this->file_ == nullptr && return this->format_ == nullptr
        && return this->fps_ == nullptr && return this->height_ == nullptr && return this->mediaWorkflowId_ == nullptr && return this->mediaWorkflowName_ == nullptr && return this->size_ == nullptr
        && return this->width_ == nullptr; };
    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string activityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline string encryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const Models::QueryMediaListResponseBodyMediaListMediaPlayListPlayFile & file() const { DARABONBA_PTR_GET_CONST(file_, Models::QueryMediaListResponseBodyMediaListMediaPlayListPlayFile) };
    inline Models::QueryMediaListResponseBodyMediaListMediaPlayListPlayFile file() { DARABONBA_PTR_GET(file_, Models::QueryMediaListResponseBodyMediaListMediaPlayListPlayFile) };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setFile(const Models::QueryMediaListResponseBodyMediaListMediaPlayListPlayFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setFile(Models::QueryMediaListResponseBodyMediaListMediaPlayListPlayFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // mediaWorkflowId Field Functions 
    bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
    void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
    inline string mediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


    // mediaWorkflowName Field Functions 
    bool hasMediaWorkflowName() const { return this->mediaWorkflowName_ != nullptr;};
    void deleteMediaWorkflowName() { this->mediaWorkflowName_ = nullptr;};
    inline string mediaWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowName_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setMediaWorkflowName(string mediaWorkflowName) { DARABONBA_PTR_SET_VALUE(mediaWorkflowName_, mediaWorkflowName) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline QueryMediaListResponseBodyMediaListMediaPlayListPlay& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The name of the workflow activity.
    std::shared_ptr<string> activityName_ = nullptr;
    // The bitrate of the media file.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The duration of the media file.
    std::shared_ptr<string> duration_ = nullptr;
    // Indicates whether the media file is encrypted. Valid values:
    // 
    // *   **0**: The media file is not encrypted.
    // *   **1**: The media file is encrypted.
    std::shared_ptr<string> encryption_ = nullptr;
    // The playback file.
    std::shared_ptr<Models::QueryMediaListResponseBodyMediaListMediaPlayListPlayFile> file_ = nullptr;
    // The encoding format of the media file. Valid values: mov, mp4, m4a, 3gp, 3g2, and mj2.
    std::shared_ptr<string> format_ = nullptr;
    // The frame rate of the media file.
    std::shared_ptr<string> fps_ = nullptr;
    // The height.
    std::shared_ptr<string> height_ = nullptr;
    // The ID of the workflow that generates the playback file.
    std::shared_ptr<string> mediaWorkflowId_ = nullptr;
    // The name of the workflow that generates the playback file.
    std::shared_ptr<string> mediaWorkflowName_ = nullptr;
    // The size of the media file.
    std::shared_ptr<string> size_ = nullptr;
    // The width of the media file.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
