// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomRules, waitingRoomRules_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomRules, waitingRoomRules_);
    };
    ListWaitingRoomRulesResponseBody() = default ;
    ListWaitingRoomRulesResponseBody(const ListWaitingRoomRulesResponseBody &) = default ;
    ListWaitingRoomRulesResponseBody(ListWaitingRoomRulesResponseBody &&) = default ;
    ListWaitingRoomRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomRulesResponseBody() = default ;
    ListWaitingRoomRulesResponseBody& operator=(const ListWaitingRoomRulesResponseBody &) = default ;
    ListWaitingRoomRulesResponseBody& operator=(ListWaitingRoomRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WaitingRoomRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WaitingRoomRules& obj) { 
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
      };
      friend void from_json(const Darabonba::Json& j, WaitingRoomRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
      };
      WaitingRoomRules() = default ;
      WaitingRoomRules(const WaitingRoomRules &) = default ;
      WaitingRoomRules(WaitingRoomRules &&) = default ;
      WaitingRoomRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WaitingRoomRules() = default ;
      WaitingRoomRules& operator=(const WaitingRoomRules &) = default ;
      WaitingRoomRules& operator=(WaitingRoomRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->rule_ == nullptr
        && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->waitingRoomRuleId_ == nullptr; };
      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline WaitingRoomRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


      // ruleEnable Field Functions 
      bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
      void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
      inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
      inline WaitingRoomRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline WaitingRoomRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // waitingRoomRuleId Field Functions 
      bool hasWaitingRoomRuleId() const { return this->waitingRoomRuleId_ != nullptr;};
      void deleteWaitingRoomRuleId() { this->waitingRoomRuleId_ = nullptr;};
      inline int64_t getWaitingRoomRuleId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomRuleId_, 0L) };
      inline WaitingRoomRules& setWaitingRoomRuleId(int64_t waitingRoomRuleId) { DARABONBA_PTR_SET_VALUE(waitingRoomRuleId_, waitingRoomRuleId) };


    protected:
      // Rule content, using conditional expressions to match user requests. This parameter does not need to be set when adding global configuration. There are two usage scenarios:
      // - Match all incoming requests: set the value to true
      // - Match specific requests: set the value to a custom expression, e.g., (http.host eq \\"video.example.com\\")
      shared_ptr<string> rule_ {};
      // Rule switch. This parameter does not need to be set when adding global configuration. Value range:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> ruleEnable_ {};
      // Rule name. This parameter does not need to be set when adding global configuration.
      shared_ptr<string> ruleName_ {};
      // Rule ID.
      shared_ptr<int64_t> waitingRoomRuleId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->waitingRoomRules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWaitingRoomRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waitingRoomRules Field Functions 
    bool hasWaitingRoomRules() const { return this->waitingRoomRules_ != nullptr;};
    void deleteWaitingRoomRules() { this->waitingRoomRules_ = nullptr;};
    inline const vector<ListWaitingRoomRulesResponseBody::WaitingRoomRules> & getWaitingRoomRules() const { DARABONBA_PTR_GET_CONST(waitingRoomRules_, vector<ListWaitingRoomRulesResponseBody::WaitingRoomRules>) };
    inline vector<ListWaitingRoomRulesResponseBody::WaitingRoomRules> getWaitingRoomRules() { DARABONBA_PTR_GET(waitingRoomRules_, vector<ListWaitingRoomRulesResponseBody::WaitingRoomRules>) };
    inline ListWaitingRoomRulesResponseBody& setWaitingRoomRules(const vector<ListWaitingRoomRulesResponseBody::WaitingRoomRules> & waitingRoomRules) { DARABONBA_PTR_SET_VALUE(waitingRoomRules_, waitingRoomRules) };
    inline ListWaitingRoomRulesResponseBody& setWaitingRoomRules(vector<ListWaitingRoomRulesResponseBody::WaitingRoomRules> && waitingRoomRules) { DARABONBA_PTR_SET_RVALUE(waitingRoomRules_, waitingRoomRules) };


  protected:
    // Request ID, used for tracking the call status.
    shared_ptr<string> requestId_ {};
    // List of waiting room bypass rules.
    shared_ptr<vector<ListWaitingRoomRulesResponseBody::WaitingRoomRules>> waitingRoomRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
