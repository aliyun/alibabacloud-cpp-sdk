// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICSETTRIGGERSIMPLEEXPRESSION_HPP_
#define ALIBABACLOUD_MODELS_METRICSETTRIGGERSIMPLEEXPRESSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MetricSetTriggerSimpleExpression : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricSetTriggerSimpleExpression& obj) { 
      DARABONBA_PTR_TO_JSON(expressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(queryName, queryName_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, MetricSetTriggerSimpleExpression& obj) { 
      DARABONBA_PTR_FROM_JSON(expressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(queryName, queryName_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    MetricSetTriggerSimpleExpression() = default ;
    MetricSetTriggerSimpleExpression(const MetricSetTriggerSimpleExpression &) = default ;
    MetricSetTriggerSimpleExpression(MetricSetTriggerSimpleExpression &&) = default ;
    MetricSetTriggerSimpleExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricSetTriggerSimpleExpression() = default ;
    MetricSetTriggerSimpleExpression& operator=(const MetricSetTriggerSimpleExpression &) = default ;
    MetricSetTriggerSimpleExpression& operator=(MetricSetTriggerSimpleExpression &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expressionType_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->operator_ == nullptr && this->queryName_ == nullptr && this->threshold_ == nullptr; };
    // expressionType Field Functions 
    bool hasExpressionType() const { return this->expressionType_ != nullptr;};
    void deleteExpressionType() { this->expressionType_ = nullptr;};
    inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
    inline MetricSetTriggerSimpleExpression& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline MetricSetTriggerSimpleExpression& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline MetricSetTriggerSimpleExpression& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline MetricSetTriggerSimpleExpression& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline MetricSetTriggerSimpleExpression& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline MetricSetTriggerSimpleExpression& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    shared_ptr<string> expressionType_ {};
    shared_ptr<double> max_ {};
    shared_ptr<double> min_ {};
    shared_ptr<string> operator_ {};
    shared_ptr<string> queryName_ {};
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
