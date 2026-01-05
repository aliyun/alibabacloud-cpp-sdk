// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSPUBLISHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSPUBLISHLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsPublishListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsPublishListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublishInfo, publishInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsPublishListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublishInfo, publishInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveStreamsPublishListResponseBody() = default ;
    DescribeLiveStreamsPublishListResponseBody(const DescribeLiveStreamsPublishListResponseBody &) = default ;
    DescribeLiveStreamsPublishListResponseBody(DescribeLiveStreamsPublishListResponseBody &&) = default ;
    DescribeLiveStreamsPublishListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsPublishListResponseBody() = default ;
    DescribeLiveStreamsPublishListResponseBody& operator=(const DescribeLiveStreamsPublishListResponseBody &) = default ;
    DescribeLiveStreamsPublishListResponseBody& operator=(DescribeLiveStreamsPublishListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublishInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublishInfo& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamPublishInfo, liveStreamPublishInfo_);
      };
      friend void from_json(const Darabonba::Json& j, PublishInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamPublishInfo, liveStreamPublishInfo_);
      };
      PublishInfo() = default ;
      PublishInfo(const PublishInfo &) = default ;
      PublishInfo(PublishInfo &&) = default ;
      PublishInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublishInfo() = default ;
      PublishInfo& operator=(const PublishInfo &) = default ;
      PublishInfo& operator=(PublishInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamPublishInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamPublishInfo& obj) { 
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
        friend void from_json(const Darabonba::Json& j, LiveStreamPublishInfo& obj) { 
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
        LiveStreamPublishInfo() = default ;
        LiveStreamPublishInfo(const LiveStreamPublishInfo &) = default ;
        LiveStreamPublishInfo(LiveStreamPublishInfo &&) = default ;
        LiveStreamPublishInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamPublishInfo() = default ;
        LiveStreamPublishInfo& operator=(const LiveStreamPublishInfo &) = default ;
        LiveStreamPublishInfo& operator=(LiveStreamPublishInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliInnerErrorFlags_ == nullptr
        && this->appName_ == nullptr && this->clientAddr_ == nullptr && this->domainName_ == nullptr && this->edgeNodeAddr_ == nullptr && this->publishDomain_ == nullptr
        && this->publishTime_ == nullptr && this->publishType_ == nullptr && this->publishUrl_ == nullptr && this->stopTime_ == nullptr && this->streamName_ == nullptr
        && this->streamUrl_ == nullptr && this->transcodeId_ == nullptr && this->transcoded_ == nullptr; };
        // aliInnerErrorFlags Field Functions 
        bool hasAliInnerErrorFlags() const { return this->aliInnerErrorFlags_ != nullptr;};
        void deleteAliInnerErrorFlags() { this->aliInnerErrorFlags_ = nullptr;};
        inline string getAliInnerErrorFlags() const { DARABONBA_PTR_GET_DEFAULT(aliInnerErrorFlags_, "") };
        inline LiveStreamPublishInfo& setAliInnerErrorFlags(string aliInnerErrorFlags) { DARABONBA_PTR_SET_VALUE(aliInnerErrorFlags_, aliInnerErrorFlags) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveStreamPublishInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // clientAddr Field Functions 
        bool hasClientAddr() const { return this->clientAddr_ != nullptr;};
        void deleteClientAddr() { this->clientAddr_ = nullptr;};
        inline string getClientAddr() const { DARABONBA_PTR_GET_DEFAULT(clientAddr_, "") };
        inline LiveStreamPublishInfo& setClientAddr(string clientAddr) { DARABONBA_PTR_SET_VALUE(clientAddr_, clientAddr) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveStreamPublishInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // edgeNodeAddr Field Functions 
        bool hasEdgeNodeAddr() const { return this->edgeNodeAddr_ != nullptr;};
        void deleteEdgeNodeAddr() { this->edgeNodeAddr_ = nullptr;};
        inline string getEdgeNodeAddr() const { DARABONBA_PTR_GET_DEFAULT(edgeNodeAddr_, "") };
        inline LiveStreamPublishInfo& setEdgeNodeAddr(string edgeNodeAddr) { DARABONBA_PTR_SET_VALUE(edgeNodeAddr_, edgeNodeAddr) };


        // publishDomain Field Functions 
        bool hasPublishDomain() const { return this->publishDomain_ != nullptr;};
        void deletePublishDomain() { this->publishDomain_ = nullptr;};
        inline string getPublishDomain() const { DARABONBA_PTR_GET_DEFAULT(publishDomain_, "") };
        inline LiveStreamPublishInfo& setPublishDomain(string publishDomain) { DARABONBA_PTR_SET_VALUE(publishDomain_, publishDomain) };


        // publishTime Field Functions 
        bool hasPublishTime() const { return this->publishTime_ != nullptr;};
        void deletePublishTime() { this->publishTime_ = nullptr;};
        inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
        inline LiveStreamPublishInfo& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline string getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, "") };
        inline LiveStreamPublishInfo& setPublishType(string publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // publishUrl Field Functions 
        bool hasPublishUrl() const { return this->publishUrl_ != nullptr;};
        void deletePublishUrl() { this->publishUrl_ = nullptr;};
        inline string getPublishUrl() const { DARABONBA_PTR_GET_DEFAULT(publishUrl_, "") };
        inline LiveStreamPublishInfo& setPublishUrl(string publishUrl) { DARABONBA_PTR_SET_VALUE(publishUrl_, publishUrl) };


        // stopTime Field Functions 
        bool hasStopTime() const { return this->stopTime_ != nullptr;};
        void deleteStopTime() { this->stopTime_ = nullptr;};
        inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
        inline LiveStreamPublishInfo& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveStreamPublishInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // streamUrl Field Functions 
        bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
        void deleteStreamUrl() { this->streamUrl_ = nullptr;};
        inline string getStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
        inline LiveStreamPublishInfo& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


        // transcodeId Field Functions 
        bool hasTranscodeId() const { return this->transcodeId_ != nullptr;};
        void deleteTranscodeId() { this->transcodeId_ = nullptr;};
        inline string getTranscodeId() const { DARABONBA_PTR_GET_DEFAULT(transcodeId_, "") };
        inline LiveStreamPublishInfo& setTranscodeId(string transcodeId) { DARABONBA_PTR_SET_VALUE(transcodeId_, transcodeId) };


        // transcoded Field Functions 
        bool hasTranscoded() const { return this->transcoded_ != nullptr;};
        void deleteTranscoded() { this->transcoded_ = nullptr;};
        inline string getTranscoded() const { DARABONBA_PTR_GET_DEFAULT(transcoded_, "") };
        inline LiveStreamPublishInfo& setTranscoded(string transcoded) { DARABONBA_PTR_SET_VALUE(transcoded_, transcoded) };


      protected:
        // Internal error
        shared_ptr<string> aliInnerErrorFlags_ {};
        // The name of the application to which the live stream belongs.
        shared_ptr<string> appName_ {};
        // The IP address of the client that ingested the live stream.
        shared_ptr<string> clientAddr_ {};
        // The ingest domain or main streaming domain.
        shared_ptr<string> domainName_ {};
        // The IP address of the CDN point of presence (POP) to which the stream was ingested.
        shared_ptr<string> edgeNodeAddr_ {};
        // The ingest domain.
        shared_ptr<string> publishDomain_ {};
        // The time when the stream ingest was started. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> publishTime_ {};
        // The type of the stream ingest. Valid values:
        // 
        // *   **edge**: edge ingest
        // *   **center**: live center ingest
        shared_ptr<string> publishType_ {};
        // The complete ingest URL.
        shared_ptr<string> publishUrl_ {};
        // The time when the stream ingest was stopped. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> stopTime_ {};
        // The name of the live stream.
        shared_ptr<string> streamName_ {};
        // The streaming URL.
        shared_ptr<string> streamUrl_ {};
        // The ID of the transcoding template.
        // 
        // >  This parameter is not returned if the value of the Transcoded parameter is no.
        shared_ptr<string> transcodeId_ {};
        // Indicates whether the stream was a transcoded stream.
        shared_ptr<string> transcoded_ {};
      };

      virtual bool empty() const override { return this->liveStreamPublishInfo_ == nullptr; };
      // liveStreamPublishInfo Field Functions 
      bool hasLiveStreamPublishInfo() const { return this->liveStreamPublishInfo_ != nullptr;};
      void deleteLiveStreamPublishInfo() { this->liveStreamPublishInfo_ = nullptr;};
      inline const vector<PublishInfo::LiveStreamPublishInfo> & getLiveStreamPublishInfo() const { DARABONBA_PTR_GET_CONST(liveStreamPublishInfo_, vector<PublishInfo::LiveStreamPublishInfo>) };
      inline vector<PublishInfo::LiveStreamPublishInfo> getLiveStreamPublishInfo() { DARABONBA_PTR_GET(liveStreamPublishInfo_, vector<PublishInfo::LiveStreamPublishInfo>) };
      inline PublishInfo& setLiveStreamPublishInfo(const vector<PublishInfo::LiveStreamPublishInfo> & liveStreamPublishInfo) { DARABONBA_PTR_SET_VALUE(liveStreamPublishInfo_, liveStreamPublishInfo) };
      inline PublishInfo& setLiveStreamPublishInfo(vector<PublishInfo::LiveStreamPublishInfo> && liveStreamPublishInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamPublishInfo_, liveStreamPublishInfo) };


    protected:
      shared_ptr<vector<PublishInfo::LiveStreamPublishInfo>> liveStreamPublishInfo_ {};
    };

    virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->publishInfo_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveStreamsPublishListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamsPublishListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publishInfo Field Functions 
    bool hasPublishInfo() const { return this->publishInfo_ != nullptr;};
    void deletePublishInfo() { this->publishInfo_ = nullptr;};
    inline const DescribeLiveStreamsPublishListResponseBody::PublishInfo & getPublishInfo() const { DARABONBA_PTR_GET_CONST(publishInfo_, DescribeLiveStreamsPublishListResponseBody::PublishInfo) };
    inline DescribeLiveStreamsPublishListResponseBody::PublishInfo getPublishInfo() { DARABONBA_PTR_GET(publishInfo_, DescribeLiveStreamsPublishListResponseBody::PublishInfo) };
    inline DescribeLiveStreamsPublishListResponseBody& setPublishInfo(const DescribeLiveStreamsPublishListResponseBody::PublishInfo & publishInfo) { DARABONBA_PTR_SET_VALUE(publishInfo_, publishInfo) };
    inline DescribeLiveStreamsPublishListResponseBody& setPublishInfo(DescribeLiveStreamsPublishListResponseBody::PublishInfo && publishInfo) { DARABONBA_PTR_SET_RVALUE(publishInfo_, publishInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsPublishListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveStreamsPublishListResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveStreamsPublishListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The information about the stream ingest records.
    shared_ptr<DescribeLiveStreamsPublishListResponseBody::PublishInfo> publishInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that meet the specified conditions.
    shared_ptr<int32_t> totalNum_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
