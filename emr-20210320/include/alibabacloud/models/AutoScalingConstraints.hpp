// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOSCALINGCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_AUTOSCALINGCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/MetricUnitValue.hpp>
#include <alibabacloud/models/ScalingRule.hpp>
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
    class SupportMetricTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportMetricTags& obj) { 
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, SupportMetricTags& obj) { 
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      SupportMetricTags() = default ;
      SupportMetricTags(const SupportMetricTags &) = default ;
      SupportMetricTags(SupportMetricTags &&) = default ;
      SupportMetricTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportMetricTags() = default ;
      SupportMetricTags& operator=(const SupportMetricTags &) = default ;
      SupportMetricTags& operator=(SupportMetricTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metricName_ == nullptr
        && this->tags_ == nullptr; };
      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline SupportMetricTags& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
      inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
      inline SupportMetricTags& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline SupportMetricTags& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // 指标名称。
      shared_ptr<string> metricName_ {};
      // 指标Tag。
      shared_ptr<vector<Tag>> tags_ {};
    };

    virtual bool empty() const override { return this->autoScalingMetricUnits_ == nullptr
        && this->defaultMetricTriggeredRules_ == nullptr && this->maxAdjustmentValue_ == nullptr && this->maxByLoadRuleCount_ == nullptr && this->maxByTimeRuleCount_ == nullptr && this->supportMetricTags_ == nullptr
        && this->supportMetrics_ == nullptr && this->supportRuleTypes_ == nullptr; };
    // autoScalingMetricUnits Field Functions 
    bool hasAutoScalingMetricUnits() const { return this->autoScalingMetricUnits_ != nullptr;};
    void deleteAutoScalingMetricUnits() { this->autoScalingMetricUnits_ = nullptr;};
    inline const vector<MetricUnitValue> & getAutoScalingMetricUnits() const { DARABONBA_PTR_GET_CONST(autoScalingMetricUnits_, vector<MetricUnitValue>) };
    inline vector<MetricUnitValue> getAutoScalingMetricUnits() { DARABONBA_PTR_GET(autoScalingMetricUnits_, vector<MetricUnitValue>) };
    inline AutoScalingConstraints& setAutoScalingMetricUnits(const vector<MetricUnitValue> & autoScalingMetricUnits) { DARABONBA_PTR_SET_VALUE(autoScalingMetricUnits_, autoScalingMetricUnits) };
    inline AutoScalingConstraints& setAutoScalingMetricUnits(vector<MetricUnitValue> && autoScalingMetricUnits) { DARABONBA_PTR_SET_RVALUE(autoScalingMetricUnits_, autoScalingMetricUnits) };


    // defaultMetricTriggeredRules Field Functions 
    bool hasDefaultMetricTriggeredRules() const { return this->defaultMetricTriggeredRules_ != nullptr;};
    void deleteDefaultMetricTriggeredRules() { this->defaultMetricTriggeredRules_ = nullptr;};
    inline const vector<ScalingRule> & getDefaultMetricTriggeredRules() const { DARABONBA_PTR_GET_CONST(defaultMetricTriggeredRules_, vector<ScalingRule>) };
    inline vector<ScalingRule> getDefaultMetricTriggeredRules() { DARABONBA_PTR_GET(defaultMetricTriggeredRules_, vector<ScalingRule>) };
    inline AutoScalingConstraints& setDefaultMetricTriggeredRules(const vector<ScalingRule> & defaultMetricTriggeredRules) { DARABONBA_PTR_SET_VALUE(defaultMetricTriggeredRules_, defaultMetricTriggeredRules) };
    inline AutoScalingConstraints& setDefaultMetricTriggeredRules(vector<ScalingRule> && defaultMetricTriggeredRules) { DARABONBA_PTR_SET_RVALUE(defaultMetricTriggeredRules_, defaultMetricTriggeredRules) };


    // maxAdjustmentValue Field Functions 
    bool hasMaxAdjustmentValue() const { return this->maxAdjustmentValue_ != nullptr;};
    void deleteMaxAdjustmentValue() { this->maxAdjustmentValue_ = nullptr;};
    inline int32_t getMaxAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(maxAdjustmentValue_, 0) };
    inline AutoScalingConstraints& setMaxAdjustmentValue(int32_t maxAdjustmentValue) { DARABONBA_PTR_SET_VALUE(maxAdjustmentValue_, maxAdjustmentValue) };


    // maxByLoadRuleCount Field Functions 
    bool hasMaxByLoadRuleCount() const { return this->maxByLoadRuleCount_ != nullptr;};
    void deleteMaxByLoadRuleCount() { this->maxByLoadRuleCount_ = nullptr;};
    inline int32_t getMaxByLoadRuleCount() const { DARABONBA_PTR_GET_DEFAULT(maxByLoadRuleCount_, 0) };
    inline AutoScalingConstraints& setMaxByLoadRuleCount(int32_t maxByLoadRuleCount) { DARABONBA_PTR_SET_VALUE(maxByLoadRuleCount_, maxByLoadRuleCount) };


    // maxByTimeRuleCount Field Functions 
    bool hasMaxByTimeRuleCount() const { return this->maxByTimeRuleCount_ != nullptr;};
    void deleteMaxByTimeRuleCount() { this->maxByTimeRuleCount_ = nullptr;};
    inline int32_t getMaxByTimeRuleCount() const { DARABONBA_PTR_GET_DEFAULT(maxByTimeRuleCount_, 0) };
    inline AutoScalingConstraints& setMaxByTimeRuleCount(int32_t maxByTimeRuleCount) { DARABONBA_PTR_SET_VALUE(maxByTimeRuleCount_, maxByTimeRuleCount) };


    // supportMetricTags Field Functions 
    bool hasSupportMetricTags() const { return this->supportMetricTags_ != nullptr;};
    void deleteSupportMetricTags() { this->supportMetricTags_ = nullptr;};
    inline const vector<AutoScalingConstraints::SupportMetricTags> & getSupportMetricTags() const { DARABONBA_PTR_GET_CONST(supportMetricTags_, vector<AutoScalingConstraints::SupportMetricTags>) };
    inline vector<AutoScalingConstraints::SupportMetricTags> getSupportMetricTags() { DARABONBA_PTR_GET(supportMetricTags_, vector<AutoScalingConstraints::SupportMetricTags>) };
    inline AutoScalingConstraints& setSupportMetricTags(const vector<AutoScalingConstraints::SupportMetricTags> & supportMetricTags) { DARABONBA_PTR_SET_VALUE(supportMetricTags_, supportMetricTags) };
    inline AutoScalingConstraints& setSupportMetricTags(vector<AutoScalingConstraints::SupportMetricTags> && supportMetricTags) { DARABONBA_PTR_SET_RVALUE(supportMetricTags_, supportMetricTags) };


    // supportMetrics Field Functions 
    bool hasSupportMetrics() const { return this->supportMetrics_ != nullptr;};
    void deleteSupportMetrics() { this->supportMetrics_ = nullptr;};
    inline const vector<string> & getSupportMetrics() const { DARABONBA_PTR_GET_CONST(supportMetrics_, vector<string>) };
    inline vector<string> getSupportMetrics() { DARABONBA_PTR_GET(supportMetrics_, vector<string>) };
    inline AutoScalingConstraints& setSupportMetrics(const vector<string> & supportMetrics) { DARABONBA_PTR_SET_VALUE(supportMetrics_, supportMetrics) };
    inline AutoScalingConstraints& setSupportMetrics(vector<string> && supportMetrics) { DARABONBA_PTR_SET_RVALUE(supportMetrics_, supportMetrics) };


    // supportRuleTypes Field Functions 
    bool hasSupportRuleTypes() const { return this->supportRuleTypes_ != nullptr;};
    void deleteSupportRuleTypes() { this->supportRuleTypes_ = nullptr;};
    inline const vector<string> & getSupportRuleTypes() const { DARABONBA_PTR_GET_CONST(supportRuleTypes_, vector<string>) };
    inline vector<string> getSupportRuleTypes() { DARABONBA_PTR_GET(supportRuleTypes_, vector<string>) };
    inline AutoScalingConstraints& setSupportRuleTypes(const vector<string> & supportRuleTypes) { DARABONBA_PTR_SET_VALUE(supportRuleTypes_, supportRuleTypes) };
    inline AutoScalingConstraints& setSupportRuleTypes(vector<string> && supportRuleTypes) { DARABONBA_PTR_SET_RVALUE(supportRuleTypes_, supportRuleTypes) };


  protected:
    // 按负载伸缩指标单位描述。
    shared_ptr<vector<MetricUnitValue>> autoScalingMetricUnits_ {};
    // 默认按负载弹性伸缩规则列表
    shared_ptr<vector<ScalingRule>> defaultMetricTriggeredRules_ {};
    // 单次伸缩活动最大扩缩容节点数量。
    shared_ptr<int32_t> maxAdjustmentValue_ {};
    // 按负载规则数量最大值。
    shared_ptr<int32_t> maxByLoadRuleCount_ {};
    // 按时间规则数量最大值。
    shared_ptr<int32_t> maxByTimeRuleCount_ {};
    // 支持的按负载弹性伸缩指标Tag列表。
    shared_ptr<vector<AutoScalingConstraints::SupportMetricTags>> supportMetricTags_ {};
    // 支持的按负载弹性伸缩指标列表。
    shared_ptr<vector<string>> supportMetrics_ {};
    // 支持的弹性伸缩规则类型。
    shared_ptr<vector<string>> supportRuleTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
