// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7GLOBALRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7GLOBALRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7GlobalRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7GlobalRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalRules, globalRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7GlobalRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalRules, globalRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeL7GlobalRuleResponseBody() = default ;
    DescribeL7GlobalRuleResponseBody(const DescribeL7GlobalRuleResponseBody &) = default ;
    DescribeL7GlobalRuleResponseBody(DescribeL7GlobalRuleResponseBody &&) = default ;
    DescribeL7GlobalRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7GlobalRuleResponseBody() = default ;
    DescribeL7GlobalRuleResponseBody& operator=(const DescribeL7GlobalRuleResponseBody &) = default ;
    DescribeL7GlobalRuleResponseBody& operator=(DescribeL7GlobalRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GlobalRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalRules& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ActionDefault, actionDefault_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ActionDefault, actionDefault_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      };
      GlobalRules() = default ;
      GlobalRules(const GlobalRules &) = default ;
      GlobalRules(GlobalRules &&) = default ;
      GlobalRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalRules() = default ;
      GlobalRules& operator=(const GlobalRules &) = default ;
      GlobalRules& operator=(GlobalRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->actionDefault_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline GlobalRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // actionDefault Field Functions 
      bool hasActionDefault() const { return this->actionDefault_ != nullptr;};
      void deleteActionDefault() { this->actionDefault_ = nullptr;};
      inline string getActionDefault() const { DARABONBA_PTR_GET_DEFAULT(actionDefault_, "") };
      inline GlobalRules& setActionDefault(string actionDefault) { DARABONBA_PTR_SET_VALUE(actionDefault_, actionDefault) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GlobalRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline int64_t getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0L) };
      inline GlobalRules& setEnabled(int64_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline GlobalRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline GlobalRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> actionDefault_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> enabled_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<string> ruleName_ {};
    };

    virtual bool empty() const override { return this->globalRules_ == nullptr
        && this->requestId_ == nullptr; };
    // globalRules Field Functions 
    bool hasGlobalRules() const { return this->globalRules_ != nullptr;};
    void deleteGlobalRules() { this->globalRules_ = nullptr;};
    inline const vector<DescribeL7GlobalRuleResponseBody::GlobalRules> & getGlobalRules() const { DARABONBA_PTR_GET_CONST(globalRules_, vector<DescribeL7GlobalRuleResponseBody::GlobalRules>) };
    inline vector<DescribeL7GlobalRuleResponseBody::GlobalRules> getGlobalRules() { DARABONBA_PTR_GET(globalRules_, vector<DescribeL7GlobalRuleResponseBody::GlobalRules>) };
    inline DescribeL7GlobalRuleResponseBody& setGlobalRules(const vector<DescribeL7GlobalRuleResponseBody::GlobalRules> & globalRules) { DARABONBA_PTR_SET_VALUE(globalRules_, globalRules) };
    inline DescribeL7GlobalRuleResponseBody& setGlobalRules(vector<DescribeL7GlobalRuleResponseBody::GlobalRules> && globalRules) { DARABONBA_PTR_SET_RVALUE(globalRules_, globalRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeL7GlobalRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeL7GlobalRuleResponseBody::GlobalRules>> globalRules_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
