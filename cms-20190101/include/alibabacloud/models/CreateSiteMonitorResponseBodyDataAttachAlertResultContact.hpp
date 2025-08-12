// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYDATAATTACHALERTRESULTCONTACT_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYDATAATTACHALERTRESULTCONTACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateSiteMonitorResponseBodyDataAttachAlertResultContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteMonitorResponseBodyDataAttachAlertResultContact& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteMonitorResponseBodyDataAttachAlertResultContact& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateSiteMonitorResponseBodyDataAttachAlertResultContact() = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResultContact(const CreateSiteMonitorResponseBodyDataAttachAlertResultContact &) = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResultContact(CreateSiteMonitorResponseBodyDataAttachAlertResultContact &&) = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResultContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteMonitorResponseBodyDataAttachAlertResultContact() = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResultContact& operator=(const CreateSiteMonitorResponseBodyDataAttachAlertResultContact &) = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResultContact& operator=(CreateSiteMonitorResponseBodyDataAttachAlertResultContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->ruleId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateSiteMonitorResponseBodyDataAttachAlertResultContact& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSiteMonitorResponseBodyDataAttachAlertResultContact& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSiteMonitorResponseBodyDataAttachAlertResultContact& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CreateSiteMonitorResponseBodyDataAttachAlertResultContact& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateSiteMonitorResponseBodyDataAttachAlertResultContact& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code that is returned after you associate the existing alert rule with the site monitoring task.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The message that is returned after you associate the existing alert rule with the site monitoring task.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request that was sent to associate the existing alert rule with the site monitoring task.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // Indicates whether the existing alert rule was associated with the site monitoring task. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
