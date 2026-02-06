// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODY_HPP_
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
  class GetPlayInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlayInfoList, playInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoBase, videoBase_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlayInfoList, playInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoBase, videoBase_);
    };
    GetPlayInfoResponseBody() = default ;
    GetPlayInfoResponseBody(const GetPlayInfoResponseBody &) = default ;
    GetPlayInfoResponseBody(GetPlayInfoResponseBody &&) = default ;
    GetPlayInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayInfoResponseBody() = default ;
    GetPlayInfoResponseBody& operator=(const GetPlayInfoResponseBody &) = default ;
    GetPlayInfoResponseBody& operator=(GetPlayInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoBase : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoBase& obj) { 
        DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DanMuURL, danMuURL_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, VideoBase& obj) { 
        DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DanMuURL, danMuURL_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      VideoBase() = default ;
      VideoBase(const VideoBase &) = default ;
      VideoBase(VideoBase &&) = default ;
      VideoBase(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoBase() = default ;
      VideoBase& operator=(const VideoBase &) = default ;
      VideoBase& operator=(VideoBase &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->coverURL_ == nullptr
        && this->creationTime_ == nullptr && this->danMuURL_ == nullptr && this->duration_ == nullptr && this->mediaType_ == nullptr && this->status_ == nullptr
        && this->storageClass_ == nullptr && this->title_ == nullptr && this->videoId_ == nullptr; };
      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline VideoBase& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline VideoBase& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // danMuURL Field Functions 
      bool hasDanMuURL() const { return this->danMuURL_ != nullptr;};
      void deleteDanMuURL() { this->danMuURL_ = nullptr;};
      inline string getDanMuURL() const { DARABONBA_PTR_GET_DEFAULT(danMuURL_, "") };
      inline VideoBase& setDanMuURL(string danMuURL) { DARABONBA_PTR_SET_VALUE(danMuURL_, danMuURL) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline VideoBase& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // mediaType Field Functions 
      bool hasMediaType() const { return this->mediaType_ != nullptr;};
      void deleteMediaType() { this->mediaType_ = nullptr;};
      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
      inline VideoBase& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VideoBase& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline VideoBase& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline VideoBase& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline VideoBase& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The thumbnail URL of the audio or video file.
      shared_ptr<string> coverURL_ {};
      // The time when the audio or video file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The URL of the masked live comment data.
      shared_ptr<string> danMuURL_ {};
      // The duration of the audio or video file. Unit: seconds.
      shared_ptr<string> duration_ {};
      // The type of the media file. Valid values:
      // 
      // *   **video**
      // *   **audio**
      shared_ptr<string> mediaType_ {};
      // The status of the media file. For more information about the value range and description, see the [Status](~~52839#title-vqg-8cz-7p8~~) table.
      shared_ptr<string> status_ {};
      // The storage class of the audio file. Valid values:
      // 
      // *   **Standard**: All media resources are stored as Standard objects.
      // *   **IA**: All media resources are stored as IA objects.
      // *   **Archive**: All media resources are stored as Archive objects.
      // *   **ColdArchive**: All media resources are stored as Cold Archive objects.
      // *   **SourceIA**: Only the source files are IA objects.
      // *   **SourceArchive**: Only the source files are Archive objects.
      // *   **SourceColdArchive**: Only the source file is stored as a Cold Archive object.
      // *   **Changing**: The storage class of the video file is being changed.
      // *   **SourceChanging**: The storage class of the source file is being changed.
      shared_ptr<string> storageClass_ {};
      // The title of the audio or video file.
      shared_ptr<string> title_ {};
      // The ID of the media file.
      shared_ptr<string> videoId_ {};
    };

    class PlayInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlayInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(PlayInfo, playInfo_);
      };
      friend void from_json(const Darabonba::Json& j, PlayInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(PlayInfo, playInfo_);
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
      class PlayInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PlayInfo& obj) { 
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
          DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, PlayInfo& obj) { 
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
          DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        PlayInfo() = default ;
        PlayInfo(const PlayInfo &) = default ;
        PlayInfo(PlayInfo &&) = default ;
        PlayInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PlayInfo() = default ;
        PlayInfo& operator=(const PlayInfo &) = default ;
        PlayInfo& operator=(PlayInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bitDepth_ == nullptr
        && this->bitrate_ == nullptr && this->codecName_ == nullptr && this->creationTime_ == nullptr && this->definition_ == nullptr && this->duration_ == nullptr
        && this->encrypt_ == nullptr && this->encryptMode_ == nullptr && this->encryptType_ == nullptr && this->format_ == nullptr && this->fps_ == nullptr
        && this->HDRType_ == nullptr && this->height_ == nullptr && this->jobExt_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr
        && this->modificationTime_ == nullptr && this->narrowBandType_ == nullptr && this->playURL_ == nullptr && this->size_ == nullptr && this->specification_ == nullptr
        && this->status_ == nullptr && this->streamType_ == nullptr && this->watermarkId_ == nullptr && this->width_ == nullptr; };
        // bitDepth Field Functions 
        bool hasBitDepth() const { return this->bitDepth_ != nullptr;};
        void deleteBitDepth() { this->bitDepth_ = nullptr;};
        inline int32_t getBitDepth() const { DARABONBA_PTR_GET_DEFAULT(bitDepth_, 0) };
        inline PlayInfo& setBitDepth(int32_t bitDepth) { DARABONBA_PTR_SET_VALUE(bitDepth_, bitDepth) };


        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline PlayInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // codecName Field Functions 
        bool hasCodecName() const { return this->codecName_ != nullptr;};
        void deleteCodecName() { this->codecName_ = nullptr;};
        inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
        inline PlayInfo& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline PlayInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // definition Field Functions 
        bool hasDefinition() const { return this->definition_ != nullptr;};
        void deleteDefinition() { this->definition_ = nullptr;};
        inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
        inline PlayInfo& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline PlayInfo& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // encrypt Field Functions 
        bool hasEncrypt() const { return this->encrypt_ != nullptr;};
        void deleteEncrypt() { this->encrypt_ = nullptr;};
        inline int64_t getEncrypt() const { DARABONBA_PTR_GET_DEFAULT(encrypt_, 0L) };
        inline PlayInfo& setEncrypt(int64_t encrypt) { DARABONBA_PTR_SET_VALUE(encrypt_, encrypt) };


        // encryptMode Field Functions 
        bool hasEncryptMode() const { return this->encryptMode_ != nullptr;};
        void deleteEncryptMode() { this->encryptMode_ = nullptr;};
        inline string getEncryptMode() const { DARABONBA_PTR_GET_DEFAULT(encryptMode_, "") };
        inline PlayInfo& setEncryptMode(string encryptMode) { DARABONBA_PTR_SET_VALUE(encryptMode_, encryptMode) };


        // encryptType Field Functions 
        bool hasEncryptType() const { return this->encryptType_ != nullptr;};
        void deleteEncryptType() { this->encryptType_ = nullptr;};
        inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
        inline PlayInfo& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline PlayInfo& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline PlayInfo& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // HDRType Field Functions 
        bool hasHDRType() const { return this->HDRType_ != nullptr;};
        void deleteHDRType() { this->HDRType_ = nullptr;};
        inline string getHDRType() const { DARABONBA_PTR_GET_DEFAULT(HDRType_, "") };
        inline PlayInfo& setHDRType(string HDRType) { DARABONBA_PTR_SET_VALUE(HDRType_, HDRType) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
        inline PlayInfo& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // jobExt Field Functions 
        bool hasJobExt() const { return this->jobExt_ != nullptr;};
        void deleteJobExt() { this->jobExt_ = nullptr;};
        inline string getJobExt() const { DARABONBA_PTR_GET_DEFAULT(jobExt_, "") };
        inline PlayInfo& setJobExt(string jobExt) { DARABONBA_PTR_SET_VALUE(jobExt_, jobExt) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline PlayInfo& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline int32_t getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, 0) };
        inline PlayInfo& setJobType(int32_t jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // modificationTime Field Functions 
        bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
        void deleteModificationTime() { this->modificationTime_ = nullptr;};
        inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
        inline PlayInfo& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


        // narrowBandType Field Functions 
        bool hasNarrowBandType() const { return this->narrowBandType_ != nullptr;};
        void deleteNarrowBandType() { this->narrowBandType_ = nullptr;};
        inline string getNarrowBandType() const { DARABONBA_PTR_GET_DEFAULT(narrowBandType_, "") };
        inline PlayInfo& setNarrowBandType(string narrowBandType) { DARABONBA_PTR_SET_VALUE(narrowBandType_, narrowBandType) };


        // playURL Field Functions 
        bool hasPlayURL() const { return this->playURL_ != nullptr;};
        void deletePlayURL() { this->playURL_ = nullptr;};
        inline string getPlayURL() const { DARABONBA_PTR_GET_DEFAULT(playURL_, "") };
        inline PlayInfo& setPlayURL(string playURL) { DARABONBA_PTR_SET_VALUE(playURL_, playURL) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline PlayInfo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // specification Field Functions 
        bool hasSpecification() const { return this->specification_ != nullptr;};
        void deleteSpecification() { this->specification_ = nullptr;};
        inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
        inline PlayInfo& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PlayInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline string getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
        inline PlayInfo& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


        // watermarkId Field Functions 
        bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
        void deleteWatermarkId() { this->watermarkId_ = nullptr;};
        inline string getWatermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
        inline PlayInfo& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
        inline PlayInfo& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The color depth. This value is an integer.
        shared_ptr<int32_t> bitDepth_ {};
        // The bitrate of the media stream. Unit: Kbit/s.
        shared_ptr<string> bitrate_ {};
        // The encoding type. The possible values are:
        // 
        // - H264
        // 
        // - H265
        shared_ptr<string> codecName_ {};
        // The time when the audio or video stream was created. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
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
        // Indicates whether the media stream is encrypted. Valid values:
        // 
        // *   **0**: The media stream is not encrypted.
        // *   **1**: The media stream is encrypted.
        shared_ptr<int64_t> encrypt_ {};
        // The encryption type of the media stream. Valid values:
        // 
        // *   **License**: decryption on local devices
        // 
        // >  If the encryption type is **License**, only ApsaraVideo Player SDK can be used to play videos.
        shared_ptr<string> encryptMode_ {};
        // The encryption type of the media stream. Valid values:
        // 
        // *   **AliyunVoDEncryption**: Alibaba Cloud proprietary cryptography
        // *   **HLSEncryption**: HTTP-Live-Streaming (HLS) encryption
        // 
        // >  If the encryption type is AliyunVoDEncryption, only ApsaraVideo Player SDK can be used to play videos.
        shared_ptr<string> encryptType_ {};
        // The format of the media stream.
        // 
        // *   If the media file is a video file, the valid values are **mp4** and **m3u8**.
        // *   If the media asset is an audio-only file, the value is **mp3**.
        shared_ptr<string> format_ {};
        // The frame rate of the media stream. Unit: frames per second.
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
        // The time when the audio or video file was last updated. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
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
        // The ID of the watermark that is associated with the media stream.
        shared_ptr<string> watermarkId_ {};
        // The width of the media stream. Unit: pixels.
        shared_ptr<int64_t> width_ {};
      };

      virtual bool empty() const override { return this->playInfo_ == nullptr; };
      // playInfo Field Functions 
      bool hasPlayInfo() const { return this->playInfo_ != nullptr;};
      void deletePlayInfo() { this->playInfo_ = nullptr;};
      inline const vector<PlayInfoList::PlayInfo> & getPlayInfo() const { DARABONBA_PTR_GET_CONST(playInfo_, vector<PlayInfoList::PlayInfo>) };
      inline vector<PlayInfoList::PlayInfo> getPlayInfo() { DARABONBA_PTR_GET(playInfo_, vector<PlayInfoList::PlayInfo>) };
      inline PlayInfoList& setPlayInfo(const vector<PlayInfoList::PlayInfo> & playInfo) { DARABONBA_PTR_SET_VALUE(playInfo_, playInfo) };
      inline PlayInfoList& setPlayInfo(vector<PlayInfoList::PlayInfo> && playInfo) { DARABONBA_PTR_SET_RVALUE(playInfo_, playInfo) };


    protected:
      shared_ptr<vector<PlayInfoList::PlayInfo>> playInfo_ {};
    };

    virtual bool empty() const override { return this->playInfoList_ == nullptr
        && this->requestId_ == nullptr && this->videoBase_ == nullptr; };
    // playInfoList Field Functions 
    bool hasPlayInfoList() const { return this->playInfoList_ != nullptr;};
    void deletePlayInfoList() { this->playInfoList_ = nullptr;};
    inline const GetPlayInfoResponseBody::PlayInfoList & getPlayInfoList() const { DARABONBA_PTR_GET_CONST(playInfoList_, GetPlayInfoResponseBody::PlayInfoList) };
    inline GetPlayInfoResponseBody::PlayInfoList getPlayInfoList() { DARABONBA_PTR_GET(playInfoList_, GetPlayInfoResponseBody::PlayInfoList) };
    inline GetPlayInfoResponseBody& setPlayInfoList(const GetPlayInfoResponseBody::PlayInfoList & playInfoList) { DARABONBA_PTR_SET_VALUE(playInfoList_, playInfoList) };
    inline GetPlayInfoResponseBody& setPlayInfoList(GetPlayInfoResponseBody::PlayInfoList && playInfoList) { DARABONBA_PTR_SET_RVALUE(playInfoList_, playInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPlayInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoBase Field Functions 
    bool hasVideoBase() const { return this->videoBase_ != nullptr;};
    void deleteVideoBase() { this->videoBase_ = nullptr;};
    inline const GetPlayInfoResponseBody::VideoBase & getVideoBase() const { DARABONBA_PTR_GET_CONST(videoBase_, GetPlayInfoResponseBody::VideoBase) };
    inline GetPlayInfoResponseBody::VideoBase getVideoBase() { DARABONBA_PTR_GET(videoBase_, GetPlayInfoResponseBody::VideoBase) };
    inline GetPlayInfoResponseBody& setVideoBase(const GetPlayInfoResponseBody::VideoBase & videoBase) { DARABONBA_PTR_SET_VALUE(videoBase_, videoBase) };
    inline GetPlayInfoResponseBody& setVideoBase(GetPlayInfoResponseBody::VideoBase && videoBase) { DARABONBA_PTR_SET_RVALUE(videoBase_, videoBase) };


  protected:
    // The information about the audio or video stream.
    shared_ptr<GetPlayInfoResponseBody::PlayInfoList> playInfoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The basic information about the audio or video file.
    shared_ptr<GetPlayInfoResponseBody::VideoBase> videoBase_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
