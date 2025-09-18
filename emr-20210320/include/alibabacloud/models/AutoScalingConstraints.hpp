// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOSCALINGCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_AUTOSCALINGCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetricUnitValue.hpp>
#include <alibabacloud/models/ScalingRule.hpp>
#include <alibabacloud/models/AutoScalingConstraintsSupportMetricTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AutoScalingConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoScalingConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScalingMetricUnits, autoScalingMetricUnits_);
      DARABONBA_PTR_TO_JSON(DefaultMetricTriggeredRules, defaultMetricTriggeredRules_);
      DARABONBA_PTR_TO_JSON(MaxAdjustmentValue, maxAdjustmentValue_);
      DARABONBA_PTR_TO_JSON(MaxByLoadRuleCount, maxByLoadRuleCount_);
      DARABONBA_PTR_TO_JSON(MaxByTimeRuleCount, maxByTimeRuleCount_);
      DARABONBA_PTR_TO_JSON(SupportMetricTags, supportMetricTags_);
      DARABONBA_PTR_TO_JSON(SupportMetrics, supportMetrics_);
      DARABONBA_PTR_TO_JSON(SupportRuleTypes, supportRuleTypes_);
    };
    friend void from_json(const Darabonba::Json& j, AutoScalingConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScalingMetricUnits, autoScalingMetricUnits_);
      DARABONBA_PTR_FROM_JSON(DefaultMetricTriggeredRules, defaultMetricTriggeredRules_);
      DARABONBA_PTR_FROM_JSON(MaxAdjustmentValue, maxAdjustmentValue_);
      DARABONBA_PTR_FROM_JSON(MaxByLoadRuleCount, maxByLoadRuleCount_);
      DARABONBA_PTR_FROM_JSON(MaxByTimeRuleCount, maxByTimeRuleCount_);
      DARABONBA_PTR_FROM_JSON(SupportMetricTags, supportMetricTags_);
      DARABONBA_PTR_FROM_JSON(SupportMetrics, supportMetrics_);
      DARABONBA_PTR_FROM_JSON(SupportRuleTypes, supportRuleTypes_);
    };
    AutoScalingConstraints() = default ;
    AutoScalingConstraints(const AutoScalingConstraints &) = default ;
    AutoScalingConstraints(AutoScalingConstraints &&) = default ;
    AutoScalingConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoScalingConstraints() = default ;
    AutoScalingConstraints& operator=(const AutoScalingConstraints &) = default ;
    AutoScalingConstraints& operator=(AutoScalingConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoScalingMetricUnits_ != nullptr
        && this->defaultMetricTriggeredRules_ != nullptr && this->maxAdjustmentValue_ != nullptr && this->maxByLoadRuleCount_ != nullptr && this->maxByTimeRuleCount_ != nullptr && this->supportMetricTags_ != nullptr
        && this->supportMetrics_ != nullptr && this->supportRuleTypes_ != nullptr; };
    // autoScalingMetricUnits Field Functions 
    bool hasAutoScalingMetricUnits() const { return this->autoScalingMetricUnits_ != nullptr;};
    void deleteAutoScalingMetricUnits() { this->autoScalingMetricUnits_ = nullptr;};
    inline const vector<MetricUnitValue> & autoScalingMetricUnits() const { DARABONBA_PTR_GET_CONST(autoScalingMetricUnits_, vector<MetricUnitValue>) };
    inline vector<MetricUnitValue> autoScalingMetricUnits() { DARABONBA_PTR_GET(autoScalingMetricUnits_, vector<MetricUnitValue>) };
    inline AutoScalingConstraints& setAutoScalingMetricUnits(const vector<MetricUnitValue> & autoScalingMetricUnits) { DARABONBA_PTR_SET_VALUE(autoScalingMetricUnits_, autoScalingMetricUnits) };
    inline AutoScalingConstraints& setAutoScalingMetricUnits(vector<MetricUnitValue> && autoScalingMetricUnits) { DARABONBA_PTR_SET_RVALUE(autoScalingMetricUnits_, autoScalingMetricUnits) };


    // defaultMetricTriggeredRules Field Functions 
    bool hasDefaultMetricTriggeredRules() const { return this->defaultMetricTriggeredRules_ != nullptr;};
    void deleteDefaultMetricTriggeredRules() { this->defaultMetricTriggeredRules_ = nullptr;};
    inline const vector<ScalingRule> & defaultMetricTriggeredRules() const { DARABONBA_PTR_GET_CONST(defaultMetricTriggeredRules_, vector<ScalingRule>) };
    inline vector<ScalingRule> defaultMetricTriggeredRules() { DARABONBA_PTR_GET(defaultMetricTriggeredRules_, vector<ScalingRule>) };
    inline AutoScalingConstraints& setDefaultMetricTriggeredRules(const vector<ScalingRule> & defaultMetricTriggeredRules) { DARABONBA_PTR_SET_VALUE(defaultMetricTriggeredRules_, defaultMetricTriggeredRules) };
    inline AutoScalingConstraints& setDefaultMetricTriggeredRules(vector<ScalingRule> && defaultMetricTriggeredRules) { DARABONBA_PTR_SET_RVALUE(defaultMetricTriggeredRules_, defaultMetricTriggeredRules) };


    // maxAdjustmentValue Field Functions 
    bool hasMaxAdjustmentValue() const { return this->maxAdjustmentValue_ != nullptr;};
    void deleteMaxAdjustmentValue() { this->maxAdjustmentValue_ = nullptr;};
    inline int32_t maxAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(maxAdjustmentValue_, 0) };
    inline AutoScalingConstraints& setMaxAdjustmentValue(int32_t maxAdjustmentValue) { DARABONBA_PTR_SET_VALUE(maxAdjustmentValue_, maxAdjustmentValue) };


    // maxByLoadRuleCount Field Functions 
    bool hasMaxByLoadRuleCount() const { return this->maxByLoadRuleCount_ != nullptr;};
    void deleteMaxByLoadRuleCount() { this->maxByLoadRuleCount_ = nullptr;};
    inline int32_t maxByLoadRuleCount() const { DARABONBA_PTR_GET_DEFAULT(maxByLoadRuleCount_, 0) };
    inline AutoScalingConstraints& setMaxByLoadRuleCount(int32_t maxByLoadRuleCount) { DARABONBA_PTR_SET_VALUE(maxByLoadRuleCount_, maxByLoadRuleCount) };


    // maxByTimeRuleCount Field Functions 
    bool hasMaxByTimeRuleCount() const { return this->maxByTimeRuleCount_ != nullptr;};
    void deleteMaxByTimeRuleCount() { this->maxByTimeRuleCount_ = nullptr;};
    inline int32_t maxByTimeRuleCount() const { DARABONBA_PTR_GET_DEFAULT(maxByTimeRuleCount_, 0) };
    inline AutoScalingConstraints& setMaxByTimeRuleCount(int32_t maxByTimeRuleCount) { DARABONBA_PTR_SET_VALUE(maxByTimeRuleCount_, maxByTimeRuleCount) };


    // supportMetricTags Field Functions 
    bool hasSupportMetricTags() const { return this->supportMetricTags_ != nullptr;};
    void deleteSupportMetricTags() { this->supportMetricTags_ = nullptr;};
    inline const vector<AutoScalingConstraintsSupportMetricTags> & supportMetricTags() const { DARABONBA_PTR_GET_CONST(supportMetricTags_, vector<AutoScalingConstraintsSupportMetricTags>) };
    inline vector<AutoScalingConstraintsSupportMetricTags> supportMetricTags() { DARABONBA_PTR_GET(supportMetricTags_, vector<AutoScalingConstraintsSupportMetricTags>) };
    inline AutoScalingConstraints& setSupportMetricTags(const vector<AutoScalingConstraintsSupportMetricTags> & supportMetricTags) { DARABONBA_PTR_SET_VALUE(supportMetricTags_, supportMetricTags) };
    inline AutoScalingConstraints& setSupportMetricTags(vector<AutoScalingConstraintsSupportMetricTags> && supportMetricTags) { DARABONBA_PTR_SET_RVALUE(supportMetricTags_, supportMetricTags) };


    // supportMetrics Field Functions 
    bool hasSupportMetrics() const { return this->supportMetrics_ != nullptr;};
    void deleteSupportMetrics() { this->supportMetrics_ = nullptr;};
    inline const vector<string> & supportMetrics() const { DARABONBA_PTR_GET_CONST(supportMetrics_, vector<string>) };
    inline vector<string> supportMetrics() { DARABONBA_PTR_GET(supportMetrics_, vector<string>) };
    inline AutoScalingConstraints& setSupportMetrics(const vector<string> & supportMetrics) { DARABONBA_PTR_SET_VALUE(supportMetrics_, supportMetrics) };
    inline AutoScalingConstraints& setSupportMetrics(vector<string> && supportMetrics) { DARABONBA_PTR_SET_RVALUE(supportMetrics_, supportMetrics) };


    // supportRuleTypes Field Functions 
    bool hasSupportRuleTypes() const { return this->supportRuleTypes_ != nullptr;};
    void deleteSupportRuleTypes() { this->supportRuleTypes_ = nullptr;};
    inline const vector<string> & supportRuleTypes() const { DARABONBA_PTR_GET_CONST(supportRuleTypes_, vector<string>) };
    inline vector<string> supportRuleTypes() { DARABONBA_PTR_GET(supportRuleTypes_, vector<string>) };
    inline AutoScalingConstraints& setSupportRuleTypes(const vector<string> & supportRuleTypes) { DARABONBA_PTR_SET_VALUE(supportRuleTypes_, supportRuleTypes) };
    inline AutoScalingConstraints& setSupportRuleTypes(vector<string> && supportRuleTypes) { DARABONBA_PTR_SET_RVALUE(supportRuleTypes_, supportRuleTypes) };


  protected:
    // 按负载伸缩指标单位描述。
    std::shared_ptr<vector<MetricUnitValue>> autoScalingMetricUnits_ = nullptr;
    // 默认按负载弹性伸缩规则列表
    std::shared_ptr<vector<ScalingRule>> defaultMetricTriggeredRules_ = nullptr;
    // 单次伸缩活动最大扩缩容节点数量。
    std::shared_ptr<int32_t> maxAdjustmentValue_ = nullptr;
    // 按负载规则数量最大值。
    std::shared_ptr<int32_t> maxByLoadRuleCount_ = nullptr;
    // 按时间规则数量最大值。
    std::shared_ptr<int32_t> maxByTimeRuleCount_ = nullptr;
    // 支持的按负载弹性伸缩指标Tag列表。
    std::shared_ptr<vector<AutoScalingConstraintsSupportMetricTags>> supportMetricTags_ = nullptr;
    // 支持的按负载弹性伸缩指标列表。
    std::shared_ptr<vector<string>> supportMetrics_ = nullptr;
    // 支持的弹性伸缩规则类型。
    std::shared_ptr<vector<string>> supportRuleTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
