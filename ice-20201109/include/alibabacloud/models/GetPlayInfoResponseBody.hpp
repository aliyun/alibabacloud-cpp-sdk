// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPlayInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaBase, mediaBase_);
      DARABONBA_PTR_TO_JSON(PlayInfoList, playInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaBase, mediaBase_);
      DARABONBA_PTR_FROM_JSON(PlayInfoList, playInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class PlayInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlayInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(BitDepth, bitDepth_);
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Definition, definition_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Encrypt, encrypt_);
        DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
        DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Fps, fps_);
        DARABONBA_PTR_TO_JSON(HDRType, HDRType_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(NarrowBandType, narrowBandType_);
        DARABONBA_PTR_TO_JSON(PlayURL, playURL_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StreamTags, streamTags_);
        DARABONBA_PTR_TO_JSON(StreamType, streamType_);
        DARABONBA_PTR_TO_JSON(TransTemplateType, transTemplateType_);
        DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, PlayInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(BitDepth, bitDepth_);
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Definition, definition_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Encrypt, encrypt_);
        DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
        DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Fps, fps_);
        DARABONBA_PTR_FROM_JSON(HDRType, HDRType_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(NarrowBandType, narrowBandType_);
        DARABONBA_PTR_FROM_JSON(PlayURL, playURL_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StreamTags, streamTags_);
        DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
        DARABONBA_PTR_FROM_JSON(TransTemplateType, transTemplateType_);
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
        && this->bitrate_ == nullptr && this->creationTime_ == nullptr && this->definition_ == nullptr && this->duration_ == nullptr && this->encrypt_ == nullptr
        && this->encryptType_ == nullptr && this->fileURL_ == nullptr && this->format_ == nullptr && this->fps_ == nullptr && this->HDRType_ == nullptr
        && this->height_ == nullptr && this->jobId_ == nullptr && this->modificationTime_ == nullptr && this->narrowBandType_ == nullptr && this->playURL_ == nullptr
        && this->size_ == nullptr && this->status_ == nullptr && this->streamTags_ == nullptr && this->streamType_ == nullptr && this->transTemplateType_ == nullptr
        && this->watermarkId_ == nullptr && this->width_ == nullptr; };
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


      // encryptType Field Functions 
      bool hasEncryptType() const { return this->encryptType_ != nullptr;};
      void deleteEncryptType() { this->encryptType_ = nullptr;};
      inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
      inline PlayInfoList& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


      // fileURL Field Functions 
      bool hasFileURL() const { return this->fileURL_ != nullptr;};
      void deleteFileURL() { this->fileURL_ = nullptr;};
      inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
      inline PlayInfoList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


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


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline PlayInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


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


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PlayInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // streamTags Field Functions 
      bool hasStreamTags() const { return this->streamTags_ != nullptr;};
      void deleteStreamTags() { this->streamTags_ = nullptr;};
      inline string getStreamTags() const { DARABONBA_PTR_GET_DEFAULT(streamTags_, "") };
      inline PlayInfoList& setStreamTags(string streamTags) { DARABONBA_PTR_SET_VALUE(streamTags_, streamTags) };


      // streamType Field Functions 
      bool hasStreamType() const { return this->streamType_ != nullptr;};
      void deleteStreamType() { this->streamType_ = nullptr;};
      inline string getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
      inline PlayInfoList& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


      // transTemplateType Field Functions 
      bool hasTransTemplateType() const { return this->transTemplateType_ != nullptr;};
      void deleteTransTemplateType() { this->transTemplateType_ = nullptr;};
      inline string getTransTemplateType() const { DARABONBA_PTR_GET_DEFAULT(transTemplateType_, "") };
      inline PlayInfoList& setTransTemplateType(string transTemplateType) { DARABONBA_PTR_SET_VALUE(transTemplateType_, transTemplateType) };


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
      // The color depth.
      shared_ptr<int32_t> bitDepth_ {};
      // The bitrate of the media stream. Unit: Kbit/s.
      shared_ptr<string> bitrate_ {};
      // The time when the media stream was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The quality of the media stream. Valid values:
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
      // *   **AliyunVoDEncryption**: Alibaba Cloud proprietary cryptography
      // *   **HLSEncryption**: HTTP Live Streaming (HLS) encryption
      // 
      // >  If the encryption type is AliyunVoDEncryption, only ApsaraVideo Player SDK can be used to play videos.
      shared_ptr<string> encryptType_ {};
      // The OSS URL of the file.
      shared_ptr<string> fileURL_ {};
      // The format of the media stream.
      // 
      // *   If the media asset is a video file, the valid values are **mp4** and **m3u8**.
      // *   If the media asset is an audio-only file, the value is **mp3**.
      shared_ptr<string> format_ {};
      // The frame rate of the media stream. Unit: frames per second (FPS).
      shared_ptr<string> fps_ {};
      // The high dynamic range (HDR) type of the media stream. Valid values:
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
      // The task ID.
      shared_ptr<string> jobId_ {};
      // The time when the media stream was updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The type of Narrowband HD™ transcoding. Valid values:
      // 
      // *   **0**: standard transcoding
      // *   **1.0**: Narrowband HD™ 1.0 transcoding
      // *   **2.0**: Narrowband HD™ 2.0 transcoding
      // 
      // This parameter is returned only when a definition that is available in the built-in Narrowband HD™ 1.0 transcoding template is specified. For more information, see the [Definition parameter in TranscodeTemplate](https://help.aliyun.com/document_detail/52839.html) table.
      shared_ptr<string> narrowBandType_ {};
      // The playback URL of the media stream.
      shared_ptr<string> playURL_ {};
      // The size of the media stream. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The status of the media stream. Valid values:
      // 
      // *   **Normal**
      // *   **Invisible**
      shared_ptr<string> status_ {};
      // The tags of the media stream, which are used to identify the transcoding type.
      shared_ptr<string> streamTags_ {};
      // The type of the media stream. If the media stream is a video stream, the value is **video**. If the media stream is an audio-only stream, the value is **audio**.
      shared_ptr<string> streamType_ {};
      // The type of the transcoding template. Valid values:
      // 
      // *   Normal: standard transcoding
      // *   AudioTranscode: audio transcoding
      // *   Remux: container format conversion
      // *   NarrowBandV1: Narrowband HD™ 1.0
      // *   NarrowBandV2: Narrowband HD™ 2.0
      // *   UHD: audio and video enhancement (ultra-high definition)
      shared_ptr<string> transTemplateType_ {};
      // The ID of the watermark that is associated with the media stream.
      shared_ptr<string> watermarkId_ {};
      // The width of the media stream. Unit: pixels.
      shared_ptr<int64_t> width_ {};
    };

    class MediaBase : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaBase& obj) { 
        DARABONBA_PTR_TO_JSON(CateId, cateId_);
        DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, MediaBase& obj) { 
        DARABONBA_PTR_FROM_JSON(CateId, cateId_);
        DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      MediaBase() = default ;
      MediaBase(const MediaBase &) = default ;
      MediaBase(MediaBase &&) = default ;
      MediaBase(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaBase() = default ;
      MediaBase& operator=(const MediaBase &) = default ;
      MediaBase& operator=(MediaBase &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cateId_ == nullptr
        && this->coverURL_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->mediaId_ == nullptr && this->mediaTags_ == nullptr
        && this->mediaType_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
      // cateId Field Functions 
      bool hasCateId() const { return this->cateId_ != nullptr;};
      void deleteCateId() { this->cateId_ = nullptr;};
      inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
      inline MediaBase& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline MediaBase& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline MediaBase& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MediaBase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaBase& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaTags Field Functions 
      bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
      void deleteMediaTags() { this->mediaTags_ = nullptr;};
      inline string getMediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
      inline MediaBase& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


      // mediaType Field Functions 
      bool hasMediaType() const { return this->mediaType_ != nullptr;};
      void deleteMediaType() { this->mediaType_ = nullptr;};
      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
      inline MediaBase& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MediaBase& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline MediaBase& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The category ID. You can use one of the following methods to obtain the ID:
      // 
      // *   Log on to the [Intelligent Media Services (IMS) console](https://ims.console.aliyun.com) and choose **Media Asset Management** > **Category Management** to view the category ID.
      // *   View the value of the CateId parameter returned by the AddCategory operation that you called to create a category.
      // *   View the value of the CateId parameter returned by the GetCategories operation that you called to query a category.
      shared_ptr<int64_t> cateId_ {};
      // The URL of the thumbnail.
      shared_ptr<string> coverURL_ {};
      // The time when the media asset was created.
      shared_ptr<string> creationTime_ {};
      // The content description.
      shared_ptr<string> description_ {};
      // The ID of the media asset.
      shared_ptr<string> mediaId_ {};
      // The tags.
      // 
      // *   Up to 16 tags are supported.
      // *   Multiple tags are separated by commas (,).
      // *   Each tag can be up to 32 bytes in length.
      // *   The value is encoded in UTF-8.
      shared_ptr<string> mediaTags_ {};
      // The type of the media asset. Valid values:
      // 
      // video audio
      shared_ptr<string> mediaType_ {};
      // The resource status. Valid values:
      // 
      // Init: the initial state, which indicates that the source file is not ready.
      // 
      // Preparing: The source file is being prepared. For example, the file is being uploaded or edited.
      // 
      // PrepareFail: The source file failed to be prepared. For example, the information of the source file failed to be obtained.
      // 
      // Normal: The source file is ready.
      shared_ptr<string> status_ {};
      // The title.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->mediaBase_ == nullptr
        && this->playInfoList_ == nullptr && this->requestId_ == nullptr; };
    // mediaBase Field Functions 
    bool hasMediaBase() const { return this->mediaBase_ != nullptr;};
    void deleteMediaBase() { this->mediaBase_ = nullptr;};
    inline const GetPlayInfoResponseBody::MediaBase & getMediaBase() const { DARABONBA_PTR_GET_CONST(mediaBase_, GetPlayInfoResponseBody::MediaBase) };
    inline GetPlayInfoResponseBody::MediaBase getMediaBase() { DARABONBA_PTR_GET(mediaBase_, GetPlayInfoResponseBody::MediaBase) };
    inline GetPlayInfoResponseBody& setMediaBase(const GetPlayInfoResponseBody::MediaBase & mediaBase) { DARABONBA_PTR_SET_VALUE(mediaBase_, mediaBase) };
    inline GetPlayInfoResponseBody& setMediaBase(GetPlayInfoResponseBody::MediaBase && mediaBase) { DARABONBA_PTR_SET_RVALUE(mediaBase_, mediaBase) };


    // playInfoList Field Functions 
    bool hasPlayInfoList() const { return this->playInfoList_ != nullptr;};
    void deletePlayInfoList() { this->playInfoList_ = nullptr;};
    inline const vector<GetPlayInfoResponseBody::PlayInfoList> & getPlayInfoList() const { DARABONBA_PTR_GET_CONST(playInfoList_, vector<GetPlayInfoResponseBody::PlayInfoList>) };
    inline vector<GetPlayInfoResponseBody::PlayInfoList> getPlayInfoList() { DARABONBA_PTR_GET(playInfoList_, vector<GetPlayInfoResponseBody::PlayInfoList>) };
    inline GetPlayInfoResponseBody& setPlayInfoList(const vector<GetPlayInfoResponseBody::PlayInfoList> & playInfoList) { DARABONBA_PTR_SET_VALUE(playInfoList_, playInfoList) };
    inline GetPlayInfoResponseBody& setPlayInfoList(vector<GetPlayInfoResponseBody::PlayInfoList> && playInfoList) { DARABONBA_PTR_SET_RVALUE(playInfoList_, playInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPlayInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the media asset.
    shared_ptr<GetPlayInfoResponseBody::MediaBase> mediaBase_ {};
    // The information about the audio or video stream.
    shared_ptr<vector<GetPlayInfoResponseBody::PlayInfoList>> playInfoList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
