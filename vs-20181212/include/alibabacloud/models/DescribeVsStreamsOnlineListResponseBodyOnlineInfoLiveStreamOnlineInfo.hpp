// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSONLINELISTRESPONSEBODYONLINEINFOLIVESTREAMONLINEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSONLINELISTRESPONSEBODYONLINEINFOLIVESTREAMONLINEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PublishDomain, publishDomain_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(PublishUrl, publishUrl_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TranscodeId, transcodeId_);
      DARABONBA_PTR_TO_JSON(Transcoded, transcoded_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PublishDomain, publishDomain_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(PublishUrl, publishUrl_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TranscodeId, transcodeId_);
      DARABONBA_PTR_FROM_JSON(Transcoded, transcoded_);
    };
    DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo() = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo(const DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo &) = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo(DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo &&) = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo() = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& operator=(const DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo &) = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& operator=(DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->domainName_ != nullptr && this->publishDomain_ != nullptr && this->publishTime_ != nullptr && this->publishType_ != nullptr && this->publishUrl_ != nullptr
        && this->streamName_ != nullptr && this->transcodeId_ != nullptr && this->transcoded_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // publishDomain Field Functions 
    bool hasPublishDomain() const { return this->publishDomain_ != nullptr;};
    void deletePublishDomain() { this->publishDomain_ = nullptr;};
    inline string publishDomain() const { DARABONBA_PTR_GET_DEFAULT(publishDomain_, "") };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setPublishDomain(string publishDomain) { DARABONBA_PTR_SET_VALUE(publishDomain_, publishDomain) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline string publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, "") };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setPublishType(string publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // publishUrl Field Functions 
    bool hasPublishUrl() const { return this->publishUrl_ != nullptr;};
    void deletePublishUrl() { this->publishUrl_ = nullptr;};
    inline string publishUrl() const { DARABONBA_PTR_GET_DEFAULT(publishUrl_, "") };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setPublishUrl(string publishUrl) { DARABONBA_PTR_SET_VALUE(publishUrl_, publishUrl) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcodeId Field Functions 
    bool hasTranscodeId() const { return this->transcodeId_ != nullptr;};
    void deleteTranscodeId() { this->transcodeId_ = nullptr;};
    inline string transcodeId() const { DARABONBA_PTR_GET_DEFAULT(transcodeId_, "") };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setTranscodeId(string transcodeId) { DARABONBA_PTR_SET_VALUE(transcodeId_, transcodeId) };


    // transcoded Field Functions 
    bool hasTranscoded() const { return this->transcoded_ != nullptr;};
    void deleteTranscoded() { this->transcoded_ = nullptr;};
    inline string transcoded() const { DARABONBA_PTR_GET_DEFAULT(transcoded_, "") };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo& setTranscoded(string transcoded) { DARABONBA_PTR_SET_VALUE(transcoded_, transcoded) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> publishDomain_ = nullptr;
    std::shared_ptr<string> publishTime_ = nullptr;
    std::shared_ptr<string> publishType_ = nullptr;
    std::shared_ptr<string> publishUrl_ = nullptr;
    std::shared_ptr<string> streamName_ = nullptr;
    std::shared_ptr<string> transcodeId_ = nullptr;
    std::shared_ptr<string> transcoded_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
