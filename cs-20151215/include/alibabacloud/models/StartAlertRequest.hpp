// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class StartAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alert_rule_group_name, alertRuleGroupName_);
      DARABONBA_PTR_TO_JSON(alert_rule_name, alertRuleName_);
    };
    friend void from_json(const Darabonba::Json& j, StartAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alert_rule_group_name, alertRuleGroupName_);
      DARABONBA_PTR_FROM_JSON(alert_rule_name, alertRuleName_);
    };
    StartAlertRequest() = default ;
    StartAlertRequest(const StartAlertRequest &) = default ;
    StartAlertRequest(StartAlertRequest &&) = default ;
    StartAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAlertRequest() = default ;
    StartAlertRequest& operator=(const StartAlertRequest &) = default ;
    StartAlertRequest& operator=(StartAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertRuleGroupName_ != nullptr
        && this->alertRuleName_ != nullptr; };
    // alertRuleGroupName Field Functions 
    bool hasAlertRuleGroupName() const { return this->alertRuleGroupName_ != nullptr;};
    void deleteAlertRuleGroupName() { this->alertRuleGroupName_ = nullptr;};
    inline string alertRuleGroupName() const { DARABONBA_PTR_GET_DEFAULT(alertRuleGroupName_, "") };
    inline StartAlertRequest& setAlertRuleGroupName(string alertRuleGroupName) { DARABONBA_PTR_SET_VALUE(alertRuleGroupName_, alertRuleGroupName) };


    // alertRuleName Field Functions 
    bool hasAlertRuleName() const { return this->alertRuleName_ != nullptr;};
    void deleteAlertRuleName() { this->alertRuleName_ = nullptr;};
    inline string alertRuleName() const { DARABONBA_PTR_GET_DEFAULT(alertRuleName_, "") };
    inline StartAlertRequest& setAlertRuleName(string alertRuleName) { DARABONBA_PTR_SET_VALUE(alertRuleName_, alertRuleName) };


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
