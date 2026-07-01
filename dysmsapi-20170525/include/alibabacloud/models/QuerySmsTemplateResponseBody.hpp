// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    QuerySmsTemplateResponseBody() = default ;
    QuerySmsTemplateResponseBody(const QuerySmsTemplateResponseBody &) = default ;
    QuerySmsTemplateResponseBody(QuerySmsTemplateResponseBody &&) = default ;
    QuerySmsTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsTemplateResponseBody() = default ;
    QuerySmsTemplateResponseBody& operator=(const QuerySmsTemplateResponseBody &) = default ;
    QuerySmsTemplateResponseBody& operator=(QuerySmsTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->createDate_ == nullptr && this->message_ == nullptr && this->reason_ == nullptr && this->requestId_ == nullptr && this->templateCode_ == nullptr
        && this->templateContent_ == nullptr && this->templateName_ == nullptr && this->templateStatus_ == nullptr && this->templateType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline QuerySmsTemplateResponseBody& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline QuerySmsTemplateResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline QuerySmsTemplateResponseBody& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline QuerySmsTemplateResponseBody& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline QuerySmsTemplateResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline int32_t getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, 0) };
    inline QuerySmsTemplateResponseBody& setTemplateStatus(int32_t templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline QuerySmsTemplateResponseBody& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The status code of the request.
    // 
    // - OK indicates that the request was successful.
    // 
    // - For a list of other error codes, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The time when the template was created.
    shared_ptr<string> createDate_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The review notes for the template.
    // 
    // - If the review status is **Approved** or **Reviewing**, the message "No review remarks" is returned.
    // 
    // - If the review status is **Rejected**, the reason for the rejection is returned.
    shared_ptr<string> reason_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The template code.
    shared_ptr<string> templateCode_ {};
    // The template content.
    shared_ptr<string> templateContent_ {};
    // The template name.
    shared_ptr<string> templateName_ {};
    // The review status of the template. Valid values:
    // 
    // - **0**: Reviewing.
    // 
    // - **1**: Approved.
    // 
    // - **2**: Rejected. The reason for the rejection is returned in the response. For more information, see [Suggestions for handling a failed review](https://help.aliyun.com/document_detail/65990.html). You can then call the [ModifySmsTemplate](https://help.aliyun.com/document_detail/419287.html) API or modify the template on the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page.
    // 
    // - **10**: Canceled.
    shared_ptr<int32_t> templateStatus_ {};
    // The message type. Valid values:
    // 
    // - **0**: Verification code.
    // 
    // - **1**: Message notification.
    // 
    // - **2**: Promotional message.
    // 
    // - **3**: International message.
    shared_ptr<int32_t> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
