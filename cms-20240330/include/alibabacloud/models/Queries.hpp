// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERIES_HPP_
#define ALIBABACLOUD_MODELS_QUERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LabelFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class Queries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Queries& obj) { 
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(metricSet, metricSet_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(timeUnit, timeUnit_);
      DARABONBA_PTR_TO_JSON(window, window_);
    };
    friend void from_json(const Darabonba::Json& j, Queries& obj) { 
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(metricSet, metricSet_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(timeUnit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(window, window_);
    };
    Queries() = default ;
    Queries(const Queries &) = default ;
    Queries(Queries &&) = default ;
    Queries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Queries() = default ;
    Queries& operator=(const Queries &) = default ;
    Queries& operator=(Queries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && this->expr_ == nullptr && this->labelFilters_ == nullptr && this->metric_ == nullptr && this->metricSet_ == nullptr && this->name_ == nullptr
        && this->start_ == nullptr && this->timeUnit_ == nullptr && this->window_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline Queries& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline Queries& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // labelFilters Field Functions 
    bool hasLabelFilters() const { return this->labelFilters_ != nullptr;};
    void deleteLabelFilters() { this->labelFilters_ = nullptr;};
    inline const vector<LabelFilters> & getLabelFilters() const { DARABONBA_PTR_GET_CONST(labelFilters_, vector<LabelFilters>) };
    inline vector<LabelFilters> getLabelFilters() { DARABONBA_PTR_GET(labelFilters_, vector<LabelFilters>) };
    inline Queries& setLabelFilters(const vector<LabelFilters> & labelFilters) { DARABONBA_PTR_SET_VALUE(labelFilters_, labelFilters) };
    inline Queries& setLabelFilters(vector<LabelFilters> && labelFilters) { DARABONBA_PTR_SET_RVALUE(labelFilters_, labelFilters) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline Queries& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // metricSet Field Functions 
    bool hasMetricSet() const { return this->metricSet_ != nullptr;};
    void deleteMetricSet() { this->metricSet_ = nullptr;};
    inline string getMetricSet() const { DARABONBA_PTR_GET_DEFAULT(metricSet_, "") };
    inline Queries& setMetricSet(string metricSet) { DARABONBA_PTR_SET_VALUE(metricSet_, metricSet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Queries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline Queries& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline Queries& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // window Field Functions 
    bool hasWindow() const { return this->window_ != nullptr;};
    void deleteWindow() { this->window_ = nullptr;};
    inline int64_t getWindow() const { DARABONBA_PTR_GET_DEFAULT(window_, 0L) };
    inline Queries& setWindow(int64_t window) { DARABONBA_PTR_SET_VALUE(window_, window) };


  protected:
    shared_ptr<int64_t> end_ {};
    shared_ptr<string> expr_ {};
    shared_ptr<vector<LabelFilters>> labelFilters_ {};
    shared_ptr<string> metric_ {};
    shared_ptr<string> metricSet_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> start_ {};
    shared_ptr<string> timeUnit_ {};
    shared_ptr<int64_t> window_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
