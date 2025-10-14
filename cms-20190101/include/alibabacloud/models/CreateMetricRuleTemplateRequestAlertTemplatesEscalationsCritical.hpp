// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUESTALERTTEMPLATESESCALATIONSCRITICAL_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUESTALERTTEMPLATESESCALATIONSCRITICAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical() = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical(const CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical &) = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical(CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical &&) = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical() = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical& operator=(const CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical &) = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical& operator=(CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && return this->n_ == nullptr && return this->statistics_ == nullptr && return this->threshold_ == nullptr && return this->times_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline int32_t n() const { DARABONBA_PTR_GET_DEFAULT(n_, 0) };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical& setN(int32_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    std::shared_ptr<int32_t> n_ = nullptr;
    std::shared_ptr<string> statistics_ = nullptr;
    std::shared_ptr<string> threshold_ = nullptr;
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
