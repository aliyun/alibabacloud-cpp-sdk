// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIGITALSMSTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIGITALSMSTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateDigitalSmsTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDigitalSmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDigitalSmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    CreateDigitalSmsTemplateResponseBody() = default ;
    CreateDigitalSmsTemplateResponseBody(const CreateDigitalSmsTemplateResponseBody &) = default ;
    CreateDigitalSmsTemplateResponseBody(CreateDigitalSmsTemplateResponseBody &&) = default ;
    CreateDigitalSmsTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDigitalSmsTemplateResponseBody() = default ;
    CreateDigitalSmsTemplateResponseBody& operator=(const CreateDigitalSmsTemplateResponseBody &) = default ;
    CreateDigitalSmsTemplateResponseBody& operator=(CreateDigitalSmsTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->templateCode_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateDigitalSmsTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateDigitalSmsTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDigitalSmsTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline CreateDigitalSmsTemplateResponseBody& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> templateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
