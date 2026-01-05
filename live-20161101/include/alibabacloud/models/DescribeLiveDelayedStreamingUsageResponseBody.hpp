// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGERESPONSEBODY_HPP_
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
  class DescribeLiveDelayedStreamingUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDelayedStreamingUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DelayData, delayData_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDelayedStreamingUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayData, delayData_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDelayedStreamingUsageResponseBody() = default ;
    DescribeLiveDelayedStreamingUsageResponseBody(const DescribeLiveDelayedStreamingUsageResponseBody &) = default ;
    DescribeLiveDelayedStreamingUsageResponseBody(DescribeLiveDelayedStreamingUsageResponseBody &&) = default ;
    DescribeLiveDelayedStreamingUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDelayedStreamingUsageResponseBody() = default ;
    DescribeLiveDelayedStreamingUsageResponseBody& operator=(const DescribeLiveDelayedStreamingUsageResponseBody &) = default ;
    DescribeLiveDelayedStreamingUsageResponseBody& operator=(DescribeLiveDelayedStreamingUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DelayData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DelayData& obj) { 
        DARABONBA_PTR_TO_JSON(DelayDataItem, delayDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, DelayData& obj) { 
        DARABONBA_PTR_FROM_JSON(DelayDataItem, delayDataItem_);
      };
      DelayData() = default ;
      DelayData(const DelayData &) = default ;
      DelayData(DelayData &&) = default ;
      DelayData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DelayData() = default ;
      DelayData& operator=(const DelayData &) = default ;
      DelayData& operator=(DelayData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DelayDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DelayDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DelayDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        DelayDataItem() = default ;
        DelayDataItem(const DelayDataItem &) = default ;
        DelayDataItem(DelayDataItem &&) = default ;
        DelayDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DelayDataItem() = default ;
        DelayDataItem& operator=(const DelayDataItem &) = default ;
        DelayDataItem& operator=(DelayDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->duration_ == nullptr && this->region_ == nullptr && this->streamName_ == nullptr && this->timeStamp_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DelayDataItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline DelayDataItem& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline DelayDataItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline DelayDataItem& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DelayDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The domain name. If SplitBy is set to domain, the data returned is grouped by domain name.
        shared_ptr<string> domainName_ {};
        // The duration of stream delay.
        shared_ptr<int64_t> duration_ {};
        // The ID of the region. If SplitBy is set to region, the data returned is grouped by region.
        shared_ptr<string> region_ {};
        // The name of the stream. If SplitBy is set to stream, the data returned is grouped by stream.
        shared_ptr<string> streamName_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->delayDataItem_ == nullptr; };
      // delayDataItem Field Functions 
      bool hasDelayDataItem() const { return this->delayDataItem_ != nullptr;};
      void deleteDelayDataItem() { this->delayDataItem_ = nullptr;};
      inline const vector<DelayData::DelayDataItem> & getDelayDataItem() const { DARABONBA_PTR_GET_CONST(delayDataItem_, vector<DelayData::DelayDataItem>) };
      inline vector<DelayData::DelayDataItem> getDelayDataItem() { DARABONBA_PTR_GET(delayDataItem_, vector<DelayData::DelayDataItem>) };
      inline DelayData& setDelayDataItem(const vector<DelayData::DelayDataItem> & delayDataItem) { DARABONBA_PTR_SET_VALUE(delayDataItem_, delayDataItem) };
      inline DelayData& setDelayDataItem(vector<DelayData::DelayDataItem> && delayDataItem) { DARABONBA_PTR_SET_RVALUE(delayDataItem_, delayDataItem) };


    protected:
      shared_ptr<vector<DelayData::DelayDataItem>> delayDataItem_ {};
    };

    virtual bool empty() const override { return this->delayData_ == nullptr
        && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // delayData Field Functions 
    bool hasDelayData() const { return this->delayData_ != nullptr;};
    void deleteDelayData() { this->delayData_ = nullptr;};
    inline const DescribeLiveDelayedStreamingUsageResponseBody::DelayData & getDelayData() const { DARABONBA_PTR_GET_CONST(delayData_, DescribeLiveDelayedStreamingUsageResponseBody::DelayData) };
    inline DescribeLiveDelayedStreamingUsageResponseBody::DelayData getDelayData() { DARABONBA_PTR_GET(delayData_, DescribeLiveDelayedStreamingUsageResponseBody::DelayData) };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setDelayData(const DescribeLiveDelayedStreamingUsageResponseBody::DelayData & delayData) { DARABONBA_PTR_SET_VALUE(delayData_, delayData) };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setDelayData(DescribeLiveDelayedStreamingUsageResponseBody::DelayData && delayData) { DARABONBA_PTR_SET_RVALUE(delayData_, delayData) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The details about the stream delay usage data.
    shared_ptr<DescribeLiveDelayedStreamingUsageResponseBody::DelayData> delayData_ {};
    // The end of the time range during which the data was queried.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which the data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
