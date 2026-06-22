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
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->metricName_ == nullptr && this->statistics_ == nullptr && this->tags_ == nullptr && this->threshold_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline TriggerCondition& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline TriggerCondition& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline TriggerCondition& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline TriggerCondition& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TriggerCondition& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline TriggerCondition& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The comparison operator. This parameter is required. Valid values:
    // 
    // *   EQ: equal to
    // *   NE: not equal to
    // *   GT: greater than
    // *   LT: less than
    // *   GE: greater than or equal to
    // *   LE: less than or equal to
    // 
    // This parameter is required.
    shared_ptr<string> comparisonOperator_ {};
    // The name of the metric. This parameter is required and cannot be an empty string. You can view the metric name in [Add Auto Scaling Rules](https://help.aliyun.com/document_detail/445658.html).
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The name of the statistic. This parameter is required. Valid values:
    // 
    // *   MAX
    // *   MIN
    // *   AVG
    // 
    // This parameter is required.
    shared_ptr<string> statistics_ {};
    // The tags for the metrics of a partition. This parameter is available for only metrics that contain ByPartition. For other metrics, leave this parameter empty.
    shared_ptr<vector<Tag>> tags_ {};
    // The trigger threshold. This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
