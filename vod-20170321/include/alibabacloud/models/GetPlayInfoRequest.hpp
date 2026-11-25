// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPlayInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionType, additionType_);
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(CodecName, codecName_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(DigitalWatermarkType, digitalWatermarkType_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
      DARABONBA_PTR_TO_JSON(PlayConfig, playConfig_);
      DARABONBA_PTR_TO_JSON(ReAuthInfo, reAuthInfo_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(Trace, trace_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionType, additionType_);
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(DigitalWatermarkType, digitalWatermarkType_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
      DARABONBA_PTR_FROM_JSON(PlayConfig, playConfig_);
      DARABONBA_PTR_FROM_JSON(ReAuthInfo, reAuthInfo_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(Trace, trace_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetPlayInfoRequest() = default ;
    GetPlayInfoRequest(const GetPlayInfoRequest &) = default ;
    GetPlayInfoRequest(GetPlayInfoRequest &&) = default ;
    GetPlayInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayInfoRequest() = default ;
    GetPlayInfoRequest& operator=(const GetPlayInfoRequest &) = default ;
    GetPlayInfoRequest& operator=(GetPlayInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionType_ == nullptr
        && this->authTimeout_ == nullptr && this->codecName_ == nullptr && this->definition_ == nullptr && this->digitalWatermarkType_ == nullptr && this->formats_ == nullptr
        && this->outputType_ == nullptr && this->playConfig_ == nullptr && this->reAuthInfo_ == nullptr && this->referenceId_ == nullptr && this->resultType_ == nullptr
        && this->streamType_ == nullptr && this->trace_ == nullptr && this->videoId_ == nullptr; };
    // additionType Field Functions 
    bool hasAdditionType() const { return this->additionType_ != nullptr;};
    void deleteAdditionType() { this->additionType_ = nullptr;};
    inline string getAdditionType() const { DARABONBA_PTR_GET_DEFAULT(additionType_, "") };
    inline GetPlayInfoRequest& setAdditionType(string additionType) { DARABONBA_PTR_SET_VALUE(additionType_, additionType) };


    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetPlayInfoRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // codecName Field Functions 
    bool hasCodecName() const { return this->codecName_ != nullptr;};
    void deleteCodecName() { this->codecName_ = nullptr;};
    inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
    inline GetPlayInfoRequest& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline GetPlayInfoRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // digitalWatermarkType Field Functions 
    bool hasDigitalWatermarkType() const { return this->digitalWatermarkType_ != nullptr;};
    void deleteDigitalWatermarkType() { this->digitalWatermarkType_ = nullptr;};
    inline string getDigitalWatermarkType() const { DARABONBA_PTR_GET_DEFAULT(digitalWatermarkType_, "") };
    inline GetPlayInfoRequest& setDigitalWatermarkType(string digitalWatermarkType) { DARABONBA_PTR_SET_VALUE(digitalWatermarkType_, digitalWatermarkType) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline string getFormats() const { DARABONBA_PTR_GET_DEFAULT(formats_, "") };
    inline GetPlayInfoRequest& setFormats(string formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetPlayInfoRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // playConfig Field Functions 
    bool hasPlayConfig() const { return this->playConfig_ != nullptr;};
    void deletePlayConfig() { this->playConfig_ = nullptr;};
    inline string getPlayConfig() const { DARABONBA_PTR_GET_DEFAULT(playConfig_, "") };
    inline GetPlayInfoRequest& setPlayConfig(string playConfig) { DARABONBA_PTR_SET_VALUE(playConfig_, playConfig) };


    // reAuthInfo Field Functions 
    bool hasReAuthInfo() const { return this->reAuthInfo_ != nullptr;};
    void deleteReAuthInfo() { this->reAuthInfo_ = nullptr;};
    inline string getReAuthInfo() const { DARABONBA_PTR_GET_DEFAULT(reAuthInfo_, "") };
    inline GetPlayInfoRequest& setReAuthInfo(string reAuthInfo) { DARABONBA_PTR_SET_VALUE(reAuthInfo_, reAuthInfo) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline GetPlayInfoRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline GetPlayInfoRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline GetPlayInfoRequest& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // trace Field Functions 
    bool hasTrace() const { return this->trace_ != nullptr;};
    void deleteTrace() { this->trace_ = nullptr;};
    inline string getTrace() const { DARABONBA_PTR_GET_DEFAULT(trace_, "") };
    inline GetPlayInfoRequest& setTrace(string trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetPlayInfoRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The URL of the live comment mask data. Valid value: **danmu**.
    // 
    // > This parameter takes effect only when OutputType is set to cdn.
    shared_ptr<string> additionType_ {};
    // The validity period of the playback URL. Unit: seconds.
    // 
    // - When OutputType is set to **cdn**:
    // 
    //     - The playback URL expires periodically only if URL authentication is enabled. Otherwise, the URL is permanently valid. For more information about how to enable and configure URL authentication, refer to [URL authentication](https://help.aliyun.com/document_detail/86090.html).
    //     - Minimum value: **1**.
    //     - Maximum value: unlimited.
    //     - Default value: If this parameter is not specified, the default validity period configured for URL authentication is used.
    // 
    // - When OutputType is set to **oss**:
    // 
    //     - The playback URL expires periodically only if the storage permission is set to private. Otherwise, the URL is permanently valid.
    //     - Minimum value: **1**.
    //     - Maximum value: To reduce security risks of the origin server, the maximum value is **604800** (7 days) when the audio or video file is stored in an ApsaraVideo VOD bucket, and **129600** (36 hours) when the file is stored in a user-owned OSS bucket. If the maximum value does not meet your requirements, you can set OutputType to **cdn** and configure URL authentication to set a longer validity period.
    //     - Default value: If this parameter is not specified, the value is **3600**.
    shared_ptr<int64_t> authTimeout_ {};
    // The codec.
    shared_ptr<string> codecName_ {};
    // The definition of the video stream. Separate multiple definitions with commas (,). Valid values:
    // 
    // - **FD**: fluent.
    // - **LD**: standard definition.
    // - **SD**: high definition.
    // - **HD**: ultra-high definition.
    // - **OD**: original definition.
    // - **2K**: 2K.
    // - **4K**: 4K.
    // - **SQ**: standard sound quality.
    // - **HQ**: high sound quality.
    // - **AUTO**: adaptive bitrate.
    // 
    // > - By default, streams of all definitions are retrieved.
    // > - When a tracing watermark is generated, this parameter is required and must be consistent with the definition configured for tracing watermark transcoding.
    // > - The AUTO format is output only when transcoding packaging is configured in the transcoding template. For more information, refer to [PackageSetting: transcoding packaging settings](~~52839#title-4fk-cg8-gzx~~).
    shared_ptr<string> definition_ {};
    // The digital watermarking type. Valid values:
    // 
    // - TraceMark: tracing watermark.
    // - CopyrightMark: copyright watermark.
    shared_ptr<string> digitalWatermarkType_ {};
    // The format of the media stream. Separate multiple formats with commas (,). Valid values:
    // 
    // - **mp4**
    // - **m3u8**
    // - **mp3**
    // - **flv**
    // - **mpd**
    // 
    // 
    // > - By default, streams of all formats are retrieved.
    // > - The mpd format is output only when the dash container format is configured in the transcoding template. For more information, refer to [Container: container format](~~52839#title-7rr-3hj-gy5~~).
    shared_ptr<string> formats_ {};
    // The type of the output URL. Valid values:
    // 
    // - **oss**: the back-to-origin URL.
    // - **cdn** (default): the accelerated URL.
    shared_ptr<string> outputType_ {};
    // The custom playback settings. The value is a JSON string. You can specify the domain name for playback. For more information about how to construct the parameter, refer to [PlayConfig](~~86952#section-9g7-s9b-v7z~~).
    // 
    // > - If PlayConfig is not specified or the PlayDomain field in PlayConfig is not specified, the operation uses the default domain name configured in ApsaraVideo VOD by default. If no default domain name is configured, the operation queries domain names in descending order of modification time and uses the most recently modified domain name as the playback domain name. To prevent an unexpected domain name from being returned, we recommend that you configure a default playback domain name. You can log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Asset Management Configuration** > **Storage Management** > **Manage** > **Domain Names that Route Back-to-origin Traffic to This Storage Address** to configure the default playback domain name.
    // > - When the EncryptType parameter in PlayConfig is set to AliyunVoDEncryption, the playback URL of the private encrypted stream is not returned by default to ensure video security. To return the playback URL of the private encrypted stream, you must also set the ResultType parameter to Multiple.
    shared_ptr<string> playConfig_ {};
    // The CDN reauthentication parameter, which is a JSON string. When type A signing of URL authentication is enabled, you can use this parameter to set the uid and rand values of the authenticated URL. For more information, refer to [Type A signing](https://help.aliyun.com/document_detail/2249352.html).
    shared_ptr<string> reAuthInfo_ {};
    // The custom ID. The ID must be 6 to 64 characters in length and can contain only lowercase letters, uppercase letters, digits, hyphens (-), and underscores (_). The ID must be unique per user.
    shared_ptr<string> referenceId_ {};
    // The type of the returned data. Valid values:
    // 
    // - **Single** (default): returns only the latest transcoded stream for each definition and format.
    // - **Multiple**: returns all transcoded streams for each definition and format.
    shared_ptr<string> resultType_ {};
    // The type of the media stream. Separate multiple types with commas (,). Valid values:
    // 
    // - **video**: video.
    // - **audio**: audio.
    // 
    // By default, streams of all types are retrieved.
    shared_ptr<string> streamType_ {};
    // The custom digital watermarking information.
    // - When DigitalWatermarkType is set to TraceMark, you can pass this parameter to set the tracing watermark information for the video and return the video stream that contains the watermark information. Only English letters, digits, and Chinese characters are supported. A maximum of 1,024 characters are supported.
    // - When DigitalWatermarkType is set to CopyrightMark, Trace corresponds to the **Watermark Text** set when the watermark template is created. By passing this parameter, you can query and return the video stream with the specified watermark text.
    shared_ptr<string> trace_ {};
    // The ID of the audio or video file. You can specify only one ID. You can obtain the ID by using one of the following methods:
    // - For an audio or video file uploaded in the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Library** > **Audio/Video** to view the ID.
    // - When you upload an audio or video file by calling the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation, the ID is the value of the VideoId response parameter.
    // - After an audio or video file is uploaded, you can call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the ID, which is the value of the VideoId response parameter.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
