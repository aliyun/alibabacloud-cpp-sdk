// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSONLINELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSONLINELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsOnlineListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsOnlineListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineInfo, onlineInfo_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsOnlineListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineInfo, onlineInfo_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeVsStreamsOnlineListResponseBody() = default ;
    DescribeVsStreamsOnlineListResponseBody(const DescribeVsStreamsOnlineListResponseBody &) = default ;
    DescribeVsStreamsOnlineListResponseBody(DescribeVsStreamsOnlineListResponseBody &&) = default ;
    DescribeVsStreamsOnlineListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsOnlineListResponseBody() = default ;
    DescribeVsStreamsOnlineListResponseBody& operator=(const DescribeVsStreamsOnlineListResponseBody &) = default ;
    DescribeVsStreamsOnlineListResponseBody& operator=(DescribeVsStreamsOnlineListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnlineInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnlineInfo& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamOnlineInfo, liveStreamOnlineInfo_);
      };
      friend void from_json(const Darabonba::Json& j, OnlineInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamOnlineInfo, liveStreamOnlineInfo_);
      };
      OnlineInfo() = default ;
      OnlineInfo(const OnlineInfo &) = default ;
      OnlineInfo(OnlineInfo &&) = default ;
      OnlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnlineInfo() = default ;
      OnlineInfo& operator=(const OnlineInfo &) = default ;
      OnlineInfo& operator=(OnlineInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamOnlineInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamOnlineInfo& obj) { 
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
        friend void from_json(const Darabonba::Json& j, LiveStreamOnlineInfo& obj) { 
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
        LiveStreamOnlineInfo() = default ;
        LiveStreamOnlineInfo(const LiveStreamOnlineInfo &) = default ;
        LiveStreamOnlineInfo(LiveStreamOnlineInfo &&) = default ;
        LiveStreamOnlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamOnlineInfo() = default ;
        LiveStreamOnlineInfo& operator=(const LiveStreamOnlineInfo &) = default ;
        LiveStreamOnlineInfo& operator=(LiveStreamOnlineInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->publishDomain_ == nullptr && this->publishTime_ == nullptr && this->publishType_ == nullptr && this->publishUrl_ == nullptr
        && this->streamName_ == nullptr && this->transcodeId_ == nullptr && this->transcoded_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveStreamOnlineInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveStreamOnlineInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // publishDomain Field Functions 
        bool hasPublishDomain() const { return this->publishDomain_ != nullptr;};
        void deletePublishDomain() { this->publishDomain_ = nullptr;};
        inline string getPublishDomain() const { DARABONBA_PTR_GET_DEFAULT(publishDomain_, "") };
        inline LiveStreamOnlineInfo& setPublishDomain(string publishDomain) { DARABONBA_PTR_SET_VALUE(publishDomain_, publishDomain) };


        // publishTime Field Functions 
        bool hasPublishTime() const { return this->publishTime_ != nullptr;};
        void deletePublishTime() { this->publishTime_ = nullptr;};
        inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
        inline LiveStreamOnlineInfo& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline string getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, "") };
        inline LiveStreamOnlineInfo& setPublishType(string publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // publishUrl Field Functions 
        bool hasPublishUrl() const { return this->publishUrl_ != nullptr;};
        void deletePublishUrl() { this->publishUrl_ = nullptr;};
        inline string getPublishUrl() const { DARABONBA_PTR_GET_DEFAULT(publishUrl_, "") };
        inline LiveStreamOnlineInfo& setPublishUrl(string publishUrl) { DARABONBA_PTR_SET_VALUE(publishUrl_, publishUrl) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveStreamOnlineInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // transcodeId Field Functions 
        bool hasTranscodeId() const { return this->transcodeId_ != nullptr;};
        void deleteTranscodeId() { this->transcodeId_ = nullptr;};
        inline string getTranscodeId() const { DARABONBA_PTR_GET_DEFAULT(transcodeId_, "") };
        inline LiveStreamOnlineInfo& setTranscodeId(string transcodeId) { DARABONBA_PTR_SET_VALUE(transcodeId_, transcodeId) };


        // transcoded Field Functions 
        bool hasTranscoded() const { return this->transcoded_ != nullptr;};
        void deleteTranscoded() { this->transcoded_ = nullptr;};
        inline string getTranscoded() const { DARABONBA_PTR_GET_DEFAULT(transcoded_, "") };
        inline LiveStreamOnlineInfo& setTranscoded(string transcoded) { DARABONBA_PTR_SET_VALUE(transcoded_, transcoded) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> publishDomain_ {};
        shared_ptr<string> publishTime_ {};
        shared_ptr<string> publishType_ {};
        shared_ptr<string> publishUrl_ {};
        shared_ptr<string> streamName_ {};
        shared_ptr<string> transcodeId_ {};
        shared_ptr<string> transcoded_ {};
      };

      virtual bool empty() const override { return this->liveStreamOnlineInfo_ == nullptr; };
      // liveStreamOnlineInfo Field Functions 
      bool hasLiveStreamOnlineInfo() const { return this->liveStreamOnlineInfo_ != nullptr;};
      void deleteLiveStreamOnlineInfo() { this->liveStreamOnlineInfo_ = nullptr;};
      inline const vector<OnlineInfo::LiveStreamOnlineInfo> & getLiveStreamOnlineInfo() const { DARABONBA_PTR_GET_CONST(liveStreamOnlineInfo_, vector<OnlineInfo::LiveStreamOnlineInfo>) };
      inline vector<OnlineInfo::LiveStreamOnlineInfo> getLiveStreamOnlineInfo() { DARABONBA_PTR_GET(liveStreamOnlineInfo_, vector<OnlineInfo::LiveStreamOnlineInfo>) };
      inline OnlineInfo& setLiveStreamOnlineInfo(const vector<OnlineInfo::LiveStreamOnlineInfo> & liveStreamOnlineInfo) { DARABONBA_PTR_SET_VALUE(liveStreamOnlineInfo_, liveStreamOnlineInfo) };
      inline OnlineInfo& setLiveStreamOnlineInfo(vector<OnlineInfo::LiveStreamOnlineInfo> && liveStreamOnlineInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamOnlineInfo_, liveStreamOnlineInfo) };


    protected:
      shared_ptr<vector<OnlineInfo::LiveStreamOnlineInfo>> liveStreamOnlineInfo_ {};
    };

    virtual bool empty() const override { return this->onlineInfo_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // onlineInfo Field Functions 
    bool hasOnlineInfo() const { return this->onlineInfo_ != nullptr;};
    void deleteOnlineInfo() { this->onlineInfo_ = nullptr;};
    inline const DescribeVsStreamsOnlineListResponseBody::OnlineInfo & getOnlineInfo() const { DARABONBA_PTR_GET_CONST(onlineInfo_, DescribeVsStreamsOnlineListResponseBody::OnlineInfo) };
    inline DescribeVsStreamsOnlineListResponseBody::OnlineInfo getOnlineInfo() { DARABONBA_PTR_GET(onlineInfo_, DescribeVsStreamsOnlineListResponseBody::OnlineInfo) };
    inline DescribeVsStreamsOnlineListResponseBody& setOnlineInfo(const DescribeVsStreamsOnlineListResponseBody::OnlineInfo & onlineInfo) { DARABONBA_PTR_SET_VALUE(onlineInfo_, onlineInfo) };
    inline DescribeVsStreamsOnlineListResponseBody& setOnlineInfo(DescribeVsStreamsOnlineListResponseBody::OnlineInfo && onlineInfo) { DARABONBA_PTR_SET_RVALUE(onlineInfo_, onlineInfo) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeVsStreamsOnlineListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVsStreamsOnlineListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsStreamsOnlineListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeVsStreamsOnlineListResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeVsStreamsOnlineListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<DescribeVsStreamsOnlineListResponseBody::OnlineInfo> onlineInfo_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalNum_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
