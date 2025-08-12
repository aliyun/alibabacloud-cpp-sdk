// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSONLINELISTRESPONSEBODYONLINEINFOLIVESTREAMONLINEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSONLINELISTRESPONSEBODYONLINEINFOLIVESTREAMONLINEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AudioCodecId, audioCodecId_);
      DARABONBA_PTR_TO_JSON(AudioDataRate, audioDataRate_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(PublishDomain, publishDomain_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(PublishUrl, publishUrl_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(Transcoded, transcoded_);
      DARABONBA_PTR_TO_JSON(VideoCodecId, videoCodecId_);
      DARABONBA_PTR_TO_JSON(VideoDataRate, videoDataRate_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AudioCodecId, audioCodecId_);
      DARABONBA_PTR_FROM_JSON(AudioDataRate, audioDataRate_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(PublishDomain, publishDomain_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(PublishUrl, publishUrl_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(Transcoded, transcoded_);
      DARABONBA_PTR_FROM_JSON(VideoCodecId, videoCodecId_);
      DARABONBA_PTR_FROM_JSON(VideoDataRate, videoDataRate_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo() = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo(const DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo &) = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo(DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo &&) = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo() = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& operator=(const DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo &) = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& operator=(DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->audioCodecId_ != nullptr && this->audioDataRate_ != nullptr && this->clientIp_ != nullptr && this->domainName_ != nullptr && this->frameRate_ != nullptr
        && this->height_ != nullptr && this->publishDomain_ != nullptr && this->publishTime_ != nullptr && this->publishType_ != nullptr && this->publishUrl_ != nullptr
        && this->serverIp_ != nullptr && this->streamName_ != nullptr && this->transcoded_ != nullptr && this->videoCodecId_ != nullptr && this->videoDataRate_ != nullptr
        && this->width_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // audioCodecId Field Functions 
    bool hasAudioCodecId() const { return this->audioCodecId_ != nullptr;};
    void deleteAudioCodecId() { this->audioCodecId_ = nullptr;};
    inline int32_t audioCodecId() const { DARABONBA_PTR_GET_DEFAULT(audioCodecId_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setAudioCodecId(int32_t audioCodecId) { DARABONBA_PTR_SET_VALUE(audioCodecId_, audioCodecId) };


    // audioDataRate Field Functions 
    bool hasAudioDataRate() const { return this->audioDataRate_ != nullptr;};
    void deleteAudioDataRate() { this->audioDataRate_ = nullptr;};
    inline int32_t audioDataRate() const { DARABONBA_PTR_GET_DEFAULT(audioDataRate_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setAudioDataRate(int32_t audioDataRate) { DARABONBA_PTR_SET_VALUE(audioDataRate_, audioDataRate) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline int32_t frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // publishDomain Field Functions 
    bool hasPublishDomain() const { return this->publishDomain_ != nullptr;};
    void deletePublishDomain() { this->publishDomain_ = nullptr;};
    inline string publishDomain() const { DARABONBA_PTR_GET_DEFAULT(publishDomain_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setPublishDomain(string publishDomain) { DARABONBA_PTR_SET_VALUE(publishDomain_, publishDomain) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline string publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setPublishType(string publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // publishUrl Field Functions 
    bool hasPublishUrl() const { return this->publishUrl_ != nullptr;};
    void deletePublishUrl() { this->publishUrl_ = nullptr;};
    inline string publishUrl() const { DARABONBA_PTR_GET_DEFAULT(publishUrl_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setPublishUrl(string publishUrl) { DARABONBA_PTR_SET_VALUE(publishUrl_, publishUrl) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcoded Field Functions 
    bool hasTranscoded() const { return this->transcoded_ != nullptr;};
    void deleteTranscoded() { this->transcoded_ = nullptr;};
    inline string transcoded() const { DARABONBA_PTR_GET_DEFAULT(transcoded_, "") };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setTranscoded(string transcoded) { DARABONBA_PTR_SET_VALUE(transcoded_, transcoded) };


    // videoCodecId Field Functions 
    bool hasVideoCodecId() const { return this->videoCodecId_ != nullptr;};
    void deleteVideoCodecId() { this->videoCodecId_ = nullptr;};
    inline int32_t videoCodecId() const { DARABONBA_PTR_GET_DEFAULT(videoCodecId_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setVideoCodecId(int32_t videoCodecId) { DARABONBA_PTR_SET_VALUE(videoCodecId_, videoCodecId) };


    // videoDataRate Field Functions 
    bool hasVideoDataRate() const { return this->videoDataRate_ != nullptr;};
    void deleteVideoDataRate() { this->videoDataRate_ = nullptr;};
    inline int32_t videoDataRate() const { DARABONBA_PTR_GET_DEFAULT(videoDataRate_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setVideoDataRate(int32_t videoDataRate) { DARABONBA_PTR_SET_VALUE(videoDataRate_, videoDataRate) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the audio codec.
    std::shared_ptr<int32_t> audioCodecId_ = nullptr;
    // The audio bitrate of the live stream. Unit: Kbit/s.
    // 
    // >  This parameter can be returned after you submit a ticket for whitelist configuration. For more information about how to submit a ticket, see Contact us.
    std::shared_ptr<int32_t> audioDataRate_ = nullptr;
    // The IP address of the client for stream ingest.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The frame rate. Unit: FPS.
    std::shared_ptr<int32_t> frameRate_ = nullptr;
    // The height of the video resolution. Unit: pixels.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The ingest domain. If live center ingest was used, the streaming domain is returned.
    std::shared_ptr<string> publishDomain_ = nullptr;
    // The start time of stream ingest. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> publishTime_ = nullptr;
    // The ingest type. Valid values:
    // 
    // *   **edge**: edge ingest.
    // *   **center**: live center ingest.
    std::shared_ptr<string> publishType_ = nullptr;
    // The complete URL that was used to ingest the stream.
    std::shared_ptr<string> publishUrl_ = nullptr;
    // The IP address of the ingest node.
    std::shared_ptr<string> serverIp_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // Indicates whether the stream was transcoded. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> transcoded_ = nullptr;
    // The ID of the video codec.
    std::shared_ptr<int32_t> videoCodecId_ = nullptr;
    // The video bitrate of the live stream. Unit: Kbit/s.
    // 
    // >  This parameter can be returned after you submit a ticket for whitelist configuration. For more information about how to submit a ticket, see Contact us.
    std::shared_ptr<int32_t> videoDataRate_ = nullptr;
    // The width of the video resolution. Unit: pixels.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
