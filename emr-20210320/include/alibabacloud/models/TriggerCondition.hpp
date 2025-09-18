// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERCONDITION_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERCONDITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class TriggerCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerCondition& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    TriggerCondition() = default ;
    TriggerCondition(const TriggerCondition &) = default ;
    TriggerCondition(TriggerCondition &&) = default ;
    TriggerCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerCondition() = default ;
    TriggerCondition& operator=(const TriggerCondition &) = default ;
    TriggerCondition& operator=(TriggerCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comparisonOperator_ != nullptr
        && this->metricName_ != nullptr && this->statistics_ != nullptr && this->tags_ != nullptr && this->threshold_ != nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline TriggerCondition& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline TriggerCondition& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline TriggerCondition& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline TriggerCondition& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TriggerCondition& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline TriggerCondition& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // 比较符。取值范围：
    // - EQ:等于。
    // - NE:不等于。
    // - GT:大于。
    // - LT:小于。
    // - GE:大于等于。
    // - LE:小于等于。
    // 
    // This parameter is required.
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // 指标名称。指标名称需要在 ListAutoScalingMetrics 接口返回的指标名称列表中。
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // 统计量名称。取值范围：
    // - MAX：最大值。
    // - MIN：最小值。
    // - AVG：平均值。
    // 
    // This parameter is required.
    std::shared_ptr<string> statistics_ = nullptr;
    // 指标Tag。
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
    // 阈值。
    // 
    // This parameter is required.
    std::shared_ptr<double> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
