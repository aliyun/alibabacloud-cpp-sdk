// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEMETRICDATARESPONSEBODY_HPP_
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
  class DescribeLiveStreamTranscodeMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamDetailData, streamDetailData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamDetailData, streamDetailData_);
    };
    DescribeLiveStreamTranscodeMetricDataResponseBody() = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBody(const DescribeLiveStreamTranscodeMetricDataResponseBody &) = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBody(DescribeLiveStreamTranscodeMetricDataResponseBody &&) = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeMetricDataResponseBody() = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBody& operator=(const DescribeLiveStreamTranscodeMetricDataResponseBody &) = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBody& operator=(DescribeLiveStreamTranscodeMetricDataResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Resolution, resolution_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TranscodeType, transcodeType_);
        };
        friend void from_json(const Darabonba::Json& j, StreamData& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(TranscodeType, transcodeType_);
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
        && this->duration_ == nullptr && this->fps_ == nullptr && this->region_ == nullptr && this->resolution_ == nullptr && this->streamName_ == nullptr
        && this->timeStamp_ == nullptr && this->transcodeType_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline StreamData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline StreamData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline StreamData& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline StreamData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // resolution Field Functions 
        bool hasResolution() const { return this->resolution_ != nullptr;};
        void deleteResolution() { this->resolution_ = nullptr;};
        inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
        inline StreamData& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


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


        // transcodeType Field Functions 
        bool hasTranscodeType() const { return this->transcodeType_ != nullptr;};
        void deleteTranscodeType() { this->transcodeType_ = nullptr;};
        inline string getTranscodeType() const { DARABONBA_PTR_GET_DEFAULT(transcodeType_, "") };
        inline StreamData& setTranscodeType(string transcodeType) { DARABONBA_PTR_SET_VALUE(transcodeType_, transcodeType) };


      protected:
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The duration. Unit: seconds.
        shared_ptr<int64_t> duration_ {};
        // The frame rate.
        // 
        // Valid values:
        // 
        // *   <!-- -->
        // 
        //     <!-- -->
        // 
        //     normal
        // 
        //     <!-- -->
        // 
        // *   <!-- -->
        // 
        //     <!-- -->
        // 
        //     high
        // 
        //     <!-- -->
        // 
        // *   <!-- -->
        // 
        //     <!-- -->
        // 
        //     def
        // 
        //     <!-- -->
        shared_ptr<string> fps_ {};
        // The region.
        shared_ptr<string> region_ {};
        // The resolution. Valid values:
        // 
        // *   2K: 2K resolution
        // *   4K: 4K resolution
        // *   LD: low definition
        // *   SD: standard definition
        // *   HD: high definition
        // *   def: audio
        shared_ptr<string> resolution_ {};
        // The name of the stream.
        shared_ptr<string> streamName_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
        // The transcoding type. Valid values:
        // 
        // *   H264STD: standard transcoding based on H.264
        // *   H264NBHD: Narrowband HD™ transcoding based on H.264
        // *   H265STD: standard transcoding based on H.265
        // *   AUDIO: audio transcoding
        shared_ptr<string> transcodeType_ {};
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
    inline DescribeLiveStreamTranscodeMetricDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamTranscodeMetricDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamDetailData Field Functions 
    bool hasStreamDetailData() const { return this->streamDetailData_ != nullptr;};
    void deleteStreamDetailData() { this->streamDetailData_ = nullptr;};
    inline const DescribeLiveStreamTranscodeMetricDataResponseBody::StreamDetailData & getStreamDetailData() const { DARABONBA_PTR_GET_CONST(streamDetailData_, DescribeLiveStreamTranscodeMetricDataResponseBody::StreamDetailData) };
    inline DescribeLiveStreamTranscodeMetricDataResponseBody::StreamDetailData getStreamDetailData() { DARABONBA_PTR_GET(streamDetailData_, DescribeLiveStreamTranscodeMetricDataResponseBody::StreamDetailData) };
    inline DescribeLiveStreamTranscodeMetricDataResponseBody& setStreamDetailData(const DescribeLiveStreamTranscodeMetricDataResponseBody::StreamDetailData & streamDetailData) { DARABONBA_PTR_SET_VALUE(streamDetailData_, streamDetailData) };
    inline DescribeLiveStreamTranscodeMetricDataResponseBody& setStreamDetailData(DescribeLiveStreamTranscodeMetricDataResponseBody::StreamDetailData && streamDetailData) { DARABONBA_PTR_SET_RVALUE(streamDetailData_, streamDetailData) };


  protected:
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // A pagination token. When you call this operation, up to 5,000 rows of data can be returned per query. If the number of rows exceeds 5,000, the response includes a pagination token that is used in the next request to retrieve a new page of results.
    // 
    // When you specify the token in the next query, data continues to be obtained from the end of the previous query.
    shared_ptr<string> nextPageToken_ {};
    // The number of rows returned.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
    // The data array returned.
    shared_ptr<DescribeLiveStreamTranscodeMetricDataResponseBody::StreamDetailData> streamDetailData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
