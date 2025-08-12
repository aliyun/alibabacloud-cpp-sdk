// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSPUBLISHLISTRESPONSEBODYPUBLISHINFOLIVESTREAMPUBLISHINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSPUBLISHLISTRESPONSEBODYPUBLISHINFOLIVESTREAMPUBLISHINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AliInnerErrorFlags, aliInnerErrorFlags_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClientAddr, clientAddr_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EdgeNodeAddr, edgeNodeAddr_);
      DARABONBA_PTR_TO_JSON(PublishDomain, publishDomain_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(PublishUrl, publishUrl_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
      DARABONBA_PTR_TO_JSON(TranscodeId, transcodeId_);
      DARABONBA_PTR_TO_JSON(Transcoded, transcoded_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AliInnerErrorFlags, aliInnerErrorFlags_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClientAddr, clientAddr_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EdgeNodeAddr, edgeNodeAddr_);
      DARABONBA_PTR_FROM_JSON(PublishDomain, publishDomain_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(PublishUrl, publishUrl_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
      DARABONBA_PTR_FROM_JSON(TranscodeId, transcodeId_);
      DARABONBA_PTR_FROM_JSON(Transcoded, transcoded_);
    };
    DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo() = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo(const DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo &) = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo(DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo &&) = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo() = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& operator=(const DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo &) = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& operator=(DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliInnerErrorFlags_ != nullptr
        && this->appName_ != nullptr && this->clientAddr_ != nullptr && this->domainName_ != nullptr && this->edgeNodeAddr_ != nullptr && this->publishDomain_ != nullptr
        && this->publishTime_ != nullptr && this->publishType_ != nullptr && this->publishUrl_ != nullptr && this->stopTime_ != nullptr && this->streamName_ != nullptr
        && this->streamUrl_ != nullptr && this->transcodeId_ != nullptr && this->transcoded_ != nullptr; };
    // aliInnerErrorFlags Field Functions 
    bool hasAliInnerErrorFlags() const { return this->aliInnerErrorFlags_ != nullptr;};
    void deleteAliInnerErrorFlags() { this->aliInnerErrorFlags_ = nullptr;};
    inline string aliInnerErrorFlags() const { DARABONBA_PTR_GET_DEFAULT(aliInnerErrorFlags_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setAliInnerErrorFlags(string aliInnerErrorFlags) { DARABONBA_PTR_SET_VALUE(aliInnerErrorFlags_, aliInnerErrorFlags) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clientAddr Field Functions 
    bool hasClientAddr() const { return this->clientAddr_ != nullptr;};
    void deleteClientAddr() { this->clientAddr_ = nullptr;};
    inline string clientAddr() const { DARABONBA_PTR_GET_DEFAULT(clientAddr_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setClientAddr(string clientAddr) { DARABONBA_PTR_SET_VALUE(clientAddr_, clientAddr) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // edgeNodeAddr Field Functions 
    bool hasEdgeNodeAddr() const { return this->edgeNodeAddr_ != nullptr;};
    void deleteEdgeNodeAddr() { this->edgeNodeAddr_ = nullptr;};
    inline string edgeNodeAddr() const { DARABONBA_PTR_GET_DEFAULT(edgeNodeAddr_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setEdgeNodeAddr(string edgeNodeAddr) { DARABONBA_PTR_SET_VALUE(edgeNodeAddr_, edgeNodeAddr) };


    // publishDomain Field Functions 
    bool hasPublishDomain() const { return this->publishDomain_ != nullptr;};
    void deletePublishDomain() { this->publishDomain_ = nullptr;};
    inline string publishDomain() const { DARABONBA_PTR_GET_DEFAULT(publishDomain_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setPublishDomain(string publishDomain) { DARABONBA_PTR_SET_VALUE(publishDomain_, publishDomain) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline string publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setPublishType(string publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // publishUrl Field Functions 
    bool hasPublishUrl() const { return this->publishUrl_ != nullptr;};
    void deletePublishUrl() { this->publishUrl_ = nullptr;};
    inline string publishUrl() const { DARABONBA_PTR_GET_DEFAULT(publishUrl_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setPublishUrl(string publishUrl) { DARABONBA_PTR_SET_VALUE(publishUrl_, publishUrl) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


    // transcodeId Field Functions 
    bool hasTranscodeId() const { return this->transcodeId_ != nullptr;};
    void deleteTranscodeId() { this->transcodeId_ = nullptr;};
    inline string transcodeId() const { DARABONBA_PTR_GET_DEFAULT(transcodeId_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setTranscodeId(string transcodeId) { DARABONBA_PTR_SET_VALUE(transcodeId_, transcodeId) };


    // transcoded Field Functions 
    bool hasTranscoded() const { return this->transcoded_ != nullptr;};
    void deleteTranscoded() { this->transcoded_ = nullptr;};
    inline string transcoded() const { DARABONBA_PTR_GET_DEFAULT(transcoded_, "") };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo& setTranscoded(string transcoded) { DARABONBA_PTR_SET_VALUE(transcoded_, transcoded) };


  protected:
    // Internal error
    std::shared_ptr<string> aliInnerErrorFlags_ = nullptr;
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The IP address of the client that ingested the live stream.
    std::shared_ptr<string> clientAddr_ = nullptr;
    // The ingest domain or main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The IP address of the CDN point of presence (POP) to which the stream was ingested.
    std::shared_ptr<string> edgeNodeAddr_ = nullptr;
    // The ingest domain.
    std::shared_ptr<string> publishDomain_ = nullptr;
    // The time when the stream ingest was started. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> publishTime_ = nullptr;
    // The type of the stream ingest. Valid values:
    // 
    // *   **edge**: edge ingest
    // *   **center**: live center ingest
    std::shared_ptr<string> publishType_ = nullptr;
    // The complete ingest URL.
    std::shared_ptr<string> publishUrl_ = nullptr;
    // The time when the stream ingest was stopped. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> stopTime_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The streaming URL.
    std::shared_ptr<string> streamUrl_ = nullptr;
    // The ID of the transcoding template.
    // 
    // >  This parameter is not returned if the value of the Transcoded parameter is no.
    std::shared_ptr<string> transcodeId_ = nullptr;
    // Indicates whether the stream was a transcoded stream.
    std::shared_ptr<string> transcoded_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
