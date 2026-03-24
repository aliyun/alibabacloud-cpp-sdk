// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSUSAGEBYDAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSUSAGEBYDAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsUsageByDayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsUsageByDayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UsageByDays, usageByDays_);
      DARABONBA_PTR_TO_JSON(UsageTotal, usageTotal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsUsageByDayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UsageByDays, usageByDays_);
      DARABONBA_PTR_FROM_JSON(UsageTotal, usageTotal_);
    };
    DescribeDomainsUsageByDayResponseBody() = default ;
    DescribeDomainsUsageByDayResponseBody(const DescribeDomainsUsageByDayResponseBody &) = default ;
    DescribeDomainsUsageByDayResponseBody(DescribeDomainsUsageByDayResponseBody &&) = default ;
    DescribeDomainsUsageByDayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsUsageByDayResponseBody() = default ;
    DescribeDomainsUsageByDayResponseBody& operator=(const DescribeDomainsUsageByDayResponseBody &) = default ;
    DescribeDomainsUsageByDayResponseBody& operator=(DescribeDomainsUsageByDayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageTotal : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageTotal& obj) { 
        DARABONBA_PTR_TO_JSON(BytesHitRate, bytesHitRate_);
        DARABONBA_PTR_TO_JSON(MaxBps, maxBps_);
        DARABONBA_PTR_TO_JSON(MaxBpsTime, maxBpsTime_);
        DARABONBA_PTR_TO_JSON(MaxSrcBps, maxSrcBps_);
        DARABONBA_PTR_TO_JSON(MaxSrcBpsTime, maxSrcBpsTime_);
        DARABONBA_PTR_TO_JSON(RequestHitRate, requestHitRate_);
        DARABONBA_PTR_TO_JSON(TotalAccess, totalAccess_);
        DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
      };
      friend void from_json(const Darabonba::Json& j, UsageTotal& obj) { 
        DARABONBA_PTR_FROM_JSON(BytesHitRate, bytesHitRate_);
        DARABONBA_PTR_FROM_JSON(MaxBps, maxBps_);
        DARABONBA_PTR_FROM_JSON(MaxBpsTime, maxBpsTime_);
        DARABONBA_PTR_FROM_JSON(MaxSrcBps, maxSrcBps_);
        DARABONBA_PTR_FROM_JSON(MaxSrcBpsTime, maxSrcBpsTime_);
        DARABONBA_PTR_FROM_JSON(RequestHitRate, requestHitRate_);
        DARABONBA_PTR_FROM_JSON(TotalAccess, totalAccess_);
        DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
      };
      UsageTotal() = default ;
      UsageTotal(const UsageTotal &) = default ;
      UsageTotal(UsageTotal &&) = default ;
      UsageTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageTotal() = default ;
      UsageTotal& operator=(const UsageTotal &) = default ;
      UsageTotal& operator=(UsageTotal &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bytesHitRate_ == nullptr
        && this->maxBps_ == nullptr && this->maxBpsTime_ == nullptr && this->maxSrcBps_ == nullptr && this->maxSrcBpsTime_ == nullptr && this->requestHitRate_ == nullptr
        && this->totalAccess_ == nullptr && this->totalTraffic_ == nullptr; };
      // bytesHitRate Field Functions 
      bool hasBytesHitRate() const { return this->bytesHitRate_ != nullptr;};
      void deleteBytesHitRate() { this->bytesHitRate_ = nullptr;};
      inline string getBytesHitRate() const { DARABONBA_PTR_GET_DEFAULT(bytesHitRate_, "") };
      inline UsageTotal& setBytesHitRate(string bytesHitRate) { DARABONBA_PTR_SET_VALUE(bytesHitRate_, bytesHitRate) };


      // maxBps Field Functions 
      bool hasMaxBps() const { return this->maxBps_ != nullptr;};
      void deleteMaxBps() { this->maxBps_ = nullptr;};
      inline string getMaxBps() const { DARABONBA_PTR_GET_DEFAULT(maxBps_, "") };
      inline UsageTotal& setMaxBps(string maxBps) { DARABONBA_PTR_SET_VALUE(maxBps_, maxBps) };


      // maxBpsTime Field Functions 
      bool hasMaxBpsTime() const { return this->maxBpsTime_ != nullptr;};
      void deleteMaxBpsTime() { this->maxBpsTime_ = nullptr;};
      inline string getMaxBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxBpsTime_, "") };
      inline UsageTotal& setMaxBpsTime(string maxBpsTime) { DARABONBA_PTR_SET_VALUE(maxBpsTime_, maxBpsTime) };


      // maxSrcBps Field Functions 
      bool hasMaxSrcBps() const { return this->maxSrcBps_ != nullptr;};
      void deleteMaxSrcBps() { this->maxSrcBps_ = nullptr;};
      inline string getMaxSrcBps() const { DARABONBA_PTR_GET_DEFAULT(maxSrcBps_, "") };
      inline UsageTotal& setMaxSrcBps(string maxSrcBps) { DARABONBA_PTR_SET_VALUE(maxSrcBps_, maxSrcBps) };


      // maxSrcBpsTime Field Functions 
      bool hasMaxSrcBpsTime() const { return this->maxSrcBpsTime_ != nullptr;};
      void deleteMaxSrcBpsTime() { this->maxSrcBpsTime_ = nullptr;};
      inline string getMaxSrcBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxSrcBpsTime_, "") };
      inline UsageTotal& setMaxSrcBpsTime(string maxSrcBpsTime) { DARABONBA_PTR_SET_VALUE(maxSrcBpsTime_, maxSrcBpsTime) };


      // requestHitRate Field Functions 
      bool hasRequestHitRate() const { return this->requestHitRate_ != nullptr;};
      void deleteRequestHitRate() { this->requestHitRate_ = nullptr;};
      inline string getRequestHitRate() const { DARABONBA_PTR_GET_DEFAULT(requestHitRate_, "") };
      inline UsageTotal& setRequestHitRate(string requestHitRate) { DARABONBA_PTR_SET_VALUE(requestHitRate_, requestHitRate) };


      // totalAccess Field Functions 
      bool hasTotalAccess() const { return this->totalAccess_ != nullptr;};
      void deleteTotalAccess() { this->totalAccess_ = nullptr;};
      inline string getTotalAccess() const { DARABONBA_PTR_GET_DEFAULT(totalAccess_, "") };
      inline UsageTotal& setTotalAccess(string totalAccess) { DARABONBA_PTR_SET_VALUE(totalAccess_, totalAccess) };


      // totalTraffic Field Functions 
      bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
      void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
      inline string getTotalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
      inline UsageTotal& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


    protected:
      // The byte hit ratio. The byte hit ratio is measured in percentage.
      shared_ptr<string> bytesHitRate_ {};
      // The peak bandwidth value. Unit: bit/s.
      shared_ptr<string> maxBps_ {};
      // The time when the bandwidth reached the peak value.
      shared_ptr<string> maxBpsTime_ {};
      // The peak bandwidth value during back-to-origin routing. Unit: bit/s.
      shared_ptr<string> maxSrcBps_ {};
      // The time when the bandwidth during back-to-origin routing reached the peak value.
      shared_ptr<string> maxSrcBpsTime_ {};
      // The cache hit ratio that is calculated based on requests. The cache hit ratio is measured in percentage.
      shared_ptr<string> requestHitRate_ {};
      // The total amount of requests.
      shared_ptr<string> totalAccess_ {};
      // The total amount of network traffic. Unit: bytes.
      shared_ptr<string> totalTraffic_ {};
    };

    class UsageByDays : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageByDays& obj) { 
        DARABONBA_PTR_TO_JSON(UsageByDay, usageByDay_);
      };
      friend void from_json(const Darabonba::Json& j, UsageByDays& obj) { 
        DARABONBA_PTR_FROM_JSON(UsageByDay, usageByDay_);
      };
      UsageByDays() = default ;
      UsageByDays(const UsageByDays &) = default ;
      UsageByDays(UsageByDays &&) = default ;
      UsageByDays(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageByDays() = default ;
      UsageByDays& operator=(const UsageByDays &) = default ;
      UsageByDays& operator=(UsageByDays &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageByDay : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageByDay& obj) { 
          DARABONBA_PTR_TO_JSON(BytesHitRate, bytesHitRate_);
          DARABONBA_PTR_TO_JSON(MaxBps, maxBps_);
          DARABONBA_PTR_TO_JSON(MaxBpsTime, maxBpsTime_);
          DARABONBA_PTR_TO_JSON(MaxSrcBps, maxSrcBps_);
          DARABONBA_PTR_TO_JSON(MaxSrcBpsTime, maxSrcBpsTime_);
          DARABONBA_PTR_TO_JSON(Qps, qps_);
          DARABONBA_PTR_TO_JSON(RequestHitRate, requestHitRate_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TotalAccess, totalAccess_);
          DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
        };
        friend void from_json(const Darabonba::Json& j, UsageByDay& obj) { 
          DARABONBA_PTR_FROM_JSON(BytesHitRate, bytesHitRate_);
          DARABONBA_PTR_FROM_JSON(MaxBps, maxBps_);
          DARABONBA_PTR_FROM_JSON(MaxBpsTime, maxBpsTime_);
          DARABONBA_PTR_FROM_JSON(MaxSrcBps, maxSrcBps_);
          DARABONBA_PTR_FROM_JSON(MaxSrcBpsTime, maxSrcBpsTime_);
          DARABONBA_PTR_FROM_JSON(Qps, qps_);
          DARABONBA_PTR_FROM_JSON(RequestHitRate, requestHitRate_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(TotalAccess, totalAccess_);
          DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
        };
        UsageByDay() = default ;
        UsageByDay(const UsageByDay &) = default ;
        UsageByDay(UsageByDay &&) = default ;
        UsageByDay(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageByDay() = default ;
        UsageByDay& operator=(const UsageByDay &) = default ;
        UsageByDay& operator=(UsageByDay &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bytesHitRate_ == nullptr
        && this->maxBps_ == nullptr && this->maxBpsTime_ == nullptr && this->maxSrcBps_ == nullptr && this->maxSrcBpsTime_ == nullptr && this->qps_ == nullptr
        && this->requestHitRate_ == nullptr && this->timeStamp_ == nullptr && this->totalAccess_ == nullptr && this->totalTraffic_ == nullptr; };
        // bytesHitRate Field Functions 
        bool hasBytesHitRate() const { return this->bytesHitRate_ != nullptr;};
        void deleteBytesHitRate() { this->bytesHitRate_ = nullptr;};
        inline string getBytesHitRate() const { DARABONBA_PTR_GET_DEFAULT(bytesHitRate_, "") };
        inline UsageByDay& setBytesHitRate(string bytesHitRate) { DARABONBA_PTR_SET_VALUE(bytesHitRate_, bytesHitRate) };


        // maxBps Field Functions 
        bool hasMaxBps() const { return this->maxBps_ != nullptr;};
        void deleteMaxBps() { this->maxBps_ = nullptr;};
        inline string getMaxBps() const { DARABONBA_PTR_GET_DEFAULT(maxBps_, "") };
        inline UsageByDay& setMaxBps(string maxBps) { DARABONBA_PTR_SET_VALUE(maxBps_, maxBps) };


        // maxBpsTime Field Functions 
        bool hasMaxBpsTime() const { return this->maxBpsTime_ != nullptr;};
        void deleteMaxBpsTime() { this->maxBpsTime_ = nullptr;};
        inline string getMaxBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxBpsTime_, "") };
        inline UsageByDay& setMaxBpsTime(string maxBpsTime) { DARABONBA_PTR_SET_VALUE(maxBpsTime_, maxBpsTime) };


        // maxSrcBps Field Functions 
        bool hasMaxSrcBps() const { return this->maxSrcBps_ != nullptr;};
        void deleteMaxSrcBps() { this->maxSrcBps_ = nullptr;};
        inline string getMaxSrcBps() const { DARABONBA_PTR_GET_DEFAULT(maxSrcBps_, "") };
        inline UsageByDay& setMaxSrcBps(string maxSrcBps) { DARABONBA_PTR_SET_VALUE(maxSrcBps_, maxSrcBps) };


        // maxSrcBpsTime Field Functions 
        bool hasMaxSrcBpsTime() const { return this->maxSrcBpsTime_ != nullptr;};
        void deleteMaxSrcBpsTime() { this->maxSrcBpsTime_ = nullptr;};
        inline string getMaxSrcBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxSrcBpsTime_, "") };
        inline UsageByDay& setMaxSrcBpsTime(string maxSrcBpsTime) { DARABONBA_PTR_SET_VALUE(maxSrcBpsTime_, maxSrcBpsTime) };


        // qps Field Functions 
        bool hasQps() const { return this->qps_ != nullptr;};
        void deleteQps() { this->qps_ = nullptr;};
        inline string getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, "") };
        inline UsageByDay& setQps(string qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


        // requestHitRate Field Functions 
        bool hasRequestHitRate() const { return this->requestHitRate_ != nullptr;};
        void deleteRequestHitRate() { this->requestHitRate_ = nullptr;};
        inline string getRequestHitRate() const { DARABONBA_PTR_GET_DEFAULT(requestHitRate_, "") };
        inline UsageByDay& setRequestHitRate(string requestHitRate) { DARABONBA_PTR_SET_VALUE(requestHitRate_, requestHitRate) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline UsageByDay& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // totalAccess Field Functions 
        bool hasTotalAccess() const { return this->totalAccess_ != nullptr;};
        void deleteTotalAccess() { this->totalAccess_ = nullptr;};
        inline string getTotalAccess() const { DARABONBA_PTR_GET_DEFAULT(totalAccess_, "") };
        inline UsageByDay& setTotalAccess(string totalAccess) { DARABONBA_PTR_SET_VALUE(totalAccess_, totalAccess) };


        // totalTraffic Field Functions 
        bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
        void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
        inline string getTotalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
        inline UsageByDay& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


      protected:
        shared_ptr<string> bytesHitRate_ {};
        shared_ptr<string> maxBps_ {};
        shared_ptr<string> maxBpsTime_ {};
        shared_ptr<string> maxSrcBps_ {};
        shared_ptr<string> maxSrcBpsTime_ {};
        shared_ptr<string> qps_ {};
        shared_ptr<string> requestHitRate_ {};
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> totalAccess_ {};
        shared_ptr<string> totalTraffic_ {};
      };

      virtual bool empty() const override { return this->usageByDay_ == nullptr; };
      // usageByDay Field Functions 
      bool hasUsageByDay() const { return this->usageByDay_ != nullptr;};
      void deleteUsageByDay() { this->usageByDay_ = nullptr;};
      inline const vector<UsageByDays::UsageByDay> & getUsageByDay() const { DARABONBA_PTR_GET_CONST(usageByDay_, vector<UsageByDays::UsageByDay>) };
      inline vector<UsageByDays::UsageByDay> getUsageByDay() { DARABONBA_PTR_GET(usageByDay_, vector<UsageByDays::UsageByDay>) };
      inline UsageByDays& setUsageByDay(const vector<UsageByDays::UsageByDay> & usageByDay) { DARABONBA_PTR_SET_VALUE(usageByDay_, usageByDay) };
      inline UsageByDays& setUsageByDay(vector<UsageByDays::UsageByDay> && usageByDay) { DARABONBA_PTR_SET_RVALUE(usageByDay_, usageByDay) };


    protected:
      shared_ptr<vector<UsageByDays::UsageByDay>> usageByDay_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->usageByDays_ == nullptr
        && this->usageTotal_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainsUsageByDayResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainsUsageByDayResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainsUsageByDayResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainsUsageByDayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainsUsageByDayResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // usageByDays Field Functions 
    bool hasUsageByDays() const { return this->usageByDays_ != nullptr;};
    void deleteUsageByDays() { this->usageByDays_ = nullptr;};
    inline const DescribeDomainsUsageByDayResponseBody::UsageByDays & getUsageByDays() const { DARABONBA_PTR_GET_CONST(usageByDays_, DescribeDomainsUsageByDayResponseBody::UsageByDays) };
    inline DescribeDomainsUsageByDayResponseBody::UsageByDays getUsageByDays() { DARABONBA_PTR_GET(usageByDays_, DescribeDomainsUsageByDayResponseBody::UsageByDays) };
    inline DescribeDomainsUsageByDayResponseBody& setUsageByDays(const DescribeDomainsUsageByDayResponseBody::UsageByDays & usageByDays) { DARABONBA_PTR_SET_VALUE(usageByDays_, usageByDays) };
    inline DescribeDomainsUsageByDayResponseBody& setUsageByDays(DescribeDomainsUsageByDayResponseBody::UsageByDays && usageByDays) { DARABONBA_PTR_SET_RVALUE(usageByDays_, usageByDays) };


    // usageTotal Field Functions 
    bool hasUsageTotal() const { return this->usageTotal_ != nullptr;};
    void deleteUsageTotal() { this->usageTotal_ = nullptr;};
    inline const DescribeDomainsUsageByDayResponseBody::UsageTotal & getUsageTotal() const { DARABONBA_PTR_GET_CONST(usageTotal_, DescribeDomainsUsageByDayResponseBody::UsageTotal) };
    inline DescribeDomainsUsageByDayResponseBody::UsageTotal getUsageTotal() { DARABONBA_PTR_GET(usageTotal_, DescribeDomainsUsageByDayResponseBody::UsageTotal) };
    inline DescribeDomainsUsageByDayResponseBody& setUsageTotal(const DescribeDomainsUsageByDayResponseBody::UsageTotal & usageTotal) { DARABONBA_PTR_SET_VALUE(usageTotal_, usageTotal) };
    inline DescribeDomainsUsageByDayResponseBody& setUsageTotal(DescribeDomainsUsageByDayResponseBody::UsageTotal && usageTotal) { DARABONBA_PTR_SET_RVALUE(usageTotal_, usageTotal) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
    shared_ptr<DescribeDomainsUsageByDayResponseBody::UsageByDays> usageByDays_ {};
    // The summarized monitoring data.
    shared_ptr<DescribeDomainsUsageByDayResponseBody::UsageTotal> usageTotal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
