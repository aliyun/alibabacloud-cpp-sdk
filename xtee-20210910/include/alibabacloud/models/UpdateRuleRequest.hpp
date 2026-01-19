// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UpdateRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(logicExpression, logicExpression_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleActions, ruleActions_);
      DARABONBA_PTR_TO_JSON(ruleBody, ruleBody_);
      DARABONBA_PTR_TO_JSON(ruleExpressions, ruleExpressions_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ruleVersionId, ruleVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(logicExpression, logicExpression_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleActions, ruleActions_);
      DARABONBA_PTR_FROM_JSON(ruleBody, ruleBody_);
      DARABONBA_PTR_FROM_JSON(ruleExpressions, ruleExpressions_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ruleVersionId, ruleVersionId_);
    };
    UpdateRuleRequest() = default ;
    UpdateRuleRequest(const UpdateRuleRequest &) = default ;
    UpdateRuleRequest(UpdateRuleRequest &&) = default ;
    UpdateRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleRequest() = default ;
    UpdateRuleRequest& operator=(const UpdateRuleRequest &) = default ;
    UpdateRuleRequest& operator=(UpdateRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->consoleRuleId_ == nullptr && this->eventCode_ == nullptr && this->logicExpression_ == nullptr && this->memo_ == nullptr && this->regId_ == nullptr
        && this->ruleActions_ == nullptr && this->ruleBody_ == nullptr && this->ruleExpressions_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr && this->ruleVersionId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline UpdateRuleRequest& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline UpdateRuleRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // logicExpression Field Functions 
    bool hasLogicExpression() const { return this->logicExpression_ != nullptr;};
    void deleteLogicExpression() { this->logicExpression_ = nullptr;};
    inline string getLogicExpression() const { DARABONBA_PTR_GET_DEFAULT(logicExpression_, "") };
    inline UpdateRuleRequest& setLogicExpression(string logicExpression) { DARABONBA_PTR_SET_VALUE(logicExpression_, logicExpression) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline UpdateRuleRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline UpdateRuleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline string getRuleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
    inline UpdateRuleRequest& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


    // ruleBody Field Functions 
    bool hasRuleBody() const { return this->ruleBody_ != nullptr;};
    void deleteRuleBody() { this->ruleBody_ = nullptr;};
    inline string getRuleBody() const { DARABONBA_PTR_GET_DEFAULT(ruleBody_, "") };
    inline UpdateRuleRequest& setRuleBody(string ruleBody) { DARABONBA_PTR_SET_VALUE(ruleBody_, ruleBody) };


    // ruleExpressions Field Functions 
    bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
    void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
    inline string getRuleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
    inline UpdateRuleRequest& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline UpdateRuleRequest& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline UpdateRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t getRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline UpdateRuleRequest& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Primary key ID of the policy
    shared_ptr<int64_t> consoleRuleId_ {};
    // Event code
    shared_ptr<string> eventCode_ {};
    // Execution logic
    shared_ptr<string> logicExpression_ {};
    // Description
    shared_ptr<string> memo_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Output action
    shared_ptr<string> ruleActions_ {};
    // DSL policy expression
    shared_ptr<string> ruleBody_ {};
    // Policy expression
    shared_ptr<string> ruleExpressions_ {};
    // Policy ID
    shared_ptr<string> ruleId_ {};
    // Policy name
    shared_ptr<string> ruleName_ {};
    // Policy status
    shared_ptr<string> ruleStatus_ {};
    // Policy type
    shared_ptr<string> ruleType_ {};
    // Primary key ID of the policy version
    shared_ptr<int64_t> ruleVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
