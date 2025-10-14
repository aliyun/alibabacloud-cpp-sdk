// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESREQUESTRULESESCALATIONSINFO_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESREQUESTRULESESCALATIONSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRulesRequestRulesEscalationsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRulesRequestRulesEscalationsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRulesRequestRulesEscalationsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    PutResourceMetricRulesRequestRulesEscalationsInfo() = default ;
    PutResourceMetricRulesRequestRulesEscalationsInfo(const PutResourceMetricRulesRequestRulesEscalationsInfo &) = default ;
    PutResourceMetricRulesRequestRulesEscalationsInfo(PutResourceMetricRulesRequestRulesEscalationsInfo &&) = default ;
    PutResourceMetricRulesRequestRulesEscalationsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRulesRequestRulesEscalationsInfo() = default ;
    PutResourceMetricRulesRequestRulesEscalationsInfo& operator=(const PutResourceMetricRulesRequestRulesEscalationsInfo &) = default ;
    PutResourceMetricRulesRequestRulesEscalationsInfo& operator=(PutResourceMetricRulesRequestRulesEscalationsInfo &&) = default ;
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
    inline PutResourceMetricRulesRequestRulesEscalationsInfo& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline int32_t n() const { DARABONBA_PTR_GET_DEFAULT(n_, 0) };
    inline PutResourceMetricRulesRequestRulesEscalationsInfo& setN(int32_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // preCondition Field Functions 
    bool hasPreCondition() const { return this->preCondition_ != nullptr;};
    void deletePreCondition() { this->preCondition_ = nullptr;};
    inline string preCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
    inline PutResourceMetricRulesRequestRulesEscalationsInfo& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline PutResourceMetricRulesRequestRulesEscalationsInfo& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline PutResourceMetricRulesRequestRulesEscalationsInfo& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline PutResourceMetricRulesRequestRulesEscalationsInfo& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    std::shared_ptr<int32_t> n_ = nullptr;
    std::shared_ptr<string> preCondition_ = nullptr;
    std::shared_ptr<string> statistics_ = nullptr;
    std::shared_ptr<string> threshold_ = nullptr;
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
