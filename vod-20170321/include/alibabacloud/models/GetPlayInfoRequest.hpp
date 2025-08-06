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
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(DigitalWatermarkType, digitalWatermarkType_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
      DARABONBA_PTR_TO_JSON(PlayConfig, playConfig_);
      DARABONBA_PTR_TO_JSON(ReAuthInfo, reAuthInfo_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(Trace, trace_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionType, additionType_);
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(DigitalWatermarkType, digitalWatermarkType_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
      DARABONBA_PTR_FROM_JSON(PlayConfig, playConfig_);
      DARABONBA_PTR_FROM_JSON(ReAuthInfo, reAuthInfo_);
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
    virtual bool empty() const override { this->additionType_ != nullptr
        && this->authTimeout_ != nullptr && this->definition_ != nullptr && this->digitalWatermarkType_ != nullptr && this->formats_ != nullptr && this->outputType_ != nullptr
        && this->playConfig_ != nullptr && this->reAuthInfo_ != nullptr && this->resultType_ != nullptr && this->streamType_ != nullptr && this->trace_ != nullptr
        && this->videoId_ != nullptr; };
    // additionType Field Functions 
    bool hasAdditionType() const { return this->additionType_ != nullptr;};
    void deleteAdditionType() { this->additionType_ = nullptr;};
    inline string additionType() const { DARABONBA_PTR_GET_DEFAULT(additionType_, "") };
    inline GetPlayInfoRequest& setAdditionType(string additionType) { DARABONBA_PTR_SET_VALUE(additionType_, additionType) };


    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t authTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetPlayInfoRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline GetPlayInfoRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // digitalWatermarkType Field Functions 
    bool hasDigitalWatermarkType() const { return this->digitalWatermarkType_ != nullptr;};
    void deleteDigitalWatermarkType() { this->digitalWatermarkType_ = nullptr;};
    inline string digitalWatermarkType() const { DARABONBA_PTR_GET_DEFAULT(digitalWatermarkType_, "") };
    inline GetPlayInfoRequest& setDigitalWatermarkType(string digitalWatermarkType) { DARABONBA_PTR_SET_VALUE(digitalWatermarkType_, digitalWatermarkType) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline string formats() const { DARABONBA_PTR_GET_DEFAULT(formats_, "") };
    inline GetPlayInfoRequest& setFormats(string formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string outputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetPlayInfoRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // playConfig Field Functions 
    bool hasPlayConfig() const { return this->playConfig_ != nullptr;};
    void deletePlayConfig() { this->playConfig_ = nullptr;};
    inline string playConfig() const { DARABONBA_PTR_GET_DEFAULT(playConfig_, "") };
    inline GetPlayInfoRequest& setPlayConfig(string playConfig) { DARABONBA_PTR_SET_VALUE(playConfig_, playConfig) };


    // reAuthInfo Field Functions 
    bool hasReAuthInfo() const { return this->reAuthInfo_ != nullptr;};
    void deleteReAuthInfo() { this->reAuthInfo_ = nullptr;};
    inline string reAuthInfo() const { DARABONBA_PTR_GET_DEFAULT(reAuthInfo_, "") };
    inline GetPlayInfoRequest& setReAuthInfo(string reAuthInfo) { DARABONBA_PTR_SET_VALUE(reAuthInfo_, reAuthInfo) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline GetPlayInfoRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline GetPlayInfoRequest& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // trace Field Functions 
    bool hasTrace() const { return this->trace_ != nullptr;};
    void deleteTrace() { this->trace_ = nullptr;};
    inline string trace() const { DARABONBA_PTR_GET_DEFAULT(trace_, "") };
    inline GetPlayInfoRequest& setTrace(string trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetPlayInfoRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The URL of the masked live comment data. Value: **danmu**.
    // 
    // >  This parameter takes effect only when the `outputType` parameter is set to `cdn`.
    std::shared_ptr<string> additionType_ = nullptr;
    // The validity period of the playback URL. Unit: seconds.
    // 
    // *   If you set OutputType to **cdn**:
    // 
    //     *   The playback URL has a validity period only if URL signing is enabled. Otherwise, the playback URL is permanently valid. For more information about how to enable and configure URL signing, see [URL signing](https://help.aliyun.com/document_detail/86090.html).
    //     *   Minimum value: **1**.
    //     *   Maximum value: unlimited.
    //     *   Default value: The default validity period that is specified in URL signing is used.
    // 
    // *   If you set OutputType to **oss**:
    // 
    //     *   This parameter takes effect only when the ACL of the Object Storage Service (OSS) bucket is private. Otherwise, the playback URL does not expire.
    //     *   Minimum value: **1**.
    //     *   Maximum value: If the media file is stored in the VOD bucket, the maximum validity period is **2592000** (30 days). If the media file is stored in an OSS bucket, the maximum validity period is **129600** (36 hours). This limit is imposed to reduce security risks of the origin server. If you require a longer validity period, set OutputType to **cdn** and configure URL signing to specify a longer validity period.
    //     *   Default value: **3600**.
    std::shared_ptr<int64_t> authTimeout_ = nullptr;
    // The quality of the video stream. Separate multiple qualities with commas (,). Valid values:
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
    // 
    // > *   By default, ApsaraVideo VOD returns video streams in all the preceding qualities.
    // > *   However, video streams for adaptive bitrate streaming are returned only if the PackageSetting parameter is specified in the transcoding template. For more information, see the [PackageSetting parameter in the TranscodeTemplate table](~~52839#title-4fk-cg8-gzx~~).
    std::shared_ptr<string> definition_ = nullptr;
    // The type of the digital watermark. Valid values:
    // 
    // *   TraceMark: tracing watermark
    // *   CopyrightMark: copyright watermark
    std::shared_ptr<string> digitalWatermarkType_ = nullptr;
    // The format of the media stream. Separate multiple formats with commas (,). Valid values:
    // 
    // *   **mp4**
    // *   **m3u8**
    // *   **mp3**
    // *   **flv**
    // *   **mpd**
    // 
    // > *   By default, ApsaraVideo VOD returns video streams in all the preceding formats.
    // >*   However, video streams in the MPD format are returned only if the `dash` container format is specified in the transcoding template. For more information, see the [Container parameter in the TranscodeTemplate table](~~52839#title-7rr-3hj-gy5~~).
    std::shared_ptr<string> formats_ = nullptr;
    // The type of the output URL. Default value: oss. Valid values:
    // 
    // *   **oss**
    // *   **cdn**
    std::shared_ptr<string> outputType_ = nullptr;
    // The custom playback configuration. The value must be a JSON string. You can specify a domain name for playback. For more information, see [PlayConfig](~~86952#section-9g7-s9b-v7z~~).
    // 
    // > *   If you do not set the PlayConfig parameter or the `PlayDomain` parameter that is nested under the PlayConfig parameter, the default domain name specified in ApsaraVideo VOD is used in this operation. If no default domain name is specified, the domain names are queried in reverse chronological order based on the time when the domain names were last modified. To prevent domain name issues, we recommend that you perform the following steps to specify the default playback domain name: Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Configuration Management** > **Media Management** > **Storage**. Find the domain name that you want to configure and click **Manage** in the Actions column. On the page that appears, set the default playback domain name in the **Origin Domain Name** section.
    // > *   If you set the `EncryptType` parameter nested under the PlayConfig parameter to `AliyunVoDEncryption`, the playback URLs of videos encrypted by using Alibaba Cloud proprietary cryptography are not automatically returned to ensure video security. To return playback URLs of videos encrypted by using Alibaba Cloud proprietary cryptography, you must set the `ResultType` parameter to `Multiple`.
    std::shared_ptr<string> playConfig_ = nullptr;
    // The CDN reauthentication configuration. The value must be a JSON string. If CDN reauthentication is enabled, you can use this parameter to specify the `UID` and `rand` fields for URL authentication. For more information, see [URL authentication](https://help.aliyun.com/document_detail/2249352.html).
    std::shared_ptr<string> reAuthInfo_ = nullptr;
    // The type of the data to return. Default value: Single. Valid values:
    // 
    // *   **Single**: Only one latest transcoded stream is returned for each quality and format.
    // *   **Multiple**: All transcoded streams are returned for each quality and format.
    std::shared_ptr<string> resultType_ = nullptr;
    // The type of the media stream. Separate multiple types with commas (,). Valid values:
    // 
    // *   **video**
    // *   **audio**
    // 
    // By default, video and audio streams are returned.
    std::shared_ptr<string> streamType_ = nullptr;
    // The custom digital watermark.
    // 
    // *   If you set `DigitalWatermarkType` to `TraceMark`, specify this parameter to configure the video tracing watermark and return the video stream that contains the watermark. The value can be up to 1,024 characters in length and can contain letters and digits.
    // *   If you set `DigitalWatermarkType` to `CopyrightMark`, specify the **watermark text** that you created for the watermark template for this parameter.`` You can specify this parameter to query and return the video stream that contains the specified watermark text.
    std::shared_ptr<string> trace_ = nullptr;
    // The ID of the media file. You can specify only one ID. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the page that appears, view the media ID.
    // *   Obtain the value of the VideoId parameter in the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you called to upload the audio or video file.
    // *   Obtain the value of VideoId by calling the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation. This method is applicable to files that have been uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
