// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSPLAYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSPLAYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(BitDepth, bitDepth_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CodecName, codecName_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_TO_JSON(EncryptMode, encryptMode_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(HDRType, HDRType_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(JobExt, jobExt_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(NarrowBandType, narrowBandType_);
      DARABONBA_PTR_TO_JSON(PlayURL, playURL_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BitDepth, bitDepth_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_FROM_JSON(EncryptMode, encryptMode_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(HDRType, HDRType_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(JobExt, jobExt_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(NarrowBandType, narrowBandType_);
      DARABONBA_PTR_FROM_JSON(PlayURL, playURL_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList(const BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList(BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList &&) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& operator=(const BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& operator=(BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitDepth_ == nullptr
        && return this->bitrate_ == nullptr && return this->codecName_ == nullptr && return this->creationTime_ == nullptr && return this->definition_ == nullptr && return this->duration_ == nullptr
        && return this->encrypt_ == nullptr && return this->encryptMode_ == nullptr && return this->encryptType_ == nullptr && return this->format_ == nullptr && return this->fps_ == nullptr
        && return this->HDRType_ == nullptr && return this->height_ == nullptr && return this->jobExt_ == nullptr && return this->jobId_ == nullptr && return this->jobType_ == nullptr
        && return this->modificationTime_ == nullptr && return this->narrowBandType_ == nullptr && return this->playURL_ == nullptr && return this->size_ == nullptr && return this->specification_ == nullptr
        && return this->status_ == nullptr && return this->streamType_ == nullptr && return this->templateGroupId_ == nullptr && return this->templateId_ == nullptr && return this->watermarkId_ == nullptr
        && return this->width_ == nullptr; };
    // bitDepth Field Functions 
    bool hasBitDepth() const { return this->bitDepth_ != nullptr;};
    void deleteBitDepth() { this->bitDepth_ = nullptr;};
    inline int32_t bitDepth() const { DARABONBA_PTR_GET_DEFAULT(bitDepth_, 0) };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setBitDepth(int32_t bitDepth) { DARABONBA_PTR_SET_VALUE(bitDepth_, bitDepth) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // codecName Field Functions 
    bool hasCodecName() const { return this->codecName_ != nullptr;};
    void deleteCodecName() { this->codecName_ = nullptr;};
    inline string codecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // encrypt Field Functions 
    bool hasEncrypt() const { return this->encrypt_ != nullptr;};
    void deleteEncrypt() { this->encrypt_ = nullptr;};
    inline int64_t encrypt() const { DARABONBA_PTR_GET_DEFAULT(encrypt_, 0L) };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setEncrypt(int64_t encrypt) { DARABONBA_PTR_SET_VALUE(encrypt_, encrypt) };


    // encryptMode Field Functions 
    bool hasEncryptMode() const { return this->encryptMode_ != nullptr;};
    void deleteEncryptMode() { this->encryptMode_ = nullptr;};
    inline string encryptMode() const { DARABONBA_PTR_GET_DEFAULT(encryptMode_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setEncryptMode(string encryptMode) { DARABONBA_PTR_SET_VALUE(encryptMode_, encryptMode) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // HDRType Field Functions 
    bool hasHDRType() const { return this->HDRType_ != nullptr;};
    void deleteHDRType() { this->HDRType_ = nullptr;};
    inline string HDRType() const { DARABONBA_PTR_GET_DEFAULT(HDRType_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setHDRType(string HDRType) { DARABONBA_PTR_SET_VALUE(HDRType_, HDRType) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // jobExt Field Functions 
    bool hasJobExt() const { return this->jobExt_ != nullptr;};
    void deleteJobExt() { this->jobExt_ = nullptr;};
    inline string jobExt() const { DARABONBA_PTR_GET_DEFAULT(jobExt_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setJobExt(string jobExt) { DARABONBA_PTR_SET_VALUE(jobExt_, jobExt) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline int32_t jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, 0) };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setJobType(int32_t jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // narrowBandType Field Functions 
    bool hasNarrowBandType() const { return this->narrowBandType_ != nullptr;};
    void deleteNarrowBandType() { this->narrowBandType_ = nullptr;};
    inline string narrowBandType() const { DARABONBA_PTR_GET_DEFAULT(narrowBandType_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setNarrowBandType(string narrowBandType) { DARABONBA_PTR_SET_VALUE(narrowBandType_, narrowBandType) };


    // playURL Field Functions 
    bool hasPlayURL() const { return this->playURL_ != nullptr;};
    void deletePlayURL() { this->playURL_ = nullptr;};
    inline string playURL() const { DARABONBA_PTR_GET_DEFAULT(playURL_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setPlayURL(string playURL) { DARABONBA_PTR_SET_VALUE(playURL_, playURL) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // templateGroupId Field Functions 
    bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
    void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
    inline string templateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // watermarkId Field Functions 
    bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
    void deleteWatermarkId() { this->watermarkId_ = nullptr;};
    inline string watermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The color depth. This value is an integer.
    std::shared_ptr<int32_t> bitDepth_ = nullptr;
    // The bitrate of the media stream. Unit: Kbit/s.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The short name of the codec.
    std::shared_ptr<string> codecName_ = nullptr;
    // The creation time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The quality of the video stream. Valid values:
    // 
    // *   **FD**: low definition
    // *   **LD**: standard definition
    // *   **SD**: high definition
    // *   **HD**: ultra-high definition
    // *   **OD**: original definition
    // *   **2K**
    // *   **4K**
    // *   **SQ**: standard sound quality
    // *   **HQ**: high sound quality
    // *   **AUTO**: adaptive bitrate
    std::shared_ptr<string> definition_ = nullptr;
    // The duration of the media stream. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
    // Indicates whether the media stream was encrypted. Valid values:
    // 
    // *   **0**: The media stream is not encrypted.
    // *   **1**: The media stream is encrypted.
    std::shared_ptr<int64_t> encrypt_ = nullptr;
    // The encryption type of the media stream. Valid values:
    // 
    // *   **License**: decryption on local devices.
    // 
    // >  If the encryption type is **License**, only ApsaraVideo Player SDK can be used to play videos.
    std::shared_ptr<string> encryptMode_ = nullptr;
    // The encryption type of the media stream. Valid values:
    // 
    // *   **AliyunVoDEncryption**: Alibaba Cloud proprietary cryptography
    // *   **HLSEncryption**: HTTP Live Streaming (HLS) encryption
    // 
    // >  If the encryption type is AliyunVoDEncryption, only ApsaraVideo Player SDK can be used to play videos.
    std::shared_ptr<string> encryptType_ = nullptr;
    // The format of the media stream.
    // 
    // *   If the media file is a video file, the valid values are **mp4** and **m3u8**.
    // *   If the media asset is an audio-only file, the value is **mp3**.
    std::shared_ptr<string> format_ = nullptr;
    // The frame rate of the media stream. Unit: frames per second (FPS).
    std::shared_ptr<string> fps_ = nullptr;
    // The HDR type of the media stream. Valid values:
    // 
    // *   HDR
    // *   HDR10
    // *   HLG
    // *   DolbyVision
    // *   HDRVivid
    // *   SDR+
    std::shared_ptr<string> HDRType_ = nullptr;
    // The height of the media stream. Unit: pixels.
    std::shared_ptr<int64_t> height_ = nullptr;
    // The custom watermark information of the copyright watermark. This parameter is returned if you set `JobType` to `2`.
    std::shared_ptr<string> jobExt_ = nullptr;
    // The job ID for transcoding the media stream. This ID uniquely identifies a media stream.
    std::shared_ptr<string> jobId_ = nullptr;
    // The type of the digital watermark. Valid values:
    // 
    // *   **1**: user-tracing watermark
    // *   **2**: copyright watermark
    std::shared_ptr<int32_t> jobType_ = nullptr;
    // The update time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The transcoding type. Valid values:
    // 
    // *   **0**: regular transcoding
    // *   **1.0**: Narrowband HD™ 1.0 transcoding
    // *   **2.0**: Narrowband HD™ 2.0 transcoding
    std::shared_ptr<string> narrowBandType_ = nullptr;
    // The playback URL of the video stream.
    std::shared_ptr<string> playURL_ = nullptr;
    // The size of the media stream. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The specifications of transcoded audio and video streams. For more information about the valid values, see [Output specifications](~~124671#section-6bv-l0g-opq~~).
    std::shared_ptr<string> specification_ = nullptr;
    // The status of the audio or video stream. Valid values:
    // 
    // *   **Normal**: The latest transcoded stream in each quality and format is in the Normal status.
    // *   **Invisible**: If multiple streams are transcoded in the same quality and format, the latest transcoded stream is in the Normal status and other streams are in the Invisible status.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the media stream. If the media stream is a video stream, the value is **video**. If the media stream is an audio-only stream, the value is **audio**.
    std::shared_ptr<string> streamType_ = nullptr;
    // The ID of the transcoding template group.
    std::shared_ptr<string> templateGroupId_ = nullptr;
    // The ID of the transcoding template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The ID of the watermark that is associated with the media stream.
    std::shared_ptr<string> watermarkId_ = nullptr;
    // The width of the media stream. Unit: pixels.
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
