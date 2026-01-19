// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UpdateAuthRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleActions, ruleActions_);
      DARABONBA_PTR_TO_JSON(ruleExpressions, ruleExpressions_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleVersionId, ruleVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleActions, ruleActions_);
      DARABONBA_PTR_FROM_JSON(ruleExpressions, ruleExpressions_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleVersionId, ruleVersionId_);
    };
    UpdateAuthRuleRequest() = default ;
    UpdateAuthRuleRequest(const UpdateAuthRuleRequest &) = default ;
    UpdateAuthRuleRequest(UpdateAuthRuleRequest &&) = default ;
    UpdateAuthRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthRuleRequest() = default ;
    UpdateAuthRuleRequest& operator=(const UpdateAuthRuleRequest &) = default ;
    UpdateAuthRuleRequest& operator=(UpdateAuthRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->consoleRuleId_ == nullptr && this->eventCode_ == nullptr && this->regId_ == nullptr && this->ruleActions_ == nullptr && this->ruleExpressions_ == nullptr
        && this->ruleId_ == nullptr && this->ruleVersionId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateAuthRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline UpdateAuthRuleRequest& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline UpdateAuthRuleRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline UpdateAuthRuleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline string getRuleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
    inline UpdateAuthRuleRequest& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


    // ruleExpressions Field Functions 
    bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
    void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
    inline string getRuleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
    inline UpdateAuthRuleRequest& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateAuthRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t getRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline UpdateAuthRuleRequest& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Policy primary key ID
    shared_ptr<int64_t> consoleRuleId_ {};
    // Event code
    shared_ptr<string> eventCode_ {};
    // Region code
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
    // Policy output action
    shared_ptr<string> ruleActions_ {};
    // Expression
    // 
    // This parameter is required.
    shared_ptr<string> ruleExpressions_ {};
    // Policy ID
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // Policy version primary key ID
    shared_ptr<int64_t> ruleVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
