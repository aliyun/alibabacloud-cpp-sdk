// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODEJOBINFOLISTOUTPUTFILE_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODEJOBINFOLISTOUTPUTFILE_HPP_
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
  class GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& obj) { 
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
    GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile() = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile(const GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile &) = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile(GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile &&) = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile() = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& operator=(const GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile &) = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& operator=(GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile &&) = default ;
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
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setAudioStreamList(string audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline string encryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


    // filesize Field Functions 
    bool hasFilesize() const { return this->filesize_ != nullptr;};
    void deleteFilesize() { this->filesize_ = nullptr;};
    inline int64_t filesize() const { DARABONBA_PTR_GET_DEFAULT(filesize_, 0L) };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setFilesize(int64_t filesize) { DARABONBA_PTR_SET_VALUE(filesize_, filesize) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // outputFileUrl Field Functions 
    bool hasOutputFileUrl() const { return this->outputFileUrl_ != nullptr;};
    void deleteOutputFileUrl() { this->outputFileUrl_ = nullptr;};
    inline string outputFileUrl() const { DARABONBA_PTR_GET_DEFAULT(outputFileUrl_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setOutputFileUrl(string outputFileUrl) { DARABONBA_PTR_SET_VALUE(outputFileUrl_, outputFileUrl) };


    // subtitleStreamList Field Functions 
    bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
    void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
    inline string subtitleStreamList() const { DARABONBA_PTR_GET_DEFAULT(subtitleStreamList_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setSubtitleStreamList(string subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline string videoStreamList() const { DARABONBA_PTR_GET_DEFAULT(videoStreamList_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setVideoStreamList(string videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };


    // watermarkIdList Field Functions 
    bool hasWatermarkIdList() const { return this->watermarkIdList_ != nullptr;};
    void deleteWatermarkIdList() { this->watermarkIdList_ = nullptr;};
    inline const vector<string> & watermarkIdList() const { DARABONBA_PTR_GET_CONST(watermarkIdList_, vector<string>) };
    inline vector<string> watermarkIdList() { DARABONBA_PTR_GET(watermarkIdList_, vector<string>) };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setWatermarkIdList(const vector<string> & watermarkIdList) { DARABONBA_PTR_SET_VALUE(watermarkIdList_, watermarkIdList) };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setWatermarkIdList(vector<string> && watermarkIdList) { DARABONBA_PTR_SET_RVALUE(watermarkIdList_, watermarkIdList) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // List of audio streams.
    std::shared_ptr<string> audioStreamList_ = nullptr;
    // Average bitrate of the transcoded output file. Unit: Kbps.
    std::shared_ptr<string> bitrate_ = nullptr;
    // Duration of the transcoded output file. Unit: seconds (s).
    std::shared_ptr<string> duration_ = nullptr;
    // Encryption configuration used for the transcoded output file. Values:
    // 
    // - AliyunVoDEncryption: Alibaba Cloud Video Encryption (private encryption).
    // - HLSEncryption: HLS standard encryption.
    std::shared_ptr<string> encryption_ = nullptr;
    // Size of the transcoded output file. Unit: bytes (B).
    std::shared_ptr<int64_t> filesize_ = nullptr;
    // Container format of the transcoded output file.
    std::shared_ptr<string> format_ = nullptr;
    // Frame rate of the transcoded output file. Unit: frames per second (fps).
    std::shared_ptr<string> fps_ = nullptr;
    // Height of the video frame in the transcoded output file. Unit: pixels (px).
    std::shared_ptr<string> height_ = nullptr;
    // OSS address of the transcoded output file.
    std::shared_ptr<string> outputFileUrl_ = nullptr;
    // List of subtitle streams.
    std::shared_ptr<string> subtitleStreamList_ = nullptr;
    // List of video streams.
    std::shared_ptr<string> videoStreamList_ = nullptr;
    // List of watermarks used for transcoding.
    std::shared_ptr<vector<string>> watermarkIdList_ = nullptr;
    // Width of the video frame in the transcoded output file. Unit: pixels (px).
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
