// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATAALARMLISTALARMRULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATAALARMLISTALARMRULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_TO_JSON(Comparator, comparator_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_FROM_JSON(Comparator, comparator_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList() = default ;
    GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList(const GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList &) = default ;
    GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList(GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList &&) = default ;
    GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList() = default ;
    GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList& operator=(const GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList &) = default ;
    GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList& operator=(GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregator_ != nullptr
        && this->comparator_ != nullptr && this->duration_ != nullptr && this->level_ != nullptr && this->threshold_ != nullptr; };
    // aggregator Field Functions 
    bool hasAggregator() const { return this->aggregator_ != nullptr;};
    void deleteAggregator() { this->aggregator_ = nullptr;};
    inline string aggregator() const { DARABONBA_PTR_GET_DEFAULT(aggregator_, "") };
    inline GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList& setAggregator(string aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };


    // comparator Field Functions 
    bool hasComparator() const { return this->comparator_ != nullptr;};
    void deleteComparator() { this->comparator_ = nullptr;};
    inline string comparator() const { DARABONBA_PTR_GET_DEFAULT(comparator_, "") };
    inline GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList& setComparator(string comparator) { DARABONBA_PTR_SET_VALUE(comparator_, comparator) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int64_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0L) };
    inline GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList& setThreshold(int64_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The calculation method of a metric. Valid values:
    // 
    // *   avg
    // *   max
    std::shared_ptr<string> aggregator_ = nullptr;
    // The comparison operator, which indicates the method used to compare a metric with the alert rule.
    // 
    // *   \\"=\\"
    // *   \\"<\\"
    // *   \\">\\"
    std::shared_ptr<string> comparator_ = nullptr;
    // The duration that a condition is met before an alert is triggered. Unit: minutes.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // *   WARNING
    // *   CRITICAL
    std::shared_ptr<string> level_ = nullptr;
    // The threshold for the comparison between a metric and the alert rule.
    std::shared_ptr<int64_t> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
