// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHSCHEDULERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHSCHEDULERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class SwitchSchedulerRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchSchedulerRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SwitchData, switchData_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchSchedulerRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SwitchData, switchData_);
    };
    SwitchSchedulerRuleRequest() = default ;
    SwitchSchedulerRuleRequest(const SwitchSchedulerRuleRequest &) = default ;
    SwitchSchedulerRuleRequest(SwitchSchedulerRuleRequest &&) = default ;
    SwitchSchedulerRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchSchedulerRuleRequest() = default ;
    SwitchSchedulerRuleRequest& operator=(const SwitchSchedulerRuleRequest &) = default ;
    SwitchSchedulerRuleRequest& operator=(SwitchSchedulerRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleName_ == nullptr
        && this->ruleType_ == nullptr && this->switchData_ == nullptr; };
    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline SwitchSchedulerRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline SwitchSchedulerRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // switchData Field Functions 
    bool hasSwitchData() const { return this->switchData_ != nullptr;};
    void deleteSwitchData() { this->switchData_ = nullptr;};
    inline string getSwitchData() const { DARABONBA_PTR_GET_DEFAULT(switchData_, "") };
    inline SwitchSchedulerRuleRequest& setSwitchData(string switchData) { DARABONBA_PTR_SET_VALUE(switchData_, switchData) };


  protected:
    // The name of the scheduling rule to manage.
    // 
    // > You can call the [DescribeSchedulerRules](https://help.aliyun.com/document_detail/157481.html) operation to query the names of all scheduling rules.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The type of the scheduling rule. Valid values:
    // 
    // *   **2**: tiered protection rule
    // *   **3**: network acceleration rule
    // *   **5**: Alibaba Cloud CDN (CDN) interaction rule
    // *   **6**: cloud service interaction rule
    // 
    // This parameter is required.
    shared_ptr<int32_t> ruleType_ {};
    // The configuration that is used to switch service traffic. This parameter is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that includes the following parameters:
    // 
    // *   **Value**: required. The IP address of the associated resource. Data type: string.
    // 
    // *   **State**: required. The operation type. Data type: integer. Valid values:
    // 
    //     *   **0**: switches service traffic from the associated resource to your Anti-DDoS Pro or Anti-DDoS Premium instance for scrubbing.
    //     *   **1**: switches service traffic back to the associated cloud resource.
    // 
    // *   **Interval**: optional. The waiting time that is required before the service traffic is switched back. Unit: minutes. Data type: integer. Usage notes:
    // 
    //     *   If the **State** parameter is set to **0**, you must set this parameter to \\*\\*-1\\*\\*. Otherwise, the call fails.
    //     *   If the **State** parameter is set to **1**, you do not need to set this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> switchData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
