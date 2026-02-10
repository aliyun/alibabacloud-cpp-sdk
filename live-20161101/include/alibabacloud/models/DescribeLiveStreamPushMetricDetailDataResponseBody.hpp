// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPUSHMETRICDETAILDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPUSHMETRICDETAILDATARESPONSEBODY_HPP_
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
  class DescribeLiveStreamPushMetricDetailDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamPushMetricDetailDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamDetailData, streamDetailData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamPushMetricDetailDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamDetailData, streamDetailData_);
    };
    DescribeLiveStreamPushMetricDetailDataResponseBody() = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody(const DescribeLiveStreamPushMetricDetailDataResponseBody &) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody(DescribeLiveStreamPushMetricDetailDataResponseBody &&) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamPushMetricDetailDataResponseBody() = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody& operator=(const DescribeLiveStreamPushMetricDetailDataResponseBody &) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody& operator=(DescribeLiveStreamPushMetricDetailDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamDetailData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamDetailData& obj) { 
        DARABONBA_PTR_TO_JSON(StreamData, streamData_);
      };
      friend void from_json(const Darabonba::Json& j, StreamDetailData& obj) { 
        DARABONBA_PTR_FROM_JSON(StreamData, streamData_);
      };
      StreamDetailData() = default ;
      StreamDetailData(const StreamDetailData &) = default ;
      StreamDetailData(StreamDetailData &&) = default ;
      StreamDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamDetailData() = default ;
      StreamDetailData& operator=(const StreamDetailData &) = default ;
      StreamDetailData& operator=(StreamDetailData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamData& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(ReqBps, reqBps_);
          DARABONBA_PTR_TO_JSON(ReqTraffic, reqTraffic_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, StreamData& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(ReqBps, reqBps_);
          DARABONBA_PTR_FROM_JSON(ReqTraffic, reqTraffic_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        StreamData() = default ;
        StreamData(const StreamData &) = default ;
        StreamData(StreamData &&) = default ;
        StreamData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamData() = default ;
        StreamData& operator=(const StreamData &) = default ;
        StreamData& operator=(StreamData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->reqBps_ == nullptr && this->reqTraffic_ == nullptr && this->streamName_ == nullptr && this->timeStamp_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline StreamData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // reqBps Field Functions 
        bool hasReqBps() const { return this->reqBps_ != nullptr;};
        void deleteReqBps() { this->reqBps_ = nullptr;};
        inline float getReqBps() const { DARABONBA_PTR_GET_DEFAULT(reqBps_, 0.0) };
        inline StreamData& setReqBps(float reqBps) { DARABONBA_PTR_SET_VALUE(reqBps_, reqBps) };


        // reqTraffic Field Functions 
        bool hasReqTraffic() const { return this->reqTraffic_ != nullptr;};
        void deleteReqTraffic() { this->reqTraffic_ = nullptr;};
        inline int64_t getReqTraffic() const { DARABONBA_PTR_GET_DEFAULT(reqTraffic_, 0L) };
        inline StreamData& setReqTraffic(int64_t reqTraffic) { DARABONBA_PTR_SET_VALUE(reqTraffic_, reqTraffic) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline StreamData& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline StreamData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<float> reqBps_ {};
        shared_ptr<int64_t> reqTraffic_ {};
        shared_ptr<string> streamName_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->streamData_ == nullptr; };
      // streamData Field Functions 
      bool hasStreamData() const { return this->streamData_ != nullptr;};
      void deleteStreamData() { this->streamData_ = nullptr;};
      inline const vector<StreamDetailData::StreamData> & getStreamData() const { DARABONBA_PTR_GET_CONST(streamData_, vector<StreamDetailData::StreamData>) };
      inline vector<StreamDetailData::StreamData> getStreamData() { DARABONBA_PTR_GET(streamData_, vector<StreamDetailData::StreamData>) };
      inline StreamDetailData& setStreamData(const vector<StreamDetailData::StreamData> & streamData) { DARABONBA_PTR_SET_VALUE(streamData_, streamData) };
      inline StreamDetailData& setStreamData(vector<StreamDetailData::StreamData> && streamData) { DARABONBA_PTR_SET_RVALUE(streamData_, streamData) };


    protected:
      shared_ptr<vector<StreamDetailData::StreamData>> streamData_ {};
    };

    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->nextPageToken_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr
        && this->streamDetailData_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamDetailData Field Functions 
    bool hasStreamDetailData() const { return this->streamDetailData_ != nullptr;};
    void deleteStreamDetailData() { this->streamDetailData_ = nullptr;};
    inline const DescribeLiveStreamPushMetricDetailDataResponseBody::StreamDetailData & getStreamDetailData() const { DARABONBA_PTR_GET_CONST(streamDetailData_, DescribeLiveStreamPushMetricDetailDataResponseBody::StreamDetailData) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody::StreamDetailData getStreamDetailData() { DARABONBA_PTR_GET(streamDetailData_, DescribeLiveStreamPushMetricDetailDataResponseBody::StreamDetailData) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setStreamDetailData(const DescribeLiveStreamPushMetricDetailDataResponseBody::StreamDetailData & streamDetailData) { DARABONBA_PTR_SET_VALUE(streamDetailData_, streamDetailData) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setStreamDetailData(DescribeLiveStreamPushMetricDetailDataResponseBody::StreamDetailData && streamDetailData) { DARABONBA_PTR_SET_RVALUE(streamDetailData_, streamDetailData) };


  protected:
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range that was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // A pagination token. When you call this operation, up to 5,000 rows of data can be returned per query. If the number of rows exceeds 5,000, the response includes a pagination token that is used in the next request to retrieve a new page of results.
    // 
    // When you specify the token in the next query, data continues to be obtained from the end of the previous query.
    shared_ptr<string> nextPageToken_ {};
    // The number of rows returned.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range that was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
    shared_ptr<DescribeLiveStreamPushMetricDetailDataResponseBody::StreamDetailData> streamDetailData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
