// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRulesResponseBody() = default ;
    ListRulesResponseBody(const ListRulesResponseBody &) = default ;
    ListRulesResponseBody(ListRulesResponseBody &&) = default ;
    ListRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBody() = default ;
    ListRulesResponseBody& operator=(const ListRulesResponseBody &) = default ;
    ListRulesResponseBody& operator=(ListRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
        DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleState, ruleState_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
        DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleState, ruleState_);
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
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->effectiveEndTime_ == nullptr && this->effectiveStartTime_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleState_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Rules& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // effectiveEndTime Field Functions 
      bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
      void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
      inline int64_t getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
      inline Rules& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


      // effectiveStartTime Field Functions 
      bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
      void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
      inline int64_t getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
      inline Rules& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Rules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleState Field Functions 
      bool hasRuleState() const { return this->ruleState_ != nullptr;};
      void deleteRuleState() { this->ruleState_ = nullptr;};
      inline string getRuleState() const { DARABONBA_PTR_GET_DEFAULT(ruleState_, "") };
      inline Rules& setRuleState(string ruleState) { DARABONBA_PTR_SET_VALUE(ruleState_, ruleState) };


    protected:
      // The remarks of the authorization rule.
      shared_ptr<string> comment_ {};
      // The end time of the validity period of the authorization rule. The value is a timestamp. Unit: seconds.
      shared_ptr<int64_t> effectiveEndTime_ {};
      // The start time of the validity period of the authorization rule. The value is a timestamp. Unit: seconds.
      shared_ptr<int64_t> effectiveStartTime_ {};
      // The authorization rule ID.
      shared_ptr<string> ruleId_ {};
      // The name of the authorization rule.
      shared_ptr<string> ruleName_ {};
      // The state of the authorization rule.
      // 
      // *   **Enabled**
      // *   **Disabled**
      shared_ptr<string> ruleState_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rules_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ListRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ListRulesResponseBody::Rules>) };
    inline vector<ListRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ListRulesResponseBody::Rules>) };
    inline ListRulesResponseBody& setRules(const vector<ListRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListRulesResponseBody& setRules(vector<ListRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The authorization rules that are returned.
    shared_ptr<vector<ListRulesResponseBody::Rules>> rules_ {};
    // The total number of authorization rules that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
