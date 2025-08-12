// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTEVENTMETRICS_HPP_
#define ALIBABACLOUD_MODELS_ALERTEVENTMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class AlertEventMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertEventMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(CurValue, curValue_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(MetricNameEn, metricNameEn_);
      DARABONBA_PTR_TO_JSON(MetricNameZh, metricNameZh_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(UnitFactor, unitFactor_);
    };
    friend void from_json(const Darabonba::Json& j, AlertEventMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(CurValue, curValue_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(MetricNameEn, metricNameEn_);
      DARABONBA_PTR_FROM_JSON(MetricNameZh, metricNameZh_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(UnitFactor, unitFactor_);
    };
    AlertEventMetrics() = default ;
    AlertEventMetrics(const AlertEventMetrics &) = default ;
    AlertEventMetrics(AlertEventMetrics &&) = default ;
    AlertEventMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertEventMetrics() = default ;
    AlertEventMetrics& operator=(const AlertEventMetrics &) = default ;
    AlertEventMetrics& operator=(AlertEventMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->curValue_ != nullptr
        && this->metricName_ != nullptr && this->metricNameEn_ != nullptr && this->metricNameZh_ != nullptr && this->operator_ != nullptr && this->statistics_ != nullptr
        && this->threshold_ != nullptr && this->unit_ != nullptr && this->unitFactor_ != nullptr; };
    // curValue Field Functions 
    bool hasCurValue() const { return this->curValue_ != nullptr;};
    void deleteCurValue() { this->curValue_ = nullptr;};
    inline string curValue() const { DARABONBA_PTR_GET_DEFAULT(curValue_, "") };
    inline AlertEventMetrics& setCurValue(string curValue) { DARABONBA_PTR_SET_VALUE(curValue_, curValue) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline AlertEventMetrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricNameEn Field Functions 
    bool hasMetricNameEn() const { return this->metricNameEn_ != nullptr;};
    void deleteMetricNameEn() { this->metricNameEn_ = nullptr;};
    inline string metricNameEn() const { DARABONBA_PTR_GET_DEFAULT(metricNameEn_, "") };
    inline AlertEventMetrics& setMetricNameEn(string metricNameEn) { DARABONBA_PTR_SET_VALUE(metricNameEn_, metricNameEn) };


    // metricNameZh Field Functions 
    bool hasMetricNameZh() const { return this->metricNameZh_ != nullptr;};
    void deleteMetricNameZh() { this->metricNameZh_ = nullptr;};
    inline string metricNameZh() const { DARABONBA_PTR_GET_DEFAULT(metricNameZh_, "") };
    inline AlertEventMetrics& setMetricNameZh(string metricNameZh) { DARABONBA_PTR_SET_VALUE(metricNameZh_, metricNameZh) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline AlertEventMetrics& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline AlertEventMetrics& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline AlertEventMetrics& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline AlertEventMetrics& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // unitFactor Field Functions 
    bool hasUnitFactor() const { return this->unitFactor_ != nullptr;};
    void deleteUnitFactor() { this->unitFactor_ = nullptr;};
    inline float unitFactor() const { DARABONBA_PTR_GET_DEFAULT(unitFactor_, 0.0) };
    inline AlertEventMetrics& setUnitFactor(float unitFactor) { DARABONBA_PTR_SET_VALUE(unitFactor_, unitFactor) };


  protected:
    std::shared_ptr<string> curValue_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<string> metricNameEn_ = nullptr;
    std::shared_ptr<string> metricNameZh_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> statistics_ = nullptr;
    std::shared_ptr<string> threshold_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
    std::shared_ptr<float> unitFactor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
