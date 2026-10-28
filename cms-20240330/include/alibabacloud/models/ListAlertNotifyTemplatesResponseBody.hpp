// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFYTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFYTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertNotifyTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotifyTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(alertNotifyTemplates, alertNotifyTemplates_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotifyTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplates, alertNotifyTemplates_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAlertNotifyTemplatesResponseBody() = default ;
    ListAlertNotifyTemplatesResponseBody(const ListAlertNotifyTemplatesResponseBody &) = default ;
    ListAlertNotifyTemplatesResponseBody(ListAlertNotifyTemplatesResponseBody &&) = default ;
    ListAlertNotifyTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotifyTemplatesResponseBody() = default ;
    ListAlertNotifyTemplatesResponseBody& operator=(const ListAlertNotifyTemplatesResponseBody &) = default ;
    ListAlertNotifyTemplatesResponseBody& operator=(ListAlertNotifyTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertNotifyTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertNotifyTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(alertNotifyTemplateId, alertNotifyTemplateId_);
        DARABONBA_PTR_TO_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
        DARABONBA_PTR_TO_JSON(programLang, programLang_);
        DARABONBA_PTR_TO_JSON(templates, templates_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AlertNotifyTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(alertNotifyTemplateId, alertNotifyTemplateId_);
        DARABONBA_PTR_FROM_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
        DARABONBA_PTR_FROM_JSON(programLang, programLang_);
        DARABONBA_PTR_FROM_JSON(templates, templates_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      AlertNotifyTemplates() = default ;
      AlertNotifyTemplates(const AlertNotifyTemplates &) = default ;
      AlertNotifyTemplates(AlertNotifyTemplates &&) = default ;
      AlertNotifyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertNotifyTemplates() = default ;
      AlertNotifyTemplates& operator=(const AlertNotifyTemplates &) = default ;
      AlertNotifyTemplates& operator=(AlertNotifyTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertNotifyTemplateId_ == nullptr
        && this->alertNotifyTemplateName_ == nullptr && this->programLang_ == nullptr && this->templates_ == nullptr && this->type_ == nullptr; };
      // alertNotifyTemplateId Field Functions 
      bool hasAlertNotifyTemplateId() const { return this->alertNotifyTemplateId_ != nullptr;};
      void deleteAlertNotifyTemplateId() { this->alertNotifyTemplateId_ = nullptr;};
      inline string getAlertNotifyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateId_, "") };
      inline AlertNotifyTemplates& setAlertNotifyTemplateId(string alertNotifyTemplateId) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateId_, alertNotifyTemplateId) };


      // alertNotifyTemplateName Field Functions 
      bool hasAlertNotifyTemplateName() const { return this->alertNotifyTemplateName_ != nullptr;};
      void deleteAlertNotifyTemplateName() { this->alertNotifyTemplateName_ = nullptr;};
      inline string getAlertNotifyTemplateName() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateName_, "") };
      inline AlertNotifyTemplates& setAlertNotifyTemplateName(string alertNotifyTemplateName) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateName_, alertNotifyTemplateName) };


      // programLang Field Functions 
      bool hasProgramLang() const { return this->programLang_ != nullptr;};
      void deleteProgramLang() { this->programLang_ = nullptr;};
      inline string getProgramLang() const { DARABONBA_PTR_GET_DEFAULT(programLang_, "") };
      inline AlertNotifyTemplates& setProgramLang(string programLang) { DARABONBA_PTR_SET_VALUE(programLang_, programLang) };


      // templates Field Functions 
      bool hasTemplates() const { return this->templates_ != nullptr;};
      void deleteTemplates() { this->templates_ = nullptr;};
      inline const map<string, Darabonba::Json> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, map<string, Darabonba::Json>) };
      inline map<string, Darabonba::Json> getTemplates() { DARABONBA_PTR_GET(templates_, map<string, Darabonba::Json>) };
      inline AlertNotifyTemplates& setTemplates(const map<string, Darabonba::Json> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
      inline AlertNotifyTemplates& setTemplates(map<string, Darabonba::Json> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AlertNotifyTemplates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The notification template ID.
      shared_ptr<string> alertNotifyTemplateId_ {};
      // The notification template name.
      shared_ptr<string> alertNotifyTemplateName_ {};
      // The template syntax type. The current template syntax is fixed to GO and uses the Go template syntax.
      shared_ptr<string> programLang_ {};
      // The multilingual notification templates. The key is the language code: zh (Chinese) or en (English). The value is the template configuration object for the language. When a notification is sent, the corresponding template is selected based on the recipient\\"s language. The content format varies by type: Markdown for DING, WEIXIN, and FEISHU; HTML for EMAIL; plain text for SMS, CALL, and SLACK; and JSON for CUSTOM.
      shared_ptr<map<string, Darabonba::Json>> templates_ {};
      // The notification channel type. Valid values:
      // - DING
      // - WEIXIN
      // - FEISHU
      // - SLACK
      // - CUSTOM
      // - TEAMS
      // - SMS
      // - EMAIL
      // - CALL
      // - PAGER_DUTY
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->alertNotifyTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // alertNotifyTemplates Field Functions 
    bool hasAlertNotifyTemplates() const { return this->alertNotifyTemplates_ != nullptr;};
    void deleteAlertNotifyTemplates() { this->alertNotifyTemplates_ = nullptr;};
    inline const vector<ListAlertNotifyTemplatesResponseBody::AlertNotifyTemplates> & getAlertNotifyTemplates() const { DARABONBA_PTR_GET_CONST(alertNotifyTemplates_, vector<ListAlertNotifyTemplatesResponseBody::AlertNotifyTemplates>) };
    inline vector<ListAlertNotifyTemplatesResponseBody::AlertNotifyTemplates> getAlertNotifyTemplates() { DARABONBA_PTR_GET(alertNotifyTemplates_, vector<ListAlertNotifyTemplatesResponseBody::AlertNotifyTemplates>) };
    inline ListAlertNotifyTemplatesResponseBody& setAlertNotifyTemplates(const vector<ListAlertNotifyTemplatesResponseBody::AlertNotifyTemplates> & alertNotifyTemplates) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplates_, alertNotifyTemplates) };
    inline ListAlertNotifyTemplatesResponseBody& setAlertNotifyTemplates(vector<ListAlertNotifyTemplatesResponseBody::AlertNotifyTemplates> && alertNotifyTemplates) { DARABONBA_PTR_SET_RVALUE(alertNotifyTemplates_, alertNotifyTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertNotifyTemplatesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertNotifyTemplatesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertNotifyTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAlertNotifyTemplatesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of notification templates.
    shared_ptr<vector<ListAlertNotifyTemplatesResponseBody::AlertNotifyTemplates>> alertNotifyTemplates_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
