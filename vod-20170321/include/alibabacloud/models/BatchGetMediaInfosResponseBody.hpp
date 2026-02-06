// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODY_HPP_
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
  class BatchGetMediaInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_TO_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_TO_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_TO_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_FROM_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_FROM_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchGetMediaInfosResponseBody() = default ;
    BatchGetMediaInfosResponseBody(const BatchGetMediaInfosResponseBody &) = default ;
    BatchGetMediaInfosResponseBody(BatchGetMediaInfosResponseBody &&) = default ;
    BatchGetMediaInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosResponseBody() = default ;
    BatchGetMediaInfosResponseBody& operator=(const BatchGetMediaInfosResponseBody &) = default ;
    BatchGetMediaInfosResponseBody& operator=(BatchGetMediaInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaInfos& obj) { 
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaInfo, mediaInfo_);
        DARABONBA_PTR_TO_JSON(MezzanineInfo, mezzanineInfo_);
        DARABONBA_PTR_TO_JSON(PlayInfoList, playInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, MediaInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaInfo, mediaInfo_);
        DARABONBA_PTR_FROM_JSON(MezzanineInfo, mezzanineInfo_);
        DARABONBA_PTR_FROM_JSON(PlayInfoList, playInfoList_);
      };
      MediaInfos() = default ;
      MediaInfos(const MediaInfos &) = default ;
      MediaInfos(MediaInfos &&) = default ;
      MediaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaInfos() = default ;
      MediaInfos& operator=(const MediaInfos &) = default ;
      MediaInfos& operator=(MediaInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PlayInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PlayInfoList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, PlayInfoList& obj) { 
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
        PlayInfoList() = default ;
        PlayInfoList(const PlayInfoList &) = default ;
        PlayInfoList(PlayInfoList &&) = default ;
        PlayInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PlayInfoList() = default ;
        PlayInfoList& operator=(const PlayInfoList &) = default ;
        PlayInfoList& operator=(PlayInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bitDepth_ == nullptr
        && this->bitrate_ == nullptr && this->codecName_ == nullptr && this->creationTime_ == nullptr && this->definition_ == nullptr && this->duration_ == nullptr
        && this->encrypt_ == nullptr && this->encryptMode_ == nullptr && this->encryptType_ == nullptr && this->format_ == nullptr && this->fps_ == nullptr
        && this->HDRType_ == nullptr && this->height_ == nullptr && this->jobExt_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr
        && this->modificationTime_ == nullptr && this->narrowBandType_ == nullptr && this->playURL_ == nullptr && this->size_ == nullptr && this->specification_ == nullptr
        && this->status_ == nullptr && this->streamType_ == nullptr && this->templateGroupId_ == nullptr && this->templateId_ == nullptr && this->watermarkId_ == nullptr
        && this->width_ == nullptr; };
        // bitDepth Field Functions 
        bool hasBitDepth() const { return this->bitDepth_ != nullptr;};
        void deleteBitDepth() { this->bitDepth_ = nullptr;};
        inline int32_t getBitDepth() const { DARABONBA_PTR_GET_DEFAULT(bitDepth_, 0) };
        inline PlayInfoList& setBitDepth(int32_t bitDepth) { DARABONBA_PTR_SET_VALUE(bitDepth_, bitDepth) };


        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline PlayInfoList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // codecName Field Functions 
        bool hasCodecName() const { return this->codecName_ != nullptr;};
        void deleteCodecName() { this->codecName_ = nullptr;};
        inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
        inline PlayInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline PlayInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // definition Field Functions 
        bool hasDefinition() const { return this->definition_ != nullptr;};
        void deleteDefinition() { this->definition_ = nullptr;};
        inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
        inline PlayInfoList& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline PlayInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // encrypt Field Functions 
        bool hasEncrypt() const { return this->encrypt_ != nullptr;};
        void deleteEncrypt() { this->encrypt_ = nullptr;};
        inline int64_t getEncrypt() const { DARABONBA_PTR_GET_DEFAULT(encrypt_, 0L) };
        inline PlayInfoList& setEncrypt(int64_t encrypt) { DARABONBA_PTR_SET_VALUE(encrypt_, encrypt) };


        // encryptMode Field Functions 
        bool hasEncryptMode() const { return this->encryptMode_ != nullptr;};
        void deleteEncryptMode() { this->encryptMode_ = nullptr;};
        inline string getEncryptMode() const { DARABONBA_PTR_GET_DEFAULT(encryptMode_, "") };
        inline PlayInfoList& setEncryptMode(string encryptMode) { DARABONBA_PTR_SET_VALUE(encryptMode_, encryptMode) };


        // encryptType Field Functions 
        bool hasEncryptType() const { return this->encryptType_ != nullptr;};
        void deleteEncryptType() { this->encryptType_ = nullptr;};
        inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
        inline PlayInfoList& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline PlayInfoList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline PlayInfoList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // HDRType Field Functions 
        bool hasHDRType() const { return this->HDRType_ != nullptr;};
        void deleteHDRType() { this->HDRType_ = nullptr;};
        inline string getHDRType() const { DARABONBA_PTR_GET_DEFAULT(HDRType_, "") };
        inline PlayInfoList& setHDRType(string HDRType) { DARABONBA_PTR_SET_VALUE(HDRType_, HDRType) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
        inline PlayInfoList& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // jobExt Field Functions 
        bool hasJobExt() const { return this->jobExt_ != nullptr;};
        void deleteJobExt() { this->jobExt_ = nullptr;};
        inline string getJobExt() const { DARABONBA_PTR_GET_DEFAULT(jobExt_, "") };
        inline PlayInfoList& setJobExt(string jobExt) { DARABONBA_PTR_SET_VALUE(jobExt_, jobExt) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline PlayInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline int32_t getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, 0) };
        inline PlayInfoList& setJobType(int32_t jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // modificationTime Field Functions 
        bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
        void deleteModificationTime() { this->modificationTime_ = nullptr;};
        inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
        inline PlayInfoList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


        // narrowBandType Field Functions 
        bool hasNarrowBandType() const { return this->narrowBandType_ != nullptr;};
        void deleteNarrowBandType() { this->narrowBandType_ = nullptr;};
        inline string getNarrowBandType() const { DARABONBA_PTR_GET_DEFAULT(narrowBandType_, "") };
        inline PlayInfoList& setNarrowBandType(string narrowBandType) { DARABONBA_PTR_SET_VALUE(narrowBandType_, narrowBandType) };


        // playURL Field Functions 
        bool hasPlayURL() const { return this->playURL_ != nullptr;};
        void deletePlayURL() { this->playURL_ = nullptr;};
        inline string getPlayURL() const { DARABONBA_PTR_GET_DEFAULT(playURL_, "") };
        inline PlayInfoList& setPlayURL(string playURL) { DARABONBA_PTR_SET_VALUE(playURL_, playURL) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline PlayInfoList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // specification Field Functions 
        bool hasSpecification() const { return this->specification_ != nullptr;};
        void deleteSpecification() { this->specification_ = nullptr;};
        inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
        inline PlayInfoList& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PlayInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline string getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
        inline PlayInfoList& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


        // templateGroupId Field Functions 
        bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
        void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
        inline string getTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
        inline PlayInfoList& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline PlayInfoList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // watermarkId Field Functions 
        bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
        void deleteWatermarkId() { this->watermarkId_ = nullptr;};
        inline string getWatermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
        inline PlayInfoList& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
        inline PlayInfoList& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The color depth. This value is an integer.
        shared_ptr<int32_t> bitDepth_ {};
        // The bitrate of the media stream. Unit: Kbit/s.
        shared_ptr<string> bitrate_ {};
        // The short name of the codec.
        shared_ptr<string> codecName_ {};
        // The creation time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
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
        shared_ptr<string> definition_ {};
        // The duration of the media stream. Unit: seconds.
        shared_ptr<string> duration_ {};
        // Indicates whether the media stream was encrypted. Valid values:
        // 
        // *   **0**: The media stream is not encrypted.
        // *   **1**: The media stream is encrypted.
        shared_ptr<int64_t> encrypt_ {};
        // The encryption type of the media stream. Valid values:
        // 
        // *   **License**: decryption on local devices.
        // 
        // >  If the encryption type is **License**, only ApsaraVideo Player SDK can be used to play videos.
        shared_ptr<string> encryptMode_ {};
        // The encryption type of the media stream. Valid values:
        // 
        // *   **AliyunVoDEncryption**: Alibaba Cloud proprietary cryptography
        // *   **HLSEncryption**: HTTP Live Streaming (HLS) encryption
        // 
        // >  If the encryption type is AliyunVoDEncryption, only ApsaraVideo Player SDK can be used to play videos.
        shared_ptr<string> encryptType_ {};
        // The format of the media stream.
        // 
        // *   If the media file is a video file, the valid values are **mp4** and **m3u8**.
        // *   If the media asset is an audio-only file, the value is **mp3**.
        shared_ptr<string> format_ {};
        // The frame rate of the media stream. Unit: frames per second (FPS).
        shared_ptr<string> fps_ {};
        // The HDR type of the media stream. Valid values:
        // 
        // *   HDR
        // *   HDR10
        // *   HLG
        // *   DolbyVision
        // *   HDRVivid
        // *   SDR+
        shared_ptr<string> HDRType_ {};
        // The height of the media stream. Unit: pixels.
        shared_ptr<int64_t> height_ {};
        // The custom watermark information of the copyright watermark. This parameter is returned if you set `JobType` to `2`.
        shared_ptr<string> jobExt_ {};
        // The job ID for transcoding the media stream. This ID uniquely identifies a media stream.
        shared_ptr<string> jobId_ {};
        // The type of the digital watermark. Valid values:
        // 
        // *   **1**: user-tracing watermark
        // *   **2**: copyright watermark
        shared_ptr<int32_t> jobType_ {};
        // The update time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> modificationTime_ {};
        // The transcoding type. Valid values:
        // 
        // *   **0**: regular transcoding
        // *   **1.0**: Narrowband HD™ 1.0 transcoding
        // *   **2.0**: Narrowband HD™ 2.0 transcoding
        shared_ptr<string> narrowBandType_ {};
        // The playback URL of the video stream.
        shared_ptr<string> playURL_ {};
        // The size of the media stream. Unit: bytes.
        shared_ptr<int64_t> size_ {};
        // The specifications of transcoded audio and video streams. For more information about the valid values, see [Output specifications](~~124671#section-6bv-l0g-opq~~).
        shared_ptr<string> specification_ {};
        // The status of the audio or video stream. Valid values:
        // 
        // *   **Normal**: The latest transcoded stream in each quality and format is in the Normal status.
        // *   **Invisible**: If multiple streams are transcoded in the same quality and format, the latest transcoded stream is in the Normal status and other streams are in the Invisible status.
        shared_ptr<string> status_ {};
        // The type of the media stream. If the media stream is a video stream, the value is **video**. If the media stream is an audio-only stream, the value is **audio**.
        shared_ptr<string> streamType_ {};
        // The ID of the transcoding template group.
        shared_ptr<string> templateGroupId_ {};
        // The ID of the transcoding template.
        shared_ptr<string> templateId_ {};
        // The ID of the watermark that is associated with the media stream.
        shared_ptr<string> watermarkId_ {};
        // The width of the media stream. Unit: pixels.
        shared_ptr<int64_t> width_ {};
      };

      class MezzanineInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MezzanineInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
          DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(FileMD5, fileMD5_);
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
        friend void from_json(const Darabonba::Json& j, MezzanineInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
          DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(FileMD5, fileMD5_);
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
        MezzanineInfo() = default ;
        MezzanineInfo(const MezzanineInfo &) = default ;
        MezzanineInfo(MezzanineInfo &&) = default ;
        MezzanineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MezzanineInfo() = default ;
        MezzanineInfo& operator=(const MezzanineInfo &) = default ;
        MezzanineInfo& operator=(MezzanineInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VideoStreamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoStreamList& obj) { 
            DARABONBA_PTR_TO_JSON(AvgFPS, avgFPS_);
            DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_TO_JSON(CodecName, codecName_);
            DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_TO_JSON(Dar, dar_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Fps, fps_);
            DARABONBA_PTR_TO_JSON(HDRType, HDRType_);
            DARABONBA_PTR_TO_JSON(HasBFrames, hasBFrames_);
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(Lang, lang_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
            DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
            DARABONBA_PTR_TO_JSON(Profile, profile_);
            DARABONBA_PTR_TO_JSON(Rotate, rotate_);
            DARABONBA_PTR_TO_JSON(Sar, sar_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Timebase, timebase_);
            DARABONBA_PTR_TO_JSON(Width, width_);
          };
          friend void from_json(const Darabonba::Json& j, VideoStreamList& obj) { 
            DARABONBA_PTR_FROM_JSON(AvgFPS, avgFPS_);
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
            DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_FROM_JSON(Dar, dar_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Fps, fps_);
            DARABONBA_PTR_FROM_JSON(HDRType, HDRType_);
            DARABONBA_PTR_FROM_JSON(HasBFrames, hasBFrames_);
            DARABONBA_PTR_FROM_JSON(Height, height_);
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(Lang, lang_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
            DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
            DARABONBA_PTR_FROM_JSON(Profile, profile_);
            DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
            DARABONBA_PTR_FROM_JSON(Sar, sar_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
            DARABONBA_PTR_FROM_JSON(Width, width_);
          };
          VideoStreamList() = default ;
          VideoStreamList(const VideoStreamList &) = default ;
          VideoStreamList(VideoStreamList &&) = default ;
          VideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoStreamList() = default ;
          VideoStreamList& operator=(const VideoStreamList &) = default ;
          VideoStreamList& operator=(VideoStreamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->avgFPS_ == nullptr
        && this->bitrate_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr
        && this->codecTimeBase_ == nullptr && this->dar_ == nullptr && this->duration_ == nullptr && this->fps_ == nullptr && this->HDRType_ == nullptr
        && this->hasBFrames_ == nullptr && this->height_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr
        && this->numFrames_ == nullptr && this->pixFmt_ == nullptr && this->profile_ == nullptr && this->rotate_ == nullptr && this->sar_ == nullptr
        && this->startTime_ == nullptr && this->timebase_ == nullptr && this->width_ == nullptr; };
          // avgFPS Field Functions 
          bool hasAvgFPS() const { return this->avgFPS_ != nullptr;};
          void deleteAvgFPS() { this->avgFPS_ = nullptr;};
          inline string getAvgFPS() const { DARABONBA_PTR_GET_DEFAULT(avgFPS_, "") };
          inline VideoStreamList& setAvgFPS(string avgFPS) { DARABONBA_PTR_SET_VALUE(avgFPS_, avgFPS) };


          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
          inline VideoStreamList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // codecLongName Field Functions 
          bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
          void deleteCodecLongName() { this->codecLongName_ = nullptr;};
          inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
          inline VideoStreamList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


          // codecName Field Functions 
          bool hasCodecName() const { return this->codecName_ != nullptr;};
          void deleteCodecName() { this->codecName_ = nullptr;};
          inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
          inline VideoStreamList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


          // codecTag Field Functions 
          bool hasCodecTag() const { return this->codecTag_ != nullptr;};
          void deleteCodecTag() { this->codecTag_ = nullptr;};
          inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
          inline VideoStreamList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


          // codecTagString Field Functions 
          bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
          void deleteCodecTagString() { this->codecTagString_ = nullptr;};
          inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
          inline VideoStreamList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


          // codecTimeBase Field Functions 
          bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
          void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
          inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
          inline VideoStreamList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


          // dar Field Functions 
          bool hasDar() const { return this->dar_ != nullptr;};
          void deleteDar() { this->dar_ = nullptr;};
          inline string getDar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
          inline VideoStreamList& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline VideoStreamList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // fps Field Functions 
          bool hasFps() const { return this->fps_ != nullptr;};
          void deleteFps() { this->fps_ = nullptr;};
          inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
          inline VideoStreamList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


          // HDRType Field Functions 
          bool hasHDRType() const { return this->HDRType_ != nullptr;};
          void deleteHDRType() { this->HDRType_ = nullptr;};
          inline string getHDRType() const { DARABONBA_PTR_GET_DEFAULT(HDRType_, "") };
          inline VideoStreamList& setHDRType(string HDRType) { DARABONBA_PTR_SET_VALUE(HDRType_, HDRType) };


          // hasBFrames Field Functions 
          bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
          void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
          inline string getHasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
          inline VideoStreamList& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
          inline VideoStreamList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
          inline VideoStreamList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // lang Field Functions 
          bool hasLang() const { return this->lang_ != nullptr;};
          void deleteLang() { this->lang_ = nullptr;};
          inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
          inline VideoStreamList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline VideoStreamList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // numFrames Field Functions 
          bool hasNumFrames() const { return this->numFrames_ != nullptr;};
          void deleteNumFrames() { this->numFrames_ = nullptr;};
          inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
          inline VideoStreamList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


          // pixFmt Field Functions 
          bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
          void deletePixFmt() { this->pixFmt_ = nullptr;};
          inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
          inline VideoStreamList& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


          // profile Field Functions 
          bool hasProfile() const { return this->profile_ != nullptr;};
          void deleteProfile() { this->profile_ = nullptr;};
          inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
          inline VideoStreamList& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


          // rotate Field Functions 
          bool hasRotate() const { return this->rotate_ != nullptr;};
          void deleteRotate() { this->rotate_ = nullptr;};
          inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
          inline VideoStreamList& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


          // sar Field Functions 
          bool hasSar() const { return this->sar_ != nullptr;};
          void deleteSar() { this->sar_ = nullptr;};
          inline string getSar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
          inline VideoStreamList& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline VideoStreamList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // timebase Field Functions 
          bool hasTimebase() const { return this->timebase_ != nullptr;};
          void deleteTimebase() { this->timebase_ = nullptr;};
          inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
          inline VideoStreamList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
          inline VideoStreamList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        protected:
          // The average frame rate.
          shared_ptr<string> avgFPS_ {};
          // The bitrate of the file. Unit: Kbit/s.
          shared_ptr<string> bitrate_ {};
          // The full name of the encoding format.
          shared_ptr<string> codecLongName_ {};
          // The short name of the encoding format.
          shared_ptr<string> codecName_ {};
          // The tag of the encoding format.
          shared_ptr<string> codecTag_ {};
          // The tag string of the encoding format.
          shared_ptr<string> codecTagString_ {};
          // The time base of the encoder.
          shared_ptr<string> codecTimeBase_ {};
          // The display aspect ratio (DAR).
          shared_ptr<string> dar_ {};
          // The duration.
          shared_ptr<string> duration_ {};
          // The frame rate of the output file.
          shared_ptr<string> fps_ {};
          // The HDR type of the video stream.
          shared_ptr<string> HDRType_ {};
          // Indicates whether the video stream contains bidirectional frames (B-frames).
          shared_ptr<string> hasBFrames_ {};
          // The height of the video stream.
          shared_ptr<string> height_ {};
          // The sequence number of the video stream. The value identifies the position of the video stream in all video streams.
          shared_ptr<string> index_ {};
          // The language.
          shared_ptr<string> lang_ {};
          // The codec level.
          shared_ptr<string> level_ {};
          // The total number of frames.
          shared_ptr<string> numFrames_ {};
          // The pixel format of the video stream.
          shared_ptr<string> pixFmt_ {};
          // The codec profile.
          shared_ptr<string> profile_ {};
          // The rotation angle of the video. Valid values: [0,360).
          shared_ptr<string> rotate_ {};
          // The sample aspect ratio (SAR).
          shared_ptr<string> sar_ {};
          // The start time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
          shared_ptr<string> startTime_ {};
          // The time base.
          shared_ptr<string> timebase_ {};
          // The horizontal resolution of the video.
          shared_ptr<string> width_ {};
        };

        class AudioStreamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioStreamList& obj) { 
            DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(ChannelLayout, channelLayout_);
            DARABONBA_PTR_TO_JSON(Channels, channels_);
            DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_TO_JSON(CodecName, codecName_);
            DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(Lang, lang_);
            DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
            DARABONBA_PTR_TO_JSON(SampleFmt, sampleFmt_);
            DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Timebase, timebase_);
          };
          friend void from_json(const Darabonba::Json& j, AudioStreamList& obj) { 
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(ChannelLayout, channelLayout_);
            DARABONBA_PTR_FROM_JSON(Channels, channels_);
            DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
            DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(Lang, lang_);
            DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
            DARABONBA_PTR_FROM_JSON(SampleFmt, sampleFmt_);
            DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
          };
          AudioStreamList() = default ;
          AudioStreamList(const AudioStreamList &) = default ;
          AudioStreamList(AudioStreamList &&) = default ;
          AudioStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioStreamList() = default ;
          AudioStreamList& operator=(const AudioStreamList &) = default ;
          AudioStreamList& operator=(AudioStreamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channelLayout_ == nullptr && this->channels_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr
        && this->numFrames_ == nullptr && this->sampleFmt_ == nullptr && this->sampleRate_ == nullptr && this->startTime_ == nullptr && this->timebase_ == nullptr; };
          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
          inline AudioStreamList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // channelLayout Field Functions 
          bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
          void deleteChannelLayout() { this->channelLayout_ = nullptr;};
          inline string getChannelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
          inline AudioStreamList& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


          // channels Field Functions 
          bool hasChannels() const { return this->channels_ != nullptr;};
          void deleteChannels() { this->channels_ = nullptr;};
          inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
          inline AudioStreamList& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


          // codecLongName Field Functions 
          bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
          void deleteCodecLongName() { this->codecLongName_ = nullptr;};
          inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
          inline AudioStreamList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


          // codecName Field Functions 
          bool hasCodecName() const { return this->codecName_ != nullptr;};
          void deleteCodecName() { this->codecName_ = nullptr;};
          inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
          inline AudioStreamList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


          // codecTag Field Functions 
          bool hasCodecTag() const { return this->codecTag_ != nullptr;};
          void deleteCodecTag() { this->codecTag_ = nullptr;};
          inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
          inline AudioStreamList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


          // codecTagString Field Functions 
          bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
          void deleteCodecTagString() { this->codecTagString_ = nullptr;};
          inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
          inline AudioStreamList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


          // codecTimeBase Field Functions 
          bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
          void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
          inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
          inline AudioStreamList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline AudioStreamList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
          inline AudioStreamList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // lang Field Functions 
          bool hasLang() const { return this->lang_ != nullptr;};
          void deleteLang() { this->lang_ = nullptr;};
          inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
          inline AudioStreamList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


          // numFrames Field Functions 
          bool hasNumFrames() const { return this->numFrames_ != nullptr;};
          void deleteNumFrames() { this->numFrames_ = nullptr;};
          inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
          inline AudioStreamList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


          // sampleFmt Field Functions 
          bool hasSampleFmt() const { return this->sampleFmt_ != nullptr;};
          void deleteSampleFmt() { this->sampleFmt_ = nullptr;};
          inline string getSampleFmt() const { DARABONBA_PTR_GET_DEFAULT(sampleFmt_, "") };
          inline AudioStreamList& setSampleFmt(string sampleFmt) { DARABONBA_PTR_SET_VALUE(sampleFmt_, sampleFmt) };


          // sampleRate Field Functions 
          bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
          void deleteSampleRate() { this->sampleRate_ = nullptr;};
          inline string getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, "") };
          inline AudioStreamList& setSampleRate(string sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline AudioStreamList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // timebase Field Functions 
          bool hasTimebase() const { return this->timebase_ != nullptr;};
          void deleteTimebase() { this->timebase_ = nullptr;};
          inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
          inline AudioStreamList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


        protected:
          // The bitrate.
          shared_ptr<string> bitrate_ {};
          // The output layout of the audio channels. Valid values:
          // 
          // *   **mono**
          // *   **stereo**
          shared_ptr<string> channelLayout_ {};
          // The number of sound tracks.
          shared_ptr<string> channels_ {};
          // The full name of the encoding format.
          shared_ptr<string> codecLongName_ {};
          // The short name of the encoding format.
          shared_ptr<string> codecName_ {};
          // The tag of the encoding format.
          shared_ptr<string> codecTag_ {};
          // The tag string of the encoding format.
          shared_ptr<string> codecTagString_ {};
          // The time base of the encoder.
          shared_ptr<string> codecTimeBase_ {};
          // The duration.
          shared_ptr<string> duration_ {};
          // The sequence number of the audio stream. The value indicates the position of the audio stream in all audio streams.
          shared_ptr<string> index_ {};
          // The language.
          shared_ptr<string> lang_ {};
          // The total number of frames.
          shared_ptr<string> numFrames_ {};
          // The sampling format.
          shared_ptr<string> sampleFmt_ {};
          // The sampling rate.
          shared_ptr<string> sampleRate_ {};
          // The start time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
          shared_ptr<string> startTime_ {};
          // The time base.
          shared_ptr<string> timebase_ {};
        };

        virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && this->bitrate_ == nullptr && this->creationTime_ == nullptr && this->duration_ == nullptr && this->fileMD5_ == nullptr && this->fileName_ == nullptr
        && this->fileURL_ == nullptr && this->fps_ == nullptr && this->height_ == nullptr && this->mediaId_ == nullptr && this->size_ == nullptr
        && this->status_ == nullptr && this->videoStreamList_ == nullptr && this->width_ == nullptr; };
        // audioStreamList Field Functions 
        bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
        void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
        inline const vector<MezzanineInfo::AudioStreamList> & getAudioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, vector<MezzanineInfo::AudioStreamList>) };
        inline vector<MezzanineInfo::AudioStreamList> getAudioStreamList() { DARABONBA_PTR_GET(audioStreamList_, vector<MezzanineInfo::AudioStreamList>) };
        inline MezzanineInfo& setAudioStreamList(const vector<MezzanineInfo::AudioStreamList> & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
        inline MezzanineInfo& setAudioStreamList(vector<MezzanineInfo::AudioStreamList> && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline MezzanineInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline MezzanineInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline MezzanineInfo& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fileMD5 Field Functions 
        bool hasFileMD5() const { return this->fileMD5_ != nullptr;};
        void deleteFileMD5() { this->fileMD5_ = nullptr;};
        inline string getFileMD5() const { DARABONBA_PTR_GET_DEFAULT(fileMD5_, "") };
        inline MezzanineInfo& setFileMD5(string fileMD5) { DARABONBA_PTR_SET_VALUE(fileMD5_, fileMD5) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline MezzanineInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileURL Field Functions 
        bool hasFileURL() const { return this->fileURL_ != nullptr;};
        void deleteFileURL() { this->fileURL_ = nullptr;};
        inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
        inline MezzanineInfo& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline MezzanineInfo& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
        inline MezzanineInfo& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline MezzanineInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline MezzanineInfo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MezzanineInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // videoStreamList Field Functions 
        bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
        void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
        inline const vector<MezzanineInfo::VideoStreamList> & getVideoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, vector<MezzanineInfo::VideoStreamList>) };
        inline vector<MezzanineInfo::VideoStreamList> getVideoStreamList() { DARABONBA_PTR_GET(videoStreamList_, vector<MezzanineInfo::VideoStreamList>) };
        inline MezzanineInfo& setVideoStreamList(const vector<MezzanineInfo::VideoStreamList> & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
        inline MezzanineInfo& setVideoStreamList(vector<MezzanineInfo::VideoStreamList> && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
        inline MezzanineInfo& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The information about the audio stream.
        shared_ptr<vector<MezzanineInfo::AudioStreamList>> audioStreamList_ {};
        // The bitrate of the file. Unit: Kbit/s.
        shared_ptr<string> bitrate_ {};
        // The time when the source file was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The duration of the file. Unit: seconds.
        shared_ptr<string> duration_ {};
        shared_ptr<string> fileMD5_ {};
        // The name of the file.
        shared_ptr<string> fileName_ {};
        // The OSS URL of the source file.
        shared_ptr<string> fileURL_ {};
        // The frame rate of the file.
        shared_ptr<string> fps_ {};
        // The height of the file. Unit: pixels.
        shared_ptr<int64_t> height_ {};
        // The ID of the media asset.
        shared_ptr<string> mediaId_ {};
        // The size of the file. Unit: bytes.
        shared_ptr<int64_t> size_ {};
        // The state of the file. Valid values:
        // 
        // *   **Uploading**: The file is being uploaded. This is the initial status.
        // *   **Normal**: The file is uploaded.
        // *   **UploadFail**: The file failed to be uploaded.
        // *   **Deleted**: The file is deleted.
        shared_ptr<string> status_ {};
        // The information about the video streams.
        shared_ptr<vector<MezzanineInfo::VideoStreamList>> videoStreamList_ {};
        // The width of the file. Unit: pixels.
        shared_ptr<int64_t> width_ {};
      };

      class MediaInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(CateId, cateId_);
          DARABONBA_PTR_TO_JSON(CateName, cateName_);
          DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DownloadSwitch, downloadSwitch_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_TO_JSON(RestoreExpiration, restoreExpiration_);
          DARABONBA_PTR_TO_JSON(RestoreStatus, restoreStatus_);
          DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, MediaInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(CateId, cateId_);
          DARABONBA_PTR_FROM_JSON(CateName, cateName_);
          DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DownloadSwitch, downloadSwitch_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
          DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_FROM_JSON(RestoreExpiration, restoreExpiration_);
          DARABONBA_PTR_FROM_JSON(RestoreStatus, restoreStatus_);
          DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        MediaInfo() = default ;
        MediaInfo(const MediaInfo &) = default ;
        MediaInfo(MediaInfo &&) = default ;
        MediaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaInfo() = default ;
        MediaInfo& operator=(const MediaInfo &) = default ;
        MediaInfo& operator=(MediaInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->cateId_ == nullptr && this->cateName_ == nullptr && this->coverURL_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr
        && this->downloadSwitch_ == nullptr && this->mediaId_ == nullptr && this->modificationTime_ == nullptr && this->referenceId_ == nullptr && this->restoreExpiration_ == nullptr
        && this->restoreStatus_ == nullptr && this->snapshots_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr && this->storageLocation_ == nullptr
        && this->tags_ == nullptr && this->templateGroupId_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline MediaInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // cateId Field Functions 
        bool hasCateId() const { return this->cateId_ != nullptr;};
        void deleteCateId() { this->cateId_ = nullptr;};
        inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
        inline MediaInfo& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


        // cateName Field Functions 
        bool hasCateName() const { return this->cateName_ != nullptr;};
        void deleteCateName() { this->cateName_ = nullptr;};
        inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
        inline MediaInfo& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


        // coverURL Field Functions 
        bool hasCoverURL() const { return this->coverURL_ != nullptr;};
        void deleteCoverURL() { this->coverURL_ = nullptr;};
        inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
        inline MediaInfo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline MediaInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MediaInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // downloadSwitch Field Functions 
        bool hasDownloadSwitch() const { return this->downloadSwitch_ != nullptr;};
        void deleteDownloadSwitch() { this->downloadSwitch_ = nullptr;};
        inline string getDownloadSwitch() const { DARABONBA_PTR_GET_DEFAULT(downloadSwitch_, "") };
        inline MediaInfo& setDownloadSwitch(string downloadSwitch) { DARABONBA_PTR_SET_VALUE(downloadSwitch_, downloadSwitch) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline MediaInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // modificationTime Field Functions 
        bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
        void deleteModificationTime() { this->modificationTime_ = nullptr;};
        inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
        inline MediaInfo& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


        // referenceId Field Functions 
        bool hasReferenceId() const { return this->referenceId_ != nullptr;};
        void deleteReferenceId() { this->referenceId_ = nullptr;};
        inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
        inline MediaInfo& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


        // restoreExpiration Field Functions 
        bool hasRestoreExpiration() const { return this->restoreExpiration_ != nullptr;};
        void deleteRestoreExpiration() { this->restoreExpiration_ = nullptr;};
        inline string getRestoreExpiration() const { DARABONBA_PTR_GET_DEFAULT(restoreExpiration_, "") };
        inline MediaInfo& setRestoreExpiration(string restoreExpiration) { DARABONBA_PTR_SET_VALUE(restoreExpiration_, restoreExpiration) };


        // restoreStatus Field Functions 
        bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
        void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
        inline string getRestoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
        inline MediaInfo& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


        // snapshots Field Functions 
        bool hasSnapshots() const { return this->snapshots_ != nullptr;};
        void deleteSnapshots() { this->snapshots_ = nullptr;};
        inline const vector<string> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
        inline vector<string> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
        inline MediaInfo& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
        inline MediaInfo& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MediaInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageClass Field Functions 
        bool hasStorageClass() const { return this->storageClass_ != nullptr;};
        void deleteStorageClass() { this->storageClass_ = nullptr;};
        inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
        inline MediaInfo& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


        // storageLocation Field Functions 
        bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
        void deleteStorageLocation() { this->storageLocation_ = nullptr;};
        inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
        inline MediaInfo& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline MediaInfo& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // templateGroupId Field Functions 
        bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
        void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
        inline string getTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
        inline MediaInfo& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline MediaInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline MediaInfo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The ID of the category.
        shared_ptr<int64_t> cateId_ {};
        // The name of the category.
        shared_ptr<string> cateName_ {};
        // The thumbnail URL of the media asset.
        shared_ptr<string> coverURL_ {};
        // The time when the media asset was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the media asset.
        shared_ptr<string> description_ {};
        // Indicates whether the offline download feature is enabled. If you enable the offline download feature, users can download and play videos by using the ApsaraVideo Player on a local PC. For more information, see [Configure download settings](https://help.aliyun.com/document_detail/86107.html). Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> downloadSwitch_ {};
        // The ID of the media asset.
        shared_ptr<string> mediaId_ {};
        // The time when the media asset was last updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> modificationTime_ {};
        shared_ptr<string> referenceId_ {};
        // The period of time in which the audio file remains in the restored state.
        shared_ptr<string> restoreExpiration_ {};
        // The restoration status of the media asset. Valid values:
        // 
        // *   **Processing**
        // *   **Success**
        // *   **Failed**
        shared_ptr<string> restoreStatus_ {};
        // The array of video snapshot URLs.
        shared_ptr<vector<string>> snapshots_ {};
        // The status of the video. Valid values:
        // 
        // *   **Uploading**
        // *   **UploadFail**
        // *   **UploadSucc**
        // *   **Transcoding**
        // *   **TranscodeFail**
        // *   **Blocked**
        // *   **Normal**
        shared_ptr<string> status_ {};
        // The storage type. Valid values:
        // 
        // *   **Standard**: All media assets are stored as Standard objects.
        // *   **IA**: All media assets are stored as IA objects.
        // *   **Archive**: All media assets are stored as Archive objects.
        // *   **ColdArchive**: All media assets are stored as Cold Archive objects.
        // *   **SourceIA**: Only the source files are IA objects.
        // *   **SourceArchive**: Only the source files are Archive objects.
        // *   **SourceColdArchive**: Only the source file is stored as a Cold Archive object.
        // *   **Changing**: The storage class of the media asset is being changed.
        // *   **SourceChanging**: The storage class of the media asset is being changed.
        shared_ptr<string> storageClass_ {};
        // The storage address of the media asset.
        shared_ptr<string> storageLocation_ {};
        // The tags of the media asset. Separate tags with commas (,).
        shared_ptr<string> tags_ {};
        // The ID of the transcoding template group.
        shared_ptr<string> templateGroupId_ {};
        // The title of the media asset.
        shared_ptr<string> title_ {};
        // The custom parameters.
        shared_ptr<string> userData_ {};
      };

      virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->mediaInfo_ == nullptr && this->mezzanineInfo_ == nullptr && this->playInfoList_ == nullptr; };
      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaInfos& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaInfo Field Functions 
      bool hasMediaInfo() const { return this->mediaInfo_ != nullptr;};
      void deleteMediaInfo() { this->mediaInfo_ = nullptr;};
      inline const MediaInfos::MediaInfo & getMediaInfo() const { DARABONBA_PTR_GET_CONST(mediaInfo_, MediaInfos::MediaInfo) };
      inline MediaInfos::MediaInfo getMediaInfo() { DARABONBA_PTR_GET(mediaInfo_, MediaInfos::MediaInfo) };
      inline MediaInfos& setMediaInfo(const MediaInfos::MediaInfo & mediaInfo) { DARABONBA_PTR_SET_VALUE(mediaInfo_, mediaInfo) };
      inline MediaInfos& setMediaInfo(MediaInfos::MediaInfo && mediaInfo) { DARABONBA_PTR_SET_RVALUE(mediaInfo_, mediaInfo) };


      // mezzanineInfo Field Functions 
      bool hasMezzanineInfo() const { return this->mezzanineInfo_ != nullptr;};
      void deleteMezzanineInfo() { this->mezzanineInfo_ = nullptr;};
      inline const MediaInfos::MezzanineInfo & getMezzanineInfo() const { DARABONBA_PTR_GET_CONST(mezzanineInfo_, MediaInfos::MezzanineInfo) };
      inline MediaInfos::MezzanineInfo getMezzanineInfo() { DARABONBA_PTR_GET(mezzanineInfo_, MediaInfos::MezzanineInfo) };
      inline MediaInfos& setMezzanineInfo(const MediaInfos::MezzanineInfo & mezzanineInfo) { DARABONBA_PTR_SET_VALUE(mezzanineInfo_, mezzanineInfo) };
      inline MediaInfos& setMezzanineInfo(MediaInfos::MezzanineInfo && mezzanineInfo) { DARABONBA_PTR_SET_RVALUE(mezzanineInfo_, mezzanineInfo) };


      // playInfoList Field Functions 
      bool hasPlayInfoList() const { return this->playInfoList_ != nullptr;};
      void deletePlayInfoList() { this->playInfoList_ = nullptr;};
      inline const vector<MediaInfos::PlayInfoList> & getPlayInfoList() const { DARABONBA_PTR_GET_CONST(playInfoList_, vector<MediaInfos::PlayInfoList>) };
      inline vector<MediaInfos::PlayInfoList> getPlayInfoList() { DARABONBA_PTR_GET(playInfoList_, vector<MediaInfos::PlayInfoList>) };
      inline MediaInfos& setPlayInfoList(const vector<MediaInfos::PlayInfoList> & playInfoList) { DARABONBA_PTR_SET_VALUE(playInfoList_, playInfoList) };
      inline MediaInfos& setPlayInfoList(vector<MediaInfos::PlayInfoList> && playInfoList) { DARABONBA_PTR_SET_RVALUE(playInfoList_, playInfoList) };


    protected:
      // The ID of the media asset.
      shared_ptr<string> mediaId_ {};
      // The basic information of the media asset.
      shared_ptr<MediaInfos::MediaInfo> mediaInfo_ {};
      // The source file information.
      shared_ptr<MediaInfos::MezzanineInfo> mezzanineInfo_ {};
      // The information about the audio or video stream.
      shared_ptr<vector<MediaInfos::PlayInfoList>> playInfoList_ {};
    };

    virtual bool empty() const override { return this->forbiddenMediaIds_ == nullptr
        && this->mediaInfos_ == nullptr && this->nonExistMediaIds_ == nullptr && this->nonExistReferenceIds_ == nullptr && this->requestId_ == nullptr; };
    // forbiddenMediaIds Field Functions 
    bool hasForbiddenMediaIds() const { return this->forbiddenMediaIds_ != nullptr;};
    void deleteForbiddenMediaIds() { this->forbiddenMediaIds_ = nullptr;};
    inline const vector<string> & getForbiddenMediaIds() const { DARABONBA_PTR_GET_CONST(forbiddenMediaIds_, vector<string>) };
    inline vector<string> getForbiddenMediaIds() { DARABONBA_PTR_GET(forbiddenMediaIds_, vector<string>) };
    inline BatchGetMediaInfosResponseBody& setForbiddenMediaIds(const vector<string> & forbiddenMediaIds) { DARABONBA_PTR_SET_VALUE(forbiddenMediaIds_, forbiddenMediaIds) };
    inline BatchGetMediaInfosResponseBody& setForbiddenMediaIds(vector<string> && forbiddenMediaIds) { DARABONBA_PTR_SET_RVALUE(forbiddenMediaIds_, forbiddenMediaIds) };


    // mediaInfos Field Functions 
    bool hasMediaInfos() const { return this->mediaInfos_ != nullptr;};
    void deleteMediaInfos() { this->mediaInfos_ = nullptr;};
    inline const vector<BatchGetMediaInfosResponseBody::MediaInfos> & getMediaInfos() const { DARABONBA_PTR_GET_CONST(mediaInfos_, vector<BatchGetMediaInfosResponseBody::MediaInfos>) };
    inline vector<BatchGetMediaInfosResponseBody::MediaInfos> getMediaInfos() { DARABONBA_PTR_GET(mediaInfos_, vector<BatchGetMediaInfosResponseBody::MediaInfos>) };
    inline BatchGetMediaInfosResponseBody& setMediaInfos(const vector<BatchGetMediaInfosResponseBody::MediaInfos> & mediaInfos) { DARABONBA_PTR_SET_VALUE(mediaInfos_, mediaInfos) };
    inline BatchGetMediaInfosResponseBody& setMediaInfos(vector<BatchGetMediaInfosResponseBody::MediaInfos> && mediaInfos) { DARABONBA_PTR_SET_RVALUE(mediaInfos_, mediaInfos) };


    // nonExistMediaIds Field Functions 
    bool hasNonExistMediaIds() const { return this->nonExistMediaIds_ != nullptr;};
    void deleteNonExistMediaIds() { this->nonExistMediaIds_ = nullptr;};
    inline const vector<string> & getNonExistMediaIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaIds_, vector<string>) };
    inline vector<string> getNonExistMediaIds() { DARABONBA_PTR_GET(nonExistMediaIds_, vector<string>) };
    inline BatchGetMediaInfosResponseBody& setNonExistMediaIds(const vector<string> & nonExistMediaIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaIds_, nonExistMediaIds) };
    inline BatchGetMediaInfosResponseBody& setNonExistMediaIds(vector<string> && nonExistMediaIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaIds_, nonExistMediaIds) };


    // nonExistReferenceIds Field Functions 
    bool hasNonExistReferenceIds() const { return this->nonExistReferenceIds_ != nullptr;};
    void deleteNonExistReferenceIds() { this->nonExistReferenceIds_ = nullptr;};
    inline const vector<string> & getNonExistReferenceIds() const { DARABONBA_PTR_GET_CONST(nonExistReferenceIds_, vector<string>) };
    inline vector<string> getNonExistReferenceIds() { DARABONBA_PTR_GET(nonExistReferenceIds_, vector<string>) };
    inline BatchGetMediaInfosResponseBody& setNonExistReferenceIds(const vector<string> & nonExistReferenceIds) { DARABONBA_PTR_SET_VALUE(nonExistReferenceIds_, nonExistReferenceIds) };
    inline BatchGetMediaInfosResponseBody& setNonExistReferenceIds(vector<string> && nonExistReferenceIds) { DARABONBA_PTR_SET_RVALUE(nonExistReferenceIds_, nonExistReferenceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetMediaInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the media assets that do not support the operation typically because you are not authorized to perform the operation. For more information, see [Overview](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<vector<string>> forbiddenMediaIds_ {};
    // Details about media assets.
    shared_ptr<vector<BatchGetMediaInfosResponseBody::MediaInfos>> mediaInfos_ {};
    // The IDs of the media assets that do not exist.
    shared_ptr<vector<string>> nonExistMediaIds_ {};
    shared_ptr<vector<string>> nonExistReferenceIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
