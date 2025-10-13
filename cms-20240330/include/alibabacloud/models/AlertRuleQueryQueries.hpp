// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEQUERYQUERIES_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEQUERYQUERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleQueryQueriesApmFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleQueryQueries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleQueryQueries& obj) { 
      DARABONBA_PTR_TO_JSON(apmAlertMetricId, apmAlertMetricId_);
      DARABONBA_PTR_TO_JSON(apmFilters, apmFilters_);
      DARABONBA_PTR_TO_JSON(apmGroupBy, apmGroupBy_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(timeUnit, timeUnit_);
      DARABONBA_PTR_TO_JSON(window, window_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleQueryQueries& obj) { 
      DARABONBA_PTR_FROM_JSON(apmAlertMetricId, apmAlertMetricId_);
      DARABONBA_PTR_FROM_JSON(apmFilters, apmFilters_);
      DARABONBA_PTR_FROM_JSON(apmGroupBy, apmGroupBy_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(timeUnit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(window, window_);
    };
    AlertRuleQueryQueries() = default ;
    AlertRuleQueryQueries(const AlertRuleQueryQueries &) = default ;
    AlertRuleQueryQueries(AlertRuleQueryQueries &&) = default ;
    AlertRuleQueryQueries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleQueryQueries() = default ;
    AlertRuleQueryQueries& operator=(const AlertRuleQueryQueries &) = default ;
    AlertRuleQueryQueries& operator=(AlertRuleQueryQueries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apmAlertMetricId_ == nullptr
        && return this->apmFilters_ == nullptr && return this->apmGroupBy_ == nullptr && return this->duration_ == nullptr && return this->end_ == nullptr && return this->expr_ == nullptr
        && return this->start_ == nullptr && return this->timeUnit_ == nullptr && return this->window_ == nullptr; };
    // apmAlertMetricId Field Functions 
    bool hasApmAlertMetricId() const { return this->apmAlertMetricId_ != nullptr;};
    void deleteApmAlertMetricId() { this->apmAlertMetricId_ = nullptr;};
    inline string apmAlertMetricId() const { DARABONBA_PTR_GET_DEFAULT(apmAlertMetricId_, "") };
    inline AlertRuleQueryQueries& setApmAlertMetricId(string apmAlertMetricId) { DARABONBA_PTR_SET_VALUE(apmAlertMetricId_, apmAlertMetricId) };


    // apmFilters Field Functions 
    bool hasApmFilters() const { return this->apmFilters_ != nullptr;};
    void deleteApmFilters() { this->apmFilters_ = nullptr;};
    inline const vector<Models::AlertRuleQueryQueriesApmFilters> & apmFilters() const { DARABONBA_PTR_GET_CONST(apmFilters_, vector<Models::AlertRuleQueryQueriesApmFilters>) };
    inline vector<Models::AlertRuleQueryQueriesApmFilters> apmFilters() { DARABONBA_PTR_GET(apmFilters_, vector<Models::AlertRuleQueryQueriesApmFilters>) };
    inline AlertRuleQueryQueries& setApmFilters(const vector<Models::AlertRuleQueryQueriesApmFilters> & apmFilters) { DARABONBA_PTR_SET_VALUE(apmFilters_, apmFilters) };
    inline AlertRuleQueryQueries& setApmFilters(vector<Models::AlertRuleQueryQueriesApmFilters> && apmFilters) { DARABONBA_PTR_SET_RVALUE(apmFilters_, apmFilters) };


    // apmGroupBy Field Functions 
    bool hasApmGroupBy() const { return this->apmGroupBy_ != nullptr;};
    void deleteApmGroupBy() { this->apmGroupBy_ = nullptr;};
    inline const vector<string> & apmGroupBy() const { DARABONBA_PTR_GET_CONST(apmGroupBy_, vector<string>) };
    inline vector<string> apmGroupBy() { DARABONBA_PTR_GET(apmGroupBy_, vector<string>) };
    inline AlertRuleQueryQueries& setApmGroupBy(const vector<string> & apmGroupBy) { DARABONBA_PTR_SET_VALUE(apmGroupBy_, apmGroupBy) };
    inline AlertRuleQueryQueries& setApmGroupBy(vector<string> && apmGroupBy) { DARABONBA_PTR_SET_RVALUE(apmGroupBy_, apmGroupBy) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline AlertRuleQueryQueries& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline AlertRuleQueryQueries& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string expr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline AlertRuleQueryQueries& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline AlertRuleQueryQueries& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline AlertRuleQueryQueries& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // window Field Functions 
    bool hasWindow() const { return this->window_ != nullptr;};
    void deleteWindow() { this->window_ = nullptr;};
    inline int64_t window() const { DARABONBA_PTR_GET_DEFAULT(window_, 0L) };
    inline AlertRuleQueryQueries& setWindow(int64_t window) { DARABONBA_PTR_SET_VALUE(window_, window) };


  protected:
    std::shared_ptr<string> apmAlertMetricId_ = nullptr;
    std::shared_ptr<vector<Models::AlertRuleQueryQueriesApmFilters>> apmFilters_ = nullptr;
    std::shared_ptr<vector<string>> apmGroupBy_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    // 时间偏移结束时间(相对)，如果指定了start、end，则不指定window。
    std::shared_ptr<int64_t> end_ = nullptr;
    // 查询表达式
    std::shared_ptr<string> expr_ = nullptr;
    // sls查询的时间偏移开始时间(相对)，如果指定了start、end，则不指定window。  例如：start=15， timeUnit=minute，表示15分钟前
    std::shared_ptr<int64_t> start_ = nullptr;
    // start和end、window的时间单位： day/hour/minute/second
    std::shared_ptr<string> timeUnit_ = nullptr;
    // 整点时间查询区间。  如果指定了window则不指定start、end
    std::shared_ptr<int64_t> window_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
