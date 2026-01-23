// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTCENTERRULENAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTCENTERRULENAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListEventCenterRuleNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventCenterRuleNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleNames, ruleNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventCenterRuleNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleNames, ruleNames_);
    };
    ListEventCenterRuleNameResponseBody() = default ;
    ListEventCenterRuleNameResponseBody(const ListEventCenterRuleNameResponseBody &) = default ;
    ListEventCenterRuleNameResponseBody(ListEventCenterRuleNameResponseBody &&) = default ;
    ListEventCenterRuleNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventCenterRuleNameResponseBody() = default ;
    ListEventCenterRuleNameResponseBody& operator=(const ListEventCenterRuleNameResponseBody &) = default ;
    ListEventCenterRuleNameResponseBody& operator=(ListEventCenterRuleNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleNames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleNames& obj) { 
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      };
      friend void from_json(const Darabonba::Json& j, RuleNames& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      };
      RuleNames() = default ;
      RuleNames(const RuleNames &) = default ;
      RuleNames(RuleNames &&) = default ;
      RuleNames(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleNames() = default ;
      RuleNames& operator=(const RuleNames &) = default ;
      RuleNames& operator=(RuleNames &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->ruleName_ == nullptr; };
      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline RuleNames& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline RuleNames& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    protected:
      // The ID of the event notification rule.
      shared_ptr<string> ruleId_ {};
      // The name of the event notification rule.
      shared_ptr<string> ruleName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->requestId_ == nullptr && this->ruleNames_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEventCenterRuleNameResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListEventCenterRuleNameResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventCenterRuleNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleNames Field Functions 
    bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
    void deleteRuleNames() { this->ruleNames_ = nullptr;};
    inline const vector<ListEventCenterRuleNameResponseBody::RuleNames> & getRuleNames() const { DARABONBA_PTR_GET_CONST(ruleNames_, vector<ListEventCenterRuleNameResponseBody::RuleNames>) };
    inline vector<ListEventCenterRuleNameResponseBody::RuleNames> getRuleNames() { DARABONBA_PTR_GET(ruleNames_, vector<ListEventCenterRuleNameResponseBody::RuleNames>) };
    inline ListEventCenterRuleNameResponseBody& setRuleNames(const vector<ListEventCenterRuleNameResponseBody::RuleNames> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
    inline ListEventCenterRuleNameResponseBody& setRuleNames(vector<ListEventCenterRuleNameResponseBody::RuleNames> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of names of event notification rules.
    shared_ptr<vector<ListEventCenterRuleNameResponseBody::RuleNames>> ruleNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
