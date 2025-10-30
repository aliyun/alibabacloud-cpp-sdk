// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(logicExpression, logicExpression_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleActions, ruleActions_);
      DARABONBA_PTR_TO_JSON(ruleBody, ruleBody_);
      DARABONBA_PTR_TO_JSON(ruleExpressions, ruleExpressions_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(logicExpression, logicExpression_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleActions, ruleActions_);
      DARABONBA_PTR_FROM_JSON(ruleBody, ruleBody_);
      DARABONBA_PTR_FROM_JSON(ruleExpressions, ruleExpressions_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
    };
    CreateRuleRequest() = default ;
    CreateRuleRequest(const CreateRuleRequest &) = default ;
    CreateRuleRequest(CreateRuleRequest &&) = default ;
    CreateRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequest() = default ;
    CreateRuleRequest& operator=(const CreateRuleRequest &) = default ;
    CreateRuleRequest& operator=(CreateRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->consoleRuleId_ == nullptr && return this->createType_ == nullptr && return this->eventCode_ == nullptr && return this->eventName_ == nullptr && return this->logicExpression_ == nullptr
        && return this->memo_ == nullptr && return this->regId_ == nullptr && return this->ruleActions_ == nullptr && return this->ruleBody_ == nullptr && return this->ruleExpressions_ == nullptr
        && return this->ruleName_ == nullptr && return this->ruleStatus_ == nullptr && return this->ruleType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t consoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline CreateRuleRequest& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline CreateRuleRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline CreateRuleRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline CreateRuleRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // logicExpression Field Functions 
    bool hasLogicExpression() const { return this->logicExpression_ != nullptr;};
    void deleteLogicExpression() { this->logicExpression_ = nullptr;};
    inline string logicExpression() const { DARABONBA_PTR_GET_DEFAULT(logicExpression_, "") };
    inline CreateRuleRequest& setLogicExpression(string logicExpression) { DARABONBA_PTR_SET_VALUE(logicExpression_, logicExpression) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline CreateRuleRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateRuleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline string ruleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
    inline CreateRuleRequest& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


    // ruleBody Field Functions 
    bool hasRuleBody() const { return this->ruleBody_ != nullptr;};
    void deleteRuleBody() { this->ruleBody_ = nullptr;};
    inline string ruleBody() const { DARABONBA_PTR_GET_DEFAULT(ruleBody_, "") };
    inline CreateRuleRequest& setRuleBody(string ruleBody) { DARABONBA_PTR_SET_VALUE(ruleBody_, ruleBody) };


    // ruleExpressions Field Functions 
    bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
    void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
    inline string ruleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
    inline CreateRuleRequest& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline CreateRuleRequest& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline CreateRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Rule ID.
    std::shared_ptr<int64_t> consoleRuleId_ = nullptr;
    // Creation type
    std::shared_ptr<string> createType_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Policy expression execution logic
    std::shared_ptr<string> logicExpression_ = nullptr;
    // Memo
    std::shared_ptr<string> memo_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Policy execution output action
    std::shared_ptr<string> ruleActions_ = nullptr;
    // DSL policy execution logic
    std::shared_ptr<string> ruleBody_ = nullptr;
    // Policy expression
    std::shared_ptr<string> ruleExpressions_ = nullptr;
    // Policy name
    std::shared_ptr<string> ruleName_ = nullptr;
    // Policy status
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // Policy type
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
