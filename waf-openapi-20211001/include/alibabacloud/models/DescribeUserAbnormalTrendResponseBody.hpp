// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAbnormalTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAbnormalTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Trend, trend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAbnormalTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Trend, trend_);
    };
    DescribeUserAbnormalTrendResponseBody() = default ;
    DescribeUserAbnormalTrendResponseBody(const DescribeUserAbnormalTrendResponseBody &) = default ;
    DescribeUserAbnormalTrendResponseBody(DescribeUserAbnormalTrendResponseBody &&) = default ;
    DescribeUserAbnormalTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAbnormalTrendResponseBody() = default ;
    DescribeUserAbnormalTrendResponseBody& operator=(const DescribeUserAbnormalTrendResponseBody &) = default ;
    DescribeUserAbnormalTrendResponseBody& operator=(DescribeUserAbnormalTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Trend : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Trend& obj) { 
        DARABONBA_PTR_TO_JSON(AbnormalHigh, abnormalHigh_);
        DARABONBA_PTR_TO_JSON(AbnormalLow, abnormalLow_);
        DARABONBA_PTR_TO_JSON(AbnormalMedium, abnormalMedium_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Trend& obj) { 
        DARABONBA_PTR_FROM_JSON(AbnormalHigh, abnormalHigh_);
        DARABONBA_PTR_FROM_JSON(AbnormalLow, abnormalLow_);
        DARABONBA_PTR_FROM_JSON(AbnormalMedium, abnormalMedium_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      Trend() = default ;
      Trend(const Trend &) = default ;
      Trend(Trend &&) = default ;
      Trend(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Trend() = default ;
      Trend& operator=(const Trend &) = default ;
      Trend& operator=(Trend &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abnormalHigh_ == nullptr
        && this->abnormalLow_ == nullptr && this->abnormalMedium_ == nullptr && this->timeStamp_ == nullptr && this->timestamp_ == nullptr; };
      // abnormalHigh Field Functions 
      bool hasAbnormalHigh() const { return this->abnormalHigh_ != nullptr;};
      void deleteAbnormalHigh() { this->abnormalHigh_ = nullptr;};
      inline int64_t getAbnormalHigh() const { DARABONBA_PTR_GET_DEFAULT(abnormalHigh_, 0L) };
      inline Trend& setAbnormalHigh(int64_t abnormalHigh) { DARABONBA_PTR_SET_VALUE(abnormalHigh_, abnormalHigh) };


      // abnormalLow Field Functions 
      bool hasAbnormalLow() const { return this->abnormalLow_ != nullptr;};
      void deleteAbnormalLow() { this->abnormalLow_ = nullptr;};
      inline int64_t getAbnormalLow() const { DARABONBA_PTR_GET_DEFAULT(abnormalLow_, 0L) };
      inline Trend& setAbnormalLow(int64_t abnormalLow) { DARABONBA_PTR_SET_VALUE(abnormalLow_, abnormalLow) };


      // abnormalMedium Field Functions 
      bool hasAbnormalMedium() const { return this->abnormalMedium_ != nullptr;};
      void deleteAbnormalMedium() { this->abnormalMedium_ = nullptr;};
      inline int64_t getAbnormalMedium() const { DARABONBA_PTR_GET_DEFAULT(abnormalMedium_, 0L) };
      inline Trend& setAbnormalMedium(int64_t abnormalMedium) { DARABONBA_PTR_SET_VALUE(abnormalMedium_, abnormalMedium) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline int64_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
      inline Trend& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Trend& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The number of high risks.
      shared_ptr<int64_t> abnormalHigh_ {};
      // The number of low risks.
      shared_ptr<int64_t> abnormalLow_ {};
      // The number of medium risks.
      shared_ptr<int64_t> abnormalMedium_ {};
      // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      // 
      // >Notice: The parameter has been deprecated, it is recommended to use the Timestamp parameter.
      shared_ptr<int64_t> timeStamp_ {};
      // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trend_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAbnormalTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline const vector<DescribeUserAbnormalTrendResponseBody::Trend> & getTrend() const { DARABONBA_PTR_GET_CONST(trend_, vector<DescribeUserAbnormalTrendResponseBody::Trend>) };
    inline vector<DescribeUserAbnormalTrendResponseBody::Trend> getTrend() { DARABONBA_PTR_GET(trend_, vector<DescribeUserAbnormalTrendResponseBody::Trend>) };
    inline DescribeUserAbnormalTrendResponseBody& setTrend(const vector<DescribeUserAbnormalTrendResponseBody::Trend> & trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };
    inline DescribeUserAbnormalTrendResponseBody& setTrend(vector<DescribeUserAbnormalTrendResponseBody::Trend> && trend) { DARABONBA_PTR_SET_RVALUE(trend_, trend) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The trends of risks.
    shared_ptr<vector<DescribeUserAbnormalTrendResponseBody::Trend>> trend_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
