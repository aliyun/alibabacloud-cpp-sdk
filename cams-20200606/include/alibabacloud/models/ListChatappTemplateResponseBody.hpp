// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATAPPTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATAPPTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListChatappTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatappTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ListTemplate, listTemplate_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatappTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ListTemplate, listTemplate_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListChatappTemplateResponseBody() = default ;
    ListChatappTemplateResponseBody(const ListChatappTemplateResponseBody &) = default ;
    ListChatappTemplateResponseBody(ListChatappTemplateResponseBody &&) = default ;
    ListChatappTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatappTemplateResponseBody() = default ;
    ListChatappTemplateResponseBody& operator=(const ListChatappTemplateResponseBody &) = default ;
    ListChatappTemplateResponseBody& operator=(ListChatappTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, ListTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      ListTemplate() = default ;
      ListTemplate(const ListTemplate &) = default ;
      ListTemplate(ListTemplate &&) = default ;
      ListTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListTemplate() = default ;
      ListTemplate& operator=(const ListTemplate &) = default ;
      ListTemplate& operator=(ListTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->category_ == nullptr && this->language_ == nullptr && this->lastUpdateTime_ == nullptr && this->reason_ == nullptr && this->templateCode_ == nullptr
        && this->templateName_ == nullptr && this->templateType_ == nullptr; };
      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
      inline ListTemplate& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline ListTemplate& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline ListTemplate& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // lastUpdateTime Field Functions 
      bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
      void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
      inline int64_t getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
      inline ListTemplate& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ListTemplate& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline ListTemplate& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline ListTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ListTemplate& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The review state of the template. Valid values:
      // 
      // *   **pass**: The template is approved.
      // *   **fail**: The template is rejected.
      // *   **auditing**: The template is being reviewed.
      // *   **unaudit**: The review is suspended.
      shared_ptr<string> auditStatus_ {};
      // The category of the WhatsApp message template. Valid values:
      // 
      // *   **UTILITY**
      // *   **MARKETING**
      // *   **AUTHENTICATION**
      // 
      // The category of the Viber template. Valid values:
      // 
      // *   **text**: template that contains only text
      // *   **image**: template that contains only images
      // *   **text_image_button**: template that contains text, images, and buttons
      // *   **text_button**: template that contains text and buttons
      // *   **document**: template that contains only documents
      // *   **video**: template that contains only videos
      // *   **text_video**: template that contains text and videos
      // *   **text_video_button**: template that contains text, videos, and buttons
      // *   **text_image**: template that contains text and images
      shared_ptr<string> category_ {};
      // The language that is used in the message template. For more information, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
      shared_ptr<string> language_ {};
      // The time when the template was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> lastUpdateTime_ {};
      // The reason why the template was rejected.
      shared_ptr<string> reason_ {};
      // The code of the message template.
      shared_ptr<string> templateCode_ {};
      // The name of the message template.
      shared_ptr<string> templateName_ {};
      // The type of the template. Valid values: WHATSAPP and VIBER.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->listTemplate_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListChatappTemplateResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChatappTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // listTemplate Field Functions 
    bool hasListTemplate() const { return this->listTemplate_ != nullptr;};
    void deleteListTemplate() { this->listTemplate_ = nullptr;};
    inline const vector<ListChatappTemplateResponseBody::ListTemplate> & getListTemplate() const { DARABONBA_PTR_GET_CONST(listTemplate_, vector<ListChatappTemplateResponseBody::ListTemplate>) };
    inline vector<ListChatappTemplateResponseBody::ListTemplate> getListTemplate() { DARABONBA_PTR_GET(listTemplate_, vector<ListChatappTemplateResponseBody::ListTemplate>) };
    inline ListChatappTemplateResponseBody& setListTemplate(const vector<ListChatappTemplateResponseBody::ListTemplate> & listTemplate) { DARABONBA_PTR_SET_VALUE(listTemplate_, listTemplate) };
    inline ListChatappTemplateResponseBody& setListTemplate(vector<ListChatappTemplateResponseBody::ListTemplate> && listTemplate) { DARABONBA_PTR_SET_RVALUE(listTemplate_, listTemplate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListChatappTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChatappTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListChatappTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListChatappTemplateResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The HTTP status code returned.
    // 
    // *   A value of OK indicates that the call is successful.
    // *   Other values indicate that the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The message templates.
    shared_ptr<vector<ListChatappTemplateResponseBody::ListTemplate>> listTemplate_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
