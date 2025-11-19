// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODETASKTRANSCODEJOBINFOLISTOUTPUTFILE_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODETASKTRANSCODEJOBINFOLISTOUTPUTFILE_HPP_
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
  class GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(Filesize, filesize_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(OutputFileUrl, outputFileUrl_);
      DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
      DARABONBA_PTR_TO_JSON(WatermarkIdList, watermarkIdList_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(Filesize, filesize_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(OutputFileUrl, outputFileUrl_);
      DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
      DARABONBA_PTR_FROM_JSON(WatermarkIdList, watermarkIdList_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile() = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile(const GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile &) = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile(GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile &&) = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile() = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& operator=(const GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile &) = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& operator=(GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && return this->bitrate_ == nullptr && return this->duration_ == nullptr && return this->encryption_ == nullptr && return this->filesize_ == nullptr && return this->format_ == nullptr
        && return this->fps_ == nullptr && return this->height_ == nullptr && return this->outputFileUrl_ == nullptr && return this->subtitleStreamList_ == nullptr && return this->videoStreamList_ == nullptr
        && return this->watermarkIdList_ == nullptr && return this->width_ == nullptr; };
    // audioStreamList Field Functions 
    bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
    void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
    inline string audioStreamList() const { DARABONBA_PTR_GET_DEFAULT(audioStreamList_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setAudioStreamList(string audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline string encryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


    // filesize Field Functions 
    bool hasFilesize() const { return this->filesize_ != nullptr;};
    void deleteFilesize() { this->filesize_ = nullptr;};
    inline int64_t filesize() const { DARABONBA_PTR_GET_DEFAULT(filesize_, 0L) };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setFilesize(int64_t filesize) { DARABONBA_PTR_SET_VALUE(filesize_, filesize) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // outputFileUrl Field Functions 
    bool hasOutputFileUrl() const { return this->outputFileUrl_ != nullptr;};
    void deleteOutputFileUrl() { this->outputFileUrl_ = nullptr;};
    inline string outputFileUrl() const { DARABONBA_PTR_GET_DEFAULT(outputFileUrl_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setOutputFileUrl(string outputFileUrl) { DARABONBA_PTR_SET_VALUE(outputFileUrl_, outputFileUrl) };


    // subtitleStreamList Field Functions 
    bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
    void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
    inline string subtitleStreamList() const { DARABONBA_PTR_GET_DEFAULT(subtitleStreamList_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setSubtitleStreamList(string subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline string videoStreamList() const { DARABONBA_PTR_GET_DEFAULT(videoStreamList_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setVideoStreamList(string videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };


    // watermarkIdList Field Functions 
    bool hasWatermarkIdList() const { return this->watermarkIdList_ != nullptr;};
    void deleteWatermarkIdList() { this->watermarkIdList_ = nullptr;};
    inline const vector<string> & watermarkIdList() const { DARABONBA_PTR_GET_CONST(watermarkIdList_, vector<string>) };
    inline vector<string> watermarkIdList() { DARABONBA_PTR_GET(watermarkIdList_, vector<string>) };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setWatermarkIdList(const vector<string> & watermarkIdList) { DARABONBA_PTR_SET_VALUE(watermarkIdList_, watermarkIdList) };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setWatermarkIdList(vector<string> && watermarkIdList) { DARABONBA_PTR_SET_RVALUE(watermarkIdList_, watermarkIdList) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The audio streams.
    std::shared_ptr<string> audioStreamList_ = nullptr;
    // The average bitrate of the output file. Unit: Kbit/s.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The length of the output file. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
    // The encryption method of the output file. Valid values:
    // 
    // *   **AliyunVoDEncryption**: Alibaba Cloud proprietary cryptography
    // *   **HLSEncryption**: HTTP Live Streaming (HLS) encryption
    std::shared_ptr<string> encryption_ = nullptr;
    // The size of the output file. Unit: byte.
    std::shared_ptr<int64_t> filesize_ = nullptr;
    // The container format of the output file.
    std::shared_ptr<string> format_ = nullptr;
    // The frame rate of the output file. Unit: frames per second.
    std::shared_ptr<string> fps_ = nullptr;
    // The height of the output video. Unit: pixels.
    std::shared_ptr<string> height_ = nullptr;
    // The OSS URL of the output file.
    std::shared_ptr<string> outputFileUrl_ = nullptr;
    // The subtitle streams.
    std::shared_ptr<string> subtitleStreamList_ = nullptr;
    // The video streams.
    std::shared_ptr<string> videoStreamList_ = nullptr;
    // The IDs of the watermarks used by the output file.
    std::shared_ptr<vector<string>> watermarkIdList_ = nullptr;
    // The width of the output video. Unit: pixels.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
