// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSMEZZANINEINFO_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSMEZZANINEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoAudioStreamList.hpp>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoVideoStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo(const BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo(BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo &&) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& operator=(const BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& operator=(BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioStreamList_ != nullptr
        && this->bitrate_ != nullptr && this->creationTime_ != nullptr && this->duration_ != nullptr && this->fileName_ != nullptr && this->fileURL_ != nullptr
        && this->fps_ != nullptr && this->height_ != nullptr && this->mediaId_ != nullptr && this->size_ != nullptr && this->status_ != nullptr
        && this->videoStreamList_ != nullptr && this->width_ != nullptr; };
    // audioStreamList Field Functions 
    bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
    void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
    inline const vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoAudioStreamList> & audioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoAudioStreamList>) };
    inline vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoAudioStreamList> audioStreamList() { DARABONBA_PTR_GET(audioStreamList_, vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoAudioStreamList>) };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setAudioStreamList(const vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoAudioStreamList> & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setAudioStreamList(vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoAudioStreamList> && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline const vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoVideoStreamList> & videoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoVideoStreamList>) };
    inline vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoVideoStreamList> videoStreamList() { DARABONBA_PTR_GET(videoStreamList_, vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoVideoStreamList>) };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setVideoStreamList(const vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoVideoStreamList> & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setVideoStreamList(vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoVideoStreamList> && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The information about the audio stream.
    std::shared_ptr<vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoAudioStreamList>> audioStreamList_ = nullptr;
    // The bitrate of the file. Unit: Kbit/s.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The time when the source file was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The duration of the file. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The OSS URL of the source file.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The frame rate of the file.
    std::shared_ptr<string> fps_ = nullptr;
    // The height of the file. Unit: pixels.
    std::shared_ptr<int64_t> height_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The size of the file. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The state of the file. Valid values:
    // 
    // *   **Uploading**: The file is being uploaded. This is the initial status.
    // *   **Normal**: The file is uploaded.
    // *   **UploadFail**: The file failed to be uploaded.
    // *   **Deleted**: The file is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The information about the video streams.
    std::shared_ptr<vector<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfoVideoStreamList>> videoStreamList_ = nullptr;
    // The width of the file. Unit: pixels.
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
