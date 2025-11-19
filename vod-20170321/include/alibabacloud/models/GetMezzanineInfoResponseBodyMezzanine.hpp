// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEZZANINEINFORESPONSEBODYMEZZANINE_HPP_
#define ALIBABACLOUD_MODELS_GETMEZZANINEINFORESPONSEBODYMEZZANINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMezzanineInfoResponseBodyMezzanineAudioStreamList.hpp>
#include <alibabacloud/models/GetMezzanineInfoResponseBodyMezzanineVideoStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMezzanineInfoResponseBodyMezzanine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMezzanineInfoResponseBodyMezzanine& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileMD5, fileMD5_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
      DARABONBA_PTR_TO_JSON(PreprocessStatus, preprocessStatus_);
      DARABONBA_PTR_TO_JSON(RestoreExpiration, restoreExpiration_);
      DARABONBA_PTR_TO_JSON(RestoreStatus, restoreStatus_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetMezzanineInfoResponseBodyMezzanine& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileMD5, fileMD5_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
      DARABONBA_PTR_FROM_JSON(PreprocessStatus, preprocessStatus_);
      DARABONBA_PTR_FROM_JSON(RestoreExpiration, restoreExpiration_);
      DARABONBA_PTR_FROM_JSON(RestoreStatus, restoreStatus_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetMezzanineInfoResponseBodyMezzanine() = default ;
    GetMezzanineInfoResponseBodyMezzanine(const GetMezzanineInfoResponseBodyMezzanine &) = default ;
    GetMezzanineInfoResponseBodyMezzanine(GetMezzanineInfoResponseBodyMezzanine &&) = default ;
    GetMezzanineInfoResponseBodyMezzanine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMezzanineInfoResponseBodyMezzanine() = default ;
    GetMezzanineInfoResponseBodyMezzanine& operator=(const GetMezzanineInfoResponseBodyMezzanine &) = default ;
    GetMezzanineInfoResponseBodyMezzanine& operator=(GetMezzanineInfoResponseBodyMezzanine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && return this->bitrate_ == nullptr && return this->creationTime_ == nullptr && return this->duration_ == nullptr && return this->fileMD5_ == nullptr && return this->fileName_ == nullptr
        && return this->fileURL_ == nullptr && return this->fps_ == nullptr && return this->height_ == nullptr && return this->outputType_ == nullptr && return this->preprocessStatus_ == nullptr
        && return this->restoreExpiration_ == nullptr && return this->restoreStatus_ == nullptr && return this->size_ == nullptr && return this->status_ == nullptr && return this->storageClass_ == nullptr
        && return this->videoId_ == nullptr && return this->videoStreamList_ == nullptr && return this->width_ == nullptr; };
    // audioStreamList Field Functions 
    bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
    void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
    inline const vector<Models::GetMezzanineInfoResponseBodyMezzanineAudioStreamList> & audioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, vector<Models::GetMezzanineInfoResponseBodyMezzanineAudioStreamList>) };
    inline vector<Models::GetMezzanineInfoResponseBodyMezzanineAudioStreamList> audioStreamList() { DARABONBA_PTR_GET(audioStreamList_, vector<Models::GetMezzanineInfoResponseBodyMezzanineAudioStreamList>) };
    inline GetMezzanineInfoResponseBodyMezzanine& setAudioStreamList(const vector<Models::GetMezzanineInfoResponseBodyMezzanineAudioStreamList> & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
    inline GetMezzanineInfoResponseBodyMezzanine& setAudioStreamList(vector<Models::GetMezzanineInfoResponseBodyMezzanineAudioStreamList> && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileMD5 Field Functions 
    bool hasFileMD5() const { return this->fileMD5_ != nullptr;};
    void deleteFileMD5() { this->fileMD5_ = nullptr;};
    inline string fileMD5() const { DARABONBA_PTR_GET_DEFAULT(fileMD5_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setFileMD5(string fileMD5) { DARABONBA_PTR_SET_VALUE(fileMD5_, fileMD5) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline GetMezzanineInfoResponseBodyMezzanine& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string outputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // preprocessStatus Field Functions 
    bool hasPreprocessStatus() const { return this->preprocessStatus_ != nullptr;};
    void deletePreprocessStatus() { this->preprocessStatus_ = nullptr;};
    inline string preprocessStatus() const { DARABONBA_PTR_GET_DEFAULT(preprocessStatus_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setPreprocessStatus(string preprocessStatus) { DARABONBA_PTR_SET_VALUE(preprocessStatus_, preprocessStatus) };


    // restoreExpiration Field Functions 
    bool hasRestoreExpiration() const { return this->restoreExpiration_ != nullptr;};
    void deleteRestoreExpiration() { this->restoreExpiration_ = nullptr;};
    inline string restoreExpiration() const { DARABONBA_PTR_GET_DEFAULT(restoreExpiration_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setRestoreExpiration(string restoreExpiration) { DARABONBA_PTR_SET_VALUE(restoreExpiration_, restoreExpiration) };


    // restoreStatus Field Functions 
    bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
    void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
    inline string restoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetMezzanineInfoResponseBodyMezzanine& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetMezzanineInfoResponseBodyMezzanine& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline const vector<Models::GetMezzanineInfoResponseBodyMezzanineVideoStreamList> & videoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, vector<Models::GetMezzanineInfoResponseBodyMezzanineVideoStreamList>) };
    inline vector<Models::GetMezzanineInfoResponseBodyMezzanineVideoStreamList> videoStreamList() { DARABONBA_PTR_GET(videoStreamList_, vector<Models::GetMezzanineInfoResponseBodyMezzanineVideoStreamList>) };
    inline GetMezzanineInfoResponseBodyMezzanine& setVideoStreamList(const vector<Models::GetMezzanineInfoResponseBodyMezzanineVideoStreamList> & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
    inline GetMezzanineInfoResponseBodyMezzanine& setVideoStreamList(vector<Models::GetMezzanineInfoResponseBodyMezzanineVideoStreamList> && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline GetMezzanineInfoResponseBodyMezzanine& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The codec time base.
    std::shared_ptr<vector<Models::GetMezzanineInfoResponseBodyMezzanineAudioStreamList>> audioStreamList_ = nullptr;
    // The bitrate of the file. Unit: Kbit/s.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The time when the file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The duration of the file. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> fileMD5_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The URL of the file.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The frame rate of the file. Unit: frames per second.
    std::shared_ptr<string> fps_ = nullptr;
    // The height of the file. Unit: pixel.
    std::shared_ptr<int64_t> height_ = nullptr;
    // The type of the mezzanine file URL. Valid values:
    // 
    // - **oss**: OSS URL
    // - **cdn** (default): CDN URL
    // 
    // > If you specify an OSS URL for the video stream, the video stream must be in the MP4 format.
    std::shared_ptr<string> outputType_ = nullptr;
    // The preprocess status od the media.
    std::shared_ptr<string> preprocessStatus_ = nullptr;
    // The period of time in which the object remains in the restored state.
    std::shared_ptr<string> restoreExpiration_ = nullptr;
    // The restoration status of the audio or video file. Valid values:
    // 
    // *   **Processing**
    // *   **Success**
    // *   **Failed**
    std::shared_ptr<string> restoreStatus_ = nullptr;
    // The size of the file. Unit: byte.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The status of the file. Valid values:
    // 
    // *   **Uploading**: The file is being uploaded. This is the initial status.
    // *   **Normal**: The file is uploaded.
    // *   **UploadFail**: The file fails to be uploaded.
    // *   **Deleted**: The file is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The storage class of the audio file. Valid values:
    // 
    // *   **Standard**: All media resources are stored as Standard objects.
    // *   **IA**: All media resources are stored as IA objects.
    // *   **Archive**: All media resources are stored as Archive objects.
    // *   **ColdArchive**: All media resources are stored as Cold Archive objects.
    // *   **SourceIA**: Only the source files are IA objects.
    // *   **SourceArchive**: Only the source files are Archive objects.
    // *   **SourceColdArchive**: Only the source files are Cold Archive objects.
    // *   **Changing**: The storage class of the audio file is being changed.
    // *   **SourceChanging**: The storage class of the source file is being changed.
    std::shared_ptr<string> storageClass_ = nullptr;
    // The ID of the video.
    std::shared_ptr<string> videoId_ = nullptr;
    // The HDR type of the video stream.
    std::shared_ptr<vector<Models::GetMezzanineInfoResponseBodyMezzanineVideoStreamList>> videoStreamList_ = nullptr;
    // The width of the file. Unit: pixel.
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
