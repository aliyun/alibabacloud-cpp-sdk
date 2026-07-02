// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLPROTECTTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLPROTECTTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeACLProtectTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeACLProtectTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InProtectCnt, inProtectCnt_);
      DARABONBA_PTR_TO_JSON(InterVPCProtectCnt, interVPCProtectCnt_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OutProtectCnt, outProtectCnt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalAlertCnt, totalAlertCnt_);
      DARABONBA_PTR_TO_JSON(TotalPassCnt, totalPassCnt_);
      DARABONBA_PTR_TO_JSON(TotalProtectCnt, totalProtectCnt_);
      DARABONBA_PTR_TO_JSON(TrendList, trendList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeACLProtectTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InProtectCnt, inProtectCnt_);
      DARABONBA_PTR_FROM_JSON(InterVPCProtectCnt, interVPCProtectCnt_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OutProtectCnt, outProtectCnt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalAlertCnt, totalAlertCnt_);
      DARABONBA_PTR_FROM_JSON(TotalPassCnt, totalPassCnt_);
      DARABONBA_PTR_FROM_JSON(TotalProtectCnt, totalProtectCnt_);
      DARABONBA_PTR_FROM_JSON(TrendList, trendList_);
    };
    DescribeACLProtectTrendResponseBody() = default ;
    DescribeACLProtectTrendResponseBody(const DescribeACLProtectTrendResponseBody &) = default ;
    DescribeACLProtectTrendResponseBody(DescribeACLProtectTrendResponseBody &&) = default ;
    DescribeACLProtectTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeACLProtectTrendResponseBody() = default ;
    DescribeACLProtectTrendResponseBody& operator=(const DescribeACLProtectTrendResponseBody &) = default ;
    DescribeACLProtectTrendResponseBody& operator=(DescribeACLProtectTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrendList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrendList& obj) { 
        DARABONBA_PTR_TO_JSON(AlertCnt, alertCnt_);
        DARABONBA_PTR_TO_JSON(PassCnt, passCnt_);
        DARABONBA_PTR_TO_JSON(ProtectCnt, protectCnt_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, TrendList& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertCnt, alertCnt_);
        DARABONBA_PTR_FROM_JSON(PassCnt, passCnt_);
        DARABONBA_PTR_FROM_JSON(ProtectCnt, protectCnt_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      TrendList() = default ;
      TrendList(const TrendList &) = default ;
      TrendList(TrendList &&) = default ;
      TrendList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrendList() = default ;
      TrendList& operator=(const TrendList &) = default ;
      TrendList& operator=(TrendList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertCnt_ == nullptr
        && this->passCnt_ == nullptr && this->protectCnt_ == nullptr && this->time_ == nullptr; };
      // alertCnt Field Functions 
      bool hasAlertCnt() const { return this->alertCnt_ != nullptr;};
      void deleteAlertCnt() { this->alertCnt_ = nullptr;};
      inline int32_t getAlertCnt() const { DARABONBA_PTR_GET_DEFAULT(alertCnt_, 0) };
      inline TrendList& setAlertCnt(int32_t alertCnt) { DARABONBA_PTR_SET_VALUE(alertCnt_, alertCnt) };


      // passCnt Field Functions 
      bool hasPassCnt() const { return this->passCnt_ != nullptr;};
      void deletePassCnt() { this->passCnt_ = nullptr;};
      inline int32_t getPassCnt() const { DARABONBA_PTR_GET_DEFAULT(passCnt_, 0) };
      inline TrendList& setPassCnt(int32_t passCnt) { DARABONBA_PTR_SET_VALUE(passCnt_, passCnt) };


      // protectCnt Field Functions 
      bool hasProtectCnt() const { return this->protectCnt_ != nullptr;};
      void deleteProtectCnt() { this->protectCnt_ = nullptr;};
      inline int32_t getProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(protectCnt_, 0) };
      inline TrendList& setProtectCnt(int32_t protectCnt) { DARABONBA_PTR_SET_VALUE(protectCnt_, protectCnt) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline TrendList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The total number of sessions that matched an ACL policy and triggered the monitor (alert) action during the time interval.
      shared_ptr<int32_t> alertCnt_ {};
      // The total number of sessions that matched an ACL policy and were allowed during the time interval.
      shared_ptr<int32_t> passCnt_ {};
      // The number of Internet access control interceptions on the day.
      shared_ptr<int32_t> protectCnt_ {};
      // The timestamp of 00:00 of each day, in seconds. This indicates the date.
      shared_ptr<int64_t> time_ {};
    };

    virtual bool empty() const override { return this->inProtectCnt_ == nullptr
        && this->interVPCProtectCnt_ == nullptr && this->interval_ == nullptr && this->outProtectCnt_ == nullptr && this->requestId_ == nullptr && this->totalAlertCnt_ == nullptr
        && this->totalPassCnt_ == nullptr && this->totalProtectCnt_ == nullptr && this->trendList_ == nullptr; };
    // inProtectCnt Field Functions 
    bool hasInProtectCnt() const { return this->inProtectCnt_ != nullptr;};
    void deleteInProtectCnt() { this->inProtectCnt_ = nullptr;};
    inline int64_t getInProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(inProtectCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setInProtectCnt(int64_t inProtectCnt) { DARABONBA_PTR_SET_VALUE(inProtectCnt_, inProtectCnt) };


    // interVPCProtectCnt Field Functions 
    bool hasInterVPCProtectCnt() const { return this->interVPCProtectCnt_ != nullptr;};
    void deleteInterVPCProtectCnt() { this->interVPCProtectCnt_ = nullptr;};
    inline int64_t getInterVPCProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(interVPCProtectCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setInterVPCProtectCnt(int64_t interVPCProtectCnt) { DARABONBA_PTR_SET_VALUE(interVPCProtectCnt_, interVPCProtectCnt) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeACLProtectTrendResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // outProtectCnt Field Functions 
    bool hasOutProtectCnt() const { return this->outProtectCnt_ != nullptr;};
    void deleteOutProtectCnt() { this->outProtectCnt_ = nullptr;};
    inline int64_t getOutProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(outProtectCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setOutProtectCnt(int64_t outProtectCnt) { DARABONBA_PTR_SET_VALUE(outProtectCnt_, outProtectCnt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeACLProtectTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalAlertCnt Field Functions 
    bool hasTotalAlertCnt() const { return this->totalAlertCnt_ != nullptr;};
    void deleteTotalAlertCnt() { this->totalAlertCnt_ = nullptr;};
    inline int64_t getTotalAlertCnt() const { DARABONBA_PTR_GET_DEFAULT(totalAlertCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setTotalAlertCnt(int64_t totalAlertCnt) { DARABONBA_PTR_SET_VALUE(totalAlertCnt_, totalAlertCnt) };


    // totalPassCnt Field Functions 
    bool hasTotalPassCnt() const { return this->totalPassCnt_ != nullptr;};
    void deleteTotalPassCnt() { this->totalPassCnt_ = nullptr;};
    inline int64_t getTotalPassCnt() const { DARABONBA_PTR_GET_DEFAULT(totalPassCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setTotalPassCnt(int64_t totalPassCnt) { DARABONBA_PTR_SET_VALUE(totalPassCnt_, totalPassCnt) };


    // totalProtectCnt Field Functions 
    bool hasTotalProtectCnt() const { return this->totalProtectCnt_ != nullptr;};
    void deleteTotalProtectCnt() { this->totalProtectCnt_ = nullptr;};
    inline int64_t getTotalProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(totalProtectCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setTotalProtectCnt(int64_t totalProtectCnt) { DARABONBA_PTR_SET_VALUE(totalProtectCnt_, totalProtectCnt) };


    // trendList Field Functions 
    bool hasTrendList() const { return this->trendList_ != nullptr;};
    void deleteTrendList() { this->trendList_ = nullptr;};
    inline const vector<DescribeACLProtectTrendResponseBody::TrendList> & getTrendList() const { DARABONBA_PTR_GET_CONST(trendList_, vector<DescribeACLProtectTrendResponseBody::TrendList>) };
    inline vector<DescribeACLProtectTrendResponseBody::TrendList> getTrendList() { DARABONBA_PTR_GET(trendList_, vector<DescribeACLProtectTrendResponseBody::TrendList>) };
    inline DescribeACLProtectTrendResponseBody& setTrendList(const vector<DescribeACLProtectTrendResponseBody::TrendList> & trendList) { DARABONBA_PTR_SET_VALUE(trendList_, trendList) };
    inline DescribeACLProtectTrendResponseBody& setTrendList(vector<DescribeACLProtectTrendResponseBody::TrendList> && trendList) { DARABONBA_PTR_SET_RVALUE(trendList_, trendList) };


  protected:
    // The number of inbound interceptions by Internet access control.
    shared_ptr<int64_t> inProtectCnt_ {};
    // This parameter is deprecated.
    shared_ptr<int64_t> interVPCProtectCnt_ {};
    // The step size of the returned data, in seconds. This indicates the interval between consecutive data points.
    shared_ptr<int32_t> interval_ {};
    // The number of outbound interceptions by Internet access control.
    shared_ptr<int64_t> outProtectCnt_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The cumulative sum of AlertCnt across all time points within the query time range. This represents the total number of sessions that matched an ACL policy and triggered the monitor (alert) action during the entire time period.
    shared_ptr<int64_t> totalAlertCnt_ {};
    // The cumulative sum of PassCnt across all time points within the query time range. This represents the total number of sessions that matched an ACL policy and were allowed during the entire time period.
    shared_ptr<int64_t> totalPassCnt_ {};
    // The total number of Internet access control interceptions.
    shared_ptr<int64_t> totalProtectCnt_ {};
    // The list of Internet access control interception trend data.
    shared_ptr<vector<DescribeACLProtectTrendResponseBody::TrendList>> trendList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
