// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQUOTAMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYQUOTAMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryQuotaMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQuotaMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(interval, interval_);
      DARABONBA_PTR_TO_JSON(nickname, nickname_);
      DARABONBA_PTR_TO_JSON(subMetric, subMetric_);
      DARABONBA_PTR_TO_JSON(subQuotaNickname, subQuotaNickname_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQuotaMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(interval, interval_);
      DARABONBA_PTR_FROM_JSON(nickname, nickname_);
      DARABONBA_PTR_FROM_JSON(subMetric, subMetric_);
      DARABONBA_PTR_FROM_JSON(subQuotaNickname, subQuotaNickname_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
    };
    QueryQuotaMetricRequest() = default ;
    QueryQuotaMetricRequest(const QueryQuotaMetricRequest &) = default ;
    QueryQuotaMetricRequest(QueryQuotaMetricRequest &&) = default ;
    QueryQuotaMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQuotaMetricRequest() = default ;
    QueryQuotaMetricRequest& operator=(const QueryQuotaMetricRequest &) = default ;
    QueryQuotaMetricRequest& operator=(QueryQuotaMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interval_ == nullptr
        && this->nickname_ == nullptr && this->subMetric_ == nullptr && this->subQuotaNickname_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr
        && this->strategy_ == nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline QueryQuotaMetricRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string getNickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline QueryQuotaMetricRequest& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // subMetric Field Functions 
    bool hasSubMetric() const { return this->subMetric_ != nullptr;};
    void deleteSubMetric() { this->subMetric_ = nullptr;};
    inline string getSubMetric() const { DARABONBA_PTR_GET_DEFAULT(subMetric_, "") };
    inline QueryQuotaMetricRequest& setSubMetric(string subMetric) { DARABONBA_PTR_SET_VALUE(subMetric_, subMetric) };


    // subQuotaNickname Field Functions 
    bool hasSubQuotaNickname() const { return this->subQuotaNickname_ != nullptr;};
    void deleteSubQuotaNickname() { this->subQuotaNickname_ = nullptr;};
    inline string getSubQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(subQuotaNickname_, "") };
    inline QueryQuotaMetricRequest& setSubQuotaNickname(string subQuotaNickname) { DARABONBA_PTR_SET_VALUE(subQuotaNickname_, subQuotaNickname) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryQuotaMetricRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryQuotaMetricRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline QueryQuotaMetricRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    // The fixed interval in seconds. If you leave this parameter empty, the system uses an automatic interval policy.
    // 
    // - Automatic interval policy: The interval is 60 seconds for a time range within 6 hours, 300 seconds for a time range within 24 hours, 900 seconds for a time range within 72 hours, and 1,800 seconds for a time range longer than 72 hours.
    // 
    // - Specified interval: Valid values are 60, 300, and 900. The query time range must be within 72 hours.
    shared_ptr<int64_t> interval_ {};
    // The nickname of the level-1 quota. This parameter is required.
    shared_ptr<string> nickname_ {};
    shared_ptr<string> subMetric_ {};
    // The nickname of the level-2 quota.
    shared_ptr<string> subQuotaNickname_ {};
    // The end of the time range to query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The start of the time range to query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The aggregation strategy for the data. The default value is max. Valid values: max and avg.
    // 
    // Data is collected at one-minute intervals. If you query a long time range, the system may use an interval longer than one minute and aggregate the data. This parameter specifies how the data is aggregated.
    shared_ptr<string> strategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
