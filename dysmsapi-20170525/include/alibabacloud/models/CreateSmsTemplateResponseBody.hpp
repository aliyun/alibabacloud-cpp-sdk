// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmsTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    CreateSmsTemplateResponseBody() = default ;
    CreateSmsTemplateResponseBody(const CreateSmsTemplateResponseBody &) = default ;
    CreateSmsTemplateResponseBody(CreateSmsTemplateResponseBody &&) = default ;
    CreateSmsTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsTemplateResponseBody() = default ;
    CreateSmsTemplateResponseBody& operator=(const CreateSmsTemplateResponseBody &) = default ;
    CreateSmsTemplateResponseBody& operator=(CreateSmsTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr && this->templateCode_ == nullptr && this->templateName_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateSmsTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSmsTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateSmsTemplateResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSmsTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline CreateSmsTemplateResponseBody& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateSmsTemplateResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The status code of the request. Valid values:
    // 
    // - OK: The request was successful.
    // 
    // - For other error codes, see the **Error codes** list in this topic or [API Error Codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The ticket ID.
    // 
    // Reviewers use this ID to check the review status. You must provide this ID when you request an expedited review.
    shared_ptr<string> orderId_ {};
    // The ID of the request. Alibaba Cloud generates a unique ID for each request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The code of the message template.
    // 
    // After you submit a template application, you can use the template code to call the [GetSmsTemplate](https://help.aliyun.com/document_detail/2807433.html) operation and query the review details of the template. You can also [configure delivery receipts](https://help.aliyun.com/document_detail/101508.html) to receive the review status of the template in the [TemplateSmsReport](https://help.aliyun.com/document_detail/120999.html) message.
    shared_ptr<string> templateCode_ {};
    // The name of the message template.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
