// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class StopAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alert_rule_group_name, alertRuleGroupName_);
      DARABONBA_PTR_TO_JSON(alert_rule_name, alertRuleName_);
    };
    friend void from_json(const Darabonba::Json& j, StopAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alert_rule_group_name, alertRuleGroupName_);
      DARABONBA_PTR_FROM_JSON(alert_rule_name, alertRuleName_);
    };
    StopAlertRequest() = default ;
    StopAlertRequest(const StopAlertRequest &) = default ;
    StopAlertRequest(StopAlertRequest &&) = default ;
    StopAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopAlertRequest() = default ;
    StopAlertRequest& operator=(const StopAlertRequest &) = default ;
    StopAlertRequest& operator=(StopAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertRuleGroupName_ == nullptr
        && return this->alertRuleName_ == nullptr; };
    // alertRuleGroupName Field Functions 
    bool hasAlertRuleGroupName() const { return this->alertRuleGroupName_ != nullptr;};
    void deleteAlertRuleGroupName() { this->alertRuleGroupName_ = nullptr;};
    inline string alertRuleGroupName() const { DARABONBA_PTR_GET_DEFAULT(alertRuleGroupName_, "") };
    inline StopAlertRequest& setAlertRuleGroupName(string alertRuleGroupName) { DARABONBA_PTR_SET_VALUE(alertRuleGroupName_, alertRuleGroupName) };


    // alertRuleName Field Functions 
    bool hasAlertRuleName() const { return this->alertRuleName_ != nullptr;};
    void deleteAlertRuleName() { this->alertRuleName_ = nullptr;};
    inline string alertRuleName() const { DARABONBA_PTR_GET_DEFAULT(alertRuleName_, "") };
    inline StopAlertRequest& setAlertRuleName(string alertRuleName) { DARABONBA_PTR_SET_VALUE(alertRuleName_, alertRuleName) };


  protected:
    // The name of the alert rule group.
    std::shared_ptr<string> alertRuleGroupName_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> alertRuleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
