// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYRECORDSRESPONSEBODY_HPP_
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
  class DescribeLiveStreamsNotifyRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsNotifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotifyRecordsInfo, notifyRecordsInfo_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsNotifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotifyRecordsInfo, notifyRecordsInfo_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveStreamsNotifyRecordsResponseBody() = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody(const DescribeLiveStreamsNotifyRecordsResponseBody &) = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody(DescribeLiveStreamsNotifyRecordsResponseBody &&) = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsNotifyRecordsResponseBody() = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody& operator=(const DescribeLiveStreamsNotifyRecordsResponseBody &) = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody& operator=(DescribeLiveStreamsNotifyRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NotifyRecordsInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotifyRecordsInfo& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamNotifyRecordsInfo, liveStreamNotifyRecordsInfo_);
      };
      friend void from_json(const Darabonba::Json& j, NotifyRecordsInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamNotifyRecordsInfo, liveStreamNotifyRecordsInfo_);
      };
      NotifyRecordsInfo() = default ;
      NotifyRecordsInfo(const NotifyRecordsInfo &) = default ;
      NotifyRecordsInfo(NotifyRecordsInfo &&) = default ;
      NotifyRecordsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotifyRecordsInfo() = default ;
      NotifyRecordsInfo& operator=(const NotifyRecordsInfo &) = default ;
      NotifyRecordsInfo& operator=(NotifyRecordsInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamNotifyRecordsInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamNotifyRecordsInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(NotifyContent, notifyContent_);
          DARABONBA_PTR_TO_JSON(NotifyHeader, notifyHeader_);
          DARABONBA_PTR_TO_JSON(NotifyResponse, notifyResponse_);
          DARABONBA_PTR_TO_JSON(NotifyResult, notifyResult_);
          DARABONBA_PTR_TO_JSON(NotifyTime, notifyTime_);
          DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
          DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        };
        friend void from_json(const Darabonba::Json& j, LiveStreamNotifyRecordsInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(NotifyContent, notifyContent_);
          DARABONBA_PTR_FROM_JSON(NotifyHeader, notifyHeader_);
          DARABONBA_PTR_FROM_JSON(NotifyResponse, notifyResponse_);
          DARABONBA_PTR_FROM_JSON(NotifyResult, notifyResult_);
          DARABONBA_PTR_FROM_JSON(NotifyTime, notifyTime_);
          DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
          DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        };
        LiveStreamNotifyRecordsInfo() = default ;
        LiveStreamNotifyRecordsInfo(const LiveStreamNotifyRecordsInfo &) = default ;
        LiveStreamNotifyRecordsInfo(LiveStreamNotifyRecordsInfo &&) = default ;
        LiveStreamNotifyRecordsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamNotifyRecordsInfo() = default ;
        LiveStreamNotifyRecordsInfo& operator=(const LiveStreamNotifyRecordsInfo &) = default ;
        LiveStreamNotifyRecordsInfo& operator=(LiveStreamNotifyRecordsInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->description_ == nullptr && this->domainName_ == nullptr && this->notifyContent_ == nullptr && this->notifyHeader_ == nullptr && this->notifyResponse_ == nullptr
        && this->notifyResult_ == nullptr && this->notifyTime_ == nullptr && this->notifyType_ == nullptr && this->notifyUrl_ == nullptr && this->streamName_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveStreamNotifyRecordsInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline LiveStreamNotifyRecordsInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveStreamNotifyRecordsInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // notifyContent Field Functions 
        bool hasNotifyContent() const { return this->notifyContent_ != nullptr;};
        void deleteNotifyContent() { this->notifyContent_ = nullptr;};
        inline string getNotifyContent() const { DARABONBA_PTR_GET_DEFAULT(notifyContent_, "") };
        inline LiveStreamNotifyRecordsInfo& setNotifyContent(string notifyContent) { DARABONBA_PTR_SET_VALUE(notifyContent_, notifyContent) };


        // notifyHeader Field Functions 
        bool hasNotifyHeader() const { return this->notifyHeader_ != nullptr;};
        void deleteNotifyHeader() { this->notifyHeader_ = nullptr;};
        inline string getNotifyHeader() const { DARABONBA_PTR_GET_DEFAULT(notifyHeader_, "") };
        inline LiveStreamNotifyRecordsInfo& setNotifyHeader(string notifyHeader) { DARABONBA_PTR_SET_VALUE(notifyHeader_, notifyHeader) };


        // notifyResponse Field Functions 
        bool hasNotifyResponse() const { return this->notifyResponse_ != nullptr;};
        void deleteNotifyResponse() { this->notifyResponse_ = nullptr;};
        inline string getNotifyResponse() const { DARABONBA_PTR_GET_DEFAULT(notifyResponse_, "") };
        inline LiveStreamNotifyRecordsInfo& setNotifyResponse(string notifyResponse) { DARABONBA_PTR_SET_VALUE(notifyResponse_, notifyResponse) };


        // notifyResult Field Functions 
        bool hasNotifyResult() const { return this->notifyResult_ != nullptr;};
        void deleteNotifyResult() { this->notifyResult_ = nullptr;};
        inline string getNotifyResult() const { DARABONBA_PTR_GET_DEFAULT(notifyResult_, "") };
        inline LiveStreamNotifyRecordsInfo& setNotifyResult(string notifyResult) { DARABONBA_PTR_SET_VALUE(notifyResult_, notifyResult) };


        // notifyTime Field Functions 
        bool hasNotifyTime() const { return this->notifyTime_ != nullptr;};
        void deleteNotifyTime() { this->notifyTime_ = nullptr;};
        inline string getNotifyTime() const { DARABONBA_PTR_GET_DEFAULT(notifyTime_, "") };
        inline LiveStreamNotifyRecordsInfo& setNotifyTime(string notifyTime) { DARABONBA_PTR_SET_VALUE(notifyTime_, notifyTime) };


        // notifyType Field Functions 
        bool hasNotifyType() const { return this->notifyType_ != nullptr;};
        void deleteNotifyType() { this->notifyType_ = nullptr;};
        inline string getNotifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
        inline LiveStreamNotifyRecordsInfo& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


        // notifyUrl Field Functions 
        bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
        void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
        inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
        inline LiveStreamNotifyRecordsInfo& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveStreamNotifyRecordsInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      protected:
        // The name of the application to which the live stream belongs.
        shared_ptr<string> appName_ {};
        // The result of the request. If success is returned, the request is successful. If an error message is returned, the request failed.
        shared_ptr<string> description_ {};
        // The ingest domain.
        shared_ptr<string> domainName_ {};
        // The callback content.
        shared_ptr<string> notifyContent_ {};
        shared_ptr<string> notifyHeader_ {};
        shared_ptr<string> notifyResponse_ {};
        // The callback result. Valid values:
        // 
        // *   success
        // *   failed
        shared_ptr<string> notifyResult_ {};
        // The time when the callback was invoked. The time is displayed in UTC.
        shared_ptr<string> notifyTime_ {};
        // The event. Valid values:
        // 
        // *   publish: The stream ingest starts.
        // *   publish_done: The stream ingest is interrupted.
        shared_ptr<string> notifyType_ {};
        // The callback URL.
        shared_ptr<string> notifyUrl_ {};
        // The name of the live stream.
        shared_ptr<string> streamName_ {};
      };

      virtual bool empty() const override { return this->liveStreamNotifyRecordsInfo_ == nullptr; };
      // liveStreamNotifyRecordsInfo Field Functions 
      bool hasLiveStreamNotifyRecordsInfo() const { return this->liveStreamNotifyRecordsInfo_ != nullptr;};
      void deleteLiveStreamNotifyRecordsInfo() { this->liveStreamNotifyRecordsInfo_ = nullptr;};
      inline const vector<NotifyRecordsInfo::LiveStreamNotifyRecordsInfo> & getLiveStreamNotifyRecordsInfo() const { DARABONBA_PTR_GET_CONST(liveStreamNotifyRecordsInfo_, vector<NotifyRecordsInfo::LiveStreamNotifyRecordsInfo>) };
      inline vector<NotifyRecordsInfo::LiveStreamNotifyRecordsInfo> getLiveStreamNotifyRecordsInfo() { DARABONBA_PTR_GET(liveStreamNotifyRecordsInfo_, vector<NotifyRecordsInfo::LiveStreamNotifyRecordsInfo>) };
      inline NotifyRecordsInfo& setLiveStreamNotifyRecordsInfo(const vector<NotifyRecordsInfo::LiveStreamNotifyRecordsInfo> & liveStreamNotifyRecordsInfo) { DARABONBA_PTR_SET_VALUE(liveStreamNotifyRecordsInfo_, liveStreamNotifyRecordsInfo) };
      inline NotifyRecordsInfo& setLiveStreamNotifyRecordsInfo(vector<NotifyRecordsInfo::LiveStreamNotifyRecordsInfo> && liveStreamNotifyRecordsInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamNotifyRecordsInfo_, liveStreamNotifyRecordsInfo) };


    protected:
      shared_ptr<vector<NotifyRecordsInfo::LiveStreamNotifyRecordsInfo>> liveStreamNotifyRecordsInfo_ {};
    };

    virtual bool empty() const override { return this->notifyRecordsInfo_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // notifyRecordsInfo Field Functions 
    bool hasNotifyRecordsInfo() const { return this->notifyRecordsInfo_ != nullptr;};
    void deleteNotifyRecordsInfo() { this->notifyRecordsInfo_ = nullptr;};
    inline const DescribeLiveStreamsNotifyRecordsResponseBody::NotifyRecordsInfo & getNotifyRecordsInfo() const { DARABONBA_PTR_GET_CONST(notifyRecordsInfo_, DescribeLiveStreamsNotifyRecordsResponseBody::NotifyRecordsInfo) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody::NotifyRecordsInfo getNotifyRecordsInfo() { DARABONBA_PTR_GET(notifyRecordsInfo_, DescribeLiveStreamsNotifyRecordsResponseBody::NotifyRecordsInfo) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setNotifyRecordsInfo(const DescribeLiveStreamsNotifyRecordsResponseBody::NotifyRecordsInfo & notifyRecordsInfo) { DARABONBA_PTR_SET_VALUE(notifyRecordsInfo_, notifyRecordsInfo) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setNotifyRecordsInfo(DescribeLiveStreamsNotifyRecordsResponseBody::NotifyRecordsInfo && notifyRecordsInfo) { DARABONBA_PTR_SET_RVALUE(notifyRecordsInfo_, notifyRecordsInfo) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The stream ingest callback records.
    shared_ptr<DescribeLiveStreamsNotifyRecordsResponseBody::NotifyRecordsInfo> notifyRecordsInfo_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
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
