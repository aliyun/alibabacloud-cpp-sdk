// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODYFAILEDLISTRESULTTARGET_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODYFAILEDLISTRESULTTARGET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutResourceMetricRulesResponseBodyFailedListResultTargetResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRulesResponseBodyFailedListResultTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRulesResponseBodyFailedListResultTarget& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRulesResponseBodyFailedListResultTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    PutResourceMetricRulesResponseBodyFailedListResultTarget() = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTarget(const PutResourceMetricRulesResponseBodyFailedListResultTarget &) = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTarget(PutResourceMetricRulesResponseBodyFailedListResultTarget &&) = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRulesResponseBodyFailedListResultTarget() = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTarget& operator=(const PutResourceMetricRulesResponseBodyFailedListResultTarget &) = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTarget& operator=(PutResourceMetricRulesResponseBodyFailedListResultTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr
        && return this->ruleId_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::PutResourceMetricRulesResponseBodyFailedListResultTargetResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::PutResourceMetricRulesResponseBodyFailedListResultTargetResult) };
    inline Models::PutResourceMetricRulesResponseBodyFailedListResultTargetResult result() { DARABONBA_PTR_GET(result_, Models::PutResourceMetricRulesResponseBodyFailedListResultTargetResult) };
    inline PutResourceMetricRulesResponseBodyFailedListResultTarget& setResult(const Models::PutResourceMetricRulesResponseBodyFailedListResultTargetResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline PutResourceMetricRulesResponseBodyFailedListResultTarget& setResult(Models::PutResourceMetricRulesResponseBodyFailedListResultTargetResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutResourceMetricRulesResponseBodyFailedListResultTarget& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The alert rule that failed to be created.
    std::shared_ptr<Models::PutResourceMetricRulesResponseBodyFailedListResultTargetResult> result_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
