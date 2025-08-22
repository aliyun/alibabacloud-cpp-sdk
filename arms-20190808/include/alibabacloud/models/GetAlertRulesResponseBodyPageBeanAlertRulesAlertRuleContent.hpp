// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRULESRESPONSEBODYPAGEBEANALERTRULESALERTRULECONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRULESRESPONSEBODYPAGEBEANALERTRULESALERTRULECONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRuleItems, alertRuleItems_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRuleItems, alertRuleItems_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
    };
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent() = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent(const GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent &) = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent(GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent &&) = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent() = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent& operator=(const GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent &) = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent& operator=(GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertRuleItems_ != nullptr
        && this->condition_ != nullptr; };
    // alertRuleItems Field Functions 
    bool hasAlertRuleItems() const { return this->alertRuleItems_ != nullptr;};
    void deleteAlertRuleItems() { this->alertRuleItems_ = nullptr;};
    inline const vector<Models::GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems> & alertRuleItems() const { DARABONBA_PTR_GET_CONST(alertRuleItems_, vector<Models::GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems>) };
    inline vector<Models::GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems> alertRuleItems() { DARABONBA_PTR_GET(alertRuleItems_, vector<Models::GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems>) };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent& setAlertRuleItems(const vector<Models::GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems> & alertRuleItems) { DARABONBA_PTR_SET_VALUE(alertRuleItems_, alertRuleItems) };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent& setAlertRuleItems(vector<Models::GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems> && alertRuleItems) { DARABONBA_PTR_SET_RVALUE(alertRuleItems_, alertRuleItems) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContent& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


  protected:
    // The trigger conditions of the Application Monitoring or Browser Monitoring alert rule.
    std::shared_ptr<vector<Models::GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems>> alertRuleItems_ = nullptr;
    // The relationship between multiple alert conditions specified for the Application Monitoring or Browser Monitoring alert rule. Valid values:
    // 
    // *   OR: The alert rule is triggered if one of the conditions is met.
    // *   AND: The alert rule is triggered if all the conditions are met.
    std::shared_ptr<string> condition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
