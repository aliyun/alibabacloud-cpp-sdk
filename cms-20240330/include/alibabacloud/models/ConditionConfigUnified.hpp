// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITIONCONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_CONDITIONCONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApmCompositeCompareConfig.hpp>
#include <alibabacloud/models/ApmThresholdConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ConditionConfigUnified : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConditionConfigUnified& obj) { 
      DARABONBA_PTR_TO_JSON(aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(compareList, compareList_);
      DARABONBA_PTR_TO_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
      DARABONBA_PTR_TO_JSON(thresholdList, thresholdList_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ConditionConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(compareList, compareList_);
      DARABONBA_PTR_FROM_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(thresholdList, thresholdList_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ConditionConfigUnified() = default ;
    ConditionConfigUnified(const ConditionConfigUnified &) = default ;
    ConditionConfigUnified(ConditionConfigUnified &&) = default ;
    ConditionConfigUnified(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConditionConfigUnified() = default ;
    ConditionConfigUnified& operator=(const ConditionConfigUnified &) = default ;
    ConditionConfigUnified& operator=(ConditionConfigUnified &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregate_ == nullptr
        && this->compareList_ == nullptr && this->durationSecs_ == nullptr && this->operator_ == nullptr && this->relation_ == nullptr && this->severity_ == nullptr
        && this->threshold_ == nullptr && this->thresholdList_ == nullptr && this->type_ == nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline ConditionConfigUnified& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // compareList Field Functions 
    bool hasCompareList() const { return this->compareList_ != nullptr;};
    void deleteCompareList() { this->compareList_ = nullptr;};
    inline const vector<ApmCompositeCompareConfig> & getCompareList() const { DARABONBA_PTR_GET_CONST(compareList_, vector<ApmCompositeCompareConfig>) };
    inline vector<ApmCompositeCompareConfig> getCompareList() { DARABONBA_PTR_GET(compareList_, vector<ApmCompositeCompareConfig>) };
    inline ConditionConfigUnified& setCompareList(const vector<ApmCompositeCompareConfig> & compareList) { DARABONBA_PTR_SET_VALUE(compareList_, compareList) };
    inline ConditionConfigUnified& setCompareList(vector<ApmCompositeCompareConfig> && compareList) { DARABONBA_PTR_SET_RVALUE(compareList_, compareList) };


    // durationSecs Field Functions 
    bool hasDurationSecs() const { return this->durationSecs_ != nullptr;};
    void deleteDurationSecs() { this->durationSecs_ = nullptr;};
    inline int32_t getDurationSecs() const { DARABONBA_PTR_GET_DEFAULT(durationSecs_, 0) };
    inline ConditionConfigUnified& setDurationSecs(int32_t durationSecs) { DARABONBA_PTR_SET_VALUE(durationSecs_, durationSecs) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ConditionConfigUnified& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline ConditionConfigUnified& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ConditionConfigUnified& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ConditionConfigUnified& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // thresholdList Field Functions 
    bool hasThresholdList() const { return this->thresholdList_ != nullptr;};
    void deleteThresholdList() { this->thresholdList_ = nullptr;};
    inline const vector<ApmThresholdConfig> & getThresholdList() const { DARABONBA_PTR_GET_CONST(thresholdList_, vector<ApmThresholdConfig>) };
    inline vector<ApmThresholdConfig> getThresholdList() { DARABONBA_PTR_GET(thresholdList_, vector<ApmThresholdConfig>) };
    inline ConditionConfigUnified& setThresholdList(const vector<ApmThresholdConfig> & thresholdList) { DARABONBA_PTR_SET_VALUE(thresholdList_, thresholdList) };
    inline ConditionConfigUnified& setThresholdList(vector<ApmThresholdConfig> && thresholdList) { DARABONBA_PTR_SET_RVALUE(thresholdList_, thresholdList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ConditionConfigUnified& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 聚合函数（APM_SIMPLE_CONDITION）
    shared_ptr<string> aggregate_ {};
    // 多条比较（APM_COMPOSITE_CONDITION）
    shared_ptr<vector<ApmCompositeCompareConfig>> compareList_ {};
    // 持续时间（秒），PROMETHEUS_SIMPLE / UMODEL_METRICSET 使用
    shared_ptr<int32_t> durationSecs_ {};
    // 比较操作符（UMODEL_METRICSET_CONDITION 或 APM_SIMPLE_CONDITION）
    shared_ptr<string> operator_ {};
    // 条件间逻辑关系（APM_COMPOSITE_CONDITION）
    shared_ptr<string> relation_ {};
    // 严重等级（UMODEL / PROMETHEUS_SIMPLE / APM_COMPOSITE）
    shared_ptr<string> severity_ {};
    // 阈值（UMODEL_METRICSET_CONDITION）
    shared_ptr<double> threshold_ {};
    // 多阈值列表（APM_SIMPLE_CONDITION）
    shared_ptr<vector<ApmThresholdConfig>> thresholdList_ {};
    // 检测条件类型
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
