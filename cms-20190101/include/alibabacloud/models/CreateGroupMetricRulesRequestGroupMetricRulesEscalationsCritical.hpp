// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUESTGROUPMETRICRULESESCALATIONSCRITICAL_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUESTGROUPMETRICRULESESCALATIONSCRITICAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical() = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical(const CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical &) = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical(CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical &&) = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical() = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& operator=(const CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical &) = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& operator=(CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && return this->n_ == nullptr && return this->preCondition_ == nullptr && return this->statistics_ == nullptr && return this->threshold_ == nullptr && return this->times_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline string n() const { DARABONBA_PTR_GET_DEFAULT(n_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& setN(string n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // preCondition Field Functions 
    bool hasPreCondition() const { return this->preCondition_ != nullptr;};
    void deletePreCondition() { this->preCondition_ = nullptr;};
    inline string preCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    std::shared_ptr<string> n_ = nullptr;
    std::shared_ptr<string> preCondition_ = nullptr;
    std::shared_ptr<string> statistics_ = nullptr;
    std::shared_ptr<string> threshold_ = nullptr;
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
