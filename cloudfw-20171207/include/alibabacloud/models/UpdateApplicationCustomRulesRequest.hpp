// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCUSTOMRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCUSTOMRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdateApplicationCustomRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationCustomRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationCustomRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    UpdateApplicationCustomRulesRequest() = default ;
    UpdateApplicationCustomRulesRequest(const UpdateApplicationCustomRulesRequest &) = default ;
    UpdateApplicationCustomRulesRequest(UpdateApplicationCustomRulesRequest &&) = default ;
    UpdateApplicationCustomRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationCustomRulesRequest() = default ;
    UpdateApplicationCustomRulesRequest& operator=(const UpdateApplicationCustomRulesRequest &) = default ;
    UpdateApplicationCustomRulesRequest& operator=(UpdateApplicationCustomRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(AddApplicationIds, addApplicationIds_);
        DARABONBA_PTR_TO_JSON(ApplicationCustomRuleId, applicationCustomRuleId_);
        DARABONBA_PTR_TO_JSON(ApplicationCustomRuleName, applicationCustomRuleName_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RemoveApplicationIds, removeApplicationIds_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(AddApplicationIds, addApplicationIds_);
        DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleId, applicationCustomRuleId_);
        DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleName, applicationCustomRuleName_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RemoveApplicationIds, removeApplicationIds_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addApplicationIds_ == nullptr
        && this->applicationCustomRuleId_ == nullptr && this->applicationCustomRuleName_ == nullptr && this->priority_ == nullptr && this->removeApplicationIds_ == nullptr && this->ruleAction_ == nullptr; };
      // addApplicationIds Field Functions 
      bool hasAddApplicationIds() const { return this->addApplicationIds_ != nullptr;};
      void deleteAddApplicationIds() { this->addApplicationIds_ = nullptr;};
      inline const vector<int64_t> & getAddApplicationIds() const { DARABONBA_PTR_GET_CONST(addApplicationIds_, vector<int64_t>) };
      inline vector<int64_t> getAddApplicationIds() { DARABONBA_PTR_GET(addApplicationIds_, vector<int64_t>) };
      inline Rules& setAddApplicationIds(const vector<int64_t> & addApplicationIds) { DARABONBA_PTR_SET_VALUE(addApplicationIds_, addApplicationIds) };
      inline Rules& setAddApplicationIds(vector<int64_t> && addApplicationIds) { DARABONBA_PTR_SET_RVALUE(addApplicationIds_, addApplicationIds) };


      // applicationCustomRuleId Field Functions 
      bool hasApplicationCustomRuleId() const { return this->applicationCustomRuleId_ != nullptr;};
      void deleteApplicationCustomRuleId() { this->applicationCustomRuleId_ = nullptr;};
      inline string getApplicationCustomRuleId() const { DARABONBA_PTR_GET_DEFAULT(applicationCustomRuleId_, "") };
      inline Rules& setApplicationCustomRuleId(string applicationCustomRuleId) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleId_, applicationCustomRuleId) };


      // applicationCustomRuleName Field Functions 
      bool hasApplicationCustomRuleName() const { return this->applicationCustomRuleName_ != nullptr;};
      void deleteApplicationCustomRuleName() { this->applicationCustomRuleName_ = nullptr;};
      inline string getApplicationCustomRuleName() const { DARABONBA_PTR_GET_DEFAULT(applicationCustomRuleName_, "") };
      inline Rules& setApplicationCustomRuleName(string applicationCustomRuleName) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleName_, applicationCustomRuleName) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline Rules& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // removeApplicationIds Field Functions 
      bool hasRemoveApplicationIds() const { return this->removeApplicationIds_ != nullptr;};
      void deleteRemoveApplicationIds() { this->removeApplicationIds_ = nullptr;};
      inline const vector<int64_t> & getRemoveApplicationIds() const { DARABONBA_PTR_GET_CONST(removeApplicationIds_, vector<int64_t>) };
      inline vector<int64_t> getRemoveApplicationIds() { DARABONBA_PTR_GET(removeApplicationIds_, vector<int64_t>) };
      inline Rules& setRemoveApplicationIds(const vector<int64_t> & removeApplicationIds) { DARABONBA_PTR_SET_VALUE(removeApplicationIds_, removeApplicationIds) };
      inline Rules& setRemoveApplicationIds(vector<int64_t> && removeApplicationIds) { DARABONBA_PTR_SET_RVALUE(removeApplicationIds_, removeApplicationIds) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
      inline Rules& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    protected:
      // The list of application IDs to be associated. You can specify up to 200 IDs. The IDs cannot be 0 and must exist in the built-in application signature library. The IDs must not overlap with those in RemoveApplicationIds. The combined list of added and removed IDs cannot be empty and cannot exceed 200.
      shared_ptr<vector<int64_t>> addApplicationIds_ {};
      // The ID of the custom application rule to be modified. The rule must exist within the current Alibaba Cloud account.
      shared_ptr<string> applicationCustomRuleId_ {};
      // The name of the custom rule. The name can be up to 64 characters in length and can contain Chinese characters, English letters, digits, hyphens (-), underscores (_), and periods (.). If this parameter is not specified or is left empty, the original value is retained.
      shared_ptr<string> applicationCustomRuleName_ {};
      // The priority of the rule. This parameter is required in actual calls. Valid values: integers from 1 to 200. A smaller value indicates a higher priority. Priorities must be unique within the same template. You can swap priorities by deleting and then re-inserting rules.
      shared_ptr<int64_t> priority_ {};
      // The list of application IDs to be disassociated. You can specify up to 200 IDs. The IDs must not overlap with those in AddApplicationIds. The combined list of added and removed IDs cannot be empty and cannot exceed 200.
      shared_ptr<vector<int64_t>> removeApplicationIds_ {};
      // The action to perform after a rule is matched. This parameter is required in actual calls. Valid values:
      // - **Allow**: Allows the traffic.
      // - **Alert**: Monitors the traffic.
      // - **Deny**: Blocks the traffic.
      shared_ptr<string> ruleAction_ {};
    };

    virtual bool empty() const override { return this->rules_ == nullptr; };
    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<UpdateApplicationCustomRulesRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<UpdateApplicationCustomRulesRequest::Rules>) };
    inline vector<UpdateApplicationCustomRulesRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<UpdateApplicationCustomRulesRequest::Rules>) };
    inline UpdateApplicationCustomRulesRequest& setRules(const vector<UpdateApplicationCustomRulesRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline UpdateApplicationCustomRulesRequest& setRules(vector<UpdateApplicationCustomRulesRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The list of custom application rules to be modified. You can specify up to 20 rules at a time. Rule IDs in the list must be unique.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateApplicationCustomRulesRequest::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
